#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
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
    ZipFileRestrictions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ZipFileRestrictions(::Core::ZipUtils::ZipFileRestrictions const&);

    MCNAPI bool allowFile(::Core::PathView file) const;

    MCNAPI_C ~ZipFileRestrictions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Core::ZipUtils::ZipFileRestrictions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Core::ZipUtils
