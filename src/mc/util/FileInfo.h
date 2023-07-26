#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct FileInfo {

public:
    // prevent constructor by default
    FileInfo& operator=(FileInfo const&) = delete;
    FileInfo(FileInfo const&)            = delete;
    FileInfo()                           = delete;

public:
    /**
     * @symbol
     * ??0FileInfo\@\@QEAA\@VPath\@Core\@\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI FileInfo(class Core::Path, int, std::string); // NOLINT
    /**
     * @symbol ??1FileInfo\@\@QEAA\@XZ
     */
    MCAPI ~FileInfo(); // NOLINT
};
