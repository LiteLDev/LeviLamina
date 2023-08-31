#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/EquipmentSlot.h"

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
    ItemReplacementCommandUtil& operator=(ItemReplacementCommandUtil const&) = delete;
    ItemReplacementCommandUtil(ItemReplacementCommandUtil const&)            = delete;
    ItemReplacementCommandUtil()                                             = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_replaceArmorSlots\@ItemReplacementCommandUtil\@Util\@\@CAXAEAUReplacementResults\@2\@AEAVActor\@\@V?$span\@$$CBVItemStack\@\@$0?0\@gsl\@\@W4EquipmentSlot\@\@H\@Z
     */
    MCAPI static void _replaceArmorSlots(
        struct Util::ReplacementResults&,
        class Actor&,
        gsl::span<class ItemStack const>,
        enum class EquipmentSlot,
        int32_t
    );
    /**
     * @symbol
     * ?_slotBoundsValid\@ItemReplacementCommandUtil\@Util\@\@CA_NAEAUReplacementResults\@2\@HHV?$optional\@H\@std\@\@1\@Z
     */
    MCAPI static bool
    _slotBoundsValid(struct Util::ReplacementResults&, int32_t, int32_t, std::optional<int32_t>, std::optional<int32_t>);
    // NOLINTEND
};

}; // namespace Util
