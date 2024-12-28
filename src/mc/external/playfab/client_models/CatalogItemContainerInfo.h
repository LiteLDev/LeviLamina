#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CatalogItemContainerInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke05ae3;
    ::ll::UntypedStorage<8, 32> mUnkfd83ca;
    ::ll::UntypedStorage<8, 16> mUnk2bc49b;
    ::ll::UntypedStorage<8, 16> mUnkbe76fd;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogItemContainerInfo& operator=(CatalogItemContainerInfo const&);
    CatalogItemContainerInfo(CatalogItemContainerInfo const&);
    CatalogItemContainerInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CatalogItemContainerInfo() /*override*/;

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
