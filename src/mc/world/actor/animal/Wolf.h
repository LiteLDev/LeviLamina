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
#include "mc/world/actor/animal/Animal.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Wolf : public ::Animal {
public:
    // prevent constructor by default
    Wolf& operator=(Wolf const&);
    Wolf(Wolf const&);
    Wolf();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1Wolf@@UEAA@XZ
    virtual ~Wolf() = default;

    // vIndex: 61, symbol: ?setSitting@Wolf@@UEAAX_N@Z
    virtual void setSitting(bool value);

    // vIndex: 69, symbol: ?getAmbientSound@Wolf@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 75, symbol: ?handleEntityEvent@Wolf@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 90, symbol: ?load@Wolf@@UEAA_NAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual bool load(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 101, symbol: ?onSynchedDataUpdate@Wolf@@UEAAXH@Z
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 148, symbol: ?_hurt@Wolf@@MEAA_NAEBVActorDamageSource@@M_N1@Z
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 168, symbol: ?isAlliedTo@Wolf@@UEAA_NPEAVMob@@@Z
    virtual bool isAlliedTo(class Mob* other);

    // vIndex: 170, symbol: ?getArmorValue@Wolf@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 183, symbol: ?onBorn@Wolf@@UEAAXAEAVActor@@0@Z
    virtual void onBorn(class Actor& parentLeft, class Actor& parentRight);

    // vIndex: 189, symbol: ?newServerAiStep@Wolf@@UEAAXXZ
    virtual void newServerAiStep();

    // symbol: ??0Wolf@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Wolf(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getHeadRollAngle@Wolf@@QEAAMM@Z
    MCAPI float getHeadRollAngle(float a);

    // symbol: ?getShakeAnim@Wolf@@QEBAMXZ
    MCAPI float getShakeAnim() const;

    // symbol: ?getTailAngle@Wolf@@QEAAMXZ
    MCAPI float getTailAngle();

    // symbol: ?isShaking@Wolf@@QEBA_NXZ
    MCAPI bool isShaking() const;

    // symbol: ?postNormalTick@Wolf@@QEAAXXZ
    MCAPI void postNormalTick();

    // symbol:
    // ?getCustomHurtSound@Wolf@@SA?AV?$optional@W4LevelSoundEvent@Legacy@Puv@@@std@@AEAVMob@@W4ActorDamageCause@@@Z
    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getCustomHurtSound(class Mob&, ::ActorDamageCause);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_avoidSnowBury@Wolf@@AEAAXXZ
    MCAPI void _avoidSnowBury();

    // NOLINTEND
};
