/**
 * @file  MC/ActorValueValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -572122179
     * @symbol ?_fireTelemetryEvent@ActorValueValidation@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD@Z
     */
    MCAPI void _fireTelemetryEvent(std::string const &, char const *);
    /**
     * @symbol ?_fireTelemetryEvent@ActorValueValidation@@YAXAEBVVec3@@PEBD@Z
     */
    MCAPI void _fireTelemetryEvent(class Vec3 const &, char const *);
    /**
     * @symbol ?isLegalPlayerPosition@ActorValueValidation@@YA_NAEBVVec3@@PEBD@Z
     */
    MCAPI bool isLegalPlayerPosition(class Vec3 const &, char const *);
    /**
     * @hash   1662661205
     * @symbol ?validateBlockPos@ActorValueValidation@@YAXAEBVBlockPos@@PEBD@Z
     */
    MCAPI void validateBlockPos(class BlockPos const &, char const *);
    /**
     * @hash   1678556293
     * @symbol ?validateVec3Position@ActorValueValidation@@YAXAEBVVec3@@PEBD@Z
     */
    MCAPI void validateVec3Position(class Vec3 const &, char const *);
    /**
     * @hash   1242669187
     * @symbol ?validateYHeadRot@ActorValueValidation@@YAXMPEBD@Z
     */
    MCAPI void validateYHeadRot(float, char const *);

};