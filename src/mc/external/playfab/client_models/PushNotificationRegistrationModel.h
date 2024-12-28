#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PushNotificationRegistrationModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkeea8cf;
    ::ll::UntypedStorage<4, 8>  mUnk230c78;
    // NOLINTEND

public:
    // prevent constructor by default
    PushNotificationRegistrationModel& operator=(PushNotificationRegistrationModel const&);
    PushNotificationRegistrationModel(PushNotificationRegistrationModel const&);
    PushNotificationRegistrationModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PushNotificationRegistrationModel() /*override*/;

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
