/**
 * @file  Vec4.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class Vec4 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEC4
public:
    class Vec4& operator=(class Vec4 const &) = delete;
    Vec4(class Vec4 const &) = delete;
    Vec4() = delete;
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
