#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"

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
    MCAPI static void _replaceArmorSlots(
        ::Util::ReplacementResults&          replacementResults,
        ::Actor&                             entity,
        ::gsl::span<::ItemStack const>       itemSpan,
        ::SharedTypes::Legacy::EquipmentSlot slotType,
        int                                  count
    );

    MCAPI static bool _slotBoundsValid(
        ::Util::ReplacementResults& replacementResults,
        int                         slotId,
        int                         sizeForSlotIdCheck,
        ::std::optional<int>        consecutiveSlotFillCount,
        ::std::optional<int>        sizeForCountCheck
    );

    MCAPI static ::Util::ReplacementResults replaceActorSlotsOrError(::Util::ActorReplacementParams& actorParams);

    MCAPI static ::Util::ReplacementResults
    replaceContainerSlotsOrError(::Util::ContainerReplacementParams& containerParams);
    // NOLINTEND
};

} // namespace Util
