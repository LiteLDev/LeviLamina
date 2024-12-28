#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct RegisterPlayFabUserResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk8f9bb5;
    ::ll::UntypedStorage<8, 32>  mUnk6d8bfb;
    ::ll::UntypedStorage<8, 32>  mUnkc473c6;
    ::ll::UntypedStorage<1, 24>  mUnk4a05fd;
    ::ll::UntypedStorage<8, 32>  mUnk4cc1c1;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterPlayFabUserResult& operator=(RegisterPlayFabUserResult const&);
    RegisterPlayFabUserResult(RegisterPlayFabUserResult const&);
    RegisterPlayFabUserResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RegisterPlayFabUserResult() /*override*/;

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
