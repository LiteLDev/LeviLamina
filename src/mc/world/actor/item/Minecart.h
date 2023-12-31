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

    // vIndex: 18, symbol: ?getInterpolatedBodyYaw@Minecart@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float) const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: ?getShadowRadius@Minecart@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 51, symbol: ?isPickable@Minecart@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 78, symbol: ?isInvulnerableTo@Minecart@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 109, symbol: ?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 146, symbol: ?kill@Minecart@@MEAAXXZ
    virtual void kill();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Minecart@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 164, symbol: ?readAdditionalSaveData@Minecart@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@Minecart@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 169, symbol: ?destroy@Minecart@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 170, symbol: ?getType@MinecartChest@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType() = 0;

    // vIndex: 171, symbol: ?getDefaultDisplayBlock@Minecart@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 172, symbol: ?getDefaultDisplayOffset@Minecart@@UEBAHXZ
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 173, symbol: ?applyNaturalSlowdown@Minecart@@MEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource&);

    // vIndex: 174, symbol: ?_lazyInitDisplayBlock@Minecart@@EEAAXXZ
    virtual void _lazyInitDisplayBlock();

    // symbol: ?canMakeStepSound@Minecart@@EEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ??0Minecart@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Minecart(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?dropMinecartWithContentsAndRemove@Minecart@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI void dropMinecartWithContentsAndRemove(std::string_view, bool);

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
