#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec4 {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEC4
public:
    Vec4& operator=(Vec4 const&) = delete;
    Vec4(Vec4 const&)            = delete;
    Vec4()                       = delete;
#endif

public:
    /**
     * @symbol ?MAX\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const MAX;
    /**
     * @symbol ?MIN\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const MIN;
    /**
     * @symbol ?ONE\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const ONE;
    /**
     * @symbol ?ZERO\@Vec4\@\@2V1\@B
     */
    MCAPI static class Vec4 const ZERO;
};
