#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/FileReadResult.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class AllowListFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3edfdb;
    ::ll::UntypedStorage<8, 8>  mUnk7c975f;
    ::ll::UntypedStorage<1, 1>  mUnk8fdea0;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListFile& operator=(AllowListFile const&);
    AllowListFile(AllowListFile const&);
    AllowListFile();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit AllowListFile(::Core::Path const& filePath);

    MCNAPI ::FileReadResult reload();

    MCNAPI ~AllowListFile();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::AllowListFile loadFromDefaultLocations();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
