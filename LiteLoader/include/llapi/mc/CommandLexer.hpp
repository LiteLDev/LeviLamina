/**
 * @file  CommandLexer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1340903404
     * @symbol  ??0CommandLexer\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI CommandLexer(std::string const &);
    /**
     * @hash   1969052884
     * @symbol  ?next\@CommandLexer\@\@QEBAAEBUToken\@1\@XZ
     */
    MCAPI struct CommandLexer::Token const & next() const;
    /**
     * @hash   1304957125
     * @symbol  ?step\@CommandLexer\@\@QEAAXXZ
     */
    MCAPI void step();
    /**
     * @hash   -1144158450
     * @symbol  ?isDigit\@CommandLexer\@\@SA_ND\@Z
     */
    MCAPI static bool isDigit(char);
    /**
     * @hash   -293725352
     * @symbol  ?isFilePathCharacter\@CommandLexer\@\@SA_ND\@Z
     */
    MCAPI static bool isFilePathCharacter(char);

};