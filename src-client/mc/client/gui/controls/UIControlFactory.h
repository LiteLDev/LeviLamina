#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ChildInsertPosition.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class ControlScreenAction;
class FontRepository;
class IUIDefRepository;
class UIControl;
class UIControlFactoryContext;
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
    MCAPI UIControlFactory(
        ::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> uiDefRepo,
        ::Json::Value const&                                    globalVars,
        ::UISoundPlayer const&                                  soundPlayer,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository const>   fontRepository,
        bool                                                    isLowMemory
    );

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

    MCAPI ::std::shared_ptr<::UIControl> _createControlTreeRootOnly(
        ::UIControlFactoryContext const& context,
        ::std::string_view               name,
        ::ControlScreenAction&           controlScreenAction
    );

    MCAPI ::std::shared_ptr<::UIControl> createControlTree(
        ::UIControl const&        templateControl,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition
    );

    MCAPI ::std::shared_ptr<::UIControl> createControlTree(
        ::std::string_view        name,
        ::ControlScreenAction&    controlScreenAction,
        ::UIControl*              parent,
        ::ui::ChildInsertPosition childInsertPosition,
        ::Json::Value*            additionalVars,
        bool                      isTemplateControl
    );

    MCAPI ::std::shared_ptr<::UIControl>
    createControlTreeRootOnly(::std::string_view name, ::ControlScreenAction& controlScreenAction);

    MCAPI ~UIControlFactory();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};
