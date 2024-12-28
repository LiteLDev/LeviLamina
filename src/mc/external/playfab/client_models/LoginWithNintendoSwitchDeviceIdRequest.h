#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithNintendoSwitchDeviceIdRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk22f982;
    ::ll::UntypedStorage<8, 32>  mUnk706dcd;
    ::ll::UntypedStorage<8, 128> mUnkd512a7;
    ::ll::UntypedStorage<8, 32>  mUnkfb1f06;
    ::ll::UntypedStorage<8, 32>  mUnk262db8;
    ::ll::UntypedStorage<8, 32>  mUnkd0c96e;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithNintendoSwitchDeviceIdRequest& operator=(LoginWithNintendoSwitchDeviceIdRequest const&);
    LoginWithNintendoSwitchDeviceIdRequest(LoginWithNintendoSwitchDeviceIdRequest const&);
    LoginWithNintendoSwitchDeviceIdRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithNintendoSwitchDeviceIdRequest() /*override*/;

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
