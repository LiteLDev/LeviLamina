/**
 * @file  CodeBuilderServerCommands.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CodeBuilderServerCommands.
 *
 */
class CodeBuilderServerCommands {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERSERVERCOMMANDS
public:
    class CodeBuilderServerCommands& operator=(class CodeBuilderServerCommands const &) = delete;
    CodeBuilderServerCommands(class CodeBuilderServerCommands const &) = delete;
    CodeBuilderServerCommands() = delete;
#endif

public:
    /**
     * @symbol  ?setupStandardServer\@CodeBuilderServerCommands\@\@SAXAEAVMinecraft\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static void setupStandardServer(class Minecraft &, std::string const &);

};