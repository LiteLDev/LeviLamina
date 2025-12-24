#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/ContainerInteractionStateMachine.h"
#include "mc/client/gui/screens/controllers/BundleHelper.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/FadeInIconBehavior.h"
#include "mc/client/gui/screens/controllers/InteractionModel.h"
#include "mc/client/gui/screens/controllers/ProgressiveTakeBarLocation.h"
#include "mc/client/gui/screens/controllers/ProgressiveTakeButtonData.h"
#include "mc/client/gui/screens/controllers/TypeInContainer.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/SlotData.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemLockAction.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ContainerManagerController;
class ItemStack;
class ItemStackBase;
class UIPropertyBag;
struct AutoPlaceItem;
struct ItemStateData;
struct ItemTransferAmount;
struct SelectedSlotInfo;
namespace Json { class Value; }
// clang-format on

class ContainerScreenController : public ::ClientInstanceScreenController {
public:
    // ContainerScreenController inner types define
    using FadeInIconSlotInfo = ::std::pair<::std::string, int>;

    using FadeInIconTimeAndReadCount = ::std::pair<double, int>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>                          mBlockPos;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mEntityUniqueID;
    ::ll::TypedStorage<4, 4, ::TypeInContainer>                    mTypeInContainer;
    ::ll::TypedStorage<1, 1, bool>                                 mShowItemCategory;
    ::ll::TypedStorage<8, 336, ::ContainerInteractionStateMachine> mContainerStateMachine;
    ::ll::TypedStorage<8, 40, ::SlotData>                          mLastStateSlot;
    ::ll::TypedStorage<4, 4, int>                                  mLastPlacedAmount;
    ::ll::TypedStorage<1, 1, bool>                                 mSingleSplit;
    ::ll::TypedStorage<8, 40, ::SlotData>                          mTouchSplitData;
    ::ll::TypedStorage<8, 136, ::ItemGroup>                        mSelectedSplitTarget;
    ::ll::TypedStorage<1, 1, bool>                                 mSplitDraggingToPlace;
    ::ll::TypedStorage<1, 1, bool>                                 mPreviousGestureControlEnabled;
    ::ll::TypedStorage<1, 1, bool>                                 mEnterKeyPressedForSplitting;
    ::ll::TypedStorage<1, 1, bool>                                 mArrowKeyPressed;
    ::ll::TypedStorage<8, 96, ::ProgressiveTakeButtonData>         mProgressiveTakeButton;
    ::ll::TypedStorage<4, 4, uint>                                 mTouchProgressiveSelectButton;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStateData>>      mPreviousState;
    ::ll::TypedStorage<8, 16, ::std::map<::std::pair<::std::string, int>, ::std::pair<double, int>>> mFadeInIconData;
    ::ll::TypedStorage<8, 40, ::SlotData>                                                            mSelectedSlotData;
    ::ll::TypedStorage<8, 40, ::SlotData>                                                        mLastSelectedSlotData;
    ::ll::TypedStorage<8, 40, ::SlotData>                                                        mHoveredSlotData;
    ::ll::TypedStorage<1, 1, bool>                                                               mShowHoverText;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                            mLastHoverTime;
    ::ll::TypedStorage<8, 40, ::SlotData>                                                        mStartDraggingSlotData;
    ::ll::TypedStorage<1, 1, bool>                                                               mPointerHasMoved;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mCoalesceOrderMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::AutoPlaceItem>>> mAutoPlaceOrderMap;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsHoldingScrolling;
    ::ll::TypedStorage<1, 1, bool>                                                                 mReadyToVibrate;
    ::ll::TypedStorage<1, 1, bool>                                                                 mNeedsUpdatedBinds;
    ::ll::TypedStorage<4, 4, int>                                                                  mStartHeldTime;
    ::ll::TypedStorage<1, 1, bool>                                                                 mStartDeciding;
    ::ll::TypedStorage<2, 2, short>                                                                mLastPointerX;
    ::ll::TypedStorage<2, 2, short>                                                                mLastPointerY;
    ::ll::TypedStorage<2, 2, short>                                            mStartDraggingPointerX;
    ::ll::TypedStorage<2, 2, short>                                            mStartDraggingPointerY;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mDraggingCollectionName;
    ::ll::TypedStorage<4, 4, int>                                              mDraggingCollectionIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mInteractingCollectionName;
    ::ll::TypedStorage<4, 4, int>                                              mInteractingCollectionIndex;
    ::ll::TypedStorage<4, 4, uint>                                             mInteractingButtonId;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDraggingTooFast;
    ::ll::TypedStorage<1, 1, bool>                                             mProgressBarShowing;
    ::ll::TypedStorage<8, 152, ::BundleHelper>                                 mBundleHelper;
    ::ll::TypedStorage<4, 4, ::ui::DirtyFlag>                                  mDirty;
    ::ll::TypedStorage<1, 1, bool>                                             mStartOutputSlotDeciding;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mOutputCollectionName;
    ::ll::TypedStorage<4, 4, int>                                              mOutputCollectionIndex;
    ::ll::TypedStorage<4, 4, int>                                              mLastReleaseOutputSlotTime;
    ::ll::TypedStorage<1, 1, bool>                                             mScreenCanBeClosedByServer;
    ::ll::TypedStorage<1, 1, ::ItemLockAction>                                 mDefaultItemLockAction;
    ::ll::TypedStorage<4, 4, ::InteractionModel>                               mInteractionModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerManagerController>> mContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual void onLeave() /*override*/;

    virtual void setAssociatedBlockPos(::BlockPos const& pos) /*override*/;

    virtual void setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID) /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void _handleTakeHalf(::std::string const& collectionName, int index);

    virtual void _handlePlaceAll(::std::string const& collectionName, int index);

    virtual void _handlePlaceOne(::std::string const& collectionName, int index);

    virtual int _handleTakePlace(::std::string const& collectionName, int collectionIndex, bool allItems);

    virtual void _handleSelectSlot(::std::string const& collectionName, int collectionIndex);

    virtual ::SelectedSlotInfo const _getSelectedSlotInfo() const;

    virtual ::SlotData _reevaluateSlotData(::SlotData&& slotData) const;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual ::std::string _getButtonXDescription() /*override*/;

    virtual ::std::string _getButtonYDescription() /*override*/;

    virtual ::ui::ViewRequest _onContainerSlotHovered(::std::string const& collectionName, int index);

    virtual ::ui::ViewRequest _onContainerSlotUnhovered(::std::string const& collectionName, int index);

    virtual ::ui::ViewRequest _onContainerSlotSelected(::std::string const& collectionName, int index);

    virtual ::ui::ViewRequest _onContainerSlotPressed(::std::string const& collectionName, int index);

    virtual ::ui::ViewRequest _onHotbarSlotHotkeyUsed(::SlotData const& dstSlot);

    virtual bool _shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const;

    virtual bool _isTargetSwappable(::std::string const& otherCollectionName, int otherCollectionIndex) const;

    virtual ::std::string _getCollectionName(::UIPropertyBag* bag) const;

    virtual bool _canSplit(::std::string const& collectionName) const;

    virtual void _sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );

    virtual bool _isContainerScreen() const /*override*/;

    virtual ::ItemStackBase const&
    _getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    virtual void _registerCoalesceOrder() = 0;

    virtual void _registerAutoPlaceOrder() = 0;

    virtual void _createItemLockNotification(::ItemLockAction const action);

    virtual ::ProgressiveTakeBarLocation
    _getProgressiveBarDirection(::std::string const& collectionName, int collectionIndex) const;

    virtual bool _isInCreativeContainer(::std::string const&) const;

    virtual bool _getGestureControlEnabled() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> model,
        ::InteractionModel                             interactionModel
    );

    MCAPI bool _canProgressiveTakeFromCollection() const;

    MCAPI void _compareStatesForFlyingItems();

    MCAPI ::std::vector<::std::string> const& _getCoalesceOrder(::std::string const& collectionName) const;

    MCAPI ::ItemGroup const& _getCursorSelectedItemGroup() const;

    MCAPI ::std::string _getDisplayName() const;

    MCAPI short _getDraggingDistanceSqrFromStartingPoint() const;

    MCAPI ::ItemStack const& _getItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::std::vector<::AutoPlaceItem>& _getReservedAutoPlaceOrder(::ContainerEnumName name, uint64 reserve);

    MCAPI ::std::vector<::std::string>& _getReservedCoalesceOrder(::ContainerEnumName name, uint64 reserve);

    MCAPI ::ItemStackBase const& _getSelectedItemStackBase() const;

    MCAPI ::std::string _getStackItemCount() const;

    MCAPI ::ItemStackBase const&
    _getTakeableItemStackBase(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::ItemStackBase const& _getVisualItemStack(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void _handleAddAllToCursor(::std::string const& collectionName, int collectionIndex);

    MCAPI void _handleAutoPlace(int amount, ::std::string const& collectionName, int index);

    MCAPI bool _handleCoalesceStack(::std::string const& collectionName);

    MCAPI bool _handleCoalesceToIndex(::std::string const& collectionName, int collectionIndex);

    MCAPI void
    _handleDropItem(::std::string const& collectionName, int collectionIndex, ::ItemTransferAmount transferAmount);

    MCAPI void _handleDropSelectedItem(::ItemTransferAmount transferAmount);

    MCAPI void _handleSplit(::std::string const& collectionName, int collectionIndex);

    MCAPI void
    _handleSwap(::std::string const& firstName, int firstIndex, ::std::string const& secondName, int secondIndex);

    MCAPI void _handleTakeAll(::std::string const& collectionName, int index);

    MCAPI void _handleTakeAmount(int amount, ::std::string const& collectionName, int index);

    MCAPI void _handleUnselectSlot();

    MCAPI bool _hasItems(::std::string const& collectionName, int collectionIndex) const;

    MCAPI bool _isCursorSelectedActive() const;

    MCAPI bool _isInValidCraftingResultContainer(::std::string_view collectionName, int collectionIndex) const;

    MCAPI bool _isProgressiveSelectBarVisible(::ProgressiveTakeBarLocation location) const;

    MCAPI bool _isSelectedSlot(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void _loadLastSelectedSlot();

    MCAPI bool _moveItemFromSlotIntoStorageItem(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::ItemStack const&   toStorageItem
    );

    MCAPI bool _moveSelectedItemFromStorageItem(
        ::ItemStack const&   fromStorageItem,
        int                  selectedItemIdx,
        ::std::string const& collectionName,
        int                  collectionIndex
    );

    MCAPI bool _moveTopItemFromStorageItem(
        ::ItemStack const&   fromStorageItem,
        ::std::string const& collectionName,
        int                  collectionIndex
    );

    MCAPI void _playSound(::SharedTypes::Legacy::LevelSoundEvent type);

    MCAPI void _postSetSelectedSlot(
        ::SelectedSlotInfo const& selected,
        bool                      allowEmpty,
        bool                      unselect,
        ::ItemLockAction          actionOverride
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _registerEventHandlersForStateMachine(uint buttonId);

    MCAPI void _registerSingleTouchOutputSlot(::ContainerEnumName outputContainer);

    MCAPI void _registerStateMachine();

    MCAPI void _registerTouchHoldEventHandlersForStateMachine(uint buttonId);

    MCAPI void _saveLastSelectedSlot();

    MCAPI void _stopSplitting();

    MCAPI ::std::vector<::AutoPlaceItem> const* tryGetAutoPlaceOrder(::std::string const& collectionName) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isInRecipeContainer(::std::string const& collectionName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SlotData const& mCursorSlotData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model, ::InteractionModel interactionModel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $onOpen();

    MCAPI void $onLeave();

    MCAPI void $setAssociatedBlockPos(::BlockPos const& pos);

    MCAPI void $setAssociatedEntityUniqueID(::ActorUniqueID const unqiueID);

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI bool $_isStillValid() const;

    MCAPI void $_handleTakeHalf(::std::string const& collectionName, int index);

    MCAPI void $_handlePlaceAll(::std::string const& collectionName, int index);

    MCAPI void $_handlePlaceOne(::std::string const& collectionName, int index);

    MCAPI int $_handleTakePlace(::std::string const& collectionName, int collectionIndex, bool allItems);

    MCAPI void $_handleSelectSlot(::std::string const& collectionName, int collectionIndex);

    MCAPI ::SelectedSlotInfo const $_getSelectedSlotInfo() const;

    MCAPI ::SlotData $_reevaluateSlotData(::SlotData&& slotData) const;

    MCAPI ::std::string $_getButtonADescription();

    MCAPI ::std::string $_getButtonXDescription();

    MCAPI ::std::string $_getButtonYDescription();

    MCAPI ::ui::ViewRequest $_onContainerSlotHovered(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotUnhovered(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotSelected(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onContainerSlotPressed(::std::string const& collectionName, int index);

    MCAPI ::ui::ViewRequest $_onHotbarSlotHotkeyUsed(::SlotData const& dstSlot);

    MCAPI bool $_shouldSwap(
        ::std::string const& collectionName,
        int                  collectionIndex,
        ::std::string const& otherCollectionName,
        int                  otherCollectionIndex
    ) const;

    MCAPI bool $_isTargetSwappable(::std::string const& otherCollectionName, int otherCollectionIndex) const;

    MCAPI ::std::string $_getCollectionName(::UIPropertyBag* bag) const;

    MCAPI bool $_canSplit(::std::string const& collectionName) const;

    MCAPI void $_sendFlyingItem(
        ::ItemStackBase const& item,
        ::std::string const&   fromName,
        int                    fromIndex,
        ::std::string const&   toName,
        int                    toIndex,
        ::FadeInIconBehavior   fadeInIconBehavior
    );

    MCFOLD bool $_isContainerScreen() const;

    MCAPI ::ItemStackBase const&
    $_getVisualItemStackImpl(::std::string const& collectionName, int collectionIndex) const;

    MCAPI void $_createItemLockNotification(::ItemLockAction const action);

    MCAPI ::ProgressiveTakeBarLocation
    $_getProgressiveBarDirection(::std::string const& collectionName, int collectionIndex) const;

    MCFOLD bool $_isInCreativeContainer(::std::string const&) const;

    MCFOLD bool $_getGestureControlEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
