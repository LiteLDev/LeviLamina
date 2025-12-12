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
class ChestBlock;
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
    // ChestBlockActor inner types declare
    // clang-format off
    class ChestCloser;
    // clang-format on

    // ChestBlockActor inner types define
    class ChestCloser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb4cf5c;
        ::ll::UntypedStorage<1, 1> mUnk53b96d;
        ::ll::UntypedStorage<8, 8> mUnk3062dd;
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

    virtual int getContainerSize() const /*override*/;

    virtual int getMaxStackSize() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::ItemStack const& getItem(int slot) const /*override*/;

    virtual void setItem(int modelSlot, ::ItemStack const& item) /*override*/;

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

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void triggerEvent(int b0, int b1) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position) /*override*/;

    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual int clearInventory(int resizeTo) /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void onMove() /*override*/;

    virtual void onPlace(::BlockSource& region) /*override*/;

    virtual void openBy(::Player& p);

    virtual void setContainerChanged(int slot) /*override*/;

    virtual bool canPushInItem(int, int, ::ItemStack const&) const /*override*/;

    virtual bool canPullOutItem(int, int, ::ItemStack const&) const /*override*/;

    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const /*override*/;

    virtual void addContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    virtual void removeContentChangeListener(::ContainerContentChangeListener* listener) /*override*/;

    virtual void initializeContainerContents(::BlockSource& region) /*override*/;

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
    MCAPI ChestBlockActor(
        ::BlockActorType             type,
        ::BlockActorRendererId       renderId,
        ::std::optional<::ChestType> chestType,
        ::BlockPos const&            pos
    );

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
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::std::unique_ptr<::ChestBlockActor>
    createChestBlockEntity(::std::optional<::ChestType> const& chestType, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockActorType             type,
        ::BlockActorRendererId       renderId,
        ::std::optional<::ChestType> chestType,
        ::BlockPos const&            pos
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

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $triggerEvent(int b0, int b1);

    MCAPI void $startOpen(::Actor& actor);

    MCFOLD void $onRemoved(::BlockSource& region);

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

    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCAPI void $addContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $removeContentChangeListener(::ContainerContentChangeListener* listener);

    MCAPI void $initializeContainerContents(::BlockSource& region);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCAPI bool $_canOpenThis(::BlockSource& region) const;

    MCAPI ::AABB $getObstructionAABB() const;

    MCAPI bool $_detectEntityObstruction(::BlockSource& region) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForFillingContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();
    // NOLINTEND
};
