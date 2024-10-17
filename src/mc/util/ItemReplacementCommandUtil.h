#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/EquipmentSlot.h"

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
    // prevent constructor by default
    ItemReplacementCommandUtil& operator=(ItemReplacementCommandUtil const&);
    ItemReplacementCommandUtil(ItemReplacementCommandUtil const&);
    ItemReplacementCommandUtil();

public:
    // NOLINTBEGIN
    MCAPI static struct Util::ReplacementResults
    replaceActorSlotsOrError(struct Util::ActorReplacementParams& actorParams);

    MCAPI static struct Util::ReplacementResults
    replaceContainerSlotsOrError(struct Util::ContainerReplacementParams& containerParams);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _replaceArmorSlots(
        struct Util::ReplacementResults& replacementResults,
        class Actor&                     entity,
        gsl::span<class ItemStack const> itemSpan,
        ::Puv::Legacy::EquipmentSlot     slotType,
        int                              count
    );

    MCAPI static bool _slotBoundsValid(
        struct Util::ReplacementResults& replacementResults,
        int                              slotId,
        int                              sizeForSlotIdCheck,
        std::optional<int>               consecutiveSlotFillCount,
        std::optional<int>               sizeForCountCheck
    );

    // NOLINTEND
};

}; // namespace Util
