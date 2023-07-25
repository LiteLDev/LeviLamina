#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct ActionValue {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC_ACTIONVALUE
public:
    ActionValue& operator=(ActionValue const&) = delete;
    ActionValue(ActionValue const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ActionValue\@npc\@\@QEAA\@XZ
     */
    MCAPI ActionValue();
    /**
     * @symbol ??4ActionValue\@npc\@\@QEAAAEAU01\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct npc::ActionValue& operator=(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ?rawValue\@ActionValue\@npc\@\@QEBA?AV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::basic_string_view<char, struct std::char_traits<char>> rawValue() const;
    /**
     * @symbol ??1ActionValue\@npc\@\@QEAA\@XZ
     */
    MCAPI ~ActionValue();
};

}; // namespace npc
