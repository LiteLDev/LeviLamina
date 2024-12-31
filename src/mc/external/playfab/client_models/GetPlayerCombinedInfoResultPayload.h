#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetPlayerCombinedInfoResultPayload : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1392> mUnk7fedf2;
    ::ll::UntypedStorage<8, 16>   mUnkd3600f;
    ::ll::UntypedStorage<8, 16>   mUnkf3d12f;
    ::ll::UntypedStorage<8, 384>  mUnkc8a13a;
    ::ll::UntypedStorage<8, 16>   mUnkae773c;
    ::ll::UntypedStorage<8, 16>   mUnk1837f8;
    ::ll::UntypedStorage<8, 16>   mUnkc5bf77;
    ::ll::UntypedStorage<4, 4>    mUnkfcbb55;
    ::ll::UntypedStorage<8, 16>   mUnk33e9ed;
    ::ll::UntypedStorage<8, 16>   mUnkcffb4e;
    ::ll::UntypedStorage<4, 4>    mUnk10e738;
    ::ll::UntypedStorage<8, 16>   mUnk736902;
    ::ll::UntypedStorage<8, 16>   mUnk231755;
    // NOLINTEND

public:
    // prevent constructor by default
    GetPlayerCombinedInfoResultPayload& operator=(GetPlayerCombinedInfoResultPayload const&);
    GetPlayerCombinedInfoResultPayload(GetPlayerCombinedInfoResultPayload const&);
    GetPlayerCombinedInfoResultPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetPlayerCombinedInfoResultPayload() /*override*/ = default;

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
