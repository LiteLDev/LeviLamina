#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/scripting/ScriptPackConfiguration.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class ScriptPackConfigurationManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    std::unordered_map<std::string, ScriptPackConfiguration> mPackConfigurations;
    ScriptPackConfiguration                                  mDefaultPackConfiguration;

public:
    // prevent constructor by default
    ScriptPackConfigurationManager& operator=(ScriptPackConfigurationManager const&);
    ScriptPackConfigurationManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptPackConfigurationManager@@UEAA@XZ
    virtual ~ScriptPackConfigurationManager();

    // symbol: ??0ScriptPackConfigurationManager@@QEAA@$$QEAV0@@Z
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager&&);

    // symbol: ??0ScriptPackConfigurationManager@@QEAA@AEBV0@@Z
    MCAPI ScriptPackConfigurationManager(class ScriptPackConfigurationManager const&);

    // symbol:
    // ??0ScriptPackConfigurationManager@@QEAA@V?$optional@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@Z
    MCAPI explicit ScriptPackConfigurationManager(std::optional<class Core::PathBuffer<std::string>>);

    // symbol:
    // ?getConfigPath@ScriptPackConfigurationManager@@QEBAAEBV?$optional@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@XZ
    MCAPI std::optional<class Core::PathBuffer<std::string>> const& getConfigPath() const;

    // symbol:
    // ?getPackConfiguration@ScriptPackConfigurationManager@@QEBAAEBVScriptPackConfiguration@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ScriptPackConfiguration const& getPackConfiguration(std::string const&) const;

    // symbol: ?loadPackConfigs@ScriptPackConfigurationManager@@QEAAXXZ
    MCAPI void loadPackConfigs();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?sDefaultConfigurationName@ScriptPackConfigurationManager@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sDefaultConfigurationName;

    // NOLINTEND
};
