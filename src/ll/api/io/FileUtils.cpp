#include "FileUtils.h"

#include <filesystem>

#include "ll/api/Logger.h"
#include "ll/api/ServerInfo.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/Config.h"

#include "windows.h"

#pragma comment(lib, "Version.lib")

namespace ll::utils::file_utils {
using namespace string_utils;
namespace fs = std::filesystem;

std::filesystem::path u8path(std::string_view src) { return std::filesystem::path{sv2u8sv(src)}; }

std::optional<std::string> readFile(const fs::path& filePath, bool isBinary) {
    std::ifstream           fRead;
    std::ios_base::openmode mode = std::ios_base::in;
    if (isBinary) mode |= std::ios_base::binary;
    fRead.open(filePath, mode);
    if (!fRead.is_open()) { return std::nullopt; }
    std::string data((std::istreambuf_iterator<char>(fRead)), {});
    fRead.close();
    return data;
}

bool writeFile(const fs::path& filePath, std::string_view content, bool isBinary) {
    std::ofstream           fWrite;
    std::ios_base::openmode mode = std::ios_base::out;
    if (isBinary) mode |= std::ios_base::binary;
    fWrite.open(filePath, mode);
    if (!fWrite.is_open()) { return false; }
    fWrite << content;
    fWrite.close();
    return true;
}

static bool GetFileVersion(
    const wchar_t*  filePath,
    unsigned short* ver1,
    unsigned short* ver2,
    unsigned short* ver3,
    unsigned short* ver4,
    unsigned int*   flag
) {

    DWORD dwHandle = 0;
    DWORD dwLen    = GetFileVersionInfoSizeW(filePath, &dwHandle);
    if (0 >= dwLen) { return false; }
    auto* pBlock = new (std::nothrow) wchar_t[dwLen];
    if (nullptr == pBlock) { return false; }
    if (!GetFileVersionInfoW(filePath, dwHandle, dwLen, pBlock)) {
        delete[] pBlock;
        return false;
    }

    VS_FIXEDFILEINFO* lpBuffer;
    unsigned int      uLen = 0;
    if (!VerQueryValueW(pBlock, L"\\", (void**)&lpBuffer, &uLen)) {
        delete[] pBlock;
        return false;
    }

    if (ver1) *ver1 = (lpBuffer->dwFileVersionMS >> 16) & 0x0000FFFF;
    if (ver2) *ver2 = lpBuffer->dwFileVersionMS & 0x0000FFFF;
    if (ver3) *ver3 = (lpBuffer->dwFileVersionLS >> 16) & 0x0000FFFF;
    if (ver4) *ver4 = lpBuffer->dwFileVersionLS & 0x0000FFFF;
    if (flag) *flag = lpBuffer->dwFileFlags;

    delete[] pBlock;
    return true;
}

Version getVersion(std::filesystem::path const& filePath) {
    ll::Version    version;
    auto           ModuleName = filePath.c_str();
    unsigned short build_ver{};
    unsigned int   flag{};
    if (!GetFileVersion(ModuleName, &version.major, &version.minor, &version.patch, &build_ver, &flag)) {
        version = Version{};
    } else {
        version.preRelease = PreRelease{};
        auto& vec          = version.preRelease.value().values;
        vec.emplace_back(build_ver);
        if (flag & VS_FF_DEBUG) vec.emplace_back("debug");
        if (flag & VS_FF_PRERELEASE) vec.emplace_back("preRelease");
        if (flag & VS_FF_PATCHED) vec.emplace_back("patched");
        if (flag & VS_FF_PRIVATEBUILD) vec.emplace_back("privateBuild");
        if (flag & VS_FF_INFOINFERRED) vec.emplace_back("infoInferred");
        if (flag & VS_FF_SPECIALBUILD) vec.emplace_back("specialBuild");
    }
    if (filePath.filename() == "bedrock_server_mod.exe" || filePath.filename() == "bedrock_server.exe") {
        version = ll::getBdsVersion();
    }
    return version;
}

} // namespace ll::utils::file_utils
