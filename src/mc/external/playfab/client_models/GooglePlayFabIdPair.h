#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GooglePlayFabIdPair : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e1848;
    ::ll::UntypedStorage<8, 32> mUnkd233b8;
    // NOLINTEND

public:
    // prevent constructor by default
    GooglePlayFabIdPair& operator=(GooglePlayFabIdPair const&);
    GooglePlayFabIdPair(GooglePlayFabIdPair const&);
    GooglePlayFabIdPair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GooglePlayFabIdPair() /*override*/;

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
