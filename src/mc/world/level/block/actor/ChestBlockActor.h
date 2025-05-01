#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockActor;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class ILevel;
class ItemStack;
class Player;
class SaveContext;
// clang-format on

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                  mSpeed;
    ::ll::TypedStorage<1, 1, bool>                                   mIsGlobalChest;
    ::ll::TypedStorage<1, 1, bool>                                   mUsesLegacyBlockDetection;
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
    ::ll::TypedStorage<1, 1, bool>                                   mIsTrappedChest;
    ::ll::TypedStorage<1, 1, bool>                                   mIsFindable;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>> mOpenedByIds;
    ::ll::TypedStorage<4, 4, int>                                    mUpdateFlags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestBlockActor() /*override*/;

    // vIndex: 20
    virtual int getContainerSize() const /*override*/;

    // vIndex: 21
    virtual int getMaxStackSize() const /*override*/;

    // vIndex: 27
    virtual ::std::string getName() const /*override*/;

    // vIndex: 7
    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    // vIndex: 12
    virtual void setItem(int slot, ::ItemStack const& item) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 47
    virtual void loadItems(::CompoundTag const& base, ::ILevel& level);

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 48
    virtual bool saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 3
    virtual bool saveItemInstanceData(::CompoundTag& base, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 18
    virtual void clearCache() /*override*/;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 17
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 14
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 9
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 19
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    // vIndex: 22
    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 46
    virtual int clearInventory(int resizeTo) /*override*/;

    // vIndex: 34
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 33
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 13
    virtual void onMove() /*override*/;

    // vIndex: 12
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 49
    virtual void openBy(::Player& p);

    // vIndex: 31
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 24
    virtual void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const /*override*/;

    // vIndex: 3
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    // vIndex: 4
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    // vIndex: 38
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 50
    virtual void playOpenSound(::BlockSource& region);

    // vIndex: 51
    virtual void playCloseSound(::BlockSource& region);

    // vIndex: 52
    virtual bool _canOpenThis(::BlockSource& region) const;

    // vIndex: 53
    virtual ::AABB getObstructionAABB() const;

    // vIndex: 54
    virtual bool _detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChestBlockActor(
        ::BlockActorType       type,
        ::std::string const&   renderId,
        ::BlockActorRendererId pos,
        ::BlockPos const&      id,
        bool                   isTrapped
    );

    MCNAPI void _closeChest(::BlockSource& region, ::Player* player);

    MCNAPI bool _detectBlockObstruction(::BlockSource& region) const;

    MCNAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void _tryToPairWith(::BlockSource& region, ::BlockPos const& position);

    MCNAPI void _unpair();

    MCNAPI void _validatePairedChest(::BlockSource& region);

    MCNAPI bool canPairWith(::BlockActor* entity, ::BlockSource& region);

    MCNAPI void forceCloseChest(::BlockSource& region);

    MCNAPI void pairWith(::ChestBlockActor* chest, bool lead);

    MCNAPI void unpair(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::BlockActorType       type,
        ::std::string const&   renderId,
        ::BlockActorRendererId pos,
        ::BlockPos const&      id,
        bool                   isTrapped
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

    MCNAPI bool $saveItemInstanceData(::CompoundTag& base, ::SaveContext const& saveContext) const;

    MCNAPI void $clearCache();

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $triggerEvent(int b0, int b1);

    MCNAPI void $startOpen(::Player& player);

    MCNAPI void $onRemoved(::BlockSource& region);

    MCNAPI void $stopOpen(::Player& player);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCNAPI ::BlockActor* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI int $clearInventory(int resizeTo);

    MCNAPI ::Container* $getContainer();

    MCNAPI ::Container const* $getContainer() const;

    MCNAPI void $onMove();

    MCNAPI void $onPlace(::BlockSource& region);

    MCNAPI void $openBy(::Player& p);

    MCNAPI void $setContainerChanged(int slot);

    MCNAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCNAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCNAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCNAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCNAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCNAPI void $initializeContainerContents(::BlockSource& region);

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCNAPI void $playOpenSound(::BlockSource& region);

    MCNAPI void $playCloseSound(::BlockSource& region);

    MCNAPI bool $_canOpenThis(::BlockSource& region) const;

    MCNAPI ::AABB $getObstructionAABB() const;

    MCNAPI bool $_detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFillingContainer();

    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
