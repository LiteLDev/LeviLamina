#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct Button {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPC_BUTTON
public:
    Button& operator=(Button const&) = delete;
    Button(Button const&)            = delete;
#endif

public:
    /**
     * @symbol ??0Button\@npc\@\@QEAA\@XZ
     */
    MCAPI Button();
    /**
     * @symbol ??4Button\@npc\@\@QEAAAEAU01\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI struct npc::Button& operator=(class std::basic_string_view<char, struct std::char_traits<char>>);
    /**
     * @symbol ??1Button\@npc\@\@QEAA\@XZ
     */
    MCAPI ~Button();
};

}; // namespace npc
