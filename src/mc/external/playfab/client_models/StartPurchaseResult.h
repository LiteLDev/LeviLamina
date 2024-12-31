#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StartPurchaseResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfdc386;
    ::ll::UntypedStorage<8, 32> mUnk9f78cc;
    ::ll::UntypedStorage<8, 16> mUnkb96e3a;
    ::ll::UntypedStorage<8, 16> mUnk881d4b;
    // NOLINTEND

public:
    // prevent constructor by default
    StartPurchaseResult& operator=(StartPurchaseResult const&);
    StartPurchaseResult(StartPurchaseResult const&);
    StartPurchaseResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartPurchaseResult() /*override*/ = default;

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
