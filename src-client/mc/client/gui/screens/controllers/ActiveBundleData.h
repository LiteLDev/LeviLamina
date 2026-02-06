#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/BundleTooltipLayoutData.h"
#include "mc/world/containers/SlotData.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
class ItemStackBase;
// clang-format on

struct ActiveBundleData {
public:
    // ActiveBundleData inner types define
    enum class BundleState : int {};

    enum class TooltipDirection : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                        mMinimizedTooltip;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                        mSelectedCollectionIndex;
    ::ll::TypedStorage<8, 40, ::SlotData>                                 mSlotData;
    ::ll::TypedStorage<4, 4, ::ActiveBundleData::BundleState>             mBundleState;
    ::ll::TypedStorage<8, 88, ::std::optional<::BundleTooltipLayoutData>> mCachedBundleTooltipLayoutData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BundleTooltipLayoutData const& getBundleTooltipLayoutData(
        ::ItemStackBase const&        bundleItem,
        ::ContainerManagerController& containerManagerController
    ) const;

    MCAPI int getSelectedItemContainerIndex(::BundleTooltipLayoutData const& tooltipLayoutData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BundleTooltipLayoutData _calculateBundleTooltipLayoutData(
        ::ItemStackBase const&        bundleItem,
        ::ContainerManagerController& containerManagerController
    );
    // NOLINTEND
};
