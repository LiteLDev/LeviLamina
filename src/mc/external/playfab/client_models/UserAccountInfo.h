#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UserAccountInfo : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk80ba6f;
    ::ll::UntypedStorage<8, 8>   mUnk5faa3b;
    ::ll::UntypedStorage<8, 48>  mUnk5c1df3;
    ::ll::UntypedStorage<8, 80>  mUnk54309c;
    ::ll::UntypedStorage<8, 48>  mUnk313b22;
    ::ll::UntypedStorage<8, 48>  mUnk76bdf4;
    ::ll::UntypedStorage<8, 144> mUnk7668be;
    ::ll::UntypedStorage<8, 48>  mUnkcd4a7e;
    ::ll::UntypedStorage<8, 80>  mUnkc17bca;
    ::ll::UntypedStorage<8, 48>  mUnke5cd94;
    ::ll::UntypedStorage<8, 48>  mUnk7222ef;
    ::ll::UntypedStorage<8, 16>  mUnk3a395a;
    ::ll::UntypedStorage<8, 32>  mUnk880965;
    ::ll::UntypedStorage<8, 48>  mUnka9cdfc;
    ::ll::UntypedStorage<8, 80>  mUnkf19e61;
    ::ll::UntypedStorage<8, 96>  mUnk9d5000;
    ::ll::UntypedStorage<8, 216> mUnkae9106;
    ::ll::UntypedStorage<8, 80>  mUnk5573a0;
    ::ll::UntypedStorage<8, 32>  mUnkabf9e4;
    ::ll::UntypedStorage<8, 80>  mUnk839e97;
    ::ll::UntypedStorage<8, 48>  mUnk47fe66;
    // NOLINTEND

public:
    // prevent constructor by default
    UserAccountInfo& operator=(UserAccountInfo const&);
    UserAccountInfo(UserAccountInfo const&);
    UserAccountInfo();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UserAccountInfo() /*override*/;

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
