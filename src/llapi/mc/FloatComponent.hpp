/**
 * @file  FloatComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct FloatComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATCOMPONENT
public:
    struct FloatComponent& operator=(struct FloatComponent const &) = delete;
    FloatComponent(struct FloatComponent const &) = delete;
    FloatComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getDiff\@FloatComponent\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBU1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(struct FloatComponent const &, struct FloatComponent const &);

};