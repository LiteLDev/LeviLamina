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
    Minecart& operator=(Minecart const&) = delete;
    Minecart(Minecart const&)            = delete;
    Minecart()                           = delete;

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

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 68, symbol: ?getShadowHeightOffs@Minecart@@UEAAMXZ
    virtual float getShadowHeightOffs();

    // vIndex: 69, symbol: ?getShadowRadius@Minecart@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

    // vIndex: 82, symbol: ?isPickable@Minecart@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 83, symbol: __unk_vfn_83
    virtual void __unk_vfn_83();

    // vIndex: 86, symbol: __unk_vfn_86
    virtual void __unk_vfn_86();

    // vIndex: 93, symbol: __unk_vfn_93
    virtual void __unk_vfn_93();

    // vIndex: 95, symbol: __unk_vfn_95
    virtual void __unk_vfn_95();

    // vIndex: 96, symbol: __unk_vfn_96
    virtual void __unk_vfn_96();

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 120, symbol: ?isInvulnerableTo@Minecart@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 125, symbol: ?onBounceStarted@Minecart@@UEAAXAEBVBlockPos@@AEBVBlock@@@Z
    virtual void onBounceStarted(class BlockPos const&, class Block const&);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

    // vIndex: 166, symbol: ?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 178, symbol: __unk_vfn_178
    virtual void __unk_vfn_178();

    // vIndex: 202, symbol: __unk_vfn_202
    virtual void __unk_vfn_202();

    // vIndex: 203, symbol: __unk_vfn_203
    virtual void __unk_vfn_203();

    // vIndex: 219, symbol: __unk_vfn_219
    virtual void __unk_vfn_219();

    // vIndex: 222, symbol: __unk_vfn_222
    virtual void __unk_vfn_222();

    // vIndex: 223, symbol: ?kill@Minecart@@MEAAXXZ
    virtual void kill();

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Minecart@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@Minecart@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@Minecart@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 252, symbol: ?_onSizeUpdated@Minecart@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 254, symbol: ?destroy@Minecart@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 255, symbol: ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType() = 0;

    // vIndex: 256, symbol: ?getDefaultDisplayBlock@Minecart@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 257, symbol: __unk_vfn_257
    virtual void __unk_vfn_257();

    // vIndex: 258, symbol: ?getDefaultDisplayOffset@Minecart@@UEBAHXZ
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 259, symbol: ?applyNaturalSlowdown@Minecart@@MEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource&);

    // vIndex: 260, symbol: ?_lazyInitDisplayBlock@Minecart@@EEAAXXZ
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
