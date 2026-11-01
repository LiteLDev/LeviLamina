#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class ControlScreenAction;
class CustomRenderComponent;
class FontRepository;
class IUIDefRepository;
class UIAnim;
class UIControl;
class UIControlFactoryContext;
class UIResolvedDef;
class UISoundPlayer;
// clang-format on

class UIControlFactory : public ::std::enable_shared_from_this<::UIControlFactory> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const>> mUIDefRepository;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>>   mFontRepository;
    ::ll::TypedStorage<8, 8, ::UISoundPlayer const&>                                   mSoundPlayer;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentNamespace;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                           mGlobalVars;
    ::ll::TypedStorage<8, 24, ::std::vector<::Json::Value*>>                           mVariablesStack;
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
    MCNAPI UIControlFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>   fontRepository,
        bool                                                    isLowMemory
    );

    MCNAPI ::UIAnim* _addAnimToComponent(::std::string_view name, ::UIResolvedDef& def, ::UIControl& ownerControl);

    MCNAPI ::std::shared_ptr<::UIControl> _createControlTree(
        ::UIControlFactoryContext const&,
        ::UIControl const&        templateControl,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition
    );

    MCNAPI ::std::shared_ptr<::UIControl> _createControlTree(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction,
        ::UIControl*                     parent,
        ::ui::ChildInsertPosition        childInsertPosition,
        ::Json::Value*                   additionalVars,
        bool                             isTemplateControl
    );

    MCNAPI ::std::shared_ptr<::UIControl> _createControlTreeFromResolvedDef(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           resolvedDef,
        ::UIControl*                     parentControl,
        ::ControlScreenAction&           controlScreenAction,
        ::ui::ChildInsertPosition        childInsertPosition,
        bool                             isTemplateControl
    );

    MCNAPI ::std::shared_ptr<::UIControl> _createControlTreeRootOnly(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction
    );

    MCNAPI ::std::shared_ptr<::UIControl> _createFromResolvedDef(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           resolvedDef,
        ::UIControl*                     parentControl,
        ::ControlScreenAction&           controlScreenAction,
        ::ui::ChildInsertPosition        childInsertPosition,
        bool                             isTemplateControl
    );

    MCNAPI void _populateControl(::UIResolvedDef const& def, ::UIControl& control);

    MCNAPI void _populateDataBindingComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI void _populateFocusComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI void _populateGridComponent(
        ::UIControlFactoryContext const& context,
        ::UIResolvedDef const&           def,
        ::UIControl&                     ownerControl
    );

    MCNAPI void _populateInputComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI void _populateLayoutComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI void _populateSoundComponent(::UIResolvedDef const& def, ::UIControl& ownerControl, bool alwaysCreate);

    MCNAPI void _populateSpriteComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI void _populateTextComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI ~UIControlFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _createGradientRenderer(::CustomRenderComponent& customRenderComponent, ::UIResolvedDef const& def);

    MCNAPI static void _populateButtonComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI static void _populateCollectionComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI static void _populateDebugRendererComponent(::UIResolvedDef const& def, ::UIControl& control);

    MCNAPI static void _populateGestureComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI static void _populatePageIndicatorManagerComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);

    MCNAPI static void
    _populateTextToSpeechComponent(::UIResolvedDef const& def, ::UIControl& ownerControl, int controlPriorityDefault);

    MCNAPI static void _populateToggleComponent(::UIResolvedDef const& def, ::UIControl& ownerControl);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>   fontRepository,
        bool                                                    isLowMemory
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
