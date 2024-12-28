#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Level;
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class DanceComponentListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7bc365;
    ::ll::UntypedStorage<4, 4>  mUnkd57385;
    ::ll::UntypedStorage<8, 8>  mUnk6d47ca;
    ::ll::UntypedStorage<8, 24> mUnkf7e713;
    ::ll::UntypedStorage<4, 12> mUnka58bc4;
    ::ll::UntypedStorage<8, 16> mUnk46cd99;
    // NOLINTEND

public:
    // prevent constructor by default
    DanceComponentListener& operator=(DanceComponentListener const&);
    DanceComponentListener(DanceComponentListener const&);
    DanceComponentListener();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onLevelSoundEvent(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::ActorDefinitionIdentifier const&     entityType,
        bool                                   isBabyMob,
        bool                                   isGlobal
    );

    MCAPI void setLevel(::Level& level);

    MCAPI ~DanceComponentListener();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
