#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandMessage {

public:
    // prevent constructor by default
    CommandMessage& operator=(CommandMessage const&) = delete;
    CommandMessage(CommandMessage const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CommandMessage\@\@QEAA\@XZ
     */
    MCAPI CommandMessage();
    /**
     * @symbol
     * ?getMessage\@CommandMessage\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI std::string getMessage(class CommandOrigin const&) const;
    /**
     * @symbol ??1CommandMessage\@\@QEAA\@XZ
     */
    MCAPI ~CommandMessage();
    // NOLINTEND
};
