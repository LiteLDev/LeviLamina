/**
 * @file  CommandWildcardInt.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandWildcardInt.
 *
 */
class CommandWildcardInt {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDWILDCARDINT
public:
    class CommandWildcardInt& operator=(class CommandWildcardInt const &) = delete;
    CommandWildcardInt(class CommandWildcardInt const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CommandWildcardInt\@\@QEAA\@XZ
     */
    MCAPI CommandWildcardInt();
    /**
     * @symbol  ?getValue\@CommandWildcardInt\@\@QEBAHXZ
     */
    MCAPI int getValue() const;
    /**
     * @symbol  ?isWildcard\@CommandWildcardInt\@\@QEBA_NXZ
     */
    MCAPI bool isWildcard() const;

};