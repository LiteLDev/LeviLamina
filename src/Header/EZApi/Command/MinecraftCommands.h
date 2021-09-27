#pragma once

#include "../dll.h"
#include <memory>

class CommandContext;
struct MCRESULT;

class MinecraftCommands {
public:
    MCAPI MCRESULT executeCommand(std::shared_ptr<CommandContext> ctx, bool print) const;
};