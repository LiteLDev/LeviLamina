#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class LibrarySearchBarScreenController;
class MainMenuScreenModel;
struct EDULibraryCategory;
struct UIPropertyBag;
namespace Json { class Value; }
// clang-format on

class EDULibraryCategoryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                   mFirstPage;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mIcon;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mScreenshotRatio;
    ::ll::TypedStorage<4, 4, int>                                                    mColumnCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::EDULibraryCategory>>                   mLibraryCategories;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibrarySearchBarScreenController>> mSearchBarSubController;
    // NOLINTEND

public:
    // prevent constructor by default
    EDULibraryCategoryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual ~EDULibraryCategoryScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDULibraryCategoryScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string                            title,
        ::std::string                            icon,
        ::std::string                            description,
        ::std::string                            screenshotRatio,
        int                                      columnCount,
        ::std::vector<::EDULibraryCategory>      libraryCategories,
        bool                                     firstPage
    );

    MCAPI ::EDULibraryCategory* _getCategory(::UIPropertyBag const& bag);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::string                            title,
        ::std::string                            icon,
        ::std::string                            description,
        ::std::string                            screenshotRatio,
        int                                      columnCount,
        ::std::vector<::EDULibraryCategory>      libraryCategories,
        bool                                     firstPage
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
