#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    // vIndex: 0, symbol: __gen_??1NoteBlock@@UEAA@XZ
    virtual ~NoteBlock() = default;

    // vIndex: 65, symbol: ?onRedstoneUpdate@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 100, symbol: ?attack@NoteBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 104, symbol: ?triggerEvent@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@HH@Z
    virtual void triggerEvent(class BlockSource& region, class BlockPos const& pos, int instrument, int note) const;

    // vIndex: 145, symbol: ?onPlace@NoteBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@NoteBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@NoteBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // symbol: ??0NoteBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI NoteBlock(std::string const& nameId, int id);

    // symbol: ?enableSkullPlacement@NoteBlock@@QEAAAEAV1@_N@Z
    MCAPI class NoteBlock& enableSkullPlacement(bool enabled);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_triggerNoteParticle@NoteBlock@@AEBAXAEAVLevel@@AEBVVec3@@H@Z
    MCAPI void _triggerNoteParticle(class Level& level, class Vec3 const&, int note) const;

    // NOLINTEND
};
