/**
 * @file  AABBShapeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure AABBShapeComponent.
 *
 */
struct AABBShapeComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AABBSHAPECOMPONENT
public:
    struct AABBShapeComponent& operator=(struct AABBShapeComponent const &) = delete;
    AABBShapeComponent(struct AABBShapeComponent const &) = delete;
    AABBShapeComponent() = delete;
#endif

public:
    /**
     * @symbol  ?toString\@AABBShapeComponent\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;

};