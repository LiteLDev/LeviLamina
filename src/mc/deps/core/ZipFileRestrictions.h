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
    MCAPI ZipFileRestrictions();

    MCAPI bool allowFile(class Core::Path const& file) const;

    MCAPI ~ZipFileRestrictions();

    // NOLINTEND
};

}; // namespace Core::ZipUtils
