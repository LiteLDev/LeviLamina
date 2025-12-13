#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct XboxLiveUserProfileData {
public:
    // XboxLiveUserProfileData inner types define
    enum class FetchedData : int {
        None        = 0,
        Profile     = 1,
        Permissions = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9cb1fc;
    ::ll::UntypedStorage<4, 4>  mUnk5fb1cd;
    ::ll::UntypedStorage<8, 32> mUnk7b583a;
    ::ll::UntypedStorage<8, 32> mUnk75160c;
    ::ll::UntypedStorage<8, 32> mUnk8957ff;
    ::ll::UntypedStorage<8, 32> mUnk91ff75;
    ::ll::UntypedStorage<8, 32> mUnkb1ee11;
    ::ll::UntypedStorage<4, 4>  mUnkdf1f27;
    ::ll::UntypedStorage<8, 32> mUnkb4a997;
    ::ll::UntypedStorage<4, 4>  mUnkda2a04;
    ::ll::UntypedStorage<1, 1>  mUnk9c286f;
    ::ll::UntypedStorage<8, 32> mUnke160ea;
    ::ll::UntypedStorage<4, 4>  mUnk15e206;
    ::ll::UntypedStorage<4, 4>  mUnkfcfd2c;
    ::ll::UntypedStorage<4, 4>  mUnkc2107e;
    ::ll::UntypedStorage<4, 4>  mUnkdaf122;
    ::ll::UntypedStorage<4, 4>  mUnk79bcb6;
    ::ll::UntypedStorage<4, 4>  mUnka8928d;
    ::ll::UntypedStorage<4, 4>  mUnkeddc35;
    ::ll::UntypedStorage<8, 24> mUnkebf033;
    // NOLINTEND

public:
    // prevent constructor by default
    XboxLiveUserProfileData& operator=(XboxLiveUserProfileData const&);
    XboxLiveUserProfileData(XboxLiveUserProfileData const&);
    XboxLiveUserProfileData();
};

} // namespace Social
