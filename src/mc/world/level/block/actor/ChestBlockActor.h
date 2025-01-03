#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockActor;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class ItemStack;
class Level;
class Player;
class SaveContext;
struct ActorUniqueID;
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

    // vIndex: 26
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

    // vIndex: 46
    virtual void loadItems(::CompoundTag const& base, ::Level& level);

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 47
    virtual bool saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 3
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 17
    virtual void clearCache() /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 16
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Player& player) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Player& player) /*override*/;

    // vIndex: 8
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 18
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    // vIndex: 21
    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 46
    virtual int clearInventory(int resizeTo) /*override*/;

    // vIndex: 33
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 32
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 12
    virtual void onMove() /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 48
    virtual void openBy(::Player& p);

    // vIndex: 31
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 29
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 30
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 23
    virtual void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) /*override*/;

    // vIndex: 3
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    // vIndex: 4
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    // vIndex: 38
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 49
    virtual void playOpenSound(::BlockSource& region);

    // vIndex: 50
    virtual void playCloseSound(::BlockSource& region);

    // vIndex: 51
    virtual bool _canOpenThis(::BlockSource& region) const;

    // vIndex: 52
    virtual ::AABB getObstructionAABB() const;

    // vIndex: 53
    virtual bool _detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChestBlockActor(
        ::BlockActorType       type,
        ::std::string const&   id,
        ::BlockActorRendererId renderId,
        ::BlockPos const&      pos,
        bool                   isTrapped
    );

    MCAPI void _closeChest(::BlockSource& region, ::Player* player);

    MCAPI void _getCenter(float& outx, float& outy, float& outz);

    MCAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void _tryToPairWith(::BlockSource& region, ::BlockPos const& position);

    MCAPI void _unpair();

    MCAPI bool canOpen(::BlockSource& region) const;

    MCAPI bool canPairWith(::BlockActor* entity, ::BlockSource& region);

    MCAPI void forceCloseChest(::BlockSource& region);

    MCAPI int getOpenCount() const;

    MCAPI float getOpenness() const;

    MCAPI ::BlockPos const& getPairedChestPosition();

    MCAPI bool isFindable() const;

    MCAPI bool isLargeChest() const;

    MCAPI void onMove(::BlockSource& region, ::BlockPos const& from, ::BlockPos const& to);

    MCAPI void pairWith(::ChestBlockActor* chest, bool lead);

    MCAPI void setFindable(bool isFindable);

    MCAPI void unpair(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockActorType       type,
        ::std::string const&   id,
        ::BlockActorRendererId renderId,
        ::BlockPos const&      pos,
        bool                   isTrapped
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getContainerSize() const;

    MCAPI int $getMaxStackSize() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int slot, ::ItemStack const& item);

    MCAPI void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $loadItems(::CompoundTag const& base, ::Level& level);

    MCAPI void $load(::Level& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $clearCache();

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $triggerEvent(int b0, int b1);

    MCAPI void $startOpen(::Player& player);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $stopOpen(::Player& player);

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCAPI ::BlockActor* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCAPI int $clearInventory(int resizeTo);

    MCAPI ::Container* $getContainer();

    MCAPI ::Container const* $getContainer() const;

    MCAPI void $onMove();

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $openBy(::Player& p);

    MCAPI void $setContainerChanged(int slot);

    MCAPI bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCAPI bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos);

    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $initializeContainerContents(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI void $playOpenSound(::BlockSource& region);

    MCAPI void $playCloseSound(::BlockSource& region);

    MCAPI bool $_canOpenThis(::BlockSource& region) const;

    MCAPI ::AABB $getObstructionAABB() const;

    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForFillingContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
