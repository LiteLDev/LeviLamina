#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/SoftEnumUpdateType.h"

class CommandSoftEnumRegistry {
public:
    class CommandRegistry* registry;

    [[nodiscard]] inline explicit CommandSoftEnumRegistry(class CommandRegistry& registry)
    : CommandSoftEnumRegistry(&registry) {}

public:
    // NOLINTBEGIN
    // symbol: ??0CommandSoftEnumRegistry@@QEAA@PEAVCommandRegistry@@@Z
    MCAPI explicit CommandSoftEnumRegistry(class CommandRegistry* registry);

    // symbol:
    // ?updateSoftEnum@CommandSoftEnumRegistry@@QEAAXW4SoftEnumUpdateType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
    MCAPI void updateSoftEnum(::SoftEnumUpdateType type, std::string const& enumName, std::vector<std::string> values);

    // symbol: ??1CommandSoftEnumRegistry@@QEAA@XZ
    MCAPI ~CommandSoftEnumRegistry();

    // NOLINTEND
};
