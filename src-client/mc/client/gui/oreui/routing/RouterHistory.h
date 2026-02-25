#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
namespace OreUI { class RouterLocation; }
// clang-format on

namespace OreUI {

class RouterHistory {
public:
    // RouterHistory inner types define
    using OnChangeCallback = ::std::function<
        void(::std::optional<::OreUI::RouterLocation> const&, ::std::optional<::OreUI::RouterLocation> const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RouterLocation>> mEntries;
    ::ll::TypedStorage<4, 4, ::OreUI::RouterAction>                   mLastAction;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<
            void(::std::optional<::OreUI::RouterLocation> const&, ::std::optional<::OreUI::RouterLocation> const&)>>
                                             mOnChangeCallback;
    ::ll::TypedStorage<8, 32, ::std::string> mGetActionHelper;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getAction() const;

    MCAPI ::std::optional<::OreUI::RouterLocation> getCurrentLocation() const;

    MCAPI ::std::optional<::OreUI::RouterLocation> getPreviousLocation() const;

    MCAPI void goBack();

    MCAPI void goBackAndReplace(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );

    MCAPI void push(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );

    MCAPI void replace(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );

    MCAPI ~RouterHistory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_POP();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_PUSH();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_REPLACE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_UNKNOWN();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
