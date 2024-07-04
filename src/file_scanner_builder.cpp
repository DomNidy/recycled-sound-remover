#include "lib/file_scanner_builder.hpp"

std::shared_ptr<file_scanner::FileScanner> file_scanner::FileScannerBuilder::build()
{

    std::shared_ptr<file_scanner::FileScanner> file_scanner = std::make_shared<file_scanner::FileScanner>(new file_scanner::FileScanner("!!!!BASEDIR!!!!"));

    return file_scanner;
}

std::shared_ptr<file_scanner::FileScannerBuilder> file_scanner::create()
{
    return std::make_shared<file_scanner::FileScannerBuilder>(new file_scanner::FileScannerBuilder());
}
