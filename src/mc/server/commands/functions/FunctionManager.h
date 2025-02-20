#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/server/commands/functions/FunctionQueueOrder.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandRegistry;
class FunctionEntry;
class GameRule;
class ICommandDispatcher;
class IFunctionEntry;
class ResourcePackManager;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FunctionManager {
public:
    // FunctionManager inner types declare
    // clang-format off
    struct OriginMapping;
    struct QueuedCommand;
    struct TickFunction;
    // clang-format on

    // FunctionManager inner types define
    struct TickFunction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk482e9d;
        ::ll::UntypedStorage<1, 1> mUnk4d0171;
        // NOLINTEND

    public:
        // prevent constructor by default
        TickFunction& operator=(TickFunction const&);
        TickFunction(TickFunction const&);
        TickFunction();
    };

    struct QueuedCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkcf60d0;
        ::ll::UntypedStorage<8, 8> mUnkf29853;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedCommand& operator=(QueuedCommand const&);
        QueuedCommand(QueuedCommand const&);
        QueuedCommand();
    };

    struct OriginMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9600ef;
        ::ll::UntypedStorage<4, 4> mUnk4c4426;
        // NOLINTEND

    public:
        // prevent constructor by default
        OriginMapping& operator=(OriginMapping const&);
        OriginMapping(OriginMapping const&);
        OriginMapping();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~OriginMapping();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk434392;
    ::ll::UntypedStorage<1, 1>  mUnkc90958;
    ::ll::UntypedStorage<8, 8>  mUnkb87a32;
    ::ll::UntypedStorage<4, 4>  mUnk5cf55c;
    ::ll::UntypedStorage<8, 24> mUnkb4927f;
    ::ll::UntypedStorage<8, 64> mUnk34a953;
    ::ll::UntypedStorage<8, 8>  mUnkd26b3c;
    ::ll::UntypedStorage<8, 8>  mUnk35042f;
    ::ll::UntypedStorage<8, 64> mUnk754948;
    ::ll::UntypedStorage<8, 24> mUnka7e559;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionManager& operator=(FunctionManager const&);
    FunctionManager(FunctionManager const&);
    FunctionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FunctionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FunctionManager(
        ::std::unique_ptr<::ICommandDispatcher> commandDispatcher,
        ::std::unique_ptr<::CommandOrigin>      tickOrigin,
        ::GameRule const*                       gameRule
    );

    MCAPI ::CommandOrigin const& _addOriginReference(::CommandOrigin const& origin, uint amount);

    MCAPI void _addTickFunctionsFromJson(::Json::Value const& arrayVal, ::CurrentCmdVersion resourceCommandVersion);

    MCAPI void _loadTickFiles(::ResourcePackManager const& serverPackManager);

    MCAPI void _processFunctionEntry(
        ::std::string const&                functionName,
        ::std::vector<::std::string> const& lines,
        ::std::vector<::std::string>&       errorList,
        ::CurrentCmdVersion                 commandVersion,
        ::CommandRegistry const&            registry
    );

    MCAPI void _queueCommandsAfterCaller(
        ::std::vector<::std::unique_ptr<::IFunctionEntry>> const& toQueue,
        ::CommandOrigin const&                                    origin
    );

    MCAPI void _removeOriginReference(::CommandOrigin const& origin, uint amount);

    MCAPI int execute(::FunctionEntry& toExecute, ::CommandOrigin const& origin, ::FunctionQueueOrder order);

    MCAPI int getExecutionLimit() const;

    MCAPI void load(::ResourcePackManager& serverPackManager, ::CommandRegistry& registry);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getFunctionNameFromPath(::Core::Path const& filename);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::ICommandDispatcher> commandDispatcher,
        ::std::unique_ptr<::CommandOrigin>      tickOrigin,
        ::GameRule const*                       gameRule
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
