#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/EncyclopediaTopicIndex.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct UIPropertyBag;
// clang-format on

class EncyclopediaScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mCurrentTabTitle;
    ::ll::TypedStorage<4, 4, ::EncyclopediaTopicIndex> mCurrentTab;
    ::ll::TypedStorage<4, 4, ::EncyclopediaTopicIndex> mInitialTab;
    ::ll::TypedStorage<1, 1, bool>                     mInitialTabSelected;
    // NOLINTEND

public:
    // prevent constructor by default
    EncyclopediaScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EncyclopediaScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

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
    MCAPI EncyclopediaScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::EncyclopediaTopicIndex topic);

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::EncyclopediaTopicIndex topic);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

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
