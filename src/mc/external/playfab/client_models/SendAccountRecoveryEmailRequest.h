#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct SendAccountRecoveryEmailRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb593c4;
    ::ll::UntypedStorage<8, 32> mUnk9bede8;
    ::ll::UntypedStorage<8, 32> mUnk172b45;
    // NOLINTEND

public:
    // prevent constructor by default
    SendAccountRecoveryEmailRequest& operator=(SendAccountRecoveryEmailRequest const&);
    SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest const&);
    SendAccountRecoveryEmailRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SendAccountRecoveryEmailRequest() /*override*/ = default;

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
