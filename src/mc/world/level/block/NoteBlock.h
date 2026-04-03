#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Level;
class Player;
class Vec3;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRedstoneUpdateEvent; }
// clang-format on

class NoteBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mSkullPlacementEnabled;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    virtual void triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const /*override*/;

    virtual ~NoteBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onRedstoneUpdate(::BlockEvents::BlockRedstoneUpdateEvent& blockEvent) const;

    MCAPI void _triggerNoteParticle(::Level& level, ::Vec3 const& vPos, int note) const;

    MCAPI ::NoteBlock& enableSkullPlacement(bool enabled);

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isInteractiveBlock() const;

    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI void $triggerEvent(::BlockSource& region, ::BlockPos const& pos, int b0, int b1) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
