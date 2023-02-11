/**
 * @file  ConsoleInputReader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ConsoleInputReader.
 *
 */
class ConsoleInputReader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSOLEINPUTREADER
public:
    class ConsoleInputReader& operator=(class ConsoleInputReader const &) = delete;
    ConsoleInputReader(class ConsoleInputReader const &) = delete;
#endif

public:
    /**
     * @hash   1949075250
     * @symbol  ??0ConsoleInputReader\@\@QEAA\@XZ
     */
    MCAPI ConsoleInputReader();
    /**
     * @hash   -558769603
     * @symbol  ?getLine\@ConsoleInputReader\@\@QEAA_NAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool getLine(std::string &);
    /**
     * @hash   1904863061
     * @symbol  ?unblockReading\@ConsoleInputReader\@\@QEAAXXZ
     */
    MCAPI void unblockReading();
    /**
     * @hash   -1982630432
     * @symbol  ??1ConsoleInputReader\@\@QEAA\@XZ
     */
    MCAPI ~ConsoleInputReader();

};