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
#include "mc/enums/NewInteractionModel.h"
#include "mc/events/ActorEvent.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

class Guardian : public ::Monster {
public:
    // prevent constructor by default
    Guardian& operator=(Guardian const&);
    Guardian(Guardian const&);
    Guardian();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: ?reloadHardcoded@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 11, symbol:
    // ?reloadHardcodedClient@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 71, symbol: __unk_vfn_71
    virtual void __unk_vfn_71();

    // vIndex: 77, symbol: __unk_vfn_77
    virtual void __unk_vfn_77();

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

    // vIndex: 101, symbol: ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 164, symbol: __unk_vfn_164
    virtual void __unk_vfn_164();

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

    // vIndex: 239, symbol: __unk_vfn_239
    virtual void __unk_vfn_239();

    // vIndex: 240, symbol: ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 243, symbol: ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 244, symbol: ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 247, symbol: __unk_vfn_247
    virtual void __unk_vfn_247();

    // vIndex: 252, symbol: ?_onSizeUpdated@Guardian@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 253, symbol: __unk_vfn_253
    virtual void __unk_vfn_253();

    // vIndex: 268, symbol: ?checkSpawnRules@Guardian@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 276, symbol: __unk_vfn_276
    virtual void __unk_vfn_276();

    // vIndex: 277, symbol: ?getMaxHeadXRot@Guardian@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 280, symbol: __unk_vfn_280
    virtual void __unk_vfn_280();

    // vIndex: 323, symbol: __unk_vfn_323
    virtual void __unk_vfn_323();

    // vIndex: 325, symbol: ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
    virtual bool isDarkEnoughToSpawn() const;

    // symbol: ?canSeeInvisible@Guardian@@UEBA_NXZ
    MCVAPI bool canSeeInvisible() const;

    // symbol: ??0Guardian@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Guardian(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getAttackDuration@Guardian@@QEAAHXZ
    MCAPI int getAttackDuration();

    // symbol: ?getMoveEyeVector@Guardian@@QEAA?AVVec3@@XZ
    MCAPI class Vec3 getMoveEyeVector();

    // symbol: ?getTargetEntity@Guardian@@QEBAPEAVActor@@XZ
    MCAPI class Actor* getTargetEntity() const;

    // symbol: ?isElder@Guardian@@QEBA_NXZ
    MCAPI bool isElder() const;

    // symbol: ?isElderGhost@Guardian@@QEBA_NXZ
    MCAPI bool isElderGhost() const;

    // symbol: ?preAiStep@Guardian@@QEAAXXZ
    MCAPI void preAiStep();

    // symbol: ?setAttackTime@Guardian@@QEAAXH@Z
    MCAPI void setAttackTime(int);

    // symbol: ?setElder@Guardian@@QEAAX_N@Z
    MCAPI void setElder(bool);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?registerLoopingSounds@Guardian@@IEAAXXZ
    MCAPI void registerLoopingSounds();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ATTACK_TIME@Guardian@@0HB
    MCAPI static int const ATTACK_TIME;

    // symbol: ?FIRST_DAMAGE_TIME@Guardian@@0HB
    MCAPI static int const FIRST_DAMAGE_TIME;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $ATTACK_TIME() { return ATTACK_TIME; }

    auto& $FIRST_DAMAGE_TIME() { return FIRST_DAMAGE_TIME; }

    // NOLINTEND
};
