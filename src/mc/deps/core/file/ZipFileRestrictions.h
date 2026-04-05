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
    ::ll::UntypedStorage<8, 16> mUnk19693d;
    ::ll::UntypedStorage<8, 16> mUnkab9825;
    ::ll::UntypedStorage<8, 16> mUnkafe69e;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ZipFileRestrictions& operator=(ZipFileRestrictions const&);
    ZipFileRestrictions(ZipFileRestrictions const&);
    ZipFileRestrictions();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ZipFileRestrictions& operator=(ZipFileRestrictions const&);
    ZipFileRestrictions();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ZipFileRestrictions(::Core::ZipUtils::ZipFileRestrictions const&);
#endif

    MCNAPI bool allowFile(::Core::PathView file) const;

#ifdef LL_PLAT_C
    MCNAPI ~ZipFileRestrictions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Core::ZipUtils::ZipFileRestrictions const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Core::ZipUtils
