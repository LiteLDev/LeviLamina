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
class ILevel;
class ItemDescriptor;
class ItemStack;
class MobEffect;
class Player;
class SaveContext;
class Vec3;
struct BeaconBeamSection;
// clang-format on

class BeaconBlockActor : public ::BlockActor, public ::Container {
public:
    // BeaconBlockActor inner types define
    using BeaconBeamSections = ::std::vector<::BeaconBeamSection>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BeaconBeamSection>>         mBeamSections;
    ::ll::TypedStorage<4, 4, float>                                       mBeamRot;
    ::ll::TypedStorage<4, 4, int>                                         mNumLevels;
    ::ll::TypedStorage<4, 4, int>                                         mNumLevelsSet;
    ::ll::TypedStorage<4, 4, int>                                         mBlockRefreshCounter;
    ::ll::TypedStorage<4, 4, int>                                         mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                         mSecondaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                         mPrimaryEffectTier;
    ::ll::TypedStorage<4, 4, int>                                         mSecondaryEffectTier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffect*>>                mBeaconEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::MobEffect*>>> mTierEffects;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconBlockActor() /*override*/ = default;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 21
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 7
    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 14
    virtual void removeItem(int slot, int count) /*override*/;

    // vIndex: 27
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

    // vIndex: 34
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 33
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BeaconBlockActor(::BlockPos const& pos);

    MCNAPI void _applyEffects(::BlockSource& region);

    MCNAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI bool _setEffect(int effectId, int& outEffectId, int& outTier);

    MCNAPI void checkShapeAndAchievement(::BlockSource& region);

    MCNAPI ::CompoundTag getBeaconData(::SaveContext const& saveContext);

    MCNAPI bool isEffectAvailable(int effectId) const;

    MCNAPI bool setSecondaryEffect(int effectId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockColor _getMediumColor(::BlockLegacy const& medium);

    MCNAPI static bool isPaymentItem(::ItemDescriptor const& pItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource& region);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $removeItem(int slot, int count);

    MCNAPI ::std::string $getName() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Player& player);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
