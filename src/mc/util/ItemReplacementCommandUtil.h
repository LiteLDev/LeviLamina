#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util { struct ActorReplacementParams; }
namespace Util { struct ContainerReplacementParams; }
namespace Util { struct ReplacementResults; }
// clang-format on

namespace Util {

class ItemReplacementCommandUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Util::ReplacementResults replaceActorSlotsOrError(::Util::ActorReplacementParams& actorParams);

    MCNAPI static ::Util::ReplacementResults
    replaceContainerSlotsOrError(::Util::ContainerReplacementParams& containerParams);
    // NOLINTEND
};

} // namespace Util
