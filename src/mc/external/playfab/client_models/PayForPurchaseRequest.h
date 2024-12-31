#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PayForPurchaseRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk52cb3c;
    ::ll::UntypedStorage<8, 32> mUnk3ead72;
    ::ll::UntypedStorage<8, 32> mUnk9262b0;
    ::ll::UntypedStorage<8, 32> mUnk14de29;
    // NOLINTEND

public:
    // prevent constructor by default
    PayForPurchaseRequest& operator=(PayForPurchaseRequest const&);
    PayForPurchaseRequest(PayForPurchaseRequest const&);
    PayForPurchaseRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PayForPurchaseRequest() /*override*/ = default;

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
