#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct FriendInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkf1df06;
    ::ll::UntypedStorage<8, 80>  mUnk2252f4;
    ::ll::UntypedStorage<8, 32>  mUnk4b767b;
    ::ll::UntypedStorage<8, 48>  mUnk83f3f2;
    ::ll::UntypedStorage<8, 384> mUnkf2ebf7;
    ::ll::UntypedStorage<8, 80>  mUnk6014ab;
    ::ll::UntypedStorage<8, 96>  mUnkd17384;
    ::ll::UntypedStorage<8, 16>  mUnk100154;
    ::ll::UntypedStorage<8, 32>  mUnk7dec01;
    ::ll::UntypedStorage<8, 32>  mUnke9d8dc;
    ::ll::UntypedStorage<8, 48>  mUnkffad9f;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendInfo& operator=(FriendInfo const&);
    FriendInfo(FriendInfo const&);
    FriendInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FriendInfo() /*override*/;

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
