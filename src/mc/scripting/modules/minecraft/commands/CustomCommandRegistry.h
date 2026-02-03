#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandInterface.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { class CommandClosureStorage; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraft {

class CustomCommandRegistry : public ::ScriptModuleMinecraft::ScriptServerStateMonitor {
public:
    // CustomCommandRegistry inner types declare
    // clang-format off
    struct PendingRegistrations;
    // clang-format on

    // CustomCommandRegistry inner types define
    struct PendingRegistrations {
    public:
        // PendingRegistrations inner types declare
        // clang-format off
        struct CommandData;
        // clang-format on

        // PendingRegistrations inner types define
        struct CommandData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                         mAliasOpt;
            ::ll::TypedStorage<8, 136, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
            ::ll::TypedStorage<
                8,
                104,
                ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>>
                mClosure;
            // NOLINTEND

        public:
            // member functions
            // NOLINTBEGIN
            MCAPI ~CommandData();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCAPI void $dtor();
            // NOLINTEND
        };

        using CommandMap = ::std::unordered_map<
            ::std::string,
            ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>;

        using EnumNameValuesMap = ::std::unordered_map<::std::string, ::std::vector<::std::string>>;

        using EnumValues = ::std::vector<::std::string>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                     mNamespace;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::std::string>>> mEnums;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<
                ::std::string,
                ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations::CommandData>>
            mCommands;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PendingRegistrations();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandRegistry&> mCommandRegistry;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations>>
        mPendingRegistrationsByPack;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::shared_ptr<::ScriptModuleMinecraft::CommandClosureStorage>>>
                                                                               mRegisteredClosures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::std::string>>> mEnumNameStorage;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>             mClaimedAliases;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomCommandRegistry& operator=(CustomCommandRegistry const&);
    CustomCommandRegistry(CustomCommandRegistry const&);
    CustomCommandRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CustomCommandRegistry() /*override*/;

    virtual void _onScriptInitializationComplete() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CustomCommandRegistry(::ServerScriptManagerEvents& events, ::CommandRegistry& commandRegistry);

    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandError> _checkNamespaceConsistency(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const& registrations,
        ::std::string_view                                                          newNamespace
    ) const;

    MCAPI ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&
    _getOrCreatePendingRegistrationsForPack(::std::string const& packUUID, ::std::string_view newNamespace);

    MCAPI void _processRegistrations();

    MCAPI void _reloadRegistrations();

    MCAPI ::std::optional<::std::string> _tryClaimAlias(::std::string const& commandName);

    MCAPI ::std::optional<::std::string> _validateEnumDependencies(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const& registrations,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface const&                commandInterface
    ) const;

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::ScriptModuleMinecraft::ScriptCustomCommandError,
        ::Scripting::EngineError>
    addPendingCommand(
        ::std::string const&                                         packUUID,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface const& commandInterface,
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>&& closure
    );

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::ScriptModuleMinecraft::ScriptCustomCommandError,
        ::Scripting::EngineError>
    addPendingEnum(
        ::std::string const&                packUUID,
        ::std::string const&                name,
        ::std::vector<::std::string> const& values
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerScriptManagerEvents& events, ::CommandRegistry& commandRegistry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_onScriptInitializationComplete();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
