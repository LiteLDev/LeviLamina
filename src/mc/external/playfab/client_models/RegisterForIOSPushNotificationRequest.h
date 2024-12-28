#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct RegisterForIOSPushNotificationRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke0127e;
    ::ll::UntypedStorage<8, 32> mUnkc1cfcb;
    ::ll::UntypedStorage<1, 2>  mUnkc0ca68;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterForIOSPushNotificationRequest& operator=(RegisterForIOSPushNotificationRequest const&);
    RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest const&);
    RegisterForIOSPushNotificationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RegisterForIOSPushNotificationRequest() /*override*/;

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
