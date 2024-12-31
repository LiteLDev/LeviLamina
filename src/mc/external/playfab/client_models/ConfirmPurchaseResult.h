#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ConfirmPurchaseResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk67d9d4;
    ::ll::UntypedStorage<8, 32> mUnk303233;
    ::ll::UntypedStorage<8, 8>  mUnk3c4205;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfirmPurchaseResult& operator=(ConfirmPurchaseResult const&);
    ConfirmPurchaseResult(ConfirmPurchaseResult const&);
    ConfirmPurchaseResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConfirmPurchaseResult() /*override*/ = default;

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
