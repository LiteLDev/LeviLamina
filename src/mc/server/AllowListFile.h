#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/FileReadResult.h"

// auto generated forward declare list
// clang-format off
class AllowList;
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
    MCAPI ::AllowList& getAllowList() const;

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
