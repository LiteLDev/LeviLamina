#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/ArmorSlot.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@Minecart@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@Minecart@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: ??1Minecart@@UEAA@XZ
    virtual ~Minecart();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: ?getInterpolatedBodyYaw@Minecart@@UEBAMM@Z
    virtual float getInterpolatedBodyYaw(float) const;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: ?getShadowRadius@Minecart@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 50, symbol: __unk_vfn_50
    virtual void __unk_vfn_50();

    // vIndex: 51, symbol: ?isPickable@Minecart@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: __unk_vfn_53
    virtual void __unk_vfn_53();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 72, symbol: __unk_vfn_72
    virtual void __unk_vfn_72();

    // vIndex: 79, symbol: ?isInvulnerableTo@Minecart@@UEBA_NAEBVActorDamageSource@@@Z
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const;

    // vIndex: 89, symbol: __unk_vfn_89
    virtual void __unk_vfn_89();

    // vIndex: 90, symbol: __unk_vfn_90
    virtual void __unk_vfn_90();

    // vIndex: 92, symbol: __unk_vfn_92
    virtual void __unk_vfn_92();

    // vIndex: 102, symbol: __unk_vfn_102
    virtual void __unk_vfn_102();

    // vIndex: 103, symbol: __unk_vfn_103
    virtual void __unk_vfn_103();

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 108, symbol: __unk_vfn_108
    virtual void __unk_vfn_108();

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 116, symbol: __unk_vfn_116
    virtual void __unk_vfn_116();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 118, symbol: __unk_vfn_118
    virtual void __unk_vfn_118();

    // vIndex: 120, symbol: __unk_vfn_120
    virtual void __unk_vfn_120();

    // vIndex: 123, symbol: __unk_vfn_123
    virtual void __unk_vfn_123();

    // vIndex: 125, symbol: __unk_vfn_125
    virtual void __unk_vfn_125();

    // vIndex: 134, symbol: __unk_vfn_134
    virtual void __unk_vfn_134();

    // vIndex: 142, symbol: __unk_vfn_142
    virtual void __unk_vfn_142();

    // vIndex: 143, symbol: __unk_vfn_143
    virtual void __unk_vfn_143();

    // vIndex: 146, symbol: __unk_vfn_146
    virtual void __unk_vfn_146();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 149, symbol: ?kill@Minecart@@MEAAXXZ
    virtual void kill();

    // vIndex: 154, symbol: __unk_vfn_154
    virtual void __unk_vfn_154();

    // vIndex: 157, symbol: __unk_vfn_157
    virtual void __unk_vfn_157();

    // vIndex: 158, symbol: __unk_vfn_158
    virtual void __unk_vfn_158();

    // vIndex: 159, symbol: __unk_vfn_159
    virtual void __unk_vfn_159();

    // vIndex: 163, symbol: __unk_vfn_163
    virtual void __unk_vfn_163();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Minecart@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@Minecart@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Minecart@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?_onSizeUpdated@Minecart@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 173, symbol: ?destroy@Minecart@@UEAAXAEBVActorDamageSource@@_N@Z
    virtual void destroy(class ActorDamageSource const&, bool);

    // vIndex: 174, symbol: ?getType@MinecartTNT@@UEAA?AW4MinecartType@@XZ
    virtual ::MinecartType getType() = 0;

    // vIndex: 175, symbol: ?getDefaultDisplayBlock@Minecart@@UEBAPEBVBlock@@XZ
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 176, symbol: __unk_vfn_176
    virtual void __unk_vfn_176();

    // vIndex: 177, symbol: ?getDefaultDisplayOffset@Minecart@@UEBAHXZ
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 178, symbol: ?applyNaturalSlowdown@Minecart@@MEAAXAEAVBlockSource@@@Z
    virtual void applyNaturalSlowdown(class BlockSource&);

    // vIndex: 179, symbol: ?_lazyInitDisplayBlock@Minecart@@EEAAXXZ
    virtual void _lazyInitDisplayBlock();

    // symbol: ?canMakeStepSound@Minecart@@EEBA_NXZ
    MCVAPI bool canMakeStepSound() const;

    // symbol: ?getControllingPlayer@Minecart@@UEBA?AUActorUniqueID@@XZ
    MCVAPI struct ActorUniqueID getControllingPlayer() const;

    // symbol: ?getDefaultDisplayData@Minecart@@UEBAHXZ
    MCVAPI int getDefaultDisplayData() const;

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
