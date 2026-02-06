#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibrarySearchBarScreenController;
class MainMenuScreenModel;
struct LibraryCollection;
struct LibraryItem;
struct UIPropertyBag;
namespace Json { class Value; }
namespace librarySearch { struct TelemetryData; }
// clang-format on

class LibraryScreenController : public ::MainMenuScreenController {
public:
    // LibraryScreenController inner types define
    enum class ItemType : uchar {};

    enum class OptionalFeature : uchar {};

    enum class ScreenType : uchar {};

    enum class ErrorType : uchar {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::librarySearch::TelemetryData>>     mSearchTelemetryData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>>                mLibraryCollection;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibrarySearchBarScreenController>> mSearchBarSubController;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLibraryTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLibraryIcon;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLibraryPageDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mCategoryTitle;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ItemType>                    mItemType;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::OptionalFeature>             mOptionalFeatures;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ScreenType>                  mScreenType;
    ::ll::TypedStorage<1, 1, ::LibraryScreenController::ErrorType>                   mCurrentError;
    ::ll::TypedStorage<1, 1, bool>                                                   mFetchComplete;
    ::ll::TypedStorage<1, 1, bool>                                                   mShowingWelcome;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onInit() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI LibraryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI LibraryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::std::string const&                       categoryTitle,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI void _fireEventLibrarySearch();

    MCAPI ::LibraryItem* _getItem(::UIPropertyBag& bag) const;

    MCAPI void _handleFetchErrors();

    MCAPI void _initialize();

    MCAPI void _initializeLibraryCollection(::std::shared_ptr<::LibraryCollection> libraryCollection);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI bool isSearchResultScreen() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>   model,
        ::std::shared_ptr<::LibraryCollection>     collection,
        ::std::string const&                       title,
        ::std::string const&                       icon,
        ::std::string const&                       pageDescription,
        ::std::string const&                       categoryTitle,
        ::LibraryScreenController::OptionalFeature optionalFeatures
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();

    MCAPI void $onInit();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
