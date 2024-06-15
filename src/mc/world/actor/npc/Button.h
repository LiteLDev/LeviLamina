#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct Button {
public:
    // prevent constructor by default
    Button& operator=(Button const&);
    Button(Button const&);
    Button();

public:
    // NOLINTBEGIN
    // symbol: ??4Button@npc@@QEAAAEAU01@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI struct npc::Button& operator=(std::string_view newName);

    // symbol: ??1Button@npc@@QEAA@XZ
    MCAPI ~Button();

    // NOLINTEND
};

}; // namespace npc
