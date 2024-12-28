#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UserTitleInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbcc847;
    ::ll::UntypedStorage<8, 8>  mUnk4f8ddd;
    ::ll::UntypedStorage<8, 32> mUnk68e99c;
    ::ll::UntypedStorage<8, 16> mUnk6c2fc8;
    ::ll::UntypedStorage<1, 2>  mUnk12c023;
    ::ll::UntypedStorage<8, 16> mUnkbdc1b5;
    ::ll::UntypedStorage<4, 8>  mUnkb98263;
    ::ll::UntypedStorage<8, 80> mUnk8de004;
    // NOLINTEND

public:
    // prevent constructor by default
    UserTitleInfo& operator=(UserTitleInfo const&);
    UserTitleInfo(UserTitleInfo const&);
    UserTitleInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UserTitleInfo() /*override*/;

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
