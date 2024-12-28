#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
// clang-format on

class CodeBuilderServerCommands {
public:
    // prevent constructor by default
    CodeBuilderServerCommands& operator=(CodeBuilderServerCommands const&);
    CodeBuilderServerCommands(CodeBuilderServerCommands const&);
    CodeBuilderServerCommands();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setupStandardServer(::Minecraft& server, ::std::string const& networkCommands);
    // NOLINTEND
};
