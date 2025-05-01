#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/StompBlockGoal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Level;
// clang-format on

class StompEggGoal : public ::StompBlockGoal {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 18
    virtual void _createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos) /*override*/;

    // vIndex: 19
    virtual void _createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos) /*override*/;

    // vIndex: 20
    virtual void _playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos pos) /*override*/;

    // vIndex: 21
    virtual void _playDestroySound(::Level&, ::BlockSource&, ::BlockPos pos) /*override*/;

    // vIndex: 0
    virtual ~StompEggGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $_createBreakProgressParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCNAPI void $_createDestroyParticles(::Level& level, ::BlockSource& region, ::BlockPos pos);

    MCNAPI void $_playBreakProgressSound(::Level&, ::BlockSource&, ::BlockPos pos);

    MCNAPI void $_playDestroySound(::Level&, ::BlockSource&, ::BlockPos pos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
