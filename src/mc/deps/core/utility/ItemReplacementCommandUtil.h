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
    // symbol:
    // ?replaceActorSlotsOrError@ItemReplacementCommandUtil@Util@@SA?AUReplacementResults@2@AEAUActorReplacementParams@2@@Z
    MCAPI static struct Util::ReplacementResults replaceActorSlotsOrError(struct Util::ActorReplacementParams&);

    // symbol:
    // ?replaceContainerSlotsOrError@ItemReplacementCommandUtil@Util@@SA?AUReplacementResults@2@AEAUContainerReplacementParams@2@@Z
    MCAPI static struct Util::ReplacementResults replaceContainerSlotsOrError(struct Util::ContainerReplacementParams&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_replaceArmorSlots@ItemReplacementCommandUtil@Util@@CAXAEAUReplacementResults@2@AEAVActor@@V?$span@$$CBVItemStack@@$0?0@gsl@@W4EquipmentSlot@Legacy@Puv@@H@Z
    MCAPI static void _replaceArmorSlots(
        struct Util::ReplacementResults&,
        class Actor& entity,
        gsl::span<class ItemStack const>,
        ::Puv::Legacy::EquipmentSlot,
        int count
    );

    // symbol: ?_slotBoundsValid@ItemReplacementCommandUtil@Util@@CA_NAEAUReplacementResults@2@HHV?$optional@H@std@@1@Z
    MCAPI static bool
    _slotBoundsValid(struct Util::ReplacementResults&, int slotId, int, std::optional<int>, std::optional<int>);

    // NOLINTEND
};

}; // namespace Util
