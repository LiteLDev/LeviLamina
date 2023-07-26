/**
 * @file  FileInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure FileInfo.
 *
 */
struct FileInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILEINFO
public:
    struct FileInfo& operator=(struct FileInfo const &) = delete;
    FileInfo(struct FileInfo const &) = delete;
    FileInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0FileInfo\@\@QEAA\@VPath\@Core\@\@HV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI FileInfo(class Core::Path, int, std::string);
    /**
     * @symbol  ??1FileInfo\@\@QEAA\@XZ
     */
    MCAPI ~FileInfo();

};