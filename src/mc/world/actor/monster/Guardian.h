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

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 70, symbol: __unk_vfn_70
    virtual void __unk_vfn_70();

    // vIndex: 76, symbol: __unk_vfn_76
    virtual void __unk_vfn_76();

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

    // vIndex: 100, symbol: ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor*);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

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

    // vIndex: 235, symbol: __unk_vfn_235
    virtual void __unk_vfn_235();

    // vIndex: 236, symbol: ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool);

    // vIndex: 239, symbol: ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 240, symbol: ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 243, symbol: __unk_vfn_243
    virtual void __unk_vfn_243();

    // vIndex: 247, symbol: ?_onSizeUpdated@Guardian@@EEAAXXZ
    virtual void _onSizeUpdated();

    // vIndex: 248, symbol: __unk_vfn_248
    virtual void __unk_vfn_248();

    // vIndex: 262, symbol: ?checkSpawnRules@Guardian@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool);

    // vIndex: 270, symbol: __unk_vfn_270
    virtual void __unk_vfn_270();

    // vIndex: 271, symbol: ?getMaxHeadXRot@Guardian@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 274, symbol: __unk_vfn_274
    virtual void __unk_vfn_274();

    // vIndex: 318, symbol: ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
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
