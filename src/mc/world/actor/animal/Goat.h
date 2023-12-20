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
    virtual void initializeComponents(::ActorInitializationMethod, class VariantParameterList const&);

    // vIndex: 10, symbol: __gen_??1Goat@@UEAA@XZ
    virtual ~Goat() = default;

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

    // vIndex: 77, symbol: ?getAmbientSound@Goat@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 83, symbol: ?handleEntityEvent@Goat@@UEAAXW4ActorEvent@@H@Z
    virtual void handleEntityEvent(::ActorEvent, int);

    // vIndex: 107, symbol: __unk_vfn_107
    virtual void __unk_vfn_107();

    // vIndex: 144, symbol: __unk_vfn_144
    virtual void __unk_vfn_144();

    // vIndex: 160, symbol: ?updateEntitySpecificMolangVariables@Goat@@UEAAXAEAVRenderParams@@@Z
    virtual void updateEntitySpecificMolangVariables(class RenderParams&);

    // vIndex: 162, symbol: __unk_vfn_162
    virtual void __unk_vfn_162();

    // vIndex: 164, symbol: ?readAdditionalSaveData@Goat@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 165, symbol: ?addAdditionalSaveData@Goat@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag&) const;

    // vIndex: 167, symbol: __unk_vfn_167
    virtual void __unk_vfn_167();

    // vIndex: 168, symbol: __unk_vfn_168
    virtual void __unk_vfn_168();

    // vIndex: 172, symbol: ?getHurtSound@Goat@@UEAA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getHurtSound();

    // vIndex: 173, symbol: ?getDeathSound@Goat@@UEAA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getDeathSound();

    // symbol: ??0Goat@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Goat(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&);

    // symbol: ?getHornCount@Goat@@QEBAHXZ
    MCAPI int getHornCount() const;

    // symbol: ?isScreaming@Goat@@QEAA_NXZ
    MCAPI bool isScreaming();

    // symbol: ?reduceHornCount@Goat@@QEAAXXZ
    MCAPI void reduceHornCount();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_HORN_COUNT@Goat@@0HA
    MCAPI static int DEFAULT_HORN_COUNT;

    // symbol: ?SCREAMING_GOAT_VARIANT@Goat@@0HA
    MCAPI static int SCREAMING_GOAT_VARIANT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $DEFAULT_HORN_COUNT() { return DEFAULT_HORN_COUNT; }

    static auto& $SCREAMING_GOAT_VARIANT() { return SCREAMING_GOAT_VARIANT; }

    // NOLINTEND
};
