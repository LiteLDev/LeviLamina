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

class Axolotl : public ::Animal {
public:
    // prevent constructor by default
    Axolotl& operator=(Axolotl const&);
    Axolotl(Axolotl const&);
    Axolotl();

public:
    // NOLINTBEGIN
    // vIndex: 6, symbol: ?initializeComponents@Axolotl@@UEAAXW4ActorInitializationMethod@@AEBVVariantParameterList@@@Z
    virtual void initializeComponents(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10, symbol: __gen_??1Axolotl@@UEAA@XZ
    virtual ~Axolotl() = default;

    // vIndex: 186, symbol: ?_getWalkTargetValue@Axolotl@@UEAAMAEBVBlockPos@@@Z
    virtual float _getWalkTargetValue(class BlockPos const& pos);

    // vIndex: 191, symbol: ?_getAdjustedAABBForSpawnCheck@Axolotl@@UEBA?AVAABB@@AEBV2@AEBVVec3@@@Z
    virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const& aabb, class Vec3 const& mobPos) const;

    // symbol: ??0Axolotl@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
    MCAPI Axolotl(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    // NOLINTEND
};
