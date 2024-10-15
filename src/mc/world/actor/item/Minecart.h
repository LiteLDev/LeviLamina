#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/puv/EquipmentSlot.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/packet/types/world/actor/ActorEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/material/MaterialType.h"

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
    virtual float getInterpolatedBodyYaw(float) const;

    // vIndex: 38
    virtual float getShadowRadius() const;

    // vIndex: 69
    virtual bool isInvulnerableTo(class ActorDamageSource const& source) const;

    // vIndex: 97
    virtual struct ActorUniqueID getControllingPlayer() const;

    // vIndex: 130
    virtual void kill();

    // vIndex: 146
    virtual bool _hurt(class ActorDamageSource const& source, float damage, bool, bool);

    // vIndex: 147
    virtual void readAdditionalSaveData(class CompoundTag const& tag, class DataLoadHelper&);

    // vIndex: 148
    virtual void addAdditionalSaveData(class CompoundTag& tag) const;

    // vIndex: 151
    virtual void destroy(class ActorDamageSource const&, bool dropMinecartComponents);

    // vIndex: 152
    virtual ::MinecartType getType() = 0;

    // vIndex: 153
    virtual class Block const* getDefaultDisplayBlock() const;

    // vIndex: 154
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 155
    virtual void applyNaturalSlowdown(class BlockSource&);

    // vIndex: 156
    virtual void _lazyInitDisplayBlock();

    MCAPI Minecart(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void dropMinecartWithContentsAndRemove(std::string_view vanillaMinecartName, bool dropMinecartComponents);

    MCAPI void postNormalTick(class BlockPos const& preNormalTickBlockPos);

    MCAPI class BlockPos preNormalTick();

    MCAPI void setCustomDisplay(bool displayValue);

    MCAPI void setDisplayBlock(class Block const& block);

    MCAPI static float getHeightOffset(struct AABBShapeComponent const& aabb);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _registerLoopingSounds();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        class ActorDefinitionGroup*             definitions,
        struct ActorDefinitionIdentifier const& definitionName,
        class EntityContext&                    entityContext
    );

    MCAPI void dtor$();

    MCAPI bool _hurt$(class ActorDamageSource const& source, float damage, bool, bool);

    MCAPI void _lazyInitDisplayBlock$();

    MCAPI void addAdditionalSaveData$(class CompoundTag& tag) const;

    MCAPI void applyNaturalSlowdown$(class BlockSource&);

    MCAPI void destroy$(class ActorDamageSource const&, bool dropMinecartComponents);

    MCAPI struct ActorUniqueID getControllingPlayer$() const;

    MCAPI class Block const* getDefaultDisplayBlock$() const;

    MCAPI int getDefaultDisplayOffset$() const;

    MCAPI float getInterpolatedBodyYaw$(float) const;

    MCAPI float getShadowRadius$() const;

    MCAPI bool isInvulnerableTo$(class ActorDamageSource const& source) const;

    MCAPI void kill$();

    MCAPI void readAdditionalSaveData$(class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void reloadHardcoded$(::ActorInitializationMethod method, class VariantParameterList const& params);

    MCAPI void reloadHardcodedClient$(::ActorInitializationMethod method, class VariantParameterList const& params);

    // NOLINTEND
};
