#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Level;
class Mob;
// clang-format on

class StompEggGoal : public ::StompBlockGoal {
public:
    // prevent constructor by default
    StompEggGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void setInterval(int const interval) /*override*/;

    virtual void _createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos) /*override*/;

    virtual void _createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos) /*override*/;

    virtual void _playBreakProgressSound(::Level& pos, ::BlockSource&, ::BlockPos) /*override*/;

    virtual void _playDestroySound(::Level& pos, ::BlockSource&, ::BlockPos) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StompEggGoal(::Mob& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $setInterval(int const interval);

    MCAPI void $_createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCAPI void $_createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCAPI void $_playBreakProgressSound(::Level& pos, ::BlockSource&, ::BlockPos);

    MCAPI void $_playDestroySound(::Level& pos, ::BlockSource&, ::BlockPos);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
