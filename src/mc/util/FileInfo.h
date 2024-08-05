#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct FileInfo {
public:
    // prevent constructor by default
    FileInfo& operator=(FileInfo const&);
    FileInfo(FileInfo const&);
    FileInfo();

public:
    // NOLINTBEGIN
    MCAPI FileInfo(class Core::Path _filePath, int _fileSize, std::string _fileHash);

    MCAPI ~FileInfo();

    // NOLINTEND
};
