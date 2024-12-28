#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithTwitchRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk954451;
    ::ll::UntypedStorage<1, 2>   mUnkac2712;
    ::ll::UntypedStorage<8, 32>  mUnk246e25;
    ::ll::UntypedStorage<8, 128> mUnk5338b1;
    ::ll::UntypedStorage<8, 32>  mUnk7f5550;
    ::ll::UntypedStorage<8, 32>  mUnk979952;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithTwitchRequest& operator=(LoginWithTwitchRequest const&);
    LoginWithTwitchRequest(LoginWithTwitchRequest const&);
    LoginWithTwitchRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithTwitchRequest() /*override*/;

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
