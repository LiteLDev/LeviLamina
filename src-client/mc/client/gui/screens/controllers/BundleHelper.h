#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ActiveBundleData.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenController;
class ItemStack;
class ItemStackBase;
struct BundleTooltipLayoutData;
// clang-format on

class BundleHelper {
public:
    // BundleHelper inner types define
    enum class BundleItemStickScrollDirection : int {};

    enum class BundleItemScrollWheelDirection : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ActiveBundleData> mActiveBundleData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool bundleModeItemTransferOut(
        ::ContainerScreenController& controller,
        ::std::string const&         toCollectionName,
        int                          toCollectionIndex,
        ::std::string const&         fromBundleCollectionName,
        int                          fromBundleCollectionIndex
    );

    MCAPI ::ItemStack const& getItemStackFromBundle(
        ::ContainerScreenController const& controller,
        ::ItemStackBase const&             bundleItem,
        int                                bundleItemIdx
    ) const;

    MCAPI void handleBundleActive(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    );

    MCAPI void handleBundleHovered(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    );

    MCAPI void handleBundleItemTransferIn(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    );

    MCAPI void handleBundleItemTransferOut(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    );

    MCAPI void handleBundleUnselected(::ContainerScreenController& controller);

    MCAPI bool isSlotInteractiveBundle(
        ::ContainerScreenController const& controller,
        ::std::string const&               collectionName,
        int                                collectionIndex
    ) const;

    MCAPI ::ui::ViewRequest onBundleItemRightStick(
        ::ContainerScreenController&                   controller,
        ::BundleHelper::BundleItemStickScrollDirection direction
    );

    MCAPI ::ui::ViewRequest onBundleItemScrollWheel(
        ::ContainerScreenController&                   controller,
        ::BundleHelper::BundleItemScrollWheelDirection direction
    );

    MCAPI bool shouldHandleBundleIdlePlaceAll(
        ::ContainerScreenController& controller,
        ::std::string const&         collectionName,
        int                          collectionIndex
    ) const;

    MCAPI bool
    shouldShowBundleOpen(::std::string const& collectionName, int collectionIndex, bool usingTouchScheme) const;

    MCAPI ~BundleHelper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ui::ViewRequest _onBundleItemRightStick(
        ::BundleHelper::BundleItemStickScrollDirection direction,
        ::BundleTooltipLayoutData                      tooltipLayoutData,
        ::ActiveBundleData&                            activeBundleData
    );

    MCAPI static void registerBindings(::ContainerScreenController& controller);

    MCAPI static void registerEventHandlers(::ContainerScreenController& controller);

    MCAPI static void registerStateMachine(::ContainerScreenController& controller);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
