/**
 * @file  Stopwatch.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @vftbl  1
     * @symbol  ?stop\@Stopwatch\@\@UEAANXZ
     */
    virtual double stop();
    /**
     * @vftbl  2
     * @symbol  ?stopContinue\@Stopwatch\@\@UEAANXZ
     */
    virtual double stopContinue();
    /**
     * @vftbl  3
     * @symbol  ?print\@Stopwatch\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void print(std::string const &);
    /**
     * @symbol  ??0Stopwatch\@\@QEAA\@XZ
     */
    MCAPI Stopwatch();
    /**
     * @symbol  ?reset\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol  ?start\@Stopwatch\@\@QEAAXXZ
     */
    MCAPI void start();

};