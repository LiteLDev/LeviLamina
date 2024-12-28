#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithGameCenterRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnkbcd397;
    ::ll::UntypedStorage<8, 32>  mUnkdd7d63;
    ::ll::UntypedStorage<8, 128> mUnkefcc7d;
    ::ll::UntypedStorage<8, 32>  mUnk25c731;
    ::ll::UntypedStorage<8, 32>  mUnkc6735b;
    ::ll::UntypedStorage<8, 32>  mUnk1e46a7;
    ::ll::UntypedStorage<8, 32>  mUnk82c44e;
    ::ll::UntypedStorage<8, 32>  mUnka1655b;
    ::ll::UntypedStorage<8, 32>  mUnke9c44a;
    ::ll::UntypedStorage<8, 32>  mUnk2cdfc5;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithGameCenterRequest& operator=(LoginWithGameCenterRequest const&);
    LoginWithGameCenterRequest(LoginWithGameCenterRequest const&);
    LoginWithGameCenterRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithGameCenterRequest() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
