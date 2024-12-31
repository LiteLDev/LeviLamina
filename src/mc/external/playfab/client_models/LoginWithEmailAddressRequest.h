#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithEmailAddressRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk1f53c8;
    ::ll::UntypedStorage<8, 128> mUnkebaf0a;
    ::ll::UntypedStorage<8, 32>  mUnkf06ef7;
    ::ll::UntypedStorage<8, 32>  mUnkfb07cd;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithEmailAddressRequest& operator=(LoginWithEmailAddressRequest const&);
    LoginWithEmailAddressRequest(LoginWithEmailAddressRequest const&);
    LoginWithEmailAddressRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithEmailAddressRequest() /*override*/ = default;

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
