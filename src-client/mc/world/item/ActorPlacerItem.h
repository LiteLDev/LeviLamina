#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInfoRegistry;
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
    // prevent constructor by default
    ActorPlacerItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void tearDown() /*override*/;

    // vIndex: 111
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    // vIndex: 74
    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const /*override*/;

    // vIndex: 90
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    // vIndex: 49
    virtual bool isLiquidClipItem() const /*override*/;

    // vIndex: 50
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const /*override*/;

    // vIndex: 81
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 61
    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    // vIndex: 66
    virtual bool isMultiColorTinted(::ItemStack const&) const /*override*/;

    // vIndex: 72
    virtual ::mce::Color getBaseColor(::ItemStack const&) const /*override*/;

    // vIndex: 73
    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const /*override*/;

    // vIndex: 65
    virtual bool isActorPlacerItem() const /*override*/;

    // vIndex: 123
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~ActorPlacerItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorPlacerItem(::std::string const& name, int id, ::ActorDefinitionIdentifier const& actorID);

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
    MCAPI static void
    forEachCustomEgg(::ItemRegistryRef itemRegistry, ::std::function<void(::Item const&)> const& callback);

    MCAPI static void initializeIcons();

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::ActorDefinitionIdentifier const& actorID);
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

    MCAPI bool $isMultiColorTinted(::ItemStack const&) const;

    MCAPI ::mce::Color $getBaseColor(::ItemStack const&) const;

    MCAPI ::mce::Color $getSecondaryColor(::ItemStack const&) const;

    MCFOLD bool $isActorPlacerItem() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
