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

class BannerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    BannerBlock& operator=(BannerBlock const&);
    BannerBlock(BannerBlock const&);
    BannerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BannerBlock@@UEAA@XZ
    virtual ~BannerBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@BannerBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@BannerBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 61, symbol: ?checkIsPathable@BannerBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 92, symbol: ?neighborChanged@BannerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@BannerBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 128, symbol: ?getVariant@BannerBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@BannerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@BannerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@BannerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0BannerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
    MCAPI BannerBlock(std::string const& nameId, int id, bool onGround);

    // symbol: ?itemInstanceFromBlockEntity@BannerBlock@@SA?AVItemInstance@@V?$not_null@PEBVBannerBlockActor@@@gsl@@@Z
    MCAPI static class ItemInstance itemInstanceFromBlockEntity(gsl::not_null<class BannerBlockActor const*>);

    // symbol: ?EAST_AABB@BannerBlock@@2VAABB@@A
    MCAPI static class AABB EAST_AABB;

    // symbol: ?NORTH_AABB@BannerBlock@@2VAABB@@A
    MCAPI static class AABB NORTH_AABB;

    // symbol: ?SOUTH_AABB@BannerBlock@@2VAABB@@A
    MCAPI static class AABB SOUTH_AABB;

    // symbol: ?STANDING_AABB@BannerBlock@@2VAABB@@A
    MCAPI static class AABB STANDING_AABB;

    // symbol: ?WEST_AABB@BannerBlock@@2VAABB@@A
    MCAPI static class AABB WEST_AABB;

    // NOLINTEND
};
