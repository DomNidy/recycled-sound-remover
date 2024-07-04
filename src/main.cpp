#include <iostream>
#include "file_scanner_builder.hpp"

int main()
{
    std::shared_ptr<file_scanner::FileScannerBuilder> file_scanner_builder = file_scanner::create();

    return 0;
}
