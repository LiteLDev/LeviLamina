#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/BlockPos.h"
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
class ChestBlock;
class CompoundTag;
class Container;
class ContainerContentChangeListener;
class DataLoadHelper;
class ILevel;
class ItemStack;
class Player;
class SaveContext;
struct ActorUniqueID;
// clang-format on

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // ChestBlockActor inner types declare
    // clang-format off
    class ChestCloser;
    class OpenedByIds;
    // clang-format on

    // ChestBlockActor inner types define
    class OpenedByIds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnkccff8e;
        ::ll::UntypedStorage<4, 4>  mUnkfb863d;
        // NOLINTEND

    public:
        // prevent constructor by default
        OpenedByIds& operator=(OpenedByIds const&);
        OpenedByIds(OpenedByIds const&);
        OpenedByIds();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool erase(::ActorUniqueID const& actorId, bool isPlayer);
        // NOLINTEND
    };

    class ChestCloser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb4cf5c;
        ::ll::UntypedStorage<1, 1> mUnk53b96d;
        ::ll::UntypedStorage<8, 8> mUnk3062dd;
        ::ll::UntypedStorage<1, 1> mUnk72c4ad;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChestCloser& operator=(ChestCloser const&);
        ChestCloser(ChestCloser const&);
        ChestCloser();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mSpeed;
    ::ll::TypedStorage<1, 1, bool>                            mIsGlobalChest;
    ::ll::TypedStorage<1, 1, bool>                            mUsesLegacyBlockDetection;
    ::ll::TypedStorage<4, 4, float>                           mObstructionHeight;
    bool                                                      mPairLead : 1;
    ::ll::TypedStorage<4, 4, float>                           mOpenness;
    ::ll::TypedStorage<4, 4, float>                           mOldOpenness;
    ::ll::TypedStorage<1, 1, bool>                            mIsOpen;
    ::ll::TypedStorage<4, 4, int>                             mTickInterval;
    bool                                                      mPairingChanged   : 1;
    bool                                                      mAlongX           : 1;
    bool                                                      mDeferredPairLoad : 1;
    bool                                                      mConverted        : 1;
    ::ll::TypedStorage<4, 4, int>                             mDeferredPairX;
    ::ll::TypedStorage<4, 4, int>                             mDeferredPairZ;
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*>              mLargeChestPaired;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mLargeChestPairedPosition;
    ::ll::TypedStorage<1, 1, bool>                            mIsTrappedChest;
    ::ll::TypedStorage<1, 1, bool>                            mIsFindable;
    ::ll::TypedStorage<8, 72, ::ChestBlockActor::OpenedByIds> mOpenedByIds;
    ::ll::TypedStorage<4, 4, int>                             mUpdateFlags;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ChestBlockActor::ChestCloser>>> mChestClosers;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlockActor();

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
    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

    // vIndex: 13
    virtual void setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced) /*override*/;

    // vIndex: 2
    virtual void serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    ) /*override*/;

    // vIndex: 45
    virtual void loadItems(::CompoundTag const& base, ::ILevel& level);

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 46
    virtual bool saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 3
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 18
    virtual void clearCache() /*override*/;

    // vIndex: 9
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 16
    virtual void triggerEvent(int b0, int b1) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Actor& actor) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Actor& actor) /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 19
    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    // vIndex: 22
    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 49
    virtual int clearInventory(int resizeTo) /*override*/;

    // vIndex: 32
    virtual ::Container* getContainer() /*override*/;

    // vIndex: 31
    virtual ::Container const* getContainer() const /*override*/;

    // vIndex: 12
    virtual void onMove() /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 47
    virtual void openBy(::Player& p);

    // vIndex: 34
    virtual void setContainerChanged(int slot) /*override*/;

    // vIndex: 32
    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 33
    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    // vIndex: 24
    virtual void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const /*override*/;

    // vIndex: 3
    virtual void addContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    // vIndex: 4
    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    // vIndex: 41
    virtual void initializeContainerContents(::BlockSource& region) /*override*/;

    // vIndex: 42
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    // vIndex: 43
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 48
    virtual bool _canOpenThis(::BlockSource& region) const;

    // vIndex: 49
    virtual ::AABB getObstructionAABB() const;

    // vIndex: 50
    virtual bool _detectEntityObstruction(::BlockSource& region) const;

    // vIndex: 51
    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound(::BlockSource const& region) const;

    // vIndex: 52
    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound(::BlockSource const& region) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ChestBlockActor(::BlockActorType type, ::BlockActorRendererId renderId, ::BlockPos const& pos, bool isTrapped);

    MCAPI void _closeChest(::BlockSource& region, ::Actor* actor);

    MCAPI bool _detectBlockObstruction(::BlockSource& region) const;

    MCAPI void _pairWith(::ChestBlockActor* chest, ::BlockSource& region, bool isLead);

    MCAPI bool _saveClientSideState(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void _tryToPairWith(::BlockSource& region, ::BlockPos const& position);

    MCAPI void _unpair();

    MCAPI void _validatePairedChest(::BlockSource& region);

    MCAPI bool canOpen(::BlockSource& region) const;

    MCAPI bool canPairWith(::BlockActor* entity, ::BlockSource& region);

    MCAPI void forceCloseChest(::BlockSource& region);

    MCAPI ::std::weak_ptr<::ChestBlockActor::ChestCloser> getChestCloser(::Actor& closingActor);

    MCAPI void playCloseSound(::BlockSource& region);

    MCAPI void playOpenSound(::BlockSource& region);

    MCAPI ::ChestBlock const* tryGetChestBlock(::BlockSource const& region) const;

    MCAPI void unpair(::BlockSource& region);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockActorType type, ::BlockActorRendererId renderId, ::BlockPos const& pos, bool isTrapped);
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

    MCFOLD int $getMaxStackSize() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::ItemStack const& $getItem(int slot) const;

    MCAPI void $setItem(int modelSlot, ::ItemStack const& item);

    MCFOLD void $setItemWithForceBalance(int slot, ::ItemStack const& item, bool forceBalanced);

    MCAPI void $serverInitItemStackIds(
        int                                            containerSlot,
        int                                            count,
        ::std::function<void(int, ::ItemStack const&)> onNetIdChanged
    );

    MCAPI void $loadItems(::CompoundTag const& base, ::ILevel& level);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& base, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $saveItems(::CompoundTag& base, ::SaveContext const& saveContext) const;

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $clearCache();

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $triggerEvent(int b0, int b1);

    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $stopOpen(::Actor& actor);

    MCAPI void $onChanged(::BlockSource& region);

    MCFOLD void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCAPI ::BlockActor* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCAPI int $clearInventory(int resizeTo);

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $onMove();

    MCAPI void $onPlace(::BlockSource& region);

    MCAPI void $openBy(::Player& p);

    MCAPI void $setContainerChanged(int slot);

    MCFOLD bool $canPushInItem(int, int, ::ItemStack const&) const;

    MCFOLD bool $canPullOutItem(int, int, ::ItemStack const&) const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos) const;

    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $initializeContainerContents(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI bool $_canOpenThis(::BlockSource& region) const;

    MCAPI ::AABB $getObstructionAABB() const;

    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound(::BlockSource const& region) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound(::BlockSource const& region) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForFillingContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
