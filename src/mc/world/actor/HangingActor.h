#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HangingActor : public ::Actor {
public:
    // prevent constructor by default
    HangingActor& operator=(HangingActor const&);
    HangingActor(HangingActor const&);
    HangingActor();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@HangingActor@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@HangingActor@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1HangingActor@@UEAA@XZ
    virtual ~HangingActor();

    // vIndex: 26, symbol: ?normalTick@HangingActor@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 41, symbol: ?getBrightness@HangingActor@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const& region) const;

    // vIndex: 45, symbol: ?isPickable@HangingActor@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 70, symbol: ?isInvulnerableTo@HangingActor@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 148, symbol: ?_hurt@HangingActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@HangingActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@HangingActor@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?getWidth@Painting@@UEBAHXZ
    virtual int getWidth() const = 0;

    // vIndex: 154, symbol: ?getHeight@Painting@@UEBAHXZ
    virtual int getHeight() const = 0;

    // vIndex: 155, symbol: ?dropItem@Painting@@UEAAXXZ
    virtual void dropItem() = 0;

    // vIndex: 156, symbol: ?placeHangingEntity@HangingActor@@UEAA_NAEAVBlockSource@@H@Z
    virtual bool placeHangingEntity(class BlockSource& region, int direction);

    // vIndex: 157, symbol: ?wouldSurvive@HangingActor@@UEAA_NAEAVBlockSource@@@Z
    virtual bool wouldSurvive(class BlockSource& region);

    // symbol: ??0HangingActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI HangingActor(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getDirection@HangingActor@@QEBAHXZ
    MCAPI int getDirection() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_calculateAABB@HangingActor@@IEAAXXZ
    MCAPI void _calculateAABB();

    // symbol: ?_calculateActorPositionFromPlacementPosition@HangingActor@@IEAAXAEBVBlockPos@@@Z
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const& blockPos);

    // symbol: ?_wouldSurvive@HangingActor@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool _wouldSurvive(class BlockSource& region, class BlockPos const& blockPos, bool beingPlaced);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_blockContainsObstruction@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _blockContainsObstruction(class BlockSource const& region, class BlockPos const& blockPos) const;

    // symbol: ?_blockIsObstruction@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _blockIsObstruction(class BlockSource const& region, class BlockPos const& blockPos) const;

    // symbol: ?_canSurviveOnBlock@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool
    _canSurviveOnBlock(class BlockSource const& region, class BlockPos const& blockPos, bool beingPlaced) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?HANGING_OFFSET@HangingActor@@0MB
    MCAPI static float const HANGING_OFFSET;

    // NOLINTEND
};
