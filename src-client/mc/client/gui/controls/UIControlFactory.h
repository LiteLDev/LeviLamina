#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/TileDirection.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class UIControl;
class UIControlFactoryContext;
struct ControlScreenAction;
struct CustomRenderComponent;
struct IUIDefRepository;
struct UIAnim;
struct UIResolvedDef;
struct UISoundPlayer;
// clang-format on

class UIControlFactory : public ::std::enable_shared_from_this<::UIControlFactory> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const>> mUIDefRepository;
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const&>                                   mSoundPlayer;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentNamespace;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                           mGlobalVars;
    ::ll::TypedStorage<8, 24, ::std::vector<::Json::Value*>>                           mVariablesStack;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                            mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                            mRuneFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                            mUnicodeFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                            mSmoothFontHandle;
    ::ll::TypedStorage<1, 1, bool>                                                     mLowMemoryMode;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::UIControl>>                            mInitialSelectedControl;
    // NOLINTEND

public:
    // prevent constructor by default
    UIControlFactory& operator=(UIControlFactory const&);
    UIControlFactory(UIControlFactory const&);
    UIControlFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIControlFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::FontHandle                                            fontHandle,
        ::FontHandle                                            runeFontHandle,
        ::FontHandle                                            unicodeFontHandle,
        ::FontHandle                                            smoothFontHandle,
        bool                                                    isLowMemory
    );

    MCAPI ::UIAnim* _addAnimToComponent(::std::string_view name, ::UIControl& ownerControl);

    MCAPI ::std::shared_ptr<::UIControl> _createControlTree(
        ::UIControlFactoryContext const&,
        ::UIControl const&        templateControl,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition
    );

    MCAPI ::std::shared_ptr<::UIControl> _createControlTree(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction,
        ::UIControl*                     parent,
        ::ui::ChildInsertPosition        childInsertPosition,
        ::Json::Value*                   additionalVars,
        bool                             isTemplateControl
    );

    MCAPI ::std::shared_ptr<::UIControl> _createControlTreeFromResolvedDef(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           resolvedDef,
        ::UIControl*                     parentControl,
        ::ControlScreenAction&           controlScreenAction,
        ::ui::ChildInsertPosition        childInsertPosition,
        bool                             isTemplateControl
    );

    MCAPI ::std::shared_ptr<::UIControl> _createControlTreeRootOnly(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction
    );

    MCAPI ::std::shared_ptr<::UIControl> _createFromResolvedDef(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           resolvedDef,
        ::UIControl*                     parentControl,
        ::ControlScreenAction&           controlScreenAction,
        ::ui::ChildInsertPosition        childInsertPosition,
        bool                             isTemplateControl
    );

    MCAPI void _createGradientRenderer(::CustomRenderComponent& customRenderComponent, ::UIResolvedDef const& def);

    MCAPI ::FontHandle _getFontFromFontType(::std::string const& fontType) const;

    MCAPI ::std::pair<::FontHandle, ::FontHandle> _getFontsFromFontType(::std::string const& fontType) const;

    MCAPI void _populateAnimations(::UIResolvedDef const& def, ::UIControl& control);

    MCAPI void _populateButtonComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateCollectionComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateCollectionItemComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateControl(::UIResolvedDef const& def, ::UIControl& control);

    MCAPI void _populateCustomRenderComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateDataBindingComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateDebugRendererComponent(::UIResolvedDef const& def, ::UIControl& control);

    MCAPI void _populateDropdownComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateFactoryComponent(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           def,
        ::UIControl&                     ownerControl
    );

    MCAPI void _populateFocusComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateFocusContainerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateGestureComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateGridComponent(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           def,
        ::UIControl&                     ownerControl
    );

    MCAPI void _populateGridItemComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateImageCyclingComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateInputComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateLayoutComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populatePageIndicatorGridComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populatePageIndicatorManagerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateScreenComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateScrollViewComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateSelectionWheelComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateSliderBoxComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateSliderComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateSliderGroupManagerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateSoundComponent(::UIResolvedDef const& def, ::UIControl& ownerControl, bool alwaysCreate);

    MCAPI void _populateSpriteComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateStackPanelComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateTextComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateTextCyclingComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateTextEditComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void
    _populateTextToSpeechComponent(::UIResolvedDef const& def, ::UIControl& ownerControl, int controlPriorityDefault);

    MCAPI void _populateToggleComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateToggleGroupManagerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void _populateTooltipTriggerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCAPI void
    _postCreate(::UIControlFactoryContext const& context, ::UIControl& control, ::UIResolvedDef const& controlDef);

    MCAPI ::ui::TileDirection const
    _resolveTileDirection(::UIResolvedDef const& ownerDef, ::UIControl&, ::std::string const& propertyName);

    MCAPI ::std::shared_ptr<::UIControl> createControlTree(
        ::UIControl const&        templateControl,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition
    );

    MCAPI ~UIControlFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::FontHandle                                            fontHandle,
        ::FontHandle                                            runeFontHandle,
        ::FontHandle                                            unicodeFontHandle,
        ::FontHandle                                            smoothFontHandle,
        bool                                                    isLowMemory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
