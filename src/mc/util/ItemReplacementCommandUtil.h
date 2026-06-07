#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
namespace Util { struct ActorReplacementParams; }
namespace Util { struct ContainerReplacementParams; }
namespace Util { struct ReplacementResults; }
// clang-format on

namespace Util {

class ItemReplacementCommandUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _replaceArmorSlots(
        ::Util::ReplacementResults&          replacementResults,
        ::Actor&                             entity,
        ::gsl::span<::ItemStack const>       itemSpan,
        ::SharedTypes::Legacy::EquipmentSlot slotType,
        int                                  count
    );

    MCNAPI static ::Util::ReplacementResults replaceActorSlotsOrError(::Util::ActorReplacementParams& actorParams);

    MCNAPI static ::Util::ReplacementResults
    replaceContainerSlotsOrError(::Util::ContainerReplacementParams& containerParams);
    // NOLINTEND
};

} // namespace Util
