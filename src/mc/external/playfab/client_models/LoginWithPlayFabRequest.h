#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithPlayFabRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mUnk72cfc8;
    ::ll::UntypedStorage<8, 32>  mUnk96788e;
    ::ll::UntypedStorage<8, 32>  mUnk6706d8;
    ::ll::UntypedStorage<8, 32>  mUnk32f100;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithPlayFabRequest& operator=(LoginWithPlayFabRequest const&);
    LoginWithPlayFabRequest(LoginWithPlayFabRequest const&);
    LoginWithPlayFabRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithPlayFabRequest() /*override*/ = default;

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
