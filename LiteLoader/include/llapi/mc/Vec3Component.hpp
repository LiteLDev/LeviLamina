/**
 * @file  Vec3Component.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct Vec3Component {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEC3COMPONENT
public:
    struct Vec3Component& operator=(struct Vec3Component const &) = delete;
    Vec3Component(struct Vec3Component const &) = delete;
    Vec3Component() = delete;
#endif

public:
    /**
     * @symbol  ?getDiff\@Vec3Component\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBU1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(struct Vec3Component const &, struct Vec3Component const &);

};