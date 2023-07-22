/**
 * @file  Vec2Component.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct Vec2Component {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEC2COMPONENT
public:
    struct Vec2Component& operator=(struct Vec2Component const &) = delete;
    Vec2Component(struct Vec2Component const &) = delete;
    Vec2Component() = delete;
#endif

public:
    /**
     * @symbol  ?getDiff\@Vec2Component\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBU1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(struct Vec2Component const &, struct Vec2Component const &);

};