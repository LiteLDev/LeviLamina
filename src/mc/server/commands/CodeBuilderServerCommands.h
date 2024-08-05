#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CodeBuilderServerCommands {
public:
    // prevent constructor by default
    CodeBuilderServerCommands& operator=(CodeBuilderServerCommands const&);
    CodeBuilderServerCommands(CodeBuilderServerCommands const&);
    CodeBuilderServerCommands();

public:
    // NOLINTBEGIN
    MCAPI static void setupStandardServer(class Minecraft& server, std::string const& networkCommands);

    // NOLINTEND
};
