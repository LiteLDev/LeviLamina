#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated inclusion list
#include "mc/server/commands/CommandSelector.h"

class CommandMessage {
public:
    // CommandMessage inner types declare
    // clang-format off
    struct MessageComponent;
    // clang-format on

    // CommandMessage inner types define
    struct MessageComponent {
    public:
        std::string                                   string;
        std::unique_ptr<CommandSelector<class Actor>> selection;

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0MessageComponent@CommandMessage@@QEAA@$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI explicit MessageComponent(std::string&& s);

        // symbol:
        // ??0MessageComponent@CommandMessage@@QEAA@$$QEAV?$unique_ptr@V?$CommandSelector@VActor@@@@U?$default_delete@V?$CommandSelector@VActor@@@@@std@@@std@@@Z
        MCAPI explicit MessageComponent(std::unique_ptr<class CommandSelector<class Actor>>&& s);

        // symbol: ??0MessageComponent@CommandMessage@@QEAA@$$QEAU01@@Z
        MCAPI MessageComponent(struct CommandMessage::MessageComponent&& m);

        // NOLINTEND
    };

public:
    std::vector<MessageComponent> components;

public:
    // NOLINTBEGIN
    // symbol: ??0CommandMessage@@QEAA@XZ
    MCAPI CommandMessage();

    // symbol:
    // ?getMessage@CommandMessage@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandOrigin@@@Z
    MCAPI std::string getMessage(class CommandOrigin const&) const;

    // symbol: ??1CommandMessage@@QEAA@XZ
    MCAPI ~CommandMessage();

    // NOLINTEND
};
