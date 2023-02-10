/**
 * @file  Stopwatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Stopwatch.
 *
 */
class Stopwatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPWATCH
public:
    class Stopwatch& operator=(class Stopwatch const &) = delete;
    Stopwatch(class Stopwatch const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Stopwatch();
    /**
     * @hash   -35750961
     * @vftbl  1
     * @symbol  ?stop\@Stopwatch\@\@UEAANXZ
     */
    virtual double stop();
    /**
     * @hash   1685729942
     * @vftbl  2
     * @symbol  ?stopContinue\@Stopwatch\@\@UEAANXZ
     */
    virtual double stopContinue();
    /**
     * @hash   412796917
     * @vftbl  3
     * @symbol  ?print\@Stopwatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void print(std::string const &);
    /**
     * @hash   1235939129
     * @symbol  ??0Stopwatch\@\@QEAA\@XZ
     */
    MCAPI Stopwatch();
    /**
     * @hash   -1927788013
     * @symbol  ?reset\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   2065893209
     * @symbol  ?start\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void start();

};