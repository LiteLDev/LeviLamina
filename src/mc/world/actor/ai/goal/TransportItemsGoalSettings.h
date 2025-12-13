#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TransportItemsGoalSettings {
public:
    // TransportItemsGoalSettings inner types define
    enum class PlaceStrategy : int {
        Any                 = 0,
        WithMatching        = 1,
        WithMatchingOrEmpty = 2,
    };

    enum class SearchStrategy : int {
        Nearest = 0,
        Random  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk32ee8c;
    ::ll::UntypedStorage<8, 24> mUnka13beb;
    ::ll::UntypedStorage<4, 4>  mUnk3bc8f4;
    ::ll::UntypedStorage<4, 4>  mUnk87fd46;
    ::ll::UntypedStorage<1, 1>  mUnk4d5e83;
    ::ll::UntypedStorage<4, 4>  mUnk634183;
    ::ll::UntypedStorage<4, 8>  mUnk2c2882;
    ::ll::UntypedStorage<4, 4>  mUnk1277c8;
    ::ll::UntypedStorage<4, 4>  mUnk7a1a0d;
    ::ll::UntypedStorage<4, 4>  mUnk64ba13;
    ::ll::UntypedStorage<8, 24> mUnk296f17;
    ::ll::UntypedStorage<8, 24> mUnka62701;
    // NOLINTEND

public:
    // prevent constructor by default
    TransportItemsGoalSettings& operator=(TransportItemsGoalSettings const&);
    TransportItemsGoalSettings(TransportItemsGoalSettings const&);
    TransportItemsGoalSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TransportItemsGoalSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
