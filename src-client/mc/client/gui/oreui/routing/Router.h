#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterHistory.h"
#include "mc/client/gui/oreui/routing/RouterLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace OreUI { class IRouteMatcher; }
namespace OreUI { class IRoutePrerequisiteHandler; }
namespace OreUI { class RouterEventing; }
// clang-format on

namespace OreUI {

class Router {
public:
    // Router inner types declare
    // clang-format off
    struct DeferredChangeNotification;
    // clang-format on

    // Router inner types define
    enum class RouterPushMode : int {
        Normal = 0,
        Flux   = 1,
    };

    struct DeferredChangeNotification {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 160, ::std::optional<::OreUI::RouterLocation>> mOldLocation;
        ::ll::TypedStorage<8, 160, ::std::optional<::OreUI::RouterLocation>> mCurrentLocation;
        // NOLINTEND
    };

    using OnRouteChangedCallback = void(
        ::std::optional<::OreUI::RouterLocation> const&,
        ::std::optional<::OreUI::RouterLocation> const&,
        ::OreUI::RouterAction
    );

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::OreUI::RouterHistory>                        mHistory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IRouteMatcher const>> mRouteMatcher;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>>   mSceneStack;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(
                ::std::optional<::OreUI::RouterLocation> const&,
                ::std::optional<::OreUI::RouterLocation> const&,
                ::OreUI::RouterAction
            ),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
                                                                                          mOnRouteChangedPublisher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler>>       mPrerequisiteHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::RouterEventing>>                  mEventing;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsNotifyingListeners;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Router::DeferredChangeNotification>> mDeferredChangeNotifications;
    // NOLINTEND

public:
    // prevent constructor by default
    Router();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Router(
        ::std::unique_ptr<::OreUI::IRouteMatcher const>       routeMatcher,
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    );

    MCAPI bool _pushRoute(::std::string const& route, ::OreUI::Router::RouterPushMode mode);

    MCAPI ::std::optional<::OreUI::RouterLocation> getCurrentLocation() const;

    MCAPI void goBack();

    MCAPI bool replaceRoute(::std::string const& route);

    MCAPI void replaceRouteMatcher(::std::unique_ptr<::OreUI::IRouteMatcher> newRouteMatcher);

    MCAPI ~Router();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BEDROCK_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::OreUI::IRouteMatcher const>       routeMatcher,
        ::std::unique_ptr<::OreUI::IRoutePrerequisiteHandler> prerequisiteHandler,
        ::std::unique_ptr<::OreUI::RouterEventing>            routerEventing,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&   sceneStack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
