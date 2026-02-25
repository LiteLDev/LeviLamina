#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterLocation.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
// clang-format on

namespace OreUI {

class RouterHistoryAdapter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Router>> mRouter;
    ::ll::TypedStorage<8, 152, ::OreUI::RouterLocation>                 mCurrentLocationCache;
    ::ll::TypedStorage<8, 152, ::OreUI::RouterLocation>                 mFallbackLocation;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterHistoryAdapter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterHistoryAdapter(::OreUI::Router& router);

    MCAPI ::std::string const& getAction() const;

    MCFOLD ::std::vector<::OreUI::RouterLocation> const& getFullRouterLocationHistory() const;

    MCAPI uint getLength() const;

    MCAPI ::OreUI::RouterLocation const& getLocation() const;

    MCAPI void go(int n);

    MCAPI void goBack();

    MCFOLD void goForward();

    MCAPI void push(::std::string const& route);

    MCAPI void replace(::std::string const& route);

    MCAPI ~RouterHistoryAdapter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Router& router);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
