#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class NoteBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    NoteBlock& operator=(NoteBlock const&);
    NoteBlock(NoteBlock const&);
    NoteBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NoteBlock() = default;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 101
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 105
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int instrument, int note) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI NoteBlock(std::string const& nameId, int id);

    MCAPI class NoteBlock& enableSkullPlacement(bool enabled);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _triggerNoteParticle(class Level& level, class Vec3 const& vPos, int note) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool attack$(class Player* player, class BlockPos const& pos) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void triggerEvent$(class BlockSource& region, class BlockPos const& pos, int instrument, int note) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
