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
    MCNAPI ::std::string const& getAction() const;

    MCNAPI void goBack();

    MCNAPI void push(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );

    MCNAPI void replace(
        ::std::weak_ptr<::AbstractScene> const& scene,
        ::std::string const&                    url,
        ::OreUI::RouteMode                      mode,
        ::OreUI::RouteType                      routeType
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_POP();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_PUSH();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_REPLACE();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> ACTION_UNKNOWN();
    // NOLINTEND
};

} // namespace OreUI
