#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/HandSlot.h"
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
class Experiments;
class HashedString;
class InteractionResult;
class ItemDescriptor;
class ItemRegistryRef;
class ItemStack;
class ItemStackBase;
class Vec3;
struct ItemTintStrategy;
struct ResolvedItemIconInfo;
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
    virtual void tearDown() /*override*/;

    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const&, int, bool) const /*override*/;

    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const /*override*/;

    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const /*override*/;

    virtual bool isLiquidClipItem() const /*override*/;

    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual bool isValidAuxValue(int auxValue) const /*override*/;

    virtual ::ItemTintStrategy getTintStrategy() const /*override*/;

    virtual bool isActorPlacerItem() const /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ActorDefinitionIdentifier _getActorID(::BlockSource& region) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    forEachCustomEgg(::ItemRegistryRef itemRegistry, ::brstd::function_ref<void(::Item const&)> callback);

    MCNAPI static ::std::string getCustomSpawnEggName(int runtimeId);

#ifdef LL_PLAT_C
    MCNAPI static void initializeIcons(::std::unordered_map<::HashedString, ::ResolvedItemIconInfo> icons);
#endif

    MCNAPI static void registerCustomEggs(
        ::ItemRegistryRef          itemRegistry,
        ::ActorInfoRegistry const& registry,
        ::Experiments const&       experiments
    );

    MCNAPI static ::Actor* spawnOrMoveAgent(::Vec3 const& pos, ::Actor& owner);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<uint, ::std::string>& mCustomSpawnEggs();

    MCNAPI static ::std::unordered_map<::HashedString, ::ResolvedItemIconInfo>& mEggTextureInfoMap();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tearDown();

    MCNAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const&, int, bool) const;

    MCNAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCNAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCNAPI bool $isLiquidClipItem() const;

    MCNAPI bool $shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI bool $isValidAuxValue(int auxValue) const;

    MCNAPI ::ItemTintStrategy $getTintStrategy() const;

    MCNAPI bool $isActorPlacerItem() const;

    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
