#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct ActionValue {

public:
    // prevent constructor by default
    ActionValue& operator=(ActionValue const&) = delete;
    ActionValue(ActionValue const&)            = delete;

public:
    /**
     * @symbol ??0ActionValue\@npc\@\@QEAA\@XZ
     */
    MCAPI ActionValue(); // NOLINT
    /**
     * @symbol ??4ActionValue\@npc\@\@QEAAAEAU01\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct npc::ActionValue&
    operator=(class std::basic_string_view<char, struct std::char_traits<char>>); // NOLINT
    /**
     * @symbol ?rawValue\@ActionValue\@npc\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> rawValue() const; // NOLINT
    /**
     * @symbol ??1ActionValue\@npc\@\@QEAA\@XZ
     */
    MCAPI ~ActionValue(); // NOLINT
};

}; // namespace npc
