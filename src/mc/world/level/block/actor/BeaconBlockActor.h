#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Container.h"
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
class ItemDescriptor;
class ItemStack;
class MobEffect;
class SaveContext;
class Vec3;
struct BeaconBeamSection;
// clang-format on

class BeaconBlockActor : public ::VanillaBlockActor, public ::Container {
public:
    // BeaconBlockActor inner types define
    using BeaconBeamSections = ::std::vector<::BeaconBeamSection>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BeaconBeamSection>>               mBeamSections;
    ::ll::TypedStorage<4, 4, float>                                             mBeamRot;
    ::ll::TypedStorage<4, 4, int>                                               mNumLevels;
    ::ll::TypedStorage<4, 4, int>                                               mNumLevelsSet;
    ::ll::TypedStorage<4, 4, int>                                               mBlockRefreshCounter;
    ::ll::TypedStorage<4, 4, int>                                               mPrimaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                               mSecondaryEffectId;
    ::ll::TypedStorage<4, 4, int>                                               mPrimaryEffectTier;
    ::ll::TypedStorage<4, 4, int>                                               mSecondaryEffectTier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobEffect const*>>                mBeaconEffects;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::MobEffect const*>>> mTierEffects;
    ::ll::TypedStorage<1, 1, bool>                                              mPermanentlyRendered;
    ::ll::TypedStorage<1, 1, bool>                                              mClientRenderingNeedsUpdate;
    ::ll::TypedStorage<1, 1, bool>                                              mIsBlockBaseLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    BeaconBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BeaconBlockActor() /*override*/ = default;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool hasAlphaLayer() const /*override*/;

    virtual bool isPermanentlyRendered() const /*override*/;

    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual void removeItem(int slot, int count) /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual void startOpen(::Actor&) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeaconBlockActor(::BlockPos const& pos, bool permanentlyRendered);

    MCNAPI int _getEffectTier(int effectId) const;

    MCNAPI void
    _notifyBeamSectionsChange(::BlockSource& region, ::std::vector<::BeaconBeamSection> const& oldBeamSections);

#ifdef LL_PLAT_C
    MCNAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif

#ifdef LL_PLAT_S
    MCNAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;
#endif

#ifdef LL_PLAT_C
    MCAPI void checkShape(::BlockSource& region);

    MCNAPI void generateBeamSections(::BlockSource& region);
#endif

    MCNAPI bool setSecondaryEffect(int effectId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isPaymentItem(::ItemDescriptor const& pItem);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos, bool permanentlyRendered);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $hasAlphaLayer() const;

    MCNAPI bool $isPermanentlyRendered() const;

    MCNAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $removeItem(int slot, int count);

    MCNAPI ::std::string $getName() const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor& actor);

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
};
