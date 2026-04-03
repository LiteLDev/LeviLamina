#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class ContainerCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::ContainerCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>>                           mCloseContainer;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeAllItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeOneItem;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mTakeHalfItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mPlaceAllItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mPlaceOneItem;
    ::ll::TypedStorage<
        8,
        136,
        ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int, int>>
                                                                                              mPlaceAmountOfItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mDropAllItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mDropOneItem;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName>>
                                                                                              mCoalesceItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mCoalesceOrAutoPlaceItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mAutoPlaceItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mSplitMultipleItems;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
        mSplitMultipleItemsTouch;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, ::ContainerEnumName, int>>
                                                                                              mSplitSingleItem;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>>                           mResetSplitStack;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mSetDistributeAllSource;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, bool>> mRecipeSelect;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>>       mAutoCraftOne;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>>       mAutoCraftAll;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerCommandGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerCommandGroup(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void autoCraftAllItemsFromRecipe(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void autoCraftOneItemFromRecipe(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void autoPlaceItems(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void closeContainer();

    MCAPI void coalesceItems(::ContainerEnumName destinationName, int destinationIndex, ::ContainerEnumName sourceName);

    MCAPI void coalesceOrAutoPlaceItems(::ContainerEnumName destinationName, int destinationIndex);

    MCAPI void dropAllItems(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void dropOneItem(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void placeAllItems(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void placeAmountOfItems(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        int                 amount
    );

    MCAPI void placeOneItem(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void resetSplitStack();

    MCAPI void selectRecipe(::ContainerEnumName sourceName, int sourceIndex, bool displayOnly);

    MCAPI void setDistributeAllSource(::ContainerEnumName sourceName, int sourceIndex);

    MCAPI void splitMultipleItems(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitMultipleItemsTouch(
        ::ContainerEnumName selectedName,
        int                 selectedIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void splitSingleItem(
        ::ContainerEnumName sourceName,
        int                 sourceIndex,
        ::ContainerEnumName destinationName,
        int                 destinationIndex
    );

    MCAPI void takeAllItems(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeHalfItems(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );

    MCAPI void takeOneItem(
        ::ContainerEnumName destinationName,
        int                 destinationIndex,
        ::ContainerEnumName sourceName,
        int                 sourceIndex
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
