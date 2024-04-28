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
#include "mc/world/actor/Actor.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LightningBolt : public ::Actor {
public:
    // prevent constructor by default
    LightningBolt& operator=(LightningBolt const&);
    LightningBolt(LightningBolt const&);
    LightningBolt();

public:
    // NOLINTBEGIN
    // vIndex: 4, symbol: ?reloadHardcoded@LightningBolt@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5, symbol:
    // ?reloadHardcodedClient@LightningBolt@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1LightningBolt@@UEAA@XZ
    virtual ~LightningBolt() = default;

    // vIndex: 26, symbol: ?normalTick@LightningBolt@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 38, symbol: ?getShadowRadius@LightningBolt@@UEBAMXZ
    virtual float getShadowRadius() const;

    // vIndex: 149, symbol: ?readAdditionalSaveData@LightningBolt@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 150, symbol: ?addAdditionalSaveData@LightningBolt@@UEBAXAEAVCompoundTag@@@Z
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 153, symbol: ?shouldAlwaysRender@LightningBolt@@UEAA_NXZ
    virtual bool shouldAlwaysRender();

    // symbol: ??0LightningBolt@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI LightningBolt(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_shouldSetOnFire@LightningBolt@@AEBA_NXZ
    MCAPI bool _shouldSetOnFire() const;

    // NOLINTEND
};
