#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ValidateGooglePlayPurchaseRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk76b2b8;
    ::ll::UntypedStorage<4, 8>  mUnk46a863;
    ::ll::UntypedStorage<8, 32> mUnk49a4b5;
    ::ll::UntypedStorage<8, 32> mUnkc854b8;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidateGooglePlayPurchaseRequest& operator=(ValidateGooglePlayPurchaseRequest const&);
    ValidateGooglePlayPurchaseRequest(ValidateGooglePlayPurchaseRequest const&);
    ValidateGooglePlayPurchaseRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidateGooglePlayPurchaseRequest() /*override*/ = default;

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
