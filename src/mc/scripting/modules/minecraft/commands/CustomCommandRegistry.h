#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/script_engine/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/ScriptServerStateMonitor.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
struct ServerScriptManagerEvents;
namespace ScriptModuleMinecraft { struct ScriptCustomCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandInterface; }
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
            ::ll::UntypedStorage<8, 40>  mUnkcc381b;
            ::ll::UntypedStorage<8, 136> mUnkfa69c6;
            ::ll::UntypedStorage<8, 232> mUnk89e32f;
            // NOLINTEND

        public:
            // prevent constructor by default
            CommandData& operator=(CommandData const&);
            CommandData(CommandData const&);
            CommandData();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ~CommandData();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk7a426d;
        ::ll::UntypedStorage<8, 64> mUnkdf9c46;
        ::ll::UntypedStorage<8, 64> mUnkd6a7d8;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingRegistrations& operator=(PendingRegistrations const&);
        PendingRegistrations(PendingRegistrations const&);
        PendingRegistrations();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PendingRegistrations(::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&&);

        MCNAPI ~PendingRegistrations();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk383c50;
    ::ll::UntypedStorage<8, 64> mUnk34d4c0;
    ::ll::UntypedStorage<8, 64> mUnk823e0c;
    ::ll::UntypedStorage<8, 24> mUnk2d5f71;
    ::ll::UntypedStorage<8, 64> mUnkc47c8c;
    // NOLINTEND

public:
    // prevent constructor by default
    CustomCommandRegistry& operator=(CustomCommandRegistry const&);
    CustomCommandRegistry(CustomCommandRegistry const&);
    CustomCommandRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomCommandRegistry() /*override*/;

    // vIndex: 2
    virtual void _onScriptInitializationComplete() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CustomCommandRegistry(::ServerScriptManagerEvents& events, ::CommandRegistry& commandRegistry);

    MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandError> _checkNamespaceConsistency(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const& registrations,
        ::std::string_view                                                          newNamespace
    ) const;

    MCNAPI ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations&
    _getOrCreatePendingRegistrationsForPack(::std::string const& packUUID, ::std::string_view newNamespace);

    MCNAPI void _processRegistrations();

    MCNAPI void _reloadRegistrations();

    MCNAPI ::std::optional<::std::string> _tryClaimAlias(::std::string const& commandName);

    MCNAPI ::std::optional<::std::string> _validateEnumDependencies(
        ::ScriptModuleMinecraft::CustomCommandRegistry::PendingRegistrations const& registrations,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface const&                commandInterface
    ) const;

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptNamespaceNameError,
        ::ScriptModuleMinecraft::ScriptCustomCommandError,
        ::Scripting::EngineError>
    addPendingCommand(
        ::std::string const&                                         packUUID,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface const& commandInterface,
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>&& closure
    );

    MCNAPI ::Scripting::Result<
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
    MCNAPI void* $ctor(::ServerScriptManagerEvents& events, ::CommandRegistry& commandRegistry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onScriptInitializationComplete();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
