#include "ll/api/io/FileUtils.h"

#include "pl/Config.h"
#include "windows.h"

#include <filesystem>
#include <iomanip>
#include <sstream>
#include <string>

namespace ll::io {

namespace fs = std::filesystem;

void archiveLatestLog() {
    try {
        auto latestPath = file_utils::u8path(pl::pl_log_path) / u8"latest.log";

        // If the file does not exist or is not a regular file, return immediately
        if (!fs::exists(latestPath) || !fs::is_regular_file(latestPath)) return;

        // Use Windows API to get the creation time (in local time)
        std::wstring              wpath = latestPath.wstring();
        WIN32_FILE_ATTRIBUTE_DATA fad;
        // If retrieval fails, do nothing
        if (!GetFileAttributesExW(wpath.c_str(), GetFileExInfoStandard, &fad)) return;

        FILETIME ftCreate = fad.ftCreationTime;
        FILETIME localFT;
        if (!FileTimeToLocalFileTime(&ftCreate, &localFT)) return;

        SYSTEMTIME stCreate;
        if (!FileTimeToSystemTime(&localFT, &stCreate)) return;

        // Get current local date
        SYSTEMTIME stNow;
        GetLocalTime(&stNow);

        // If the creation date is today, no archiving is needed
        if (stCreate.wYear == stNow.wYear && stCreate.wMonth == stNow.wMonth && stCreate.wDay == stNow.wDay) return;

        // Format target filename as YYYY-MM-DD (UTF-8)
        std::ostringstream oss;
        oss << std::setfill('0') << std::setw(4) << stCreate.wYear << "-" << std::setw(2) << stCreate.wMonth << "-"
            << std::setw(2) << stCreate.wDay;
        std::string base       = oss.str();
        std::string targetName = base + ".log";

        fs::path targetPath = latestPath.parent_path() / file_utils::u8path(targetName);

        // If the target exists, append -N until an unused filename is found
        int index = 1;
        while (fs::exists(targetPath)) {
            std::string numbered = base + "-" + std::to_string(index) + ".log";
            targetPath           = latestPath.parent_path() / file_utils::u8path(numbered);
            ++index;
        }

        std::error_code ec;
        fs::rename(latestPath, targetPath, ec);
    } catch (...) {}
}
} // namespace ll::io