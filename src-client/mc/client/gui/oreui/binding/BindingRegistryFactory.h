#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ClientDependencies.h"
#include "mc/client/gui/oreui/binding/GameDependencies.h"
#include "mc/client/gui/oreui/binding/methods/InvocationStateTracker.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FocusShortcutRegistry; }
namespace OreUI::Detail { class CommandRegistry; }
namespace OreUI::Detail { class QueryRegistry; }
namespace OreUI::Experimental::Detail { class GameplayModelRegistry; }
// clang-format on

namespace OreUI::Detail {

class BindingRegistryFactory {
public:
    // BindingRegistryFactory inner types declare
    // clang-format off
    struct Registries;
    // clang-format on

    // BindingRegistryFactory inner types define
    struct Registries {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::QueryRegistry>>   mQueries;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::CommandRegistry>> mCommands;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Experimental::Detail::GameplayModelRegistry>>
            mGameplayModels;
        // NOLINTEND
    };

    using QueryRegistrator = ::std::function<void(
        ::OreUI::Detail::QueryRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>;

    using QueryStorage = ::std::vector<::std::function<void(
        ::OreUI::Detail::QueryRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>>;

    using CommandRegistrator = ::std::function<void(
        ::OreUI::Detail::CommandRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>;

    using CommandStorage = ::std::vector<::std::function<void(
        ::OreUI::Detail::CommandRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>>;

    using GameplayModelRegistrator = ::std::function<void(
        ::OreUI::Experimental::Detail::GameplayModelRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>;

    using GameplayModelStorage = ::std::vector<::std::function<void(
        ::OreUI::Experimental::Detail::GameplayModelRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::OreUI::Detail::InvocationStateTracker> mStateTracker;
    ::ll::TypedStorage<8, 24, ::OreUI::ClientDependencies>             mClientDependencies;
    ::ll::TypedStorage<8, 520, ::OreUI::GameDependencies>              mGameDependencies;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingRegistryFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BindingRegistryFactory(::OreUI::GameDependencies gameDependencies, ::OreUI::ClientDependencies clientDependencies);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::function<void(
        ::OreUI::Detail::CommandRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>>&
    _commandStorage();

    MCAPI static ::std::vector<::std::function<void(
        ::OreUI::Experimental::Detail::GameplayModelRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>>&
    _gameplayModelStorage();

    MCAPI static ::std::vector<::std::function<void(
        ::OreUI::Detail::QueryRegistry&,
        ::OreUI::Detail::BindingRegistryFactory&,
        ::OreUI::FocusShortcutRegistry&
    )>>&
    _queryStorage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies gameDependencies, ::OreUI::ClientDependencies clientDependencies);
    // NOLINTEND
};

} // namespace OreUI::Detail
