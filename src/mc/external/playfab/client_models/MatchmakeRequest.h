#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabRequestCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct MatchmakeRequest : public ::PlayFab::PlayFabRequestCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk661256;
    ::ll::UntypedStorage<8, 32> mUnkc356b5;
    ::ll::UntypedStorage<8, 32> mUnk8fc399;
    ::ll::UntypedStorage<8, 32> mUnk4f855d;
    ::ll::UntypedStorage<4, 8>  mUnkca9ebc;
    ::ll::UntypedStorage<1, 2>  mUnk6379a2;
    ::ll::UntypedStorage<8, 32> mUnkeb48d0;
    ::ll::UntypedStorage<8, 48> mUnka05ba7;
    // NOLINTEND

public:
    // prevent constructor by default
    MatchmakeRequest& operator=(MatchmakeRequest const&);
    MatchmakeRequest(MatchmakeRequest const&);
    MatchmakeRequest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MatchmakeRequest() /*override*/;

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
