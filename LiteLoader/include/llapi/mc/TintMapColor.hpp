/**
 * @file  TintMapColor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TintMapColor {

#define AFTER_EXTRA
public:
    std::array<mce::Color,4> colors;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TINTMAPCOLOR
public:
    class TintMapColor& operator=(class TintMapColor const &) = delete;
    TintMapColor(class TintMapColor const &) = delete;
#endif

public:
    /**
     * @symbol ??0TintMapColor\@\@QEAA\@XZ
     */
    MCAPI TintMapColor();

};
