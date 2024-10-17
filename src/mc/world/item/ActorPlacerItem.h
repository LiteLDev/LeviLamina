#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ActorPlacerItem : public ::Item {
public:
    // prevent constructor by default
    ActorPlacerItem& operator=(ActorPlacerItem const&);
    ActorPlacerItem(ActorPlacerItem const&);
    ActorPlacerItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorPlacerItem() = default;

    // vIndex: 2
    virtual void tearDown();

    // vIndex: 45
    virtual bool isLiquidClipItem() const;

    // vIndex: 46
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const& block) const;

    // vIndex: 56
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 60
    virtual bool isActorPlacerItem() const;

    // vIndex: 61
    virtual bool isMultiColorTinted(class ItemStack const&) const;

    // vIndex: 67
    virtual class mce::Color getBaseColor(class ItemStack const&) const;

    // vIndex: 68
    virtual class mce::Color getSecondaryColor(class ItemStack const&) const;

    // vIndex: 69
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;

    // vIndex: 74
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 104
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 118
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    MCAPI ActorPlacerItem(std::string const& name, int id, struct ActorDefinitionIdentifier const& actorID);

    MCAPI static void
    forEachCustomEgg(class ItemRegistryRef itemRegistry, std::function<void(class Item const&)> const& callback);

    MCAPI static std::string getCustomSpawnEggName(int runtimeId);

    MCAPI static void registerCustomEggs(class ItemRegistryRef itemRegistry, class ActorInfoRegistry const& registry);

    MCAPI static class Actor* spawnOrMoveAgent(class Vec3 const& pos, class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI struct ActorDefinitionIdentifier _getActorID(class BlockSource& region) const;

    MCAPI class Actor* _spawnActorAt(
        class BlockSource&     region,
        class Vec3 const&      pos,
        class Vec3 const&      playerFeetPos,
        class ItemStack const& item,
        class Actor*           spawner
    ) const;

    MCAPI static void _setAgentOwner(class Player& owner, class Agent& agent);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& name, int id, struct ActorDefinitionIdentifier const& actorID);

    MCAPI class InteractionResult
    _useOn$(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const&) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI bool
    dispense$(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    MCAPI struct ActorDefinitionIdentifier getActorIdentifier$(class ItemStack const&) const;

    MCAPI class mce::Color getBaseColor$(class ItemStack const&) const;

    MCAPI struct ResolvedItemIconInfo getIconInfo$(class ItemStackBase const&, int, bool) const;

    MCAPI class mce::Color getSecondaryColor$(class ItemStack const&) const;

    MCAPI bool isActorPlacerItem$() const;

    MCAPI bool isLiquidClipItem$() const;

    MCAPI bool isMultiColorTinted$(class ItemStack const&) const;

    MCAPI bool isValidAuxValue$(int auxValue) const;

    MCAPI bool shouldInteractionWithBlockBypassLiquid$(class Block const& block) const;

    MCAPI void tearDown$();

    MCAPI static int const& EGG_MASK_ID();

    MCAPI static int const& NUM_SPAWN_EGG_TEXTURES();

    MCAPI static std::unordered_map<uint, std::string>& mCustomSpawnEggs();

    MCAPI static std::unordered_map<class HashedString, struct ResolvedItemIconInfo>& mEggTextureInfoMap();

    // NOLINTEND
};
