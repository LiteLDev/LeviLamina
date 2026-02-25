#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/ClientDependencies.h"
#include "mc/client/gui/oreui/binding/experimental/GameDependencies.h"
#include "mc/client/gui/oreui/binding/experimental/methods/InvocationStateTracker.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class Binder; }
namespace OreUI::Experimental::Detail { class CommandRegistry; }
namespace OreUI::Experimental::Detail { class QueryRegistry; }
namespace OreUI::Experimental::Detail { class ViewContext; }
// clang-format on

namespace OreUI::Experimental::Detail {

class ViewContextFactory {
public:
    // ViewContextFactory inner types define
    using QueryRegistrator = ::std::function<
        void(::OreUI::Experimental::Detail::QueryRegistry&, ::OreUI::Experimental::Detail::ViewContextFactory&)>;

    using QueryStorage = ::std::vector<::std::function<
        void(::OreUI::Experimental::Detail::QueryRegistry&, ::OreUI::Experimental::Detail::ViewContextFactory&)>>;

    using CommandRegistrator = ::std::function<
        void(::OreUI::Experimental::Detail::CommandRegistry&, ::OreUI::Experimental::Detail::ViewContextFactory&)>;

    using CommandStorage = ::std::vector<::std::function<
        void(::OreUI::Experimental::Detail::CommandRegistry&, ::OreUI::Experimental::Detail::ViewContextFactory&)>>;

    using ContextPtr = ::std::unique_ptr<::OreUI::Experimental::Detail::ViewContext>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::OreUI::Experimental::Detail::InvocationStateTracker> mStateTracker;
    ::ll::TypedStorage<8, 24, ::OreUI::Experimental::ClientDependencies>             mClientDependencies;
    ::ll::TypedStorage<8, 128, ::OreUI::Experimental::GameDependencies>              mGameDependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewContextFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ViewContextFactory(
        ::OreUI::Experimental::GameDependencies   gameDependencies,
        ::OreUI::Experimental::ClientDependencies clientDependencies
    );

    MCAPI ::std::unique_ptr<::OreUI::Experimental::Detail::ViewContext>
    makeContext(::OreUI::Experimental::Detail::Binder& binder);

    MCAPI ~ViewContextFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::function<
        void(::OreUI::Experimental::Detail::CommandRegistry&, ::OreUI::Experimental::Detail::ViewContextFactory&)>>&
    _commandStorage();

    MCAPI static ::std::vector<::std::function<
        void(::OreUI::Experimental::Detail::QueryRegistry&, ::OreUI::Experimental::Detail::ViewContextFactory&)>>&
    _queryStorage();

    MCAPI static bool _registerQuery(
        ::std::function<void(
            ::OreUI::Experimental::Detail::QueryRegistry&,
            ::OreUI::Experimental::Detail::ViewContextFactory&
        )> const& registrator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Experimental::GameDependencies   gameDependencies,
        ::OreUI::Experimental::ClientDependencies clientDependencies
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
