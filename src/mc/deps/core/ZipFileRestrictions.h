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
    ZipFileRestrictions& operator=(ZipFileRestrictions const&);
    ZipFileRestrictions(ZipFileRestrictions const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ZipFileRestrictions@ZipUtils@Core@@QEAA@XZ
    MCAPI ZipFileRestrictions();

    // symbol: ?allowFile@ZipFileRestrictions@ZipUtils@Core@@QEBA_NAEBVPath@3@@Z
    MCAPI bool allowFile(class Core::Path const& file) const;

    // symbol: ??1ZipFileRestrictions@ZipUtils@Core@@QEAA@XZ
    MCAPI ~ZipFileRestrictions();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
