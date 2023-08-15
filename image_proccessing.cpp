#include <iostream>

// Structure to represent a grayscale pixel
struct Pixel {
    unsigned char value;
};

// Function to resize an image
Pixel** resizeImage(Pixel** originalImage, int originalWidth, int originalHeight, int newWidth, int newHeight) {
    // Allocate memory for the resized image
    Pixel** resizedImage = new Pixel*[newHeight];
    for (int i = 0; i < newHeight; ++i) {
        resizedImage[i] = new Pixel[newWidth];
    }

    // Calculate scaling factors
    double xScale = static_cast<double>(originalWidth) / newWidth;
    double yScale = static_cast<double>(originalHeight) / newHeight;

    // Perform resizing
    for (int newY = 0; newY < newHeight; ++newY) {
        for (int newX = 0; newX < newWidth; ++newX) {
            int origX = static_cast<int>(newX * xScale);
            int origY = static_cast<int>(newY * yScale);
            resizedImage[newY][newX] = originalImage[origY][origX];
        }
    }

    return resizedImage;
}

int main() {
    // Create an example 3x3 image
    Pixel** originalImage = new Pixel*[3];
    for (int i = 0; i < 3; ++i) {
        originalImage[i] = new Pixel[3];
    }

    // Simulate filling the image with pixel values (grayscale intensities)
    for (int y = 0; y < 3; ++y) {
        for (int x = 0; x < 3; ++x) {
            originalImage[y][x].value = static_cast<unsigned char>(y * 3 + x);
        }
    }

    // Resize the image
    int newWidth = 6;
    int newHeight = 6;
    Pixel** resizedImage = resizeImage(originalImage, 3, 3, newWidth, newHeight);

    // Display the resized image (grayscale intensities)
    for (int y = 0; y < newHeight; ++y) {
        for (int x = 0; x < newWidth; ++x) {
            std::cout << static_cast<int>(resizedImage[y][x].value) << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate dynamically allocated memory
    for (int i = 0; i < 3; ++i) {
        delete[] originalImage[i];
    }
    delete[] originalImage;

    for (int i = 0; i < newHeight; ++i) {
        delete[] resizedImage[i];
    }
    delete[] resizedImage;

    return 0;
}
