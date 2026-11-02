#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/ChestType.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class DynamicContainerTracker;
class ILevel;
class IVanillaRenderBlockActorComponent;
class ItemStack;
class Player;
class SaveContext;
// clang-format on

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // ChestBlockActor inner types declare
    // clang-format off
    class ChestCloser;
    // clang-format on

    // ChestBlockActor inner types define
    class ChestCloser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChestBlockActor&> mChest;
        ::ll::TypedStorage<1, 1, bool>               mIsUsed;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>    mActorId;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChestCloser& operator=(ChestCloser const&);
        ChestCloser(ChestCloser const&);
        ChestCloser();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void close();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mSpeed;
    ::ll::TypedStorage<1, 1, bool>                                   mIsGlobalChest;
    ::ll::TypedStorage<1, 1, bool>                                   mAlwayCheckObstructionComponent;
    ::ll::TypedStorage<4, 4, float>                                  mObstructionHeight;
    bool                                                             mPairLead : 1;
    ::ll::TypedStorage<4, 4, float>                                  mOpenness;
    ::ll::TypedStorage<4, 4, float>                                  mOldOpenness;
    ::ll::TypedStorage<1, 1, bool>                                   mIsOpen;
    ::ll::TypedStorage<4, 4, int>                                    mTickInterval;
    bool                                                             mPairingChanged   : 1;
    bool                                                             mAlongX           : 1;
    bool                                                             mDeferredPairLoad : 1;
    bool                                                             mConverted        : 1;
    ::ll::TypedStorage<4, 4, int>                                    mDeferredPairX;
    ::ll::TypedStorage<4, 4, int>                                    mDeferredPairZ;
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*>                     mLargeChestPaired;
    ::ll::TypedStorage<4, 12, ::BlockPos>                            mLargeChestPairedPosition;
    ::ll::TypedStorage<1, 2, ::std::optional<::ChestType>>           mChestType;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFindable;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mOpenedByIds;
    ::ll::TypedStorage<4, 4, int>                                    mUpdateFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ChestBlockActor::ChestCloser>>> mChestClosers;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestBlockActor() /*override*/;

    virtual bool isTypeOrDerived(::BlockActorType type) const /*override*/;

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    virtual void loadItems(::CompoundTag const& base, ::ILevel& level);

    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual bool saveItemInstanceData(::CompoundTag& base) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void triggerEvent(int b0, int b1) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    virtual ::IVanillaRenderBlockActorComponent*
    getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual int clearInventory(int resizeTo) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void onMove() /*override*/;

    virtual void onPlace(::BlockSource& region) /*override*/;

    virtual void openBy(::Player& p);

    virtual void setContainerChanged(int slot) /*override*/;

    virtual bool canPushInItem(int slot, int face, ::ItemStack const& item) const /*override*/;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const /*override*/;

    virtual void addContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    virtual void initializeContainerContents(::BlockSource& region) /*override*/;

    virtual void receiveContainerLifetimes(::DynamicContainerTracker const& tracker) /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual bool _canOpenThis(::BlockSource& region) const;

    virtual ::AABB getObstructionAABB() const;

    virtual bool _detectEntityObstruction(::BlockSource& region) const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestBlockActor(
        ::BlockActorType             type,
        ::BlockActorRendererId       renderId,
        ::std::optional<::ChestType> chestType,
        ::BlockPos const&            pos
    );

    MCNAPI void _closeChest(::BlockSource& region, ::Actor* actor);

    MCAPI void _pairWith(::ChestBlockActor* chest, ::BlockSource& region, bool isLead);

    MCNAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void _tryToPairWith(::BlockSource& region, ::BlockPos const& position);

    MCAPI bool canPairWith(::BlockActor* entity, ::BlockSource& region);

    MCNAPI ::std::weak_ptr<::ChestBlockActor::ChestCloser> getChestCloser(::Actor& closingActor);

    MCNAPI void unpair(::BlockSource& region);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::ChestBlockActor>
    createChestBlockEntity(::std::optional<::ChestType> const& chestType, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockActorType             type,
        ::BlockActorRendererId       renderId,
        ::std::optional<::ChestType> chestType,
        ::BlockPos const&            pos
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isTypeOrDerived(::BlockActorType type) const;

    MCNAPI int $getContainerSize() const;

    MCNAPI int $getMaxStackSize() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI ::ItemStack const& $getItem(int slot) const;

    MCNAPI void $setItem(int slot, ::ItemStack const& item);

    MCNAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCNAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCNAPI void $loadItems(::CompoundTag const& base, ::ILevel& level);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI bool $saveItemInstanceData(::CompoundTag& base) const;

    MCAPI void $tick(::BlockSource& region);

    MCNAPI void $triggerEvent(int b0, int b1);

    MCAPI void $startOpen(::Actor& actor);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $stopOpen(::Actor& actor);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCNAPI ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI int $clearInventory(int resizeTo);

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI void $onMove();

    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI void $openBy(::Player& p);

    MCNAPI void $setContainerChanged(int slot);

    MCNAPI bool $canPushInItem(int slot, int face, ::ItemStack const& item) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCNAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCNAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCNAPI void $initializeContainerContents(::BlockSource& region);

    MCNAPI void $receiveContainerLifetimes(::DynamicContainerTracker const& tracker);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI bool $_canOpenThis(::BlockSource& region) const;

    MCNAPI ::AABB $getObstructionAABB() const;

    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftable();
    // NOLINTEND
};
