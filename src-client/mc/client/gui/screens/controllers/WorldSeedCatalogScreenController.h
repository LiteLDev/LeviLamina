#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Core { class Path; }
// clang-format on

class WorldSeedCatalogScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)>>
                                             mCloseCallback;
    ::ll::TypedStorage<8, 32, ::std::string> mFilter;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSeedCatalogScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ~WorldSeedCatalogScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSeedCatalogScreenController(
        ::std::shared_ptr<::MainMenuScreenModel>                                               model,
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );

    MCAPI void _registerBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel>                                               model,
        ::std::function<void(::std::string const&, ::std::string const&, ::Core::Path const&)> closeCallback
    );
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
