#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetPurchaseResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd5a106;
    ::ll::UntypedStorage<8, 32> mUnk5b5a68;
    ::ll::UntypedStorage<8, 8>  mUnk3c6e01;
    ::ll::UntypedStorage<8, 32> mUnk4e3ddd;
    ::ll::UntypedStorage<8, 32> mUnk29fbfc;
    // NOLINTEND

public:
    // prevent constructor by default
    GetPurchaseResult& operator=(GetPurchaseResult const&);
    GetPurchaseResult(GetPurchaseResult const&);
    GetPurchaseResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetPurchaseResult() /*override*/;

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
