#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPathingData {
public:
    // ActorPathingData inner types declare
    // clang-format off
    struct HomeRestrictionInfo;
    struct MinMaxHeightCacheEntry;
    // clang-format on

    // ActorPathingData inner types define
    struct MinMaxHeightCacheEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk1f384a;
        ::ll::UntypedStorage<4, 4> mUnk6da71e;
        // NOLINTEND

    public:
        // prevent constructor by default
        MinMaxHeightCacheEntry& operator=(MinMaxHeightCacheEntry const&);
        MinMaxHeightCacheEntry(MinMaxHeightCacheEntry const&);
        MinMaxHeightCacheEntry();
    };

    struct HomeRestrictionInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk4a556d;
        ::ll::UntypedStorage<4, 4>  mUnk8baac2;
        // NOLINTEND

    public:
        // prevent constructor by default
        HomeRestrictionInfo& operator=(HomeRestrictionInfo const&);
        HomeRestrictionInfo(HomeRestrictionInfo const&);
        HomeRestrictionInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk843bf4;
    ::ll::UntypedStorage<4, 8>  mUnk320b89;
    ::ll::UntypedStorage<4, 12> mUnk302bce;
    ::ll::UntypedStorage<4, 4>  mUnkee6a22;
    ::ll::UntypedStorage<1, 1>  mUnkdcacf9;
    ::ll::UntypedStorage<1, 1>  mUnkda42e3;
    ::ll::UntypedStorage<1, 1>  mUnke22ddd;
    ::ll::UntypedStorage<8, 8>  mUnkd3973f;
    ::ll::UntypedStorage<8, 8>  mUnkfd1d50;
    ::ll::UntypedStorage<8, 8>  mUnk278ebc;
    ::ll::UntypedStorage<8, 64> mUnk17e30a;
    ::ll::UntypedStorage<8, 64> mUnka40f0c;
    ::ll::UntypedStorage<8, 64> mUnk34c423;
    ::ll::UntypedStorage<8, 8>  mUnk4fa88b;
    ::ll::UntypedStorage<1, 1>  mUnkb75952;
    ::ll::UntypedStorage<1, 1>  mUnk343a22;
    ::ll::UntypedStorage<1, 1>  mUnk8feccb;
    ::ll::UntypedStorage<1, 1>  mUnka4f5ae;
    ::ll::UntypedStorage<1, 1>  mUnke6b511;
    ::ll::UntypedStorage<1, 1>  mUnkd05c2a;
    ::ll::UntypedStorage<1, 1>  mUnk60cd79;
    ::ll::UntypedStorage<1, 1>  mUnkf32335;
    ::ll::UntypedStorage<4, 4>  mUnkea93b3;
    ::ll::UntypedStorage<8, 8>  mUnk98397f;
    ::ll::UntypedStorage<8, 64> mUnkc31c85;
    ::ll::UntypedStorage<4, 20> mUnked9575;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorPathingData& operator=(ActorPathingData const&);
    ActorPathingData(ActorPathingData const&);
    ActorPathingData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorPathingData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
