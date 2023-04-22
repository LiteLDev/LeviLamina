/**
 * @file  IntComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct IntComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTCOMPONENT
public:
    struct IntComponent& operator=(struct IntComponent const &) = delete;
    IntComponent(struct IntComponent const &) = delete;
    IntComponent() = delete;
#endif

public:
    /**
     * @symbol ?getDiff\@IntComponent\@\@SA?AV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@AEBU1\@0\@Z
     */
    MCAPI static class std::optional<std::string> getDiff(struct IntComponent const &, struct IntComponent const &);

};