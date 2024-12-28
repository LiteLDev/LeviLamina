#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabLoginResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct LoginResult : public ::PlayFab::PlayFabLoginResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160>  mUnkc828c7;
    ::ll::UntypedStorage<8, 1952> mUnkec0af3;
    ::ll::UntypedStorage<8, 16>   mUnkcf6bf5;
    ::ll::UntypedStorage<1, 1>    mUnk4bb032;
    ::ll::UntypedStorage<8, 32>   mUnk994055;
    ::ll::UntypedStorage<8, 32>   mUnk788588;
    ::ll::UntypedStorage<1, 24>   mUnk264ea6;
    // NOLINTEND

public:
    // prevent constructor by default
    LoginResult& operator=(LoginResult const&);
    LoginResult(LoginResult const&);
    LoginResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoginResult() /*override*/;

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
