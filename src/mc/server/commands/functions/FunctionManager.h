#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/enums/FunctionQueueOrder.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FunctionManager {
public:
    // FunctionManager inner types declare
    // clang-format off
    struct OriginMapping;
    // clang-format on

    // FunctionManager inner types define
    struct OriginMapping {
    public:
        // prevent constructor by default
        OriginMapping& operator=(OriginMapping const&);
        OriginMapping(OriginMapping const&);
        OriginMapping();

    public:
        // NOLINTBEGIN
        MCAPI ~OriginMapping();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    FunctionManager& operator=(FunctionManager const&);
    FunctionManager(FunctionManager const&);
    FunctionManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FunctionManager() = default;

    MCAPI FunctionManager(
        std::unique_ptr<class ICommandDispatcher> commandDispatcher,
        std::unique_ptr<class CommandOrigin>      tickOrigin,
        class GameRule const*                     gameRule
    );

    MCAPI int execute(class FunctionEntry& toExecute, class CommandOrigin const& origin, ::FunctionQueueOrder order);

    MCAPI class FunctionEntry* getFunction(std::string const& functionName);

    MCAPI void load(class ResourcePackManager& serverPackManager, class CommandRegistry& registry);

    MCAPI void tick();

    MCAPI static std::string getFunctionNameFromPath(class Core::Path const&);

    MCAPI static ::FunctionQueueOrder getQueueOrderForCommandVersion(::CurrentCmdVersion version);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _addTickFunctionsFromJson(class Json::Value const& arrayVal, ::CurrentCmdVersion);

    MCAPI void _processFunctionEntry(
        std::string const&              functionName,
        std::vector<std::string> const& lines,
        std::vector<std::string>&       errorList,
        ::CurrentCmdVersion             commandVersion,
        class CommandRegistry const&    registry
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class CommandOrigin const& _addOriginReference(class CommandOrigin const& origin, uint amount);

    MCAPI void _queueCommandsAfterCaller(
        std::vector<std::unique_ptr<class IFunctionEntry>> const& toQueue,
        class CommandOrigin const&                                origin
    );

    MCAPI void _removeOriginReference(class CommandOrigin const& origin, uint amount);

    // NOLINTEND
};
