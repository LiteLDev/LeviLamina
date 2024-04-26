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
#include "mc/world/actor/projectile/Throwable.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ThrownPotion : public ::Throwable {
public:
    // prevent constructor by default
    ThrownPotion& operator=(ThrownPotion const&);
    ThrownPotion(ThrownPotion const&);
    ThrownPotion();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol:
    // ?initializeComponents@ThrownPotion@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1ThrownPotion@@UEAA@XZ
    virtual ~ThrownPotion() = default;

    // vIndex: 91, symbol: ?queryEntityRenderer@ThrownPotion@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& queryEntityRenderer() const;

    // vIndex: 128, symbol: ?setAuxValue@ThrownPotion@@UEAAXH@Z
    virtual void setAuxValue(int aux);

    // vIndex: 149, symbol: ?readAdditionalSaveData@ThrownPotion@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@ThrownPotion@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ??0ThrownPotion@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI ThrownPotion(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // symbol: ?getPotionId@ThrownPotion@@QEBAFXZ
    MCAPI short getPotionId() const;

    // symbol: ?setLinger@ThrownPotion@@QEAAX_N@Z
    MCAPI void setLinger(bool linger);

    // symbol: ?SPLASH_RANGE@ThrownPotion@@2MB
    MCAPI static float const SPLASH_RANGE;

    // NOLINTEND
};
