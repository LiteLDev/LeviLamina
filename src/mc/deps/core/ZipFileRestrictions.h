#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core::ZipUtils {

class ZipFileRestrictions {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_ZIPUTILS_ZIPFILERESTRICTIONS
public:
    ZipFileRestrictions& operator=(ZipFileRestrictions const&) = delete;
    ZipFileRestrictions(ZipFileRestrictions const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ZipFileRestrictions\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ZipFileRestrictions();
    /**
     * @symbol ?allowFile\@ZipFileRestrictions\@ZipUtils\@Core\@\@QEBA_NAEBVPath\@3\@\@Z
     */
    MCAPI bool allowFile(class Core::Path const&) const;
    /**
     * @symbol ??1ZipFileRestrictions\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ~ZipFileRestrictions();
};

}; // namespace Core::ZipUtils
