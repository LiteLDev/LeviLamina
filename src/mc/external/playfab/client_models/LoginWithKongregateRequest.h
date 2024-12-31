#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithKongregateRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkba0004;
    ::ll::UntypedStorage<1, 2>   mUnkffe77a;
    ::ll::UntypedStorage<8, 32>  mUnk6d4327;
    ::ll::UntypedStorage<8, 128> mUnk309e96;
    ::ll::UntypedStorage<8, 32>  mUnkd9fb13;
    ::ll::UntypedStorage<8, 32>  mUnk481417;
    ::ll::UntypedStorage<8, 32>  mUnkfc7678;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithKongregateRequest& operator=(LoginWithKongregateRequest const&);
    LoginWithKongregateRequest(LoginWithKongregateRequest const&);
    LoginWithKongregateRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithKongregateRequest() /*override*/ = default;

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
