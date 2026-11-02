#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/input/GamepadButton.h"
#include "mc/client/gui/oreui/input/MouseButton.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryLeftTabIndex.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

namespace OreUI {

class ContainerAPICommands : public ::OreUI::CommandGroupBase<::OreUI::ContainerAPICommands> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                           mCloseContainer;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton, ::ContainerEnumName, int, bool, bool>>
        mHandleSlotMousePress;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton, ::ContainerEnumName, int>>
        mHandleSlotMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton, ::ContainerEnumName, int>>
                                                                                          mHandleSlotMouseDrag;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                       mHandlePanelMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::OreUI::MouseButton>> mHandleBackgroundMouseRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, bool>>
                                                                                              mHandleSlotTouchRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mHandleSlotTouchDrag;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>>
        mHandleSlotTouchLongPressStart;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int, float>>
                                                                              mHandleSlotTouchLongPressMove;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>> mHandleBundleSlotTouchTap;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>           mHandleBackgroundTouchTap;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>           mHandleTouchEnd;
    ::ll::TypedStorage<
        8,
        168,
        ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton, ::ContainerEnumName, int, bool>>
        mHandleSlotGamepadPress;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton, ::ContainerEnumName, int>>
                                                                                            mHandleSlotGamepadLongPress;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton>> mHandleGamepadRelease;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::OreUI::GamepadButton, ::ContainerEnumName, int>>
                                                                                              mHandleSlotGamepadDrag;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::ContainerEnumName, int>> mHandleFocusedSlotChanged;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                           mHandleFocusedSlotNone;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>>           mSetRecipeBookSearchString;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>                    mSetRecipeBookFiltering;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>                    mSetRecipeBookVisibility;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::InventoryLeftTabIndex>> mSetRecipeBookTab;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>>                mSelectTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mPullInIngredientsForSelectedTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int, int>>      mPerformAutoTrade;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mSetPreviewItemName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void closeContainer();

    MCNAPI void handleBackgroundMouseRelease(::OreUI::MouseButton button);

    MCNAPI void handleBackgroundTouchTap();

    MCNAPI void handleBundleSlotTouchTap(int bundleID, int index);

    MCNAPI void handleFocusedSlotChanged(::ContainerEnumName container, int slot);

    MCNAPI void handleFocusedSlotNone();

    MCNAPI void handleGamepadRelease(::OreUI::GamepadButton button);

    MCNAPI void handlePanelMouseRelease();

    MCNAPI void handleSlotGamepadDrag(::OreUI::GamepadButton button, ::ContainerEnumName container, int slot);

    MCNAPI void handleSlotGamepadLongPress(::OreUI::GamepadButton button, ::ContainerEnumName container, int slot);

    MCNAPI void
    handleSlotGamepadPress(::OreUI::GamepadButton button, ::ContainerEnumName container, int slot, bool isDoubleClick);

    MCNAPI void handleSlotMouseDrag(::OreUI::MouseButton button, ::ContainerEnumName container, int slot);

    MCNAPI void handleSlotMousePress(
        ::OreUI::MouseButton button,
        ::ContainerEnumName  container,
        int                  slot,
        bool                 isDoubleClick,
        bool                 isShiftClick
    );

    MCNAPI void handleSlotMouseRelease(::OreUI::MouseButton button, ::ContainerEnumName container, int slot);

    MCNAPI void handleSlotTouchDrag(::ContainerEnumName container, int slot);

    MCNAPI void handleSlotTouchLongPressMove(::ContainerEnumName container, int slot, float normalizedValue);

    MCNAPI void handleSlotTouchLongPressStart(::ContainerEnumName container, int slot);

    MCNAPI void handleSlotTouchRelease(::ContainerEnumName container, int slot, bool isDoubleClick);

    MCNAPI void handleTouchEnd();

    MCNAPI void performAutoTrade(int tradeTier, int tradeIndex);

    MCNAPI void pullInIngredientsForSelectedTrade();

    MCNAPI void selectTrade(int tradeTier, int tradeIndex);

    MCNAPI void setPreviewItemName(::std::string name);

    MCNAPI void setRecipeBookFiltering(bool filtering);

    MCNAPI void setRecipeBookSearchString(::std::string searchText);

    MCNAPI void setRecipeBookTab(::InventoryLeftTabIndex tabIndex);

    MCNAPI void setRecipeBookVisibility(bool visible);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[36]> NAME();
    // NOLINTEND
};

} // namespace OreUI
