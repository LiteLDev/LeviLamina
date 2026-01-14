#include "ll/api/io/FileUtils.h"

#include "miniz/miniz.h"
#include "pl/Config.h"
#include "windows.h"

#include <cstdint>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>

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

        // Format target base name as YYYY-MM-DD (UTF-8)
        std::ostringstream oss;
        oss << std::setfill('0') << std::setw(4) << stCreate.wYear << "-" << std::setw(2) << stCreate.wMonth << "-"
            << std::setw(2) << stCreate.wDay;
        std::string base = oss.str();

        // We'll create a tar archive in memory that contains a single file named "<base>.log",
        // then gzip-compress that tar into "<base>.tar.gz". If the .tar.gz exists, append -N.

        // Read latest.log into memory
        std::vector<unsigned char> fileData;
        {
            std::ifstream ifs(latestPath, std::ios::binary);
            if (!ifs) return; // could not open, bail out
            ifs.seekg(0, std::ios::end);
            std::streamsize size = ifs.tellg();
            ifs.seekg(0, std::ios::beg);
            if (size < 0) return;
            fileData.resize(static_cast<size_t>(size));
            if (size > 0) ifs.read(reinterpret_cast<char*>(fileData.data()), size);
        }

        // Build a POSIX ustar tar header for a single file
        std::string                nameInTar = base + ".log"; // the name of the file stored inside the tar
        std::vector<unsigned char> tar;
        tar.reserve(512 + fileData.size() + 512 + 1024);

        // Create 512-byte header
        unsigned char header[512];
        std::memset(header, 0, sizeof(header));

        auto copy_field = [&](size_t offset, const std::string& s, size_t maxlen) {
            size_t n = s.size() < maxlen ? s.size() : maxlen;
            if (n > 0) std::memcpy(header + offset, s.data(), n);
        };

        // name (100 bytes)
        copy_field(0, nameInTar, 100);
        // mode (8 bytes) - ASCII octal
        copy_field(100, std::string("0000644"), 8);
        // uid (8)
        copy_field(108, std::string("0000000"), 8);
        // gid (8)
        copy_field(116, std::string("0000000"), 8);
        // size (12) - file size in octal, null-terminated
        {
            char sizeField[32];
            std::snprintf(sizeField, sizeof(sizeField), "%011o", static_cast<unsigned int>(fileData.size()));
            copy_field(124, std::string(sizeField), 12);
        }
        // mtime (12)
        copy_field(136, std::string("00000000000"), 12);
        // chksum (8) - fill with spaces for checksum calculation
        for (int i = 148; i < 156; ++i) header[i] = ' ';
        // typeflag (1)
        header[156] = '0';
        // linkname (100) - leave zero
        // magic (6) and version (2)
        copy_field(257, std::string("ustar"), 6);
        copy_field(263, std::string("00"), 2);
        // uname/gname (32 each)
        copy_field(265, std::string("user"), 32);
        copy_field(297, std::string("user"), 32);

        // Compute checksum: sum of all bytes as unsigned, with chksum field treated as spaces
        unsigned int chksum = 0;
        for (unsigned char c : header) chksum += static_cast<unsigned char>(c);
        // Write checksum as 6-digit octal followed by null and space (8 bytes total)
        char chksumField[8];
        std::memset(chksumField, 0, sizeof(chksumField));
        std::snprintf(chksumField, sizeof(chksumField), "%06o", chksum);
        chksumField[6] = '\0';
        chksumField[7] = ' ';
        std::memcpy(header + 148, chksumField, 8);

        // Append header
        tar.insert(tar.end(), header, header + sizeof(header));

        // Append file data
        if (!fileData.empty()) tar.insert(tar.end(), fileData.begin(), fileData.end());

        // Pad file content to 512-byte boundary
        size_t remainder = tar.size() % 512;
        if (remainder != 0) {
            size_t pad = 512 - remainder;
            tar.insert(tar.end(), pad, 0);
        }

        // Two 512-byte zero blocks to mark end of archive
        tar.insert(tar.end(), 1024, 0);

        // Prepare output filename and avoid collisions
        std::string gzBase     = base + ".tar.gz";
        fs::path    targetPath = latestPath.parent_path() / file_utils::u8path(gzBase);
        int         index      = 1;
        while (fs::exists(targetPath)) {
            std::string numbered = base + "-" + std::to_string(index) + ".tar.gz";
            targetPath           = latestPath.parent_path() / file_utils::u8path(numbered);
            ++index;
        }

        // Compress tar -> gzip in memory using miniz
        // We'll first deflate (raw deflate) using tdefl_compress_mem_to_mem, then wrap with a gzip header/footer.
        // Allocate a conservative output buffer size for deflate output
        size_t                     deflateCapacity = tar.size() + (tar.size() / 10) + 64;
        std::vector<unsigned char> deflateBuf(deflateCapacity);
        // tdefl_compress_mem_to_mem compresses to raw deflate; it returns the compressed size or 0 on failure.
        size_t deflatedSize =
            tdefl_compress_mem_to_mem(deflateBuf.data(), deflateBuf.size(), tar.data(), tar.size(), 0);
        if (deflatedSize == 0) return;


        // Compute CRC32 of the uncompressed tar for gzip footer
        auto crc   = static_cast<unsigned int>(mz_crc32(0, tar.data(), tar.size()));
        auto isize = static_cast<uint32_t>(tar.size() & 0xFFFFFFFFu);

        // Build gzip stream: 10-byte header, deflate data, 8-byte footer (crc32 + isize), little-endian
        std::vector<unsigned char> outBuf;
        outBuf.reserve(10 + deflatedSize + 8);
        // gzip header
        outBuf.push_back(0x1f);
        outBuf.push_back(0x8b);
        outBuf.push_back(0x08); // compression method = deflate
        outBuf.push_back(0x00); // flags
        // mtime (4 bytes)
        outBuf.push_back(0x00);
        outBuf.push_back(0x00);
        outBuf.push_back(0x00);
        outBuf.push_back(0x00);
        outBuf.push_back(0x00); // XFL
        outBuf.push_back(0xff); // OS = unknown

        // append deflated data
        outBuf.insert(outBuf.end(), deflateBuf.begin(), deflateBuf.begin() + deflatedSize);

        // append crc32 (4 bytes little-endian)
        outBuf.push_back(static_cast<unsigned char>(crc & 0xFF));
        outBuf.push_back(static_cast<unsigned char>((crc >> 8) & 0xFF));
        outBuf.push_back(static_cast<unsigned char>((crc >> 16) & 0xFF));
        outBuf.push_back(static_cast<unsigned char>((crc >> 24) & 0xFF));

        // append isize (4 bytes little-endian)
        outBuf.push_back(static_cast<unsigned char>(isize & 0xFF));
        outBuf.push_back(static_cast<unsigned char>((isize >> 8) & 0xFF));
        outBuf.push_back(static_cast<unsigned char>((isize >> 16) & 0xFF));
        outBuf.push_back(static_cast<unsigned char>((isize >> 24) & 0xFF));

        // Write compressed data to targetPath atomically
        fs::path tmpPath  = targetPath;
        tmpPath          += ".tmp";
        {
            std::ofstream ofs(tmpPath, std::ios::binary);
            if (!ofs) return; // cannot create file
            ofs.write(reinterpret_cast<const char*>(outBuf.data()), static_cast<std::streamsize>(outBuf.size()));
            if (!ofs) return;
        }

        std::error_code ec;
        fs::rename(tmpPath, targetPath, ec);
        if (ec) {
            // rename failed; try to remove tmp and bail
            fs::remove(tmpPath, ec);
            return;
        }

        // Remove the original latest.log after successful archive creation
        fs::remove(latestPath, ec);

    } catch (...) {}
}
} // namespace ll::io