/**
 * Builds a FileScanner object
 */

#include "ibuilder.hpp"
#include "file_scanner.hpp"

namespace file_scanner
{
    class FileScannerBuilder : IBuilder<FileScanner>
    {
    public:
        std::shared_ptr<FileScanner> build();
    };

    std::shared_ptr<FileScannerBuilder> create();
}