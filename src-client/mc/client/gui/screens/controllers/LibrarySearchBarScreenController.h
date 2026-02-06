#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct LibraryCollection;
// clang-format on

class LibrarySearchBarScreenController : public ::MainMenuScreenController {
public:
    // LibrarySearchBarScreenController inner types declare
    // clang-format off
    struct SearchConfig;
    // clang-format on

    // LibrarySearchBarScreenController inner types define
    struct SearchConfig {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::LibrarySearchBarScreenController::SearchConfig>              mConfig;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>>                        mLibraryCollection;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::shared_ptr<::LibraryCollection>)>> mUpdateSearchResult;
    // NOLINTEND

public:
    // prevent constructor by default
    LibrarySearchBarScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibrarySearchBarScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LibrarySearchBarScreenController(::std::shared_ptr<::MainMenuScreenModel> model);

    MCAPI bool _updateCollection();

    MCAPI void openSearch();

    MCAPI void
    setUpdateSearchResultMethod(::std::function<void(::std::shared_ptr<::LibraryCollection>)> updateSearchResultMethod);

    MCAPI void updateSearchString(::std::string searchString);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
