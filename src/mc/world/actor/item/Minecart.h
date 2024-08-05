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
#include "mc/enums/HandSlot.h"
#include "mc/enums/InputMode.h"
#include "mc/enums/MaterialType.h"
#include "mc/enums/MinecartType.h"
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

class Minecart : public ::Actor {
public:
    // prevent constructor by default
    Minecart& operator=(Minecart const&);
    Minecart(Minecart const&);
    Minecart();

public:
    // NOLINTBEGIN
    // vIndex: 4
    virtual void reloadHardcoded(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 5
    virtual void reloadHardcodedClient(::ActorInitializationMethod method, class VariantParameterList const& params);

    // vIndex: 10
    virtual ~Minecart();

    // vIndex: 17
    virtual float getInterpolatedBodyYaw(float a) const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 97
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 130
    virtual void kill();

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool knock, bool ignite);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual void destroy(class ActorDamageSource const& source, bool dropMinecartComponents);

    // vIndex: 152
    virtual ::MinecartType getType() = 0;

    // vIndex: 153
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 154
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 155
    virtual void applyNaturalSlowdown(class BlockSource& region);

    // vIndex: 156
    virtual void _lazyInitDisplayBlock();

    MCAPI Minecart(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void dropMinecartWithContentsAndRemove(std::string_view, bool dropMinecartComponents);

    MCAPI void postNormalTick(class BlockPos const&);

    MCAPI class BlockPos preNormalTick();

    MCAPI void setCustomDisplay(bool displayValue);

    MCAPI void setDisplayBlock(class Block const& block);

    MCAPI static float getHeightOffset(struct AABBShapeComponent const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _registerLoopingSounds();

    // NOLINTEND
};
