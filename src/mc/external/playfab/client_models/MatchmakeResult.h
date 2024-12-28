#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct MatchmakeResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd4bdf6;
    ::ll::UntypedStorage<8, 32> mUnk3e84c7;
    ::ll::UntypedStorage<4, 8>  mUnk7d5359;
    ::ll::UntypedStorage<8, 32> mUnkb63729;
    ::ll::UntypedStorage<8, 32> mUnk2bafdd;
    ::ll::UntypedStorage<4, 8>  mUnk7de45b;
    ::ll::UntypedStorage<8, 32> mUnka2c96d;
    ::ll::UntypedStorage<4, 8>  mUnk74f9ca;
    ::ll::UntypedStorage<8, 32> mUnk397c15;
    // NOLINTEND

public:
    // prevent constructor by default
    MatchmakeResult& operator=(MatchmakeResult const&);
    MatchmakeResult(MatchmakeResult const&);
    MatchmakeResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MatchmakeResult() /*override*/;

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
