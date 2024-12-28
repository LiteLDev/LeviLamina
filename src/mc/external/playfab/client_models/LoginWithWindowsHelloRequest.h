#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithWindowsHelloRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk3c88a1;
    ::ll::UntypedStorage<8, 128> mUnke1880d;
    ::ll::UntypedStorage<8, 32>  mUnk3f5991;
    ::ll::UntypedStorage<8, 32>  mUnk27e82e;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithWindowsHelloRequest& operator=(LoginWithWindowsHelloRequest const&);
    LoginWithWindowsHelloRequest(LoginWithWindowsHelloRequest const&);
    LoginWithWindowsHelloRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithWindowsHelloRequest() /*override*/;

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
