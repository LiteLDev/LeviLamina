#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct PayForPurchaseResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk41782a;
    ::ll::UntypedStorage<8, 32> mUnk1348a7;
    ::ll::UntypedStorage<8, 32> mUnk202ad1;
    ::ll::UntypedStorage<8, 32> mUnkc80398;
    ::ll::UntypedStorage<8, 32> mUnk442e36;
    ::ll::UntypedStorage<8, 32> mUnk987165;
    ::ll::UntypedStorage<4, 4>  mUnk501e84;
    ::ll::UntypedStorage<4, 8>  mUnk830db1;
    ::ll::UntypedStorage<8, 16> mUnkeb80bc;
    ::ll::UntypedStorage<8, 16> mUnk780942;
    // NOLINTEND

public:
    // prevent constructor by default
    PayForPurchaseResult& operator=(PayForPurchaseResult const&);
    PayForPurchaseResult(PayForPurchaseResult const&);
    PayForPurchaseResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PayForPurchaseResult() /*override*/ = default;

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
