#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct ItemInstance : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkde88a2;
    ::ll::UntypedStorage<8, 16> mUnk4a1f34;
    ::ll::UntypedStorage<8, 32> mUnk9bd792;
    ::ll::UntypedStorage<8, 32> mUnk5f743c;
    ::ll::UntypedStorage<8, 16> mUnk4a5c8c;
    ::ll::UntypedStorage<8, 32> mUnkf4ece5;
    ::ll::UntypedStorage<8, 16> mUnkd26f2e;
    ::ll::UntypedStorage<8, 32> mUnkd6de57;
    ::ll::UntypedStorage<8, 32> mUnk7c253b;
    ::ll::UntypedStorage<8, 32> mUnkf99654;
    ::ll::UntypedStorage<8, 16> mUnkbd293f;
    ::ll::UntypedStorage<4, 8>  mUnk80b568;
    ::ll::UntypedStorage<8, 32> mUnk419a16;
    ::ll::UntypedStorage<4, 4>  mUnk497458;
    ::ll::UntypedStorage<4, 8>  mUnk5b23f3;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemInstance& operator=(ItemInstance const&);
    ItemInstance(ItemInstance const&);
    ItemInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemInstance() /*override*/;

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
