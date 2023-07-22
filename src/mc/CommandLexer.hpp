/**
 * @file  CommandLexer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandLexer.
 *
 */
class CommandLexer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDLEXER
public:
    class CommandLexer& operator=(class CommandLexer const &) = delete;
    CommandLexer(class CommandLexer const &) = delete;
    CommandLexer() = delete;
#endif

public:
    /**
     * @symbol  ??0CommandLexer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI CommandLexer(std::string const &);
    /**
     * @symbol  ?next\@CommandLexer\@\@QEBAAEBUToken\@1\@XZ
     */
    MCAPI struct CommandLexer::Token const & next() const;
    /**
     * @symbol  ?step\@CommandLexer\@\@QEAAXXZ
     */
    MCAPI void step();
    /**
     * @symbol  ?isDigit\@CommandLexer\@\@SA_ND\@Z
     */
    MCAPI static bool isDigit(char);
    /**
     * @symbol  ?isFilePathCharacter\@CommandLexer\@\@SA_ND\@Z
     */
    MCAPI static bool isFilePathCharacter(char);

};