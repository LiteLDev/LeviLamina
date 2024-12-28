#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithXboxRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnkcec66d;
    ::ll::UntypedStorage<8, 32>  mUnk982c86;
    ::ll::UntypedStorage<8, 128> mUnk789186;
    ::ll::UntypedStorage<8, 32>  mUnk780e10;
    ::ll::UntypedStorage<8, 32>  mUnk147dc8;
    ::ll::UntypedStorage<8, 32>  mUnkd7926d;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithXboxRequest& operator=(LoginWithXboxRequest const&);
    LoginWithXboxRequest(LoginWithXboxRequest const&);
    LoginWithXboxRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithXboxRequest() /*override*/;

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
