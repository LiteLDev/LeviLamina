#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Core::ZipUtils {

class ZipFileRestrictions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9d4e1a;
    ::ll::UntypedStorage<8, 16> mUnk405812;
    ::ll::UntypedStorage<8, 16> mUnk43c397;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipFileRestrictions& operator=(ZipFileRestrictions const&);
    ZipFileRestrictions(ZipFileRestrictions const&);
    ZipFileRestrictions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool allowFile(::Core::Path const& file) const;
    // NOLINTEND
};

} // namespace Core::ZipUtils
