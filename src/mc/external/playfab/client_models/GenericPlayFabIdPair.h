#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GenericPlayFabIdPair : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk2e2719;
    ::ll::UntypedStorage<8, 32> mUnkff843c;
    // NOLINTEND

public:
    // prevent constructor by default
    GenericPlayFabIdPair& operator=(GenericPlayFabIdPair const&);
    GenericPlayFabIdPair(GenericPlayFabIdPair const&);
    GenericPlayFabIdPair();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GenericPlayFabIdPair() /*override*/;

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
