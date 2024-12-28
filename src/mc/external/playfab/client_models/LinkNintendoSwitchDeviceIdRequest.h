#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LinkNintendoSwitchDeviceIdRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk247a1d;
    ::ll::UntypedStorage<8, 32> mUnkea3853;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkNintendoSwitchDeviceIdRequest& operator=(LinkNintendoSwitchDeviceIdRequest const&);
    LinkNintendoSwitchDeviceIdRequest(LinkNintendoSwitchDeviceIdRequest const&);
    LinkNintendoSwitchDeviceIdRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LinkNintendoSwitchDeviceIdRequest() /*override*/;

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
