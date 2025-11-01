#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class Level;
class Vec3;
// clang-format on

class DanceComponentListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7bc365;
    ::ll::UntypedStorage<4, 4> mUnkd57385;
    ::ll::UntypedStorage<8, 8> mUnk6d47ca;
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
    MCNAPI void _onLevelSoundEvent(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int, ::ActorSoundIdentifier const&, bool);

    MCNAPI void setLevel(::Level& level);
    // NOLINTEND

};
