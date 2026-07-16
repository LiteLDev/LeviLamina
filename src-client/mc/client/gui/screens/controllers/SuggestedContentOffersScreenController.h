#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/StoreNavigationOrigin.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SuggestedContentOffersProvider;
// clang-format on

class SuggestedContentOffersScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StoreNavigationOrigin>                              mStoreOrigin;
    ::ll::TypedStorage<8, 32, ::std::string const>                                 mOptionalBindingSuffix;
    ::ll::TypedStorage<8, 32, ::std::string const>                                 mDefaultTitleString;
    ::ll::TypedStorage<8, 32, ::std::string const>                                 mUpsellQueryName;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SuggestedContentOffersProvider>> mOffersProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    SuggestedContentOffersScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SuggestedContentOffersScreenController() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SuggestedContentOffersScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string const&                     upsellQueryName,
        ::StoreNavigationOrigin                  storeOrigin,
        ::std::string const&                     defaultTitleString,
        ::std::string const&                     optionalBindingSuffix
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string const&                     upsellQueryName,
        ::StoreNavigationOrigin                  storeOrigin,
        ::std::string const&                     defaultTitleString,
        ::std::string const&                     optionalBindingSuffix
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
