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
    ::ll::UntypedStorage<8, 32> mUnk82b42f;
    ::ll::UntypedStorage<8, 8>  mUnk1c38b3;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListFile& operator=(AllowListFile const&);
    AllowListFile(AllowListFile const&);
    AllowListFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AllowListFile(::Core::Path const& filePath);

    MCAPI ::FileReadResult reload();

    MCAPI void syncToDisc();

    MCAPI ~AllowListFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::AllowListFile loadFromDefaultLocations();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& filePath);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
