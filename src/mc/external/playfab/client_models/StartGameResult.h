#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StartGameResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd8a686;
    ::ll::UntypedStorage<8, 32> mUnk29b11e;
    ::ll::UntypedStorage<8, 32> mUnkb6d6d8;
    ::ll::UntypedStorage<8, 32> mUnk6c7e18;
    ::ll::UntypedStorage<8, 32> mUnk3ca315;
    ::ll::UntypedStorage<4, 8>  mUnk5683f9;
    ::ll::UntypedStorage<8, 32> mUnk723ba6;
    ::ll::UntypedStorage<8, 32> mUnk324f46;
    // NOLINTEND

public:
    // prevent constructor by default
    StartGameResult& operator=(StartGameResult const&);
    StartGameResult(StartGameResult const&);
    StartGameResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartGameResult() /*override*/;

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
