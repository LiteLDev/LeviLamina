#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

class CommandMessage {

public:
    struct MessageComponent {
        std::string                                   string;
        std::unique_ptr<CommandSelector<class Actor>> selection;
    };
    std::vector<MessageComponent> components;
    /**
     * @symbol ??0CommandMessage\@\@QEAA\@XZ
     */
    MCAPI CommandMessage(); // NOLINT
    /**
     * @symbol
     * ?getMessage\@CommandMessage\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI std::string getMessage(class CommandOrigin const&) const; // NOLINT
    /**
     * @symbol ??1CommandMessage\@\@QEAA\@XZ
     */
    MCAPI ~CommandMessage(); // NOLINT
};
