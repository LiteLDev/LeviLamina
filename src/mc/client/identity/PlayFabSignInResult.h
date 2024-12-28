#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

struct PlayFabSignInResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf12dc4;
    ::ll::UntypedStorage<1, 1>  mUnk5c0ee5;
    ::ll::UntypedStorage<1, 1>  mUnkccefc2;
    ::ll::UntypedStorage<8, 32> mUnk5534b0;
    ::ll::UntypedStorage<8, 32> mUnk9eec11;
    ::ll::UntypedStorage<8, 32> mUnk3819dd;
    ::ll::UntypedStorage<8, 8>  mUnk343a4f;
    ::ll::UntypedStorage<8, 32> mUnk42df6b;
    ::ll::UntypedStorage<8, 32> mUnkbc0bfe;
    ::ll::UntypedStorage<8, 32> mUnk1bc973;
    ::ll::UntypedStorage<8, 32> mUnk60bb1c;
    ::ll::UntypedStorage<4, 4>  mUnkc8366b;
    ::ll::UntypedStorage<8, 32> mUnk38d47a;
    ::ll::UntypedStorage<8, 32> mUnkbb5f86;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayFabSignInResult& operator=(PlayFabSignInResult const&);
    PlayFabSignInResult(PlayFabSignInResult const&);
    PlayFabSignInResult();
};

} // namespace Social
