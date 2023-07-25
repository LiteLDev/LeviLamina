#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

struct FileInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEINFO
public:
    FileInfo& operator=(FileInfo const&) = delete;
    FileInfo(FileInfo const&)            = delete;
    FileInfo()                           = delete;
#endif

public:
    /**
     * @symbol
     * ??0FileInfo\@\@QEAA\@VPath\@Core\@\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI FileInfo(class Core::Path, int, std::string);
    /**
     * @symbol ??1FileInfo\@\@QEAA\@XZ
     */
    MCAPI ~FileInfo();
};
