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
#include "mc/world/actor/projectile/PredictableProjectile.h"
#include "mc/world/item/components/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LlamaSpit : public ::PredictableProjectile {
public:
    // prevent constructor by default
    LlamaSpit& operator=(LlamaSpit const&);
    LlamaSpit(LlamaSpit const&);
    LlamaSpit();

public:
    // NOLINTBEGIN
    // vIndex: 10, symbol: __gen_??1LlamaSpit@@UEAA@XZ
    virtual ~LlamaSpit() = default;

    // vIndex: 26, symbol: ?normalTick@LlamaSpit@@UEAAXXZ
    virtual void normalTick();

    // vIndex: 41, symbol: ?getBrightness@LlamaSpit@@UEBAMMAEBVIConstBlockSource@@@Z
    virtual float getBrightness(float, class IConstBlockSource const&) const;

    // vIndex: 45, symbol: ?isPickable@LlamaSpit@@UEAA_NXZ
    virtual bool isPickable();

    // vIndex: 76, symbol: ?getPickRadius@LlamaSpit@@UEAAMXZ
    virtual float getPickRadius();

    // vIndex: 92, symbol: ?getSourceUniqueID@LlamaSpit@@UEBA?AUActorUniqueID@@XZ
    virtual struct ActorUniqueID getSourceUniqueID() const;

    // symbol: ??0LlamaSpit@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI LlamaSpit(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
