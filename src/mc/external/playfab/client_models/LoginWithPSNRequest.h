#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginWithPSNRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk29f2d8;
    ::ll::UntypedStorage<1, 2>   mUnka19e8c;
    ::ll::UntypedStorage<8, 32>  mUnk23b933;
    ::ll::UntypedStorage<8, 128> mUnk3354b9;
    ::ll::UntypedStorage<4, 8>   mUnk5785f9;
    ::ll::UntypedStorage<8, 32>  mUnk112682;
    ::ll::UntypedStorage<8, 32>  mUnke1b621;
    ::ll::UntypedStorage<8, 32>  mUnk678186;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginWithPSNRequest& operator=(LoginWithPSNRequest const&);
    LoginWithPSNRequest(LoginWithPSNRequest const&);
    LoginWithPSNRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginWithPSNRequest() /*override*/;

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
