#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/HowToPlayTopicIndex.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class HowToPlayScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mCurrentFocus;
    ::ll::TypedStorage<8, 32, ::std::string>        mCurrentTabTitle;
    ::ll::TypedStorage<4, 4, ::HowToPlayTopicIndex> mCurrentTab;
    ::ll::TypedStorage<4, 4, ::HowToPlayTopicIndex> mInitialTab;
    ::ll::TypedStorage<1, 1, bool>                  mInitialTabSelected;
    // NOLINTEND

public:
    // prevent constructor by default
    HowToPlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HowToPlayScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    ) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HowToPlayScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::HowToPlayTopicIndex topic);

    MCAPI void _registerBindings();

    MCAPI void _selectNewTab(bool isInitialTab, int newTabIndex);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::HowToPlayTopicIndex topic);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI bool $bind(
        ::std::string const& bindingName,
        uint                 bindingNameHash,
        ::std::string const& bindingNameOverride,
        ::UIPropertyBag&     bag
    );

    MCAPI ::ui::DirtyFlag $tick();

    MCFOLD ::std::string $_getButtonADescription();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
