#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ColorChannel {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLORCHANNEL
public:
    ColorChannel& operator=(ColorChannel const&) = delete;
    ColorChannel(ColorChannel const&)            = delete;
    ColorChannel()                               = delete;
#endif

public:
    /**
     * @symbol ?INVALID\@ColorChannel\@\@2V1\@B
     */
    MCAPI static class ColorChannel const INVALID;
};
