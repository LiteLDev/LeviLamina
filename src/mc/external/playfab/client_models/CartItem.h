#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CartItem : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6d1a09;
    ::ll::UntypedStorage<8, 32> mUnk55e654;
    ::ll::UntypedStorage<8, 32> mUnkfe993c;
    ::ll::UntypedStorage<8, 32> mUnk99b686;
    ::ll::UntypedStorage<8, 32> mUnk7b24a1;
    ::ll::UntypedStorage<8, 16> mUnk731cee;
    ::ll::UntypedStorage<8, 16> mUnkccd55b;
    ::ll::UntypedStorage<8, 16> mUnkf366ed;
    // NOLINTEND

public:
    // prevent constructor by default
    CartItem& operator=(CartItem const&);
    CartItem(CartItem const&);
    CartItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CartItem() /*override*/;

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
