/**
 * @file  MC/ConsoleInputReader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1857572674
     * @symbol ??0ConsoleInputReader@@QEAA@XZ
     */
    MCAPI ConsoleInputReader();
    /**
     * @hash   -650287555
     * @symbol ?getLine@ConsoleInputReader@@QEAA_NAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool getLine(std::string &);
    /**
     * @hash   1813345109
     * @symbol ?unblockReading@ConsoleInputReader@@QEAAXXZ
     */
    MCAPI void unblockReading();
    /**
     * @hash   -2074133008
     * @symbol ??1ConsoleInputReader@@QEAA@XZ
     */
    MCAPI ~ConsoleInputReader();

};