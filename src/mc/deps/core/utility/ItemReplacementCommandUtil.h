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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_ITEMREPLACEMENTCOMMANDUTIL
public:
    ItemReplacementCommandUtil& operator=(ItemReplacementCommandUtil const&) = delete;
    ItemReplacementCommandUtil(ItemReplacementCommandUtil const&)            = delete;
    ItemReplacementCommandUtil()                                             = delete;
#endif

public:
    /**
     * @symbol
     * ?replaceActorSlotsOrError\@ItemReplacementCommandUtil\@Util\@\@SA?AUReplacementResults\@2\@AEAUActorReplacementParams\@2\@\@Z
     */
    MCAPI static struct Util::ReplacementResults replaceActorSlotsOrError(struct Util::ActorReplacementParams&);
    /**
     * @symbol
     * ?replaceContainerSlotsOrError\@ItemReplacementCommandUtil\@Util\@\@SA?AUReplacementResults\@2\@AEAUContainerReplacementParams\@2\@\@Z
     */
    MCAPI static struct Util::ReplacementResults replaceContainerSlotsOrError(struct Util::ContainerReplacementParams&);

    // private:
    /**
     * @symbol
     * ?_replaceArmorSlots\@ItemReplacementCommandUtil\@Util\@\@CAXAEAUReplacementResults\@2\@AEAVActor\@\@V?$span\@$$CBVItemStack\@\@$0?0\@gsl\@\@W4EquipmentSlot\@\@H\@Z
     */
    MCAPI static void _replaceArmorSlots(
        struct Util::ReplacementResults&,
        class Actor&,
        class gsl::span<class ItemStack const, -1>,
        enum class EquipmentSlot,
        int
    );
    /**
     * @symbol
     * ?_slotBoundsValid\@ItemReplacementCommandUtil\@Util\@\@CA_NAEAUReplacementResults\@2\@HHV?$optional\@H\@std\@\@1\@Z
     */
    MCAPI static bool
    _slotBoundsValid(struct Util::ReplacementResults&, int, int, class std::optional<int>, class std::optional<int>);

private:
};

}; // namespace Util
