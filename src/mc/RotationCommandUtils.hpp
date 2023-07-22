/**
 * @file  RotationCommandUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace RotationCommandUtils.
 *
 */
namespace RotationCommandUtils {

#define AFTER_EXTRA

class RotationData {
    char filler[32];

	public:
    MCAPI RotationData(class RelativeFloat const&, class RelativeFloat const&,
                               class std::optional<class Vec2> const&);
		
};

    enum class FacingResult;

#undef AFTER_EXTRA
    /**
     * @symbol  ?ComputeFacingRotation\@RotationCommandUtils\@\@YA?AVVec2\@\@AEBVActor\@\@VVec3\@\@AEBV4\@H\@Z
     */
    MCAPI class Vec2 ComputeFacingRotation(class Actor const &, class Vec3, class Vec3 const &, int);
    /**
     * @symbol  ?ComputeRotation\@RotationCommandUtils\@\@YA?AVVec2\@\@AEBVActor\@\@AEBV?$optional\@VRotationData\@RotationCommandUtils\@\@\@std\@\@H\@Z
     */
    MCAPI class Vec2 ComputeRotation(class Actor const &, class std::optional<class RotationCommandUtils::RotationData> const &, int);
    /**
     * @symbol  ?getFacingDirectionFacingEntity\@RotationCommandUtils\@\@YA?AVVec3\@\@PEAVActor\@\@\@Z
     */
    MCAPI class Vec3 getFacingDirectionFacingEntity(class Actor *);
    /**
     * @symbol  ?getFacingDirectionFacingPosition\@RotationCommandUtils\@\@YA?AVVec3\@\@HAEBVCommandOrigin\@\@VCommandPositionFloat\@\@\@Z
     */
    MCAPI class Vec3 getFacingDirectionFacingPosition(int, class CommandOrigin const &, class CommandPositionFloat);

};