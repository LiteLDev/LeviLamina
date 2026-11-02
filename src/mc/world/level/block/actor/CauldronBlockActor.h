#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/item/alchemy/PotionType.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
namespace mce { class Color; }
// clang-format on

class CauldronBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                mPotionId;
    ::ll::TypedStorage<4, 4, ::PotionType>       mPotionType;
    ::ll::TypedStorage<1, 1, bool>               mHasCustomColor;
    ::ll::TypedStorage<4, 4, int>                mCustomColor;
    ::ll::TypedStorage<8, 1520, ::ItemStack[10]> mItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CauldronBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CauldronBlockActor() /*override*/ = default;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CauldronBlockActor(::BlockPos const& pos);

    MCNAPI ::mce::Color getMixDyeColor();

    MCNAPI ::mce::Color getPotionColor() const;

    MCNAPI void mixDyes();

    MCAPI void setCustomColor(::mce::Color const& color);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color& WATER_COLOR();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI ::std::string $getName() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();
    // NOLINTEND
};
