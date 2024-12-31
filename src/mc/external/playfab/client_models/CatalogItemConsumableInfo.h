#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CatalogItemConsumableInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkbc61ef;
    ::ll::UntypedStorage<4, 8>  mUnk776d87;
    ::ll::UntypedStorage<8, 32> mUnk5c4199;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogItemConsumableInfo& operator=(CatalogItemConsumableInfo const&);
    CatalogItemConsumableInfo(CatalogItemConsumableInfo const&);
    CatalogItemConsumableInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CatalogItemConsumableInfo() /*override*/ = default;

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
