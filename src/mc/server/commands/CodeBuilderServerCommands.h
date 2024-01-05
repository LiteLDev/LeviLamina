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
    // symbol:
    // ?setupStandardServer@CodeBuilderServerCommands@@SAXAEAVMinecraft@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static void setupStandardServer(class Minecraft& server, std::string const& networkCommands);

    // NOLINTEND
};
