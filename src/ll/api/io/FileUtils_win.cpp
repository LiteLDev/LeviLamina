#include "ll/api/io/FileUtils.h"

#include <filesystem>
#include <future>

#include "ll/api/Logger.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

#include "windows.h"

namespace ll::inline utils::file_utils {
using namespace string_utils;
namespace fs = std::filesystem;

std::filesystem::path u8path(std::string_view src) { return std::filesystem::path{sv2u8sv(src)}; }

std::optional<std::string> readFile(fs::path const& filePath, bool isBinary) {
    if (!fs::exists(filePath)) {
        return std::nullopt;
    }
    std::ifstream           fRead;
    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;
    fRead.open(filePath, mode);
    if (!fRead.is_open()) {
        return std::nullopt;
    }
    std::string data((std::istreambuf_iterator<char>(fRead)), {});
    fRead.close();
    return data;
}

bool writeFile(fs::path const& filePath, std::string_view content, bool isBinary) {
    std::ofstream           fWrite;
    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;
    std::error_code ec;
    fs::create_directories(filePath.parent_path(), ec);
    fWrite.open(filePath, mode);
    if (!fWrite.is_open()) {
        return false;
    }
    fWrite << content;
    fWrite.close();
    return true;
}

static bool
getFileVersion(std::wstring_view filePath, ushort& ver1, ushort& ver2, ushort& ver3, ushort& ver4, uint& flag) {

    DWORD dwHandle = 0;
    DWORD dwLen    = GetFileVersionInfoSizeW(filePath.data(), &dwHandle);
    if (0 >= dwLen) {
        return false;
    }

    std::wstring data(dwLen, '\0');

    if (!GetFileVersionInfoW(filePath.data(), dwHandle, dwLen, data.data())) {
        return false;
    }

    VS_FIXEDFILEINFO* lpBuffer;
    uint              uLen = 0;
    if (!VerQueryValueW(data.c_str(), L"\\", (void**)&lpBuffer, &uLen)) {
        return false;
    }

    ver1 = (lpBuffer->dwFileVersionMS >> 16) & 0x0000FFFF;
    ver2 = lpBuffer->dwFileVersionMS & 0x0000FFFF;
    ver3 = (lpBuffer->dwFileVersionLS >> 16) & 0x0000FFFF;
    ver4 = lpBuffer->dwFileVersionLS & 0x0000FFFF;
    flag = lpBuffer->dwFileFlags;

    return true;
}

data::Version getVersion(fs::path const& filePath) {
    data::Version version;
    ushort        build_ver{};
    uint          flag{};
    if (!getFileVersion(filePath.wstring(), version.major, version.minor, version.patch, build_ver, flag)) {
        return {};
    } else {
        version.preRelease = data::PreRelease{};
        auto& vec          = version.preRelease->values;
        vec.emplace_back(build_ver);
        if (flag & VS_FF_DEBUG) vec.emplace_back("debug");
        if (flag & VS_FF_PRERELEASE) vec.emplace_back("preRelease");
        if (flag & VS_FF_PATCHED) vec.emplace_back("patched");
        if (flag & VS_FF_PRIVATEBUILD) vec.emplace_back("privateBuild");
        if (flag & VS_FF_INFOINFERRED) vec.emplace_back("infoInferred");
        if (flag & VS_FF_SPECIALBUILD) vec.emplace_back("specialBuild");
    }
    return version;
}
} // namespace ll::inline utils::file_utils
