/**
 * @file  Brightness.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure Brightness.
 *
 */
struct Brightness {

#define AFTER_EXTRA
    // Add Member There
public:
    unsigned char value;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIGHTNESS
public:
    Brightness() = delete;
#endif

public:
    /**
     * @hash   545354831
     * @symbol  ??0Brightness\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI Brightness(struct Brightness const &);
    /**
     * @hash   496160266
     * @symbol  ??0Brightness\@\@QEAA\@AEBE\@Z
     */
    MCAPI Brightness(unsigned char const &);
    /**
     * @hash   151634934
     * @symbol  ??4Brightness\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct Brightness & operator=(struct Brightness const &);
    /**
     * @hash   1223188038
     * @symbol  ??4Brightness\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct Brightness & operator=(struct Brightness &&);
    /**
     * @hash   -325084628
     * @symbol  ?INVALID\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const INVALID;
    /**
     * @hash   386799179
     * @symbol  ?MAX\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const MAX;
    /**
     * @hash   -1397801285
     * @symbol  ?MIN\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const MIN;

};