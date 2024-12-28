#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CurrentGamesResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk919fc2;
    ::ll::UntypedStorage<8, 16> mUnkd047c3;
    ::ll::UntypedStorage<4, 4>  mUnka18877;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentGamesResult& operator=(CurrentGamesResult const&);
    CurrentGamesResult(CurrentGamesResult const&);
    CurrentGamesResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CurrentGamesResult() /*override*/;

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
