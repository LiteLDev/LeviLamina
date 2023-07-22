/**
 * @file  ChannelTransform.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChannelTransform.
 *
 */
class ChannelTransform {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANNELTRANSFORM
public:
    class ChannelTransform& operator=(class ChannelTransform const &) = delete;
    ChannelTransform(class ChannelTransform const &) = delete;
    ChannelTransform() = delete;
#endif

public:
    /**
     * @symbol  ?getDataValues\@ChannelTransform\@\@QEBA_NAEAVVec3\@\@0\@Z
     */
    MCAPI bool getDataValues(class Vec3 &, class Vec3 &) const;

};