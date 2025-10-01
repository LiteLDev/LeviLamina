#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemDescriptor;
class ItemStack;
class MobEffect;
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
    ::ll::TypedStorage<1, 1, bool>                                        mPermanentlyRendered;
    ::ll::TypedStorage<1, 1, bool>                                        mClientRenderingNeedsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                        mIsBlockBaseLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeaconBlockActor() /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 20
    virtual bool hasAlphaLayer() const /*override*/;

    // vIndex: 7
    virtual bool isPermanentlyRendered() const /*override*/;

    // vIndex: 8
    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 14
    virtual void removeItem(int slot, int count) /*override*/;

    // vIndex: 25
    virtual ::std::string getName() const /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 22
    virtual void startOpen(::Actor&) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Actor& actor) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 31
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 30
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 41
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 42
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeaconBlockActor(::BlockPos const& pos, bool permanentlyRendered);

    MCAPI void _applyEffects(::BlockSource& region);

    MCAPI void
    _notifyBeamSectionsChange(::BlockSource& region, ::std::vector<::BeaconBeamSection> const& oldBeamSections);

    MCAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool _setEffect(int effectId, int& outEffectId, int& outTier);

    MCAPI void checkAchievement(::BlockSource& region);

    MCAPI void checkShape(::BlockSource& region);

    MCAPI void generateBeamSections(::BlockSource& region);

    MCAPI ::CompoundTag getBeaconData(::SaveContext const& saveContext);

    MCAPI bool isEffectAvailable(int effectId) const;

    MCAPI bool setSecondaryEffect(int effectId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BlockColor _getMediumColor(::BlockType const& medium);

    MCAPI static bool isPaymentItem(::ItemDescriptor const& pItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, bool permanentlyRendered);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD bool $hasAlphaLayer() const;

    MCFOLD bool $isPermanentlyRendered() const;

    MCAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCFOLD ::ItemStack const& $getItem(int slot) const;

    MCFOLD void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD void $removeItem(int slot, int count);

    MCAPI ::std::string $getName() const;

    MCFOLD int $getContainerSize() const;

    MCFOLD int $getMaxStackSize() const;

    MCFOLD void $startOpen(::Actor&);

    MCFOLD void $stopOpen(::Actor& actor);

    MCFOLD void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForContainer();
    // NOLINTEND
};
