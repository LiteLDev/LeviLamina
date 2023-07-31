#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CodeBuilderServerCommands {

public:
    // prevent constructor by default
    CodeBuilderServerCommands& operator=(CodeBuilderServerCommands const&) = delete;
    CodeBuilderServerCommands(CodeBuilderServerCommands const&)            = delete;
    CodeBuilderServerCommands()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?setupStandardServer\@CodeBuilderServerCommands\@\@SAXAEAVMinecraft\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void setupStandardServer(class Minecraft&, std::string const&);
    // NOLINTEND
};
