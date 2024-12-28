#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetPlayerCombinedInfoRequestParams : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk79e87c;
    ::ll::UntypedStorage<1, 1>  mUnk2c8002;
    ::ll::UntypedStorage<1, 1>  mUnk4ca952;
    ::ll::UntypedStorage<1, 1>  mUnk1cbc1f;
    ::ll::UntypedStorage<1, 1>  mUnk36e1d5;
    ::ll::UntypedStorage<1, 1>  mUnkf1377a;
    ::ll::UntypedStorage<1, 1>  mUnk5b722d;
    ::ll::UntypedStorage<1, 1>  mUnkf8215e;
    ::ll::UntypedStorage<1, 1>  mUnk8aae6f;
    ::ll::UntypedStorage<1, 1>  mUnk3b3855;
    ::ll::UntypedStorage<8, 16> mUnk1f5088;
    ::ll::UntypedStorage<1, 32> mUnk52a4c2;
    ::ll::UntypedStorage<8, 16> mUnk5b7317;
    ::ll::UntypedStorage<8, 16> mUnk6a2f50;
    ::ll::UntypedStorage<8, 16> mUnk87474c;
    // NOLINTEND

public:
    // prevent constructor by default
    GetPlayerCombinedInfoRequestParams& operator=(GetPlayerCombinedInfoRequestParams const&);
    GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams const&);
    GetPlayerCombinedInfoRequestParams();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetPlayerCombinedInfoRequestParams() /*override*/;

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
