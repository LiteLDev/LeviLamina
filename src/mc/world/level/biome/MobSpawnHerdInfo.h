#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MobSpawnHerdInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>           mMinCount;
    ::ll::TypedStorage<4, 4, uint>           mMaxCount;
    ::ll::TypedStorage<4, 4, uint>           mHerdEventSkipCount;
    ::ll::TypedStorage<4, 4, uint>           mInitialEventCount;
    ::ll::TypedStorage<8, 32, ::std::string> mInitialEvent;
    ::ll::TypedStorage<8, 32, ::std::string> mHerdEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    MobSpawnHerdInfo(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobSpawnHerdInfo(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );

    MCFOLD ::MobSpawnHerdInfo& operator=(::MobSpawnHerdInfo const&);

    MCAPI ~MobSpawnHerdInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
