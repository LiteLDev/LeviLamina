#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ShieldItem : public ::Item {

public:
    // prevent constructor by default
    ShieldItem& operator=(ShieldItem const&) = delete;
    ShieldItem(ShieldItem const&)            = delete;
    ShieldItem()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 49
     * @symbol ?isHandEquipped\@ShieldItem\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const; // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@ShieldItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@ShieldItem\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&)
        const; // NOLINT
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@ShieldItem\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70(); // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72(); // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79(); // NOLINT
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80(); // NOLINT
    /**
     * @vftbl 84
     * @symbol ?use\@ShieldItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?dispense\@ShieldItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@ShieldItem\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@ShieldItem\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 98
     * @symbol ?readUserData\@ShieldItem\@\@UEBAXAEAVItemStackBase\@\@AEAVIDataInput\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void readUserData(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&) const; // NOLINT
    /**
     * @vftbl 99
     * @symbol ?writeUserData\@ShieldItem\@\@UEBAXAEBVItemStackBase\@\@AEAVIDataOutput\@\@\@Z
     */
    virtual void writeUserData(class ItemStackBase const&, class IDataOutput&) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?inventoryTick\@ShieldItem\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?getCooldownType\@ShieldItem\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getCooldownType() const; // NOLINT
    /**
     * @vftbl 104
     * @symbol ?getCooldownTime\@ShieldItem\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const; // NOLINT
    /**
     * @vftbl 109
     * @symbol ?getInHandUpdateType\@ShieldItem\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemInstance\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool)
        const; // NOLINT
    /**
     * @vftbl 110
     * @symbol ?getInHandUpdateType\@ShieldItem\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool)
        const; // NOLINT
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115(); // NOLINT
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116(); // NOLINT
    /**
     * @symbol ??0ShieldItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI ShieldItem(std::string const&, int); // NOLINT
    /**
     * @symbol ?playBlockSound\@ShieldItem\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void playBlockSound(class Player*) const; // NOLINT
    /**
     * @symbol ?playBreakSound\@ShieldItem\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void playBreakSound(class Player*) const; // NOLINT
    /**
     * @symbol ?EFFECTIVE_BLOCK_DELAY\@ShieldItem\@\@2HB
     */
    MCAPI static int const EFFECTIVE_BLOCK_DELAY; // NOLINT
    /**
     * @symbol ?IN_HAND_BLOCK_DURATION\@ShieldItem\@\@2HB
     */
    MCAPI static int const IN_HAND_BLOCK_DURATION; // NOLINT
    /**
     * @symbol ?NO_SHIELD_PATTERN\@ShieldItem\@\@2HB
     */
    MCAPI static int const NO_SHIELD_PATTERN; // NOLINT
    /**
     * @symbol ?TIMESTAMP_TAG\@ShieldItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TIMESTAMP_TAG; // NOLINT

    // private:
    /**
     * @symbol ?_getInHandUpdateType\@ShieldItem\@\@AEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    MCAPI enum class InHandUpdateType
    _getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool)
        const; // NOLINT

private:
};
