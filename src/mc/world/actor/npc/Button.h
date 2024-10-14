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
    MCAPI struct npc::Button& operator=(std::string_view newName);

    MCAPI ~Button();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace npc
