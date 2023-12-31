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
#include "mc/world/actor/monster/Monster.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Guardian : public ::Monster {
public:
    // prevent constructor by default
    Guardian& operator=(Guardian const&);
    Guardian(Guardian const&);
    Guardian();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@Guardian@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@Guardian@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Guardian@@UEAA@XZ
    virtual ~Guardian() = default;

    // vIndex: 23, symbol: __unk_vfn_23
    virtual void __unk_vfn_23();

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 47, symbol: __unk_vfn_47
    virtual void __unk_vfn_47();

    // vIndex: 60, symbol: __unk_vfn_60
    virtual void __unk_vfn_60();

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: __unk_vfn_62
    virtual void __unk_vfn_62();

    // vIndex: 64, symbol: ?setTarget@Guardian@@UEAAXPEAVActor@@@Z
    virtual void setTarget(class Actor* entity);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 163, symbol: ?_hurt@Guardian@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 164, symbol: ?readAdditionalSaveData@Guardian@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 165, symbol: ?addAdditionalSaveData@Guardian@@MEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 179, symbol: ?checkSpawnRules@Guardian@@UEAA_N_N@Z
    virtual bool checkSpawnRules(bool fromSpawner);

    // vIndex: 184, symbol: ?getMaxHeadXRot@Guardian@@UEAAMXZ
    virtual float getMaxHeadXRot();

    // vIndex: 210, symbol: ?isDarkEnoughToSpawn@Guardian@@MEBA_NXZ
    virtual bool isDarkEnoughToSpawn() const;

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
    MCAPI void setAttackTime(int time);

    // symbol: ?setElder@Guardian@@QEAAX_N@Z
    MCAPI void setElder(bool value);

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
