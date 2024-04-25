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

class Goat : public ::Animal {
public:
    // prevent constructor by default
    Goat& operator=(Goat const&);
    Goat(Goat const&);
    Goat();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol: ?initializeComponents@Goat@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Goat@@UEAA@XZ
    virtual ~Goat() = default;

    // vIndex: 69, symbol: ?getAmbientSound@Goat@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 75, symbol: ?handleEntityEvent@Goat@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent id, int data);

    // vIndex: 146, symbol: ?updateEntitySpecificMolangVariables@Goat@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams& renderParams);

    // vIndex: 149, symbol: ?readAdditionalSaveData@Goat@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@Goat@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 156, symbol: ?getDeathSound@Goat@@UEAA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getDeathSound();

    // symbol: ??0Goat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Goat(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getHornCount@Goat@@QEBAHXZ
    MCAPI int getHornCount() const;

    // symbol: ?isScreaming@Goat@@QEAA_NXZ
    MCAPI bool isScreaming();

    // symbol: ?reduceHornCount@Goat@@QEAAXXZ
    MCAPI void reduceHornCount();

    // symbol: ?getCustomHurtSound@Goat@@SA?AV?$optional@W4LevelSoundEvent@Legacy@Puv@@@std@@AEAVMob@@@Z
    MCAPI static std::optional<::Puv::Legacy::LevelSoundEvent> getCustomHurtSound(class Mob&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_HORN_COUNT@Goat@@0HA
    MCAPI static int DEFAULT_HORN_COUNT;

    // symbol: ?SCREAMING_GOAT_VARIANT@Goat@@0HA
    MCAPI static int SCREAMING_GOAT_VARIANT;

    // NOLINTEND
};
