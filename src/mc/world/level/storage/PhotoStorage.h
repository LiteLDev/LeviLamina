#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class PhotoStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk90e915;
    ::ll::UntypedStorage<8, 32> mUnk735fe6;
    ::ll::UntypedStorage<8, 32> mUnkba338e;
    ::ll::UntypedStorage<8, 32> mUnke545fe;
    ::ll::UntypedStorage<8, 32> mUnka43046;
    ::ll::UntypedStorage<8, 64> mUnk34296d;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoStorage& operator=(PhotoStorage const&);
    PhotoStorage(PhotoStorage const&);
    PhotoStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PhotoStorage(::Core::Path const& baseDir);

    MCNAPI void _readManifest();

    MCNAPI ~PhotoStorage();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& BOOKS_DIR();

    MCAPI static ::std::string const& MANIFEST_NAME();

    MCAPI static ::std::string const& PHOTOITEM_DIR();

    MCAPI static ::std::string const& PHOTO_DIR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const& baseDir);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
