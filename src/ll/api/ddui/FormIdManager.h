#pragma once

#include "ll/api/base/Macro.h"

class Player;

namespace ll::ddui {

class FormIdManager {
public:
    LLNDAPI static uint genFormId();

    LLAPI static void close(Player const& player);
};

} // namespace ll::ddui
