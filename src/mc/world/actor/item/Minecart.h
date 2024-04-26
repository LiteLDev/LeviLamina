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
#include "mc/enums/MinecartType.h"
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

class Minecart : public ::Actor {
public:
    // prevent constructor by default
    Minecart& operator=(Minecart const&);
    Minecart(Minecart const&);
    Minecart();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Minecart@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@Minecart@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: ??1Minecart@@UEAA@XZ
    virtual ~Minecart();

    // vIndex: 17, symbol: ?getInterpolatedBodyYaw@Minecart@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float a) const;

    // vIndex: 38, symbol: ?getShadowRadius@Minecart@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 45, symbol: ?isPickable@Minecart@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 70, symbol: ?isInvulnerableTo@Minecart@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 99, symbol: ?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 132, symbol: ?kill@Minecart@@MEAAXXZ
    virtual void kill();

    // vIndex: 148, symbol: ?_hurt@Minecart@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Minecart@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Minecart@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?destroy@Minecart@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 154, symbol: ?getType@MinecartChest@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType() = 0;

    // vIndex: 155, symbol: ?getDefaultDisplayBlock@Minecart@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 156, symbol: ?getDefaultDisplayOffset@Minecart@@UEBAHXZ
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 157, symbol: ?applyNaturalSlowdown@Minecart@@MEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource& region);

    // vIndex: 158, symbol: ?_lazyInitDisplayBlock@Minecart@@EEAAXXZ
    virtual void _lazyInitDisplayBlock();

    // symbol: ??0Minecart@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Minecart(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?dropMinecartWithContentsAndRemove@Minecart@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI void dropMinecartWithContentsAndRemove(std::string_view, bool dropMinecartComponents);

    // symbol: ?postNormalTick@Minecart@@QEAAXAEBVBlockPos@@@Z
    MCAPI void postNormalTick(class BlockPos const&);

    // symbol: ?preNormalTick@Minecart@@QEAA?AVBlockPos@@XZ
    MCAPI class BlockPos preNormalTick();

    // symbol: ?setCustomDisplay@Minecart@@QEAAX_N@Z
    MCAPI void setCustomDisplay(bool displayValue);

    // symbol: ?setDisplayBlock@Minecart@@QEAAXAEBVBlock@@@Z
    MCAPI void setDisplayBlock(class Block const& block);

    // symbol: ?getHeightOffset@Minecart@@SAMAEBUAABBShapeComponent@@@Z
    MCAPI static float getHeightOffset(struct AABBShapeComponent const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_registerLoopingSounds@Minecart@@AEAAXXZ
    MCAPI void _registerLoopingSounds();

    // NOLINTEND
};
