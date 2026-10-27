
#include <iostream>
using namespace std;

class Compressor {
public:
    virtual double compress(double fileSize) {
        return fileSize;
    }
};

class TextCompressor : public Compressor {
public:
    double compress(double fileSize) override {
        return fileSize * 0.40;
    }
};

class ImageCompressor : public Compressor {
public:
    double compress(double fileSize) override {
        return fileSize * 0.70;
    }
};

int main() {
    double size;

    cout << "Enter original file size (MB): ";
    cin >> size;

    if (size < 0) {
        cout << "Invalid file size.";
        return 1;
    }

    TextCompressor text;
    ImageCompressor image;

    cout << "Original file size: " << size << " MB\n";

    cout << "Compressed text file: "
         << text.compress(size) << " MB\n";

    cout << "Compressed image file: "
         << image.compress(size) << " MB\n";

    return 0;
}
