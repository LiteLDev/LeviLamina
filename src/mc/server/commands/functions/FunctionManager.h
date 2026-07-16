#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/functions/FunctionQueueOrder.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
class FunctionEntry;
class GameRule;
class ICommandDispatcher;
class IFunctionEntry;
class ResourcePackManager;
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
    struct OriginMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOrigin;
        ::ll::TypedStorage<4, 4, uint>                               mRefCount;
        // NOLINTEND
    };

    struct QueuedCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IFunctionEntry*>                       mFunction;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::CommandOrigin const*>> mOrigin;
        // NOLINTEND
    };

    struct TickFunction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::FunctionEntry*>> mFunction;
        ::ll::TypedStorage<1, 1, ::FunctionQueueOrder>              mOrder;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameRule const*>                                mGameRule;
    ::ll::TypedStorage<1, 1, bool>                                             mIsProcessingStack;
    ::ll::TypedStorage<8, 8, uint64>                                           mInsertPoint;
    ::ll::TypedStorage<4, 4, int>                                              mExecutionCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::FunctionManager::QueuedCommand>> mCommandList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CommandOrigin const*, ::FunctionManager::OriginMapping>>
                                                                      mOriginMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ICommandDispatcher>> mCommandDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>>      mTickOrigin;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::FunctionEntry>>> mFunctions;
    ::ll::TypedStorage<8, 24, ::std::vector<::FunctionManager::TickFunction>>                          mTickFunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FunctionManager() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FunctionManager(
        ::std::unique_ptr<::ICommandDispatcher> commandDispatcher,
        ::std::unique_ptr<::CommandOrigin>      tickOrigin,
        ::GameRule const*                       gameRule
    );

    MCAPI int
    _processCommandStack(::FunctionEntry& toExecute, ::CommandOrigin const& origin, ::FunctionQueueOrder order);

    MCAPI ::FunctionEntry* getFunction(::std::string const& functionName);

    MCAPI void load(::ResourcePackManager& serverPackManager, ::CommandRegistry& registry);
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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
