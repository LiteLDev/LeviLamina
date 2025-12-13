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
    virtual void tearDown() /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual bool isLiquidClipItem() const /*override*/;

    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual bool isMultiColorTinted(::ItemStack const&) const /*override*/;

    virtual ::mce::Color getBaseColor(::ItemStack const&) const /*override*/;

    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const /*override*/;

    virtual bool isActorPlacerItem() const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

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

    MCAPI_C static void initializeIcons();

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
