#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ScriptStat {
public:
    // ScriptStat inner types define
    enum class Type {};

public:
    // prevent constructor by default
    ScriptStat();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptStat@@QEAA@$$QEAU0@@Z
    MCAPI ScriptStat(struct ScriptStat&&);

    // symbol: ??0ScriptStat@@QEAA@AEBU0@@Z
    MCAPI ScriptStat(struct ScriptStat const&);

    // symbol:
    // ??0ScriptStat@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$optional@W4Type@ScriptStat@@@2@1@Z
    MCAPI
    ScriptStat(std::string const&, std::string const&, std::optional<std::string>, std::optional<::ScriptStat::Type>, std::optional<std::string>);

    // symbol: ??4ScriptStat@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct ScriptStat& operator=(struct ScriptStat&&);

    // symbol: ??4ScriptStat@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ScriptStat& operator=(struct ScriptStat const&);

    // symbol: ??1ScriptStat@@QEAA@XZ
    MCAPI ~ScriptStat();

    // symbol: ?bindType@ScriptStat@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // NOLINTEND
};
