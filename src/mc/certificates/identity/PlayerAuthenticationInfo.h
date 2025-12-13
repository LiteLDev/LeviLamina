#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct PlayerAuthenticationInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> Xuid;
    ::ll::TypedStorage<8, 32, ::std::string> PlayFabId;
    ::ll::TypedStorage<8, 32, ::std::string> NintendoId;
    ::ll::TypedStorage<8, 32, ::std::string> PsnId;
    ::ll::TypedStorage<8, 32, ::std::string> XboxLiveName;
    ::ll::TypedStorage<8, 32, ::std::string> NintendoName;
    ::ll::TypedStorage<8, 32, ::std::string> PlayStationName;
    ::ll::TypedStorage<8, 32, ::std::string> PublicKey;
    ::ll::TypedStorage<8, 16, ::mce::UUID>   AuthenticatedUuid;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAuthenticationInfo& operator=(PlayerAuthenticationInfo const&);
    PlayerAuthenticationInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerAuthenticationInfo(::PlayerAuthenticationInfo const&);

    MCAPI PlayerAuthenticationInfo(::PlayerAuthenticationInfo&&);

    MCAPI ::PlayerAuthenticationInfo& operator=(::PlayerAuthenticationInfo&&);

    MCAPI ~PlayerAuthenticationInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PlayerAuthenticationInfo const&);

    MCAPI void* $ctor(::PlayerAuthenticationInfo&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
