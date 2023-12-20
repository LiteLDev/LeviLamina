#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ScriptDiagnostics {
public:
    // prevent constructor by default
    ScriptDiagnostics& operator=(ScriptDiagnostics const&);
    ScriptDiagnostics(ScriptDiagnostics const&);
    ScriptDiagnostics();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptDiagnostics@@QEAA@AEAUReflectionCtx@cereal@@@Z
    MCAPI explicit ScriptDiagnostics(struct cereal::ReflectionCtx&);

    // symbol:
    // ?addStatCollector@ScriptDiagnostics@@QEAAXV?$function@$$A6A?AV?$vector@UScriptStat@@V?$allocator@UScriptStat@@@std@@@std@@XZ@std@@@Z
    MCAPI void addStatCollector(std::function<std::vector<struct ScriptStat>(void)>);

    // symbol: ?addStatPublisher@ScriptDiagnostics@@QEAAXV?$not_null@PEAVIScriptStatPublisher@@@gsl@@@Z
    MCAPI void addStatPublisher(gsl::not_null<class IScriptStatPublisher*>);

    // symbol: ?areAnyPublishersEnabled@ScriptDiagnostics@@QEBA_NXZ
    MCAPI bool areAnyPublishersEnabled() const;

    // symbol: ?processStatCollectors@ScriptDiagnostics@@QEAAXXZ
    MCAPI void processStatCollectors();

    // symbol: ?publishAndClearStats@ScriptDiagnostics@@QEAAXXZ
    MCAPI void publishAndClearStats();

    // symbol: ?removeAll@ScriptDiagnostics@@QEAAXXZ
    MCAPI void removeAll();

    // NOLINTEND
};
