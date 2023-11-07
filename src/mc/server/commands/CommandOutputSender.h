#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class CommandOutputSender {
public:
    // prevent constructor by default
    CommandOutputSender& operator=(CommandOutputSender const&);
    CommandOutputSender(CommandOutputSender const&);
    CommandOutputSender();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CommandOutputSender() = default;

    // vIndex: 1, symbol: ?send@CommandOutputSender@@UEAAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
    virtual void send(class CommandOrigin const&, class CommandOutput const&);

    // vIndex: 2, symbol:
    // ?registerOutputCallback@CommandOutputSender@@UEAAXAEBV?$function@$$A6AXAEAVAutomationCmdOutput@@@Z@std@@@Z
    virtual void registerOutputCallback(std::function<void(class AutomationCmdOutput&)> const&);

    // symbol:
    // ?sendToAdmins@CommandOutputSender@@QEAAXAEBVCommandOrigin@@AEBVCommandOutput@@W4CommandPermissionLevel@@@Z
    MCAPI void sendToAdmins(class CommandOrigin const&, class CommandOutput const&, ::CommandPermissionLevel);

    // symbol:
    // ?translate@CommandOutputSender@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBV23@@Z
    MCAPI static std::vector<std::string> translate(std::vector<std::string> const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_toJson@CommandOutputSender@@IEBA?AVValue@Json@@AEBVCommandOutput@@@Z
    MCAPI class Json::Value _toJson(class CommandOutput const&) const;

    // NOLINTEND
};
