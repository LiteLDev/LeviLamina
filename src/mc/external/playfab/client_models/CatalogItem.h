#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CatalogItem : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd90478;
    ::ll::UntypedStorage<1, 1>  mUnk5f8081;
    ::ll::UntypedStorage<8, 32> mUnk54f90b;
    ::ll::UntypedStorage<8, 64> mUnk8a34af;
    ::ll::UntypedStorage<8, 96> mUnkf98908;
    ::ll::UntypedStorage<8, 32> mUnk9d40f1;
    ::ll::UntypedStorage<8, 32> mUnk20ac85;
    ::ll::UntypedStorage<8, 32> mUnk2dada7;
    ::ll::UntypedStorage<4, 4>  mUnk37ba5e;
    ::ll::UntypedStorage<1, 1>  mUnk389dab;
    ::ll::UntypedStorage<1, 1>  mUnk37ee73;
    ::ll::UntypedStorage<1, 1>  mUnkd6a2a1;
    ::ll::UntypedStorage<8, 32> mUnk247c2d;
    ::ll::UntypedStorage<8, 32> mUnk45677c;
    ::ll::UntypedStorage<8, 32> mUnk30f6e3;
    ::ll::UntypedStorage<8, 16> mUnk8448c0;
    ::ll::UntypedStorage<8, 16> mUnkff8be3;
    ::ll::UntypedStorage<8, 16> mUnk2ac56b;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogItem& operator=(CatalogItem const&);
    CatalogItem(CatalogItem const&);
    CatalogItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CatalogItem() /*override*/ = default;

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
