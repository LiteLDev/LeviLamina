#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInfoRegistry;
class Agent;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemRegistryRef;
class ItemStack;
class ItemStackBase;
class Player;
class Vec3;
struct ResolvedItemIconInfo;
namespace mce { class Color; }
// clang-format on

class ActorPlacerItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tearDown() /*override*/;

    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    // vIndex: 73
    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const /*override*/;

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 48
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 49
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const /*override*/;

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 60
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 65
    virtual bool isMultiColorTinted(::ItemStack const&) const /*override*/;

    // vIndex: 71
    virtual ::mce::Color getBaseColor(::ItemStack const&) const /*override*/;

    // vIndex: 72
    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const /*override*/;

    // vIndex: 64
    virtual bool isActorPlacerItem() const /*override*/;

    // vIndex: 120
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~ActorPlacerItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ActorDefinitionIdentifier _getActorID(::BlockSource& region) const;

    MCAPI ::Actor* _spawnActorAt(
        ::BlockSource&     region,
        ::Vec3 const&      pos,
        ::Vec3 const&      playerFeetPos,
        ::ItemStack const& item,
        ::Actor*           spawner
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setAgentOwner(::Player& owner, ::Agent& agent);

    MCAPI static void
    forEachCustomEgg(::ItemRegistryRef itemRegistry, ::std::function<void(::Item const&)> const& callback);

    MCAPI static void registerCustomEggs(::ItemRegistryRef itemRegistry, ::ActorInfoRegistry const& registry);

    MCAPI static ::Actor* spawnOrMoveAgent(::Vec3 const& pos, ::Actor& owner);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<uint, ::std::string>& mCustomSpawnEggs();

    MCAPI static ::std::unordered_map<::HashedString, ::ResolvedItemIconInfo>& mEggTextureInfoMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tearDown();

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCFOLD bool $isLiquidClipItem() const;

    MCAPI bool $shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCFOLD bool $isValidAuxValue(int auxValue) const;

    MCFOLD bool $isMultiColorTinted(::ItemStack const&) const;

    MCFOLD ::mce::Color $getBaseColor(::ItemStack const&) const;

    MCFOLD ::mce::Color $getSecondaryColor(::ItemStack const&) const;

    MCFOLD bool $isActorPlacerItem() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
