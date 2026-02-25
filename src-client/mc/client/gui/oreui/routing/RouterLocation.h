#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

namespace OreUI {

class RouterLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AbstractScene>> mScene;
    ::ll::TypedStorage<8, 32, ::std::string>                    mUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                    mPath;
    ::ll::TypedStorage<8, 32, ::std::string>                    mQuery;
    ::ll::TypedStorage<8, 32, ::std::string>                    mFragment;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>                mMode;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteType>                mType;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterLocation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouterLocation(::OreUI::RouterLocation const&);

    MCAPI RouterLocation(::OreUI::RouterLocation&&);

    MCAPI RouterLocation(
        ::std::weak_ptr<::AbstractScene> scene,
        ::std::string const&             url,
        ::OreUI::RouteMode               mode,
        ::OreUI::RouteType               routeType
    );

    MCAPI bool _isRealmsStoriesScreen(::std::string const& routeName) const;

    MCFOLD ::std::string const& getFragment() const;

    MCFOLD ::std::string const& getPath() const;

    MCFOLD ::std::string const& getQuery() const;

    MCAPI bool getShouldSendTelemetryEvents() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> getTelemetryEventProperties() const;

    MCAPI ::std::string getTelemetryId() const;

    MCAPI bool isValid() const;

    MCAPI ::OreUI::RouterLocation& operator=(::OreUI::RouterLocation const&);

    MCAPI ::OreUI::RouterLocation& operator=(::OreUI::RouterLocation&&);

    MCAPI ~RouterLocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouterLocation const&);

    MCAPI void* $ctor(::OreUI::RouterLocation&&);

    MCAPI void* $ctor(
        ::std::weak_ptr<::AbstractScene> scene,
        ::std::string const&             url,
        ::OreUI::RouteMode               mode,
        ::OreUI::RouteType               routeType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
