#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CameraAimAssistSystemUtil { struct BlockHitDetectResult; }
// clang-format on

namespace CameraAimAssistSystemUtil {

struct BlockHitDetectResultEqual {
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool operator()(
        ::CameraAimAssistSystemUtil::BlockHitDetectResult const&,
        ::CameraAimAssistSystemUtil::BlockHitDetectResult const&
    ) const;
#endif
    // NOLINTEND
};

} // namespace CameraAimAssistSystemUtil
