#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorFlags.h"
#include "mc/entity/utilities/ActorType.h"
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
    // vIndex: 4, symbol: ?reloadHardcoded@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@Guardian@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::Actor::InitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 63, symbol: __unk_vfn_63
    virtual void __unk_vfn_63();

    // vIndex: 65, symbol: ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 147, symbol: __unk_vfn_147
    virtual void __unk_vfn_147();

    // vIndex: 148, symbol: __unk_vfn_148
    virtual void __unk_vfn_148();

    // vIndex: 165, symbol: __unk_vfn_165
    virtual void __unk_vfn_165();

    // vIndex: 166, symbol: ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 167, symbol: ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 168, symbol: ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 170, symbol: __unk_vfn_170
    virtual void __unk_vfn_170();

    // vIndex: 171, symbol: ?_onSizeUpdated@Guardian@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 172, symbol: __unk_vfn_172
    virtual void __unk_vfn_172();

    // vIndex: 183, symbol: ?checkSpawnRules@Guardian@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 188, symbol: ?getMaxHeadXRot@Guardian@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 216, symbol: ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
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
    static auto& $ATTACK_TIME() { return ATTACK_TIME; }

    static auto& $FIRST_DAMAGE_TIME() { return FIRST_DAMAGE_TIME; }

    // NOLINTEND
};
