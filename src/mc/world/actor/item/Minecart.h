#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/AnimationComponentGroupType.h"
#include "mc/enums/ArmorMaterialType.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/ArmorTextureType.h"
#include "mc/enums/EquipmentSlot.h"
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

class Minecart : public ::Actor {
public:
    // prevent constructor by default
    Minecart& operator=(Minecart const&);
    Minecart(Minecart const&);
    Minecart();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Minecart@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 11, symbol:
    // ?reloadHardcodedClient@Minecart@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 29, symbol: ?getInterpolatedBodyYaw@Minecart@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float) const;

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 67, symbol: ?getShadowHeightOffs@Minecart@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 68, symbol: ?getShadowRadius@Minecart@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

    // vIndex: 81, symbol: ?isPickable@Minecart@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 82, symbol: __unk_vfn_82
    virtual void __unk_vfn_82();

    // vIndex: 85, symbol: __unk_vfn_85
    virtual void __unk_vfn_85();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 94, symbol: __unk_vfn_94
    virtual void __unk_vfn_94();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 97, symbol: __unk_vfn_97
    virtual void __unk_vfn_97();

    // vIndex: 119, symbol: ?isInvulnerableTo@Minecart@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 123, symbol: ?onBounceStarted@Minecart@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void onBounceStarted(class BlockPos const&, class Block const&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 174, symbol: __unk_vfn_174
    virtual void __unk_vfn_174();

    // vIndex: 198, symbol: __unk_vfn_198
    virtual void __unk_vfn_198();

    // vIndex: 199, symbol: __unk_vfn_199
    virtual void __unk_vfn_199();

    // vIndex: 215, symbol: __unk_vfn_215
    virtual void __unk_vfn_215();

    // vIndex: 218, symbol: __unk_vfn_218
    virtual void __unk_vfn_218();

    // vIndex: 219, symbol: ?kill@Minecart@@MEAAXXZ
    virtual void kill();

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Minecart@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@Minecart@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Minecart@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 247, symbol: ?_onSizeUpdated@Minecart@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 249, symbol: ?destroy@Minecart@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 250, symbol: ?getType@MinecartRideable@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType() = 0;

    // vIndex: 251, symbol: ?getDefaultDisplayBlock@Minecart@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 252, symbol: __unk_vfn_252
    virtual void __unk_vfn_252();

    // vIndex: 253, symbol: ?getDefaultDisplayOffset@Minecart@@UEBAHXZ
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 254, symbol: ?applyNaturalSlowdown@Minecart@@MEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource&);

    // vIndex: 255, symbol: ?_lazyInitDisplayBlock@Minecart@@EEAAXXZ
    virtual void _lazyInitDisplayBlock();

    // symbol: ?canMakeStepSound@Minecart@@EEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ?getDefaultDisplayData@Minecart@@UEBAHXZ
    MCVAPI int getDefaultDisplayData() const;

    // symbol: ??1Minecart@@UEAA@XZ
    MCVAPI ~Minecart();

    // symbol: ??0Minecart@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Minecart(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?dropMinecartWithContentsAndRemove@Minecart@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI void dropMinecartWithContentsAndRemove(std::string_view, bool);

    // symbol: ?postNormalTick@Minecart@@QEAAXAEBVBlockPos@@@Z
    MCAPI void postNormalTick(class BlockPos const&);

    // symbol: ?preNormalTick@Minecart@@QEAA?AVBlockPos@@XZ
    MCAPI class BlockPos preNormalTick();

    // symbol: ?setDisplayBlock@Minecart@@QEAAXAEBVBlock@@@Z
    MCAPI void setDisplayBlock(class Block const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_registerLoopingSounds@Minecart@@AEAAXXZ
    MCAPI void _registerLoopingSounds();

    // NOLINTEND
};
