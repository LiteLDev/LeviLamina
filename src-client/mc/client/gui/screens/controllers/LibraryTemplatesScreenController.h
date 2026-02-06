#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct LibraryCollection;
// clang-format on

class LibraryTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>> mCollection;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryTemplatesScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryTemplatesScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::shared_ptr<::LibraryCollection>   collection,
        uint64
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::shared_ptr<::LibraryCollection> collection, uint64);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
