#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct StoredCommand {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC_STOREDCOMMAND
public:
    StoredCommand& operator=(StoredCommand const&) = delete;
    StoredCommand(StoredCommand const&)            = delete;
    StoredCommand()                                = delete;
#endif

public:
    /**
     * @symbol
     * ??0StoredCommand\@npc\@\@QEAA\@W4CurrentCmdVersion\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI
        StoredCommand(enum class CurrentCmdVersion, class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ??1StoredCommand\@npc\@\@QEAA\@XZ
     */
    MCAPI ~StoredCommand();
};

}; // namespace npc
