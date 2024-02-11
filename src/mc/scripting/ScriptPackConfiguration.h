#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/scripting/ScriptPackPermissions.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ScriptPackConfiguration {
public:
    std::unordered_map<std::string, Json::Value> mPackVariables;
    std::unordered_map<std::string, std::string> mPackSecrets;
    ScriptPackPermissions                        mPackPermisions;

public:
    // prevent constructor by default
    ScriptPackConfiguration& operator=(ScriptPackConfiguration const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptPackConfiguration@@QEAA@XZ
    MCAPI ScriptPackConfiguration();

    // symbol: ??0ScriptPackConfiguration@@QEAA@$$QEAV0@@Z
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration&&);

    // symbol: ??0ScriptPackConfiguration@@QEAA@AEBV0@@Z
    MCAPI ScriptPackConfiguration(class ScriptPackConfiguration const&);

    // symbol: ?getPermissions@ScriptPackConfiguration@@QEBAAEBVScriptPackPermissions@@XZ
    MCAPI class ScriptPackPermissions const& getPermissions() const;

    // symbol:
    // ?getSecrets@ScriptPackConfiguration@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    MCAPI std::unordered_map<std::string, std::string> const& getSecrets() const;

    // symbol:
    // ?getVariables@ScriptPackConfiguration@@QEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VValue@Json@@@std@@@2@@std@@XZ
    MCAPI std::unordered_map<std::string, class Json::Value> const& getVariables() const;

    // symbol: ??4ScriptPackConfiguration@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ScriptPackConfiguration& operator=(class ScriptPackConfiguration&&);

    // symbol: ??1ScriptPackConfiguration@@QEAA@XZ
    MCAPI ~ScriptPackConfiguration();

    // NOLINTEND
};
