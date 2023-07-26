#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
enum class CurrentCmdVersion;
// clang-format on

namespace npc {

struct StoredCommand {

public:
    // prevent constructor by default
    StoredCommand& operator=(StoredCommand const&) = delete;
    StoredCommand(StoredCommand const&)            = delete;
    StoredCommand()                                = delete;

public:
    /**
     * @symbol
     * ??0StoredCommand\@npc\@\@QEAA\@W4CurrentCmdVersion\@\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI
        StoredCommand(enum class CurrentCmdVersion, class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ??1StoredCommand\@npc\@\@QEAA\@XZ
     */
    MCAPI ~StoredCommand(); // NOLINT
};

}; // namespace npc
