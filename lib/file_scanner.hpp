/**
 * Used to recursively scan for files starting from a directory, and recursively down through all sub-dirs
 */
#include <vector>
#include <string>
#include <filesystem>

namespace file_scanner
{

    class FileScanner
    {
    public:
        std::vector<std::string> scan_for_files();

    private:
        explicit FileScanner(const std::filesystem::path &base_dir);
        std::filesystem::path base_dir;

        friend class FileScannerBuilder;
    };
}