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
    // symbol: ??0FileInfo@@QEAA@VPath@Core@@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI FileInfo(class Core::Path _filePath, int _fileSize, std::string _fileHash);

    // symbol: ??1FileInfo@@QEAA@XZ
    MCAPI ~FileInfo();

    // NOLINTEND
};
