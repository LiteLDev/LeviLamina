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
    MobSpawnHerdInfo& operator=(MobSpawnHerdInfo const&);
    MobSpawnHerdInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobSpawnHerdInfo(::MobSpawnHerdInfo const&);

    MCNAPI MobSpawnHerdInfo(
        uint                 min,
        uint                 max,
        ::std::string const& initialEvent,
        uint                 initialEventCount,
        ::std::string const& herdEvent,
        uint                 herdEventSkipCount
    );

    MCNAPI ~MobSpawnHerdInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MobSpawnHerdInfo const&);

    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
