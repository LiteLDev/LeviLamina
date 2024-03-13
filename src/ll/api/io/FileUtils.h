#pragma once

#include <filesystem>
#include <fstream>
#include <functional>
#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/data/Version.h"

namespace ll::inline utils::file_utils {

LLNDAPI std::filesystem::path u8path(std::string_view src);

LLNDAPI std::optional<std::string> readFile(std::filesystem::path const& filePath, bool isBinary = false);

LLAPI bool writeFile(std::filesystem::path const& filePath, std::string_view content, bool isBinary = false);

/// Gets the version property of the file.
/// @note Typically, version properties exist in .exe, .dll, .msi, .cpl, .sys, .chm files.
LLNDAPI data::Version getVersion(std::filesystem::path const& filePath);

class FileWatcher {
    class Impl;
    std::unique_ptr<Impl> impl;

public:
    enum class FileActionType {
        Added = 1,
        Removed,
        Modified,
        RenamedOld,
        RenamedNew,
    };

    LLNDAPI FileWatcher(
        std::filesystem::path const&                                      path,
        std::function<void(std::filesystem::path const&, FileActionType)> callback
    );

    LLAPI ~FileWatcher();
};

} // namespace ll::inline utils::file_utils
