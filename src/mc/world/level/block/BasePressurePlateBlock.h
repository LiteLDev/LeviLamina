#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BasePressurePlateBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    BasePressurePlateBlock& operator=(BasePressurePlateBlock const&);
    BasePressurePlateBlock(BasePressurePlateBlock const&);
    BasePressurePlateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasePressurePlateBlock@@UEAA@XZ
    virtual ~BasePressurePlateBlock();

    // vIndex: 5, symbol:
    // ?getCollisionShape@BasePressurePlateBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@BasePressurePlateBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 46, symbol: ?isSignalSource@BasePressurePlateBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 61, symbol: ?checkIsPathable@BasePressurePlateBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85, symbol: ?mayPlace@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 99, symbol: ?isAttachedTo@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 101, symbol:
    // ?shouldTriggerEntityInside@BasePressurePlateBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual bool
    shouldTriggerEntityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 128, symbol: ?getVariant@BasePressurePlateBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 129, symbol: ?canSpawnOn@BasePressurePlateBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 145, symbol: ?onPlace@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 153, symbol: ?canSurvive@BasePressurePlateBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 162, symbol: ?entityInside@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // vIndex: 163, symbol: ?getTickDelay@BasePressurePlateBlock@@UEBAHXZ
    virtual int getTickDelay() const;

    // vIndex: 164, symbol: ?getSignalStrength@PressurePlateBlock@@MEBAHAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual int getSignalStrength(class BlockSource& region, class BlockPos const& pos) const = 0;

    // vIndex: 165, symbol: ?getSignalForData@PressurePlateBlock@@MEBAHH@Z
    virtual int getSignalForData(int data) const = 0;

    // vIndex: 166, symbol: ?getRedstoneSignal@PressurePlateBlock@@MEBAHH@Z
    virtual int getRedstoneSignal(int signal) const = 0;

    // vIndex: 167, symbol: ?getSensitiveAABB@BasePressurePlateBlock@@MEBA?BVAABB@@AEBVBlockPos@@@Z
    virtual class AABB const getSensitiveAABB(class BlockPos const& pos) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ??0BasePressurePlateBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI BasePressurePlateBlock(std::string const& nameId, int id, class Material const& material);

    // symbol: ?checkPressed@BasePressurePlateBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@HH@Z
    MCAPI void checkPressed(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          sourceEntity,
        int                   oldSignal,
        int                   newSignal
    ) const;

    // NOLINTEND
};
