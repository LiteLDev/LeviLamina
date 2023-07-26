#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core::ZipUtils {

class ZipFileRestrictions {

public:
    // prevent constructor by default
    ZipFileRestrictions& operator=(ZipFileRestrictions const&) = delete;
    ZipFileRestrictions(ZipFileRestrictions const&)            = delete;

public:
    /**
     * @symbol ??0ZipFileRestrictions\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ZipFileRestrictions(); // NOLINT
    /**
     * @symbol ?allowFile\@ZipFileRestrictions\@ZipUtils\@Core\@\@QEBA_NAEBVPath\@3\@\@Z
     */
    MCAPI bool allowFile(class Core::Path const&) const; // NOLINT
    /**
     * @symbol ??1ZipFileRestrictions\@ZipUtils\@Core\@\@QEAA\@XZ
     */
    MCAPI ~ZipFileRestrictions(); // NOLINT
};

}; // namespace Core::ZipUtils
