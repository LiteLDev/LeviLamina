/**
 * @file  Brightness.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0Brightness\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI Brightness(struct Brightness const &);
    /**
     * @symbol  ??0Brightness\@\@QEAA\@AEBE\@Z
     */
    MCAPI Brightness(unsigned char const &);
    /**
     * @symbol  ??4Brightness\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct Brightness & operator=(struct Brightness const &);
    /**
     * @symbol  ??4Brightness\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct Brightness & operator=(struct Brightness &&);
    /**
     * @symbol  ?INVALID\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const INVALID;
    /**
     * @symbol  ?MAX\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const MAX;
    /**
     * @symbol  ?MIN\@Brightness\@\@2U1\@B
     */
    MCAPI static struct Brightness const MIN;

};