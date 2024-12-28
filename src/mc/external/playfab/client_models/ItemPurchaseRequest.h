#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ItemPurchaseRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk974855;
    ::ll::UntypedStorage<8, 32> mUnk71f0e8;
    ::ll::UntypedStorage<4, 4>  mUnkb2aae9;
    ::ll::UntypedStorage<8, 16> mUnk8cbbb1;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemPurchaseRequest& operator=(ItemPurchaseRequest const&);
    ItemPurchaseRequest(ItemPurchaseRequest const&);
    ItemPurchaseRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemPurchaseRequest() /*override*/;

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
