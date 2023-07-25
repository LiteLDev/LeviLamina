#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CodeBuilderServerCommands {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERSERVERCOMMANDS
public:
    CodeBuilderServerCommands& operator=(CodeBuilderServerCommands const&) = delete;
    CodeBuilderServerCommands(CodeBuilderServerCommands const&)            = delete;
    CodeBuilderServerCommands()                                            = delete;
#endif

public:
    /**
     * @symbol
     * ?setupStandardServer\@CodeBuilderServerCommands\@\@SAXAEAVMinecraft\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void setupStandardServer(class Minecraft&, std::string const&);
};
