/**
 * @file  CommandWildcardInt.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -50510106
     * @symbol  ??0CommandWildcardInt\@\@QEAA\@XZ
     */
    MCAPI CommandWildcardInt();
    /**
     * @hash   229454616
     * @symbol  ?getValue\@CommandWildcardInt\@\@QEBAHXZ
     */
    MCAPI int getValue() const;
    /**
     * @hash   -1514661518
     * @symbol  ?isWildcard\@CommandWildcardInt\@\@QEBA_NXZ
     */
    MCAPI bool isWildcard() const;

};