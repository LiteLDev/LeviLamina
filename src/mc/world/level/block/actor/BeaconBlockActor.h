#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockLegacy;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ItemDescriptor;
class ItemStack;
class Level;
class Player;
class SaveContext;
struct BeaconBeamSection;
// clang-format on

class BeaconBlockActor : public ::BlockActor, public ::Container {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf9577e;
    ::ll::UntypedStorage<4, 4>  mUnk112af5;
    ::ll::UntypedStorage<4, 4>  mUnke4252b;
    ::ll::UntypedStorage<4, 4>  mUnk8c91ef;
    ::ll::UntypedStorage<4, 4>  mUnk8c60cc;
    ::ll::UntypedStorage<4, 4>  mUnk5442ef;
    ::ll::UntypedStorage<4, 4>  mUnk479d98;
    ::ll::UntypedStorage<4, 4>  mUnkdee6c7;
    ::ll::UntypedStorage<4, 4>  mUnkb92cc9;
    ::ll::UntypedStorage<8, 24> mUnk13066a;
    ::ll::UntypedStorage<8, 24> mUnk58a14e;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconBlockActor& operator=(BeaconBlockActor const&);
    BeaconBlockActor(BeaconBlockActor const&);
    BeaconBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconBlockActor() /*override*/ = default;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 20
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 14
    virtual void removeItem(int slot, int count) /*override*/;

    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 33
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 32
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BeaconBlockActor(::BlockPos const& pos);

    MCAPI void _applyEffects(::BlockSource& region);

    MCAPI bool _isEffectValid(int effectId) const;

    MCAPI bool _isSecondaryEffectValid(int effectId) const;

    MCAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool _setEffect(int effectId, int& outEffectId, int& outTier);

    MCAPI void checkShapeAndAchievement(::BlockSource& region);

    MCAPI ::CompoundTag getBeaconData(::SaveContext const& saveContext);

    MCAPI bool isEffectAvailable(int effectId) const;

    MCAPI bool isSecondaryAvailable() const;

    MCAPI bool setPrimaryEffect(int effectId);

    MCAPI bool setSecondaryEffect(int effectId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockColor _getMediumColor(::BlockLegacy const& medium);

    MCAPI static bool isPaymentItem(::ItemDescriptor const& pItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $hasAlphaLayer() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $removeItem(int slot, int count);

    MCAPI ::std::string $getName() const;

    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI void $startOpen(::Player& player);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI ::Container* $getContainer();

    MCAPI ::Container const* $getContainer() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
