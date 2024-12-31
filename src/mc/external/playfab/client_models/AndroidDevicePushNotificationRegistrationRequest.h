#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct AndroidDevicePushNotificationRegistrationRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3b0623;
    ::ll::UntypedStorage<8, 32> mUnk6409df;
    ::ll::UntypedStorage<1, 2>  mUnkfaf2a8;
    // NOLINTEND

public:
    // prevent constructor by default
    AndroidDevicePushNotificationRegistrationRequest&
    operator=(AndroidDevicePushNotificationRegistrationRequest const&);
    AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest const&);
    AndroidDevicePushNotificationRegistrationRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AndroidDevicePushNotificationRegistrationRequest() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
