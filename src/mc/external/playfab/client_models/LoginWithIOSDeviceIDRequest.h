#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithIOSDeviceIDRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>   mUnk186d7f;
    ::ll::UntypedStorage<8, 32>  mUnk5b1b58;
    ::ll::UntypedStorage<8, 32>  mUnk543c0e;
    ::ll::UntypedStorage<8, 32>  mUnk864bf5;
    ::ll::UntypedStorage<8, 128> mUnk477deb;
    ::ll::UntypedStorage<8, 32>  mUnka010e0;
    ::ll::UntypedStorage<8, 32>  mUnk1d9ec9;
    ::ll::UntypedStorage<8, 32>  mUnk1b17fb;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithIOSDeviceIDRequest& operator=(LoginWithIOSDeviceIDRequest const&);
    LoginWithIOSDeviceIDRequest(LoginWithIOSDeviceIDRequest const&);
    LoginWithIOSDeviceIDRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithIOSDeviceIDRequest() /*override*/;

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
