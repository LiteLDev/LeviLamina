#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class PlayerSuspendLevelStorageSaveToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf58512;
    ::ll::UntypedStorage<8, 16> mUnk1626c0;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSuspendLevelStorageSaveToken& operator=(PlayerSuspendLevelStorageSaveToken const&);
    PlayerSuspendLevelStorageSaveToken(PlayerSuspendLevelStorageSaveToken const&);
    PlayerSuspendLevelStorageSaveToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerSuspendLevelStorageSaveToken(::EntityContext& entity);

    MCNAPI ~PlayerSuspendLevelStorageSaveToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::EntityContext& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
