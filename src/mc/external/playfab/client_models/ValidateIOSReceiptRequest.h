#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ValidateIOSReceiptRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7e0ca6;
    ::ll::UntypedStorage<4, 4>  mUnk2569bc;
    ::ll::UntypedStorage<8, 32> mUnk56fd99;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidateIOSReceiptRequest& operator=(ValidateIOSReceiptRequest const&);
    ValidateIOSReceiptRequest(ValidateIOSReceiptRequest const&);
    ValidateIOSReceiptRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ValidateIOSReceiptRequest() /*override*/ = default;

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
