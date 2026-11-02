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
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mForbiddenExtensions;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mRestrictedExtensions;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mForbiddenFilenames;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipFileRestrictions();

    MCNAPI void addRestrictedExtensions(::std::vector<::std::string> const& extensions);

    MCNAPI bool allowFile(::Core::PathView file) const;

#ifdef LL_PLAT_C
    MCNAPI ~ZipFileRestrictions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
