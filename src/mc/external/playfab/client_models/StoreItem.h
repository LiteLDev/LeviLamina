#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StoreItem : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk146b82;
    ::ll::UntypedStorage<4, 8>  mUnk500a4b;
    ::ll::UntypedStorage<8, 32> mUnk2cae53;
    ::ll::UntypedStorage<8, 16> mUnk92938a;
    ::ll::UntypedStorage<8, 16> mUnkad3329;
    // NOLINTEND

public:
    // prevent constructor by default
    StoreItem& operator=(StoreItem const&);
    StoreItem(StoreItem const&);
    StoreItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StoreItem() /*override*/ = default;

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
