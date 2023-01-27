/**
 * @file  ActorValueValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ActorValueValidation.
 *
 */
namespace ActorValueValidation {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @hash   1885689885
     * @symbol  ?_fireTelemetryEvent\@ActorValueValidation\@\@YAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD\@Z
     */
    MCAPI void _fireTelemetryEvent(std::string const &, char const *);
    /**
     * @hash   -376156269
     * @symbol  ?_fireTelemetryEvent\@ActorValueValidation\@\@YAXAEBVVec3\@\@PEBD\@Z
     */
    MCAPI void _fireTelemetryEvent(class Vec3 const &, char const *);
    /**
     * @hash   833196048
     * @symbol  ?isLegalPlayerPosition\@ActorValueValidation\@\@YA_NAEBVVec3\@\@PEBD\@Z
     */
    MCAPI bool isLegalPlayerPosition(class Vec3 const &, char const *);
    /**
     * @hash   -174248011
     * @symbol  ?validateBlockPos\@ActorValueValidation\@\@YAXAEBVBlockPos\@\@PEBD\@Z
     */
    MCAPI void validateBlockPos(class BlockPos const &, char const *);
    /**
     * @hash   -158352923
     * @symbol  ?validateVec3Position\@ActorValueValidation\@\@YAXAEBVVec3\@\@PEBD\@Z
     */
    MCAPI void validateVec3Position(class Vec3 const &, char const *);
    /**
     * @hash   -594332285
     * @symbol  ?validateYHeadRot\@ActorValueValidation\@\@YAXMPEBD\@Z
     */
    MCAPI void validateYHeadRot(float, char const *);

};