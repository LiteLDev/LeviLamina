#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ClientDependencies.h"
#include "mc/client/gui/oreui/binding/GameDependencies.h"
#include "mc/client/gui/oreui/binding/methods/InvocationStateTracker.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class QueryRegistry; }
namespace OreUI::Detail { class ViewContext; }
// clang-format on

namespace OreUI::Detail {

class ViewContextFactory {
public:
    // ViewContextFactory inner types define
    using QueryRegistrator =
        ::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)>;

    using QueryStorage =
        ::std::vector<::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)>>;

    using CommandRegistrator =
        ::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)>;

    using CommandStorage =
        ::std::vector<::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)>>;

    using ContextPtr = ::std::unique_ptr<::OreUI::Detail::ViewContext>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::OreUI::Detail::InvocationStateTracker> mStateTracker;
    ::ll::TypedStorage<8, 24, ::OreUI::ClientDependencies>             mClientDependencies;
    ::ll::TypedStorage<8, 128, ::OreUI::GameDependencies>              mGameDependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    ViewContextFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    ViewContextFactory(::OreUI::GameDependencies gameDependencies, ::OreUI::ClientDependencies clientDependencies);

    MCAPI ::std::unique_ptr<::OreUI::Detail::ViewContext> makeContext(::OreUI::Detail::Binder& binder);

    MCAPI ~ViewContextFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<
        ::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)>>&
    _commandStorage();

    MCAPI static ::std::vector<
        ::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)>>&
    _queryStorage();

    MCAPI static bool _registerCommand(
        ::std::function<void(::OreUI::Detail::CommandRegistry&, ::OreUI::Detail::ViewContextFactory&)> const&
            registrator
    );

    MCAPI static bool _registerQuery(
        ::std::function<void(::OreUI::Detail::QueryRegistry&, ::OreUI::Detail::ViewContextFactory&)> const& registrator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies gameDependencies, ::OreUI::ClientDependencies clientDependencies);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::Detail
