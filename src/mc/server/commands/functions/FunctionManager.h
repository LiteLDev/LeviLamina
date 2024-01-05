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
        // symbol: ??1OriginMapping@FunctionManager@@QEAA@XZ
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
    // vIndex: 0, symbol: __gen_??1FunctionManager@@UEAA@XZ
    virtual ~FunctionManager() = default;

    // symbol:
    // ??0FunctionManager@@QEAA@V?$unique_ptr@VICommandDispatcher@@U?$default_delete@VICommandDispatcher@@@std@@@std@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@2@PEBVGameRule@@@Z
    MCAPI FunctionManager(
        std::unique_ptr<class ICommandDispatcher> commandDispatcher,
        std::unique_ptr<class CommandOrigin>      tickOrigin,
        class GameRule const*                     gameRule
    );

    // symbol: ?execute@FunctionManager@@QEAAHAEAVFunctionEntry@@AEBVCommandOrigin@@W4FunctionQueueOrder@@@Z
    MCAPI int execute(class FunctionEntry& toExecute, class CommandOrigin const& origin, ::FunctionQueueOrder order);

    // symbol:
    // ?getFunction@FunctionManager@@QEAAPEAVFunctionEntry@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class FunctionEntry* getFunction(std::string const& functionName);

    // symbol: ?load@FunctionManager@@QEAAXAEAVResourcePackManager@@AEAVCommandRegistry@@@Z
    MCAPI void load(class ResourcePackManager& serverPackManager, class CommandRegistry& registry);

    // symbol: ?tick@FunctionManager@@QEAAXXZ
    MCAPI void tick();

    // symbol:
    // ?getFunctionNameFromPath@FunctionManager@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPath@Core@@@Z
    MCAPI static std::string getFunctionNameFromPath(class Core::Path const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_addTickFunctionsFromJson@FunctionManager@@IEAAXAEBVValue@Json@@W4CurrentCmdVersion@@@Z
    MCAPI void _addTickFunctionsFromJson(class Json::Value const& arrayVal, ::CurrentCmdVersion);

    // symbol:
    // ?_processFunctionEntry@FunctionManager@@IEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@AEAV43@W4CurrentCmdVersion@@AEBVCommandRegistry@@@Z
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
    // symbol: ?_addOriginReference@FunctionManager@@AEAAAEBVCommandOrigin@@AEBV2@I@Z
    MCAPI class CommandOrigin const& _addOriginReference(class CommandOrigin const& origin, uint amount);

    // symbol:
    // ?_queueCommandsAfterCaller@FunctionManager@@AEAAXAEBV?$vector@V?$unique_ptr@VIFunctionEntry@@U?$default_delete@VIFunctionEntry@@@std@@@std@@V?$allocator@V?$unique_ptr@VIFunctionEntry@@U?$default_delete@VIFunctionEntry@@@std@@@std@@@2@@std@@AEBVCommandOrigin@@@Z
    MCAPI void _queueCommandsAfterCaller(
        std::vector<std::unique_ptr<class IFunctionEntry>> const& toQueue,
        class CommandOrigin const&                                origin
    );

    // symbol: ?_removeOriginReference@FunctionManager@@AEAAXAEBVCommandOrigin@@I@Z
    MCAPI void _removeOriginReference(class CommandOrigin const& origin, uint amount);

    // NOLINTEND
};
