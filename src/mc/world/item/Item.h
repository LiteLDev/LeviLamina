#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // Item inner types declare
    // clang-format off
    class ScopedCreativeGroup;
    class Tier;
    // clang-format on

    // Item inner types define
    class ScopedCreativeGroup {

    public:
        // prevent constructor by default
        ScopedCreativeGroup& operator=(ScopedCreativeGroup const&) = delete;
        ScopedCreativeGroup(ScopedCreativeGroup const&)            = delete;
        ScopedCreativeGroup()                                      = delete;

    public:
        /**
         * @symbol
         * ??0ScopedCreativeGroup\@Item\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVBlock\@\@PEBVCompoundTag\@\@\@Z
         */
        MCAPI ScopedCreativeGroup(std::string const&, class Block const*, class CompoundTag const*); // NOLINT
        /**
         * @symbol
         * ??0ScopedCreativeGroup\@Item\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemInstance\@\@\@Z
         */
        MCAPI ScopedCreativeGroup(std::string const&, class ItemInstance const&); // NOLINT
        /**
         * @symbol
         * ??0ScopedCreativeGroup\@Item\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEAV1\@FPEBVCompoundTag\@\@\@Z
         */
        MCAPI ScopedCreativeGroup(std::string const&, class Item*, short, class CompoundTag const*); // NOLINT
        /**
         * @symbol ??1ScopedCreativeGroup\@Item\@\@QEAA\@XZ
         */
        MCAPI ~ScopedCreativeGroup(); // NOLINT
    };

    class Tier {

    public:
        // prevent constructor by default
        Tier& operator=(Tier const&) = delete;
        Tier(Tier const&)            = delete;
        Tier()                       = delete;

    public:
        /**
         * @symbol ??0Tier\@Item\@\@QEAA\@HHMHH\@Z
         */
        MCAPI Tier(int, int, float, int, int); // NOLINT
        /**
         * @symbol ?getAttackDamageBonus\@Tier\@Item\@\@QEBAHXZ
         */
        MCAPI int getAttackDamageBonus() const; // NOLINT
        /**
         * @symbol ?getEnchantmentValue\@Tier\@Item\@\@QEBAHXZ
         */
        MCAPI int getEnchantmentValue() const; // NOLINT
        /**
         * @symbol ?getLevel\@Tier\@Item\@\@QEBAHXZ
         */
        MCAPI int getLevel() const; // NOLINT
        /**
         * @symbol ?getSpeed\@Tier\@Item\@\@QEBAMXZ
         */
        MCAPI float getSpeed() const; // NOLINT
        /**
         * @symbol ?getUses\@Tier\@Item\@\@QEBAHXZ
         */
        MCAPI int getUses() const; // NOLINT
    };

public:
    // prevent constructor by default
    Item& operator=(Item const&) = delete;
    Item(Item const&)            = delete;
    Item()                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initServer\@Item\@\@UEAA_NAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    virtual bool initServer(class Json::Value&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tearDown\@Item\@\@UEAAXXZ
     */
    virtual void tearDown(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?setDescriptionId\@Item\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Item& setDescriptionId(std::string const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?getDescriptionId\@Item\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getDescriptionId() const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getMaxUseDuration\@Item\@\@UEBAHPEBVItemInstance\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemInstance const*) const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getMaxUseDuration\@Item\@\@UEBAHPEBVItemStack\@\@\@Z
     */
    virtual int getMaxUseDuration(class ItemStack const*) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?isMusicDisk\@Item\@\@UEBA_NXZ
     */
    virtual bool isMusicDisk() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?hasTag\@Item\@\@UEBA_NAEBVHashedString\@\@\@Z
     */
    virtual bool hasTag(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?hasTag\@Item\@\@UEBA_NAEBUItemTag\@\@\@Z
     */
    virtual bool hasTag(struct ItemTag const&) const; // NOLINT
    /**
     * @vftbl 10
     * @symbol
     * ?executeEvent\@Item\@\@UEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const; // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?isArmor\@Item\@\@UEBA_NXZ
     */
    virtual bool isArmor() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?isBlockPlanterItem\@Item\@\@UEBA_NXZ
     */
    virtual bool isBlockPlanterItem() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?isCamera\@Item\@\@UEBA_NXZ
     */
    virtual bool isCamera() const; // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 17
     * @symbol ?isDamageable\@Item\@\@UEBA_NXZ
     */
    virtual bool isDamageable() const; // NOLINT
    /**
     * @vftbl 18
     * @symbol ?isDyeable\@Item\@\@UEBA_NXZ
     */
    virtual bool isDyeable() const; // NOLINT
    /**
     * @vftbl 19
     * @symbol ?isDye\@Item\@\@UEBA_NXZ
     */
    virtual bool isDye() const; // NOLINT
    /**
     * @vftbl 20
     * @symbol ?getItemColor\@Item\@\@UEBA?AW4ItemColor\@\@XZ
     */
    virtual enum class ItemColor getItemColor() const; // NOLINT
    /**
     * @vftbl 21
     * @symbol __unk_vfn_21
     */
    virtual void __unk_vfn_21(); // NOLINT
    /**
     * @vftbl 22
     * @symbol ?isFood\@Item\@\@UEBA_NXZ
     */
    virtual bool isFood() const; // NOLINT
    /**
     * @vftbl 23
     * @symbol ?isThrowable\@Item\@\@UEBA_NXZ
     */
    virtual bool isThrowable() const; // NOLINT
    /**
     * @vftbl 24
     * @symbol ?isUseable\@Item\@\@UEBA_NXZ
     */
    virtual bool isUseable() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol ?getComponent\@Item\@\@UEBAPEAVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    virtual class ItemComponent* getComponent(class HashedString const&) const; // NOLINT
    /**
     * @vftbl 26
     * @symbol ?getCamera\@Item\@\@UEBAPEAVICameraItemComponent\@\@XZ
     */
    virtual class ICameraItemComponent* getCamera() const; // NOLINT
    /**
     * @vftbl 27
     * @symbol ?getFood\@Item\@\@UEBAPEAVIFoodItemComponent\@\@XZ
     */
    virtual class IFoodItemComponent* getFood() const; // NOLINT
    /**
     * @vftbl 28
     * @symbol ?setMaxStackSize\@Item\@\@UEAAAEAV1\@E\@Z
     */
    virtual class Item& setMaxStackSize(unsigned char); // NOLINT
    /**
     * @vftbl 29
     * @symbol ?setStackedByData\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item& setStackedByData(bool); // NOLINT
    /**
     * @vftbl 30
     * @symbol ?setMaxDamage\@Item\@\@UEAAAEAV1\@H\@Z
     */
    virtual class Item& setMaxDamage(int); // NOLINT
    /**
     * @vftbl 31
     * @symbol ?setHandEquipped\@Item\@\@UEAAAEAV1\@XZ
     */
    virtual class Item& setHandEquipped(); // NOLINT
    /**
     * @vftbl 32
     * @symbol ?setUseAnimation\@Item\@\@UEAAAEAV1\@W4UseAnimation\@\@\@Z
     */
    virtual class Item& setUseAnimation(enum class UseAnimation); // NOLINT
    /**
     * @vftbl 33
     * @symbol ?setMaxUseDuration\@Item\@\@UEAAAEAV1\@H\@Z
     */
    virtual class Item& setMaxUseDuration(int); // NOLINT
    /**
     * @vftbl 34
     * @symbol ?setRequiresWorldBuilder\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item& setRequiresWorldBuilder(bool); // NOLINT
    /**
     * @vftbl 35
     * @symbol ?setExplodable\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item& setExplodable(bool); // NOLINT
    /**
     * @vftbl 36
     * @symbol ?setFireResistant\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item& setFireResistant(bool); // NOLINT
    /**
     * @vftbl 37
     * @symbol ?setIsGlint\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item& setIsGlint(bool); // NOLINT
    /**
     * @vftbl 38
     * @symbol ?setShouldDespawn\@Item\@\@UEAAAEAV1\@_N\@Z
     */
    virtual class Item& setShouldDespawn(bool); // NOLINT
    /**
     * @vftbl 39
     * @symbol
     * ?buildNetworkTag\@Item\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const; // NOLINT
    /**
     * @vftbl 40
     * @symbol ?initializeFromNetwork\@Item\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 41
     * @symbol
     * ?validateFromNetwork\@Item\@\@UEAA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&); // NOLINT
    /**
     * @vftbl 42
     * @symbol ?getBlockShape\@Item\@\@UEBA?AW4BlockShape\@\@XZ
     */
    virtual enum class BlockShape getBlockShape() const; // NOLINT
    /**
     * @vftbl 43
     * @symbol ?canBeDepleted\@Item\@\@UEBA_NXZ
     */
    virtual bool canBeDepleted() const; // NOLINT
    /**
     * @vftbl 44
     * @symbol ?canDestroySpecial\@Item\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool canDestroySpecial(class Block const&) const; // NOLINT
    /**
     * @vftbl 45
     * @symbol ?getLevelDataForAuxValue\@Item\@\@UEBAHH\@Z
     */
    virtual int getLevelDataForAuxValue(int) const; // NOLINT
    /**
     * @vftbl 46
     * @symbol ?isStackedByData\@Item\@\@UEBA_NXZ
     */
    virtual bool isStackedByData() const; // NOLINT
    /**
     * @vftbl 47
     * @symbol ?getMaxDamage\@Item\@\@UEBAFXZ
     */
    virtual short getMaxDamage() const; // NOLINT
    /**
     * @vftbl 48
     * @symbol ?getAttackDamage\@Item\@\@UEBAHXZ
     */
    virtual int getAttackDamage() const; // NOLINT
    /**
     * @vftbl 49
     * @symbol ?isHandEquipped\@Item\@\@UEBA_NXZ
     */
    virtual bool isHandEquipped() const; // NOLINT
    /**
     * @vftbl 50
     * @symbol ?isGlint\@Item\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    virtual bool isGlint(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51(); // NOLINT
    /**
     * @vftbl 52
     * @symbol ?getPatternIndex\@Item\@\@UEBAHXZ
     */
    virtual int getPatternIndex() const; // NOLINT
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53(); // NOLINT
    /**
     * @vftbl 54
     * @symbol ?isWearableThroughLootTable\@Item\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool isWearableThroughLootTable(class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 55
     * @symbol ?canDestroyInCreative\@Item\@\@UEBA_NXZ
     */
    virtual bool canDestroyInCreative() const; // NOLINT
    /**
     * @vftbl 56
     * @symbol ?isDestructive\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const; // NOLINT
    /**
     * @vftbl 57
     * @symbol ?isLiquidClipItem\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isLiquidClipItem(int) const; // NOLINT
    /**
     * @vftbl 58
     * @symbol ?shouldInteractionWithBlockBypassLiquid\@Item\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const; // NOLINT
    /**
     * @vftbl 59
     * @symbol ?requiresInteract\@Item\@\@UEBA_NXZ
     */
    virtual bool requiresInteract() const; // NOLINT
    /**
     * @vftbl 60
     * @symbol
     * ?appendFormattedHovertext\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const&, class Level&, std::string&, bool) const; // NOLINT
    /**
     * @vftbl 61
     * @symbol ?isValidRepairItem\@Item\@\@UEBA_NAEBVItemStackBase\@\@0AEBVBaseGameVersion\@\@\@Z
     */
    virtual bool isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&)
        const; // NOLINT
    /**
     * @vftbl 62
     * @symbol ?getEnchantSlot\@Item\@\@UEBAHXZ
     */
    virtual int getEnchantSlot() const; // NOLINT
    /**
     * @vftbl 63
     * @symbol ?getEnchantValue\@Item\@\@UEBAHXZ
     */
    virtual int getEnchantValue() const; // NOLINT
    /**
     * @vftbl 64
     * @symbol ?getArmorValue\@Item\@\@UEBAHXZ
     */
    virtual int getArmorValue() const; // NOLINT
    /**
     * @vftbl 65
     * @symbol ?getToughnessValue\@Item\@\@UEBAHXZ
     */
    virtual int getToughnessValue() const; // NOLINT
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66(); // NOLINT
    /**
     * @vftbl 67
     * @symbol ?isValidAuxValue\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isValidAuxValue(int) const; // NOLINT
    /**
     * @vftbl 68
     * @symbol ?getDamageChance\@Item\@\@UEBAHH\@Z
     */
    virtual int getDamageChance(int) const; // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getViewDamping\@Item\@\@UEBAMXZ
     */
    virtual float getViewDamping() const; // NOLINT
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
     * @vftbl 73
     * @symbol ?getColor\@Item\@\@UEBA?AVColor\@mce\@\@PEBVCompoundTag\@\@AEBVItemDescriptor\@\@\@Z
     */
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const; // NOLINT
    /**
     * @vftbl 74
     * @symbol ?hasCustomColor\@Item\@\@UEBA_NPEBVCompoundTag\@\@\@Z
     */
    virtual bool hasCustomColor(class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75(); // NOLINT
    /**
     * @vftbl 76
     * @symbol ?clearColor\@Item\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void clearColor(class ItemStackBase&) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol ?clearColor\@Item\@\@UEBAXPEAVCompoundTag\@\@\@Z
     */
    virtual void clearColor(class CompoundTag*) const; // NOLINT
    /**
     * @vftbl 78
     * @symbol ?setColor\@Item\@\@UEBAXAEAVItemStackBase\@\@AEBVColor\@mce\@\@\@Z
     */
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const; // NOLINT
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
     * @vftbl 81
     * @symbol ?getActorIdentifier\@Item\@\@UEBA?AUActorDefinitionIdentifier\@\@AEBVItemStack\@\@\@Z
     */
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const; // NOLINT
    /**
     * @vftbl 82
     * @symbol ?buildIdAux\@Item\@\@UEBAHFPEBVCompoundTag\@\@\@Z
     */
    virtual int buildIdAux(short, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 83
     * @symbol ?canUseOnSimTick\@Item\@\@UEBA_NXZ
     */
    virtual bool canUseOnSimTick() const; // NOLINT
    /**
     * @vftbl 84
     * @symbol ?use\@Item\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack& use(class ItemStack&, class Player&) const; // NOLINT
    /**
     * @vftbl 85
     * @symbol ?dispense\@Item\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 86
     * @symbol ?useTimeDepleted\@Item\@\@UEBA?AW4ItemUseMethod\@\@AEAVItemStack\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack&, class Level*, class Player*) const; // NOLINT
    /**
     * @vftbl 87
     * @symbol ?releaseUsing\@Item\@\@UEBAXAEAVItemStack\@\@PEAVPlayer\@\@H\@Z
     */
    virtual void releaseUsing(class ItemStack&, class Player*, int) const; // NOLINT
    /**
     * @vftbl 88
     * @symbol ?getDestroySpeed\@Item\@\@UEBAMAEBVItemStackBase\@\@AEBVBlock\@\@\@Z
     */
    virtual float getDestroySpeed(class ItemStackBase const&, class Block const&) const; // NOLINT
    /**
     * @vftbl 89
     * @symbol ?hurtActor\@Item\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 90
     * @symbol ?hitActor\@Item\@\@UEBAXAEAVItemStack\@\@AEAVActor\@\@AEAVMob\@\@\@Z
     */
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const; // NOLINT
    /**
     * @vftbl 91
     * @symbol ?hitBlock\@Item\@\@UEBAXAEAVItemStack\@\@AEBVBlock\@\@AEBVBlockPos\@\@AEAVMob\@\@\@Z
     */
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const; // NOLINT
    /**
     * @vftbl 92
     * @symbol ?mineBlock\@Item\@\@UEBA_NAEAVItemInstance\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemInstance&, class Block const&, int, int, int, class Actor*) const; // NOLINT
    /**
     * @vftbl 93
     * @symbol ?mineBlock\@Item\@\@UEBA_NAEAVItemStack\@\@AEBVBlock\@\@HHHPEAVActor\@\@\@Z
     */
    virtual bool mineBlock(class ItemStack&, class Block const&, int, int, int, class Actor*) const; // NOLINT
    /**
     * @vftbl 94
     * @symbol
     * ?buildDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildDescriptionName(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 95
     * @symbol
     * ?buildDescriptionId\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemDescriptor\@\@PEBVCompoundTag\@\@\@Z
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 96
     * @symbol
     * ?buildEffectDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVItemStackBase\@\@\@Z
     */
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 97
     * @symbol
     * ?buildCategoryDescriptionName\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string buildCategoryDescriptionName() const; // NOLINT
    /**
     * @vftbl 98
     * @symbol ?readUserData\@Item\@\@UEBAXAEAVItemStackBase\@\@AEAVIDataInput\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual void readUserData(class ItemStackBase&, class IDataInput&, class ReadOnlyBinaryStream&) const; // NOLINT
    /**
     * @vftbl 99
     * @symbol ?writeUserData\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVIDataOutput\@\@\@Z
     */
    virtual void writeUserData(class ItemStackBase const&, class IDataOutput&) const; // NOLINT
    /**
     * @vftbl 100
     * @symbol ?getMaxStackSize\@Item\@\@UEBAEAEBVItemDescriptor\@\@\@Z
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const&) const; // NOLINT
    /**
     * @vftbl 101
     * @symbol ?inventoryTick\@Item\@\@UEBA_NAEAVItemStack\@\@AEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    virtual bool inventoryTick(class ItemStack&, class Level&, class Actor&, int, bool) const; // NOLINT
    /**
     * @vftbl 102
     * @symbol ?refreshedInContainer\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void refreshedInContainer(class ItemStackBase const&, class Level&) const; // NOLINT
    /**
     * @vftbl 103
     * @symbol ?getCooldownType\@Item\@\@UEBAAEBVHashedString\@\@XZ
     */
    virtual class HashedString const& getCooldownType() const; // NOLINT
    /**
     * @vftbl 104
     * @symbol ?getCooldownTime\@Item\@\@UEBAHXZ
     */
    virtual int getCooldownTime() const; // NOLINT
    /**
     * @vftbl 105
     * @symbol ?fixupCommon\@Item\@\@UEBAXAEAVItemStackBase\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase&) const; // NOLINT
    /**
     * @vftbl 106
     * @symbol ?fixupCommon\@Item\@\@UEBAXAEAVItemStackBase\@\@AEAVLevel\@\@\@Z
     */
    virtual void fixupCommon(class ItemStackBase&, class Level&) const; // NOLINT
    /**
     * @vftbl 107
     * @symbol ?getDamageValue\@Item\@\@UEBAFPEBVCompoundTag\@\@\@Z
     */
    virtual short getDamageValue(class CompoundTag const*) const; // NOLINT
    /**
     * @vftbl 108
     * @symbol ?setDamageValue\@Item\@\@UEBAXAEAVItemStackBase\@\@F\@Z
     */
    virtual void setDamageValue(class ItemStackBase&, short) const; // NOLINT
    /**
     * @vftbl 109
     * @symbol ?getInHandUpdateType\@Item\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemInstance\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemInstance const&, class ItemInstance const&, bool, bool)
        const; // NOLINT
    /**
     * @vftbl 110
     * @symbol ?getInHandUpdateType\@Item\@\@UEBA?AW4InHandUpdateType\@\@AEBVPlayer\@\@AEBVItemStack\@\@1_N2\@Z
     */
    virtual enum class InHandUpdateType
    getInHandUpdateType(class Player const&, class ItemStack const&, class ItemStack const&, bool, bool)
        const; // NOLINT
    /**
     * @vftbl 111
     * @symbol ?validFishInteraction\@Item\@\@UEBA_NH\@Z
     */
    virtual bool validFishInteraction(int) const; // NOLINT
    /**
     * @vftbl 112
     * @symbol ?enchantProjectile\@Item\@\@UEBAXAEBVItemStackBase\@\@AEAVActor\@\@\@Z
     */
    virtual void enchantProjectile(class ItemStackBase const&, class Actor&) const; // NOLINT
    /**
     * @vftbl 113
     * @symbol ?getEquipLocation\@Item\@\@UEBA?AW4ActorLocation\@\@XZ
     */
    virtual enum class ActorLocation getEquipLocation() const; // NOLINT
    /**
     * @vftbl 114
     * @symbol ?getEquipSound\@Item\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getEquipSound() const; // NOLINT
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
     * @vftbl 117
     * @symbol ?hasSameRelevantUserData\@Item\@\@UEBA_NAEBVItemStackBase\@\@0\@Z
     */
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 118
     * @symbol ?initClient\@Item\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&); // NOLINT
    /**
     * @vftbl 119
     * @symbol
     * ?setIconInfo\@Item\@\@UEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual class Item& setIconInfo(std::string const&, int); // NOLINT
    /**
     * @vftbl 120
     * @symbol ?getIconInfo\@Item\@\@UEBA?AUResolvedItemIconInfo\@\@AEBVItemStackBase\@\@H_N\@Z
     */
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const; // NOLINT
    /**
     * @vftbl 121
     * @symbol
     * ?getInteractText\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVPlayer\@\@\@Z
     */
    virtual std::string getInteractText(class Player const&) const; // NOLINT
    /**
     * @vftbl 122
     * @symbol ?getAnimationFrameFor\@Item\@\@UEBAHPEAVMob\@\@_NPEBVItemStack\@\@_N\@Z
     */
    virtual int getAnimationFrameFor(class Mob*, bool, class ItemStack const*, bool) const; // NOLINT
    /**
     * @vftbl 123
     * @symbol ?isEmissive\@Item\@\@UEBA_NH\@Z
     */
    virtual bool isEmissive(int) const; // NOLINT
    /**
     * @vftbl 124
     * @symbol ?getLightEmission\@Item\@\@UEBA?AUBrightness\@\@H\@Z
     */
    virtual struct Brightness getLightEmission(int) const; // NOLINT
    /**
     * @vftbl 125
     * @symbol ?getIconYOffset\@Item\@\@UEBAHXZ
     */
    virtual int getIconYOffset() const; // NOLINT
    /**
     * @vftbl 126
     * @symbol ?canBeCharged\@Item\@\@UEBA_NXZ
     */
    virtual bool canBeCharged() const; // NOLINT
    /**
     * @vftbl 127
     * @symbol ?playSoundIncrementally\@Item\@\@UEBAXAEBVItemInstance\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemInstance const&, class Mob&) const; // NOLINT
    /**
     * @vftbl 128
     * @symbol ?playSoundIncrementally\@Item\@\@UEBAXAEBVItemStack\@\@AEAVMob\@\@\@Z
     */
    virtual void playSoundIncrementally(class ItemStack const&, class Mob&) const; // NOLINT
    /**
     * @vftbl 129
     * @symbol ?getFurnaceBurnIntervalMultipler\@Item\@\@UEBAMXZ
     */
    virtual float getFurnaceBurnIntervalMultipler() const; // NOLINT
    /**
     * @vftbl 130
     * @symbol ?getFurnaceXPmultiplier\@Item\@\@UEBAMAEBVItemStackBase\@\@\@Z
     */
    virtual float getFurnaceXPmultiplier(class ItemStackBase const&) const; // NOLINT
    /**
     * @vftbl 131
     * @symbol
     * ?getAuxValuesDescription\@Item\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getAuxValuesDescription() const; // NOLINT
    /**
     * @vftbl 132
     * @symbol ?_checkUseOnPermissions\@Item\@\@EEBA_NAEAVActor\@\@AEAVItemStackBase\@\@AEBEAEBVBlockPos\@\@\@Z
     */
    virtual bool _checkUseOnPermissions(class Actor&, class ItemStackBase&, unsigned char const&, class BlockPos const&)
        const; // NOLINT
    /**
     * @vftbl 133
     * @symbol ?_calculatePlacePos\@Item\@\@EEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    virtual bool
    _calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const; // NOLINT
    /**
     * @vftbl 134
     * @symbol ?_shouldAutoCalculatePlacePos\@Item\@\@EEBA_NXZ
     */
    virtual bool _shouldAutoCalculatePlacePos() const; // NOLINT
    /**
     * @vftbl 135
     * @symbol ?_useOn\@Item\@\@EEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, unsigned char, class Vec3 const&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEM
    /**
     * @symbol ?getBaseColor\@Item\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getBaseColor(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getSecondaryColor\@Item\@\@UEBA?AVColor\@mce\@\@AEBVItemStack\@\@\@Z
     */
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?hasCustomColor\@Item\@\@UEBA_NAEBVItemStackBase\@\@\@Z
     */
    MCVAPI bool hasCustomColor(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?isActorPlacerItem\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isActorPlacerItem() const; // NOLINT
    /**
     * @symbol ?isBucket\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isBucket() const; // NOLINT
    /**
     * @symbol ?isCandle\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isCandle() const; // NOLINT
    /**
     * @symbol ?isComplex\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isComplex() const; // NOLINT
    /**
     * @symbol ?isComponentBased\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isComponentBased() const; // NOLINT
    /**
     * @symbol ?isFertilizer\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isFertilizer() const; // NOLINT
    /**
     * @symbol ?isMultiColorTinted\@Item\@\@UEBA_NAEBVItemStack\@\@\@Z
     */
    MCVAPI bool isMultiColorTinted(class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?isPattern\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool isPattern() const; // NOLINT
    /**
     * @symbol ?shouldSendInteractionGameEvents\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool shouldSendInteractionGameEvents() const; // NOLINT
    /**
     * @symbol ?showsDurabilityInCreative\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool showsDurabilityInCreative() const; // NOLINT
    /**
     * @symbol ?uniqueAuxValues\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool uniqueAuxValues() const; // NOLINT
    /**
     * @symbol ?useInterruptedByAttacking\@Item\@\@UEBA_NXZ
     */
    MCVAPI bool useInterruptedByAttacking() const; // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Item(); // NOLINT
#endif
    /**
     * @symbol ??0Item\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@F\@Z
     */
    MCAPI Item(std::string const&, short); // NOLINT
    /**
     * @symbol ?addOnResetBAIcallback\@Item\@\@QEAAXAEBV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    MCAPI void addOnResetBAIcallback(class std::function<void(void)> const&); // NOLINT
    /**
     * @symbol ?addTag\@Item\@\@QEAAAEAV1\@AEBUItemTag\@\@\@Z
     */
    MCAPI class Item& addTag(struct ItemTag const&); // NOLINT
    /**
     * @symbol ?addTag\@Item\@\@QEAAAEAV1\@AEBVHashedString\@\@\@Z
     */
    MCAPI class Item& addTag(class HashedString const&); // NOLINT
    /**
     * @symbol
     * ?addTags\@Item\@\@QEAAAEAV1\@V?$initializer_list\@V?$reference_wrapper\@$$CBUItemTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class Item&
        addTags(class std::initializer_list<class std::reference_wrapper<struct ItemTag const>>); // NOLINT
    /**
     * @symbol ?buildDescriptor\@Item\@\@QEBA?AVItemDescriptor\@\@FPEBVCompoundTag\@\@\@Z
     */
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const*) const; // NOLINT
    /**
     * @symbol ?calculatePlacePos\@Item\@\@QEBA_NAEAVItemStackBase\@\@AEAVActor\@\@AEAEAEAVBlockPos\@\@\@Z
     */
    MCAPI bool calculatePlacePos(class ItemStackBase&, class Actor&, unsigned char&, class BlockPos&) const; // NOLINT
    /**
     * @symbol ?canBeUsedInCommands\@Item\@\@QEBA_NAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI bool canBeUsedInCommands(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ?destroySpeedBonus\@Item\@\@QEBAMAEBVItemStackBase\@\@\@Z
     */
    MCAPI float destroySpeedBonus(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol
     * ?getCommandNames\@Item\@\@QEBA?AV?$vector\@UCommandName\@\@V?$allocator\@UCommandName\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct CommandName> getCommandNames() const; // NOLINT
    /**
     * @symbol ?getCreativeCategory\@Item\@\@QEBA?AW4CreativeItemCategory\@\@XZ
     */
    MCAPI enum class CreativeItemCategory getCreativeCategory() const; // NOLINT
    /**
     * @symbol
     * ?getCreativeGroup\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getCreativeGroup() const; // NOLINT
    /**
     * @symbol ?getFrameCount\@Item\@\@QEBAHXZ
     */
    MCAPI int getFrameCount() const; // NOLINT
    /**
     * @symbol
     * ?getFullItemName\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFullItemName() const; // NOLINT
    /**
     * @symbol ?getFullNameHash\@Item\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getFullNameHash() const; // NOLINT
    /**
     * @symbol ?getId\@Item\@\@QEBAFXZ
     */
    MCAPI short getId() const; // NOLINT
    /**
     * @symbol ?getLegacyBlock\@Item\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const; // NOLINT
    /**
     * @symbol ?getNamespace\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getNamespace() const; // NOLINT
    /**
     * @symbol ?getRawNameHash\@Item\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getRawNameHash() const; // NOLINT
    /**
     * @symbol ?getRawNameId\@Item\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getRawNameId() const; // NOLINT
    /**
     * @symbol ?getRequiredBaseGameVersion\@Item\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const; // NOLINT
    /**
     * @symbol
     * ?getSerializedName\@Item\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getSerializedName() const; // NOLINT
    /**
     * @symbol ?isCommandOnly\@Item\@\@QEBA_NAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI bool isCommandOnly(class BaseGameVersion const&) const; // NOLINT
    /**
     * @symbol ?isElytra\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isElytra() const; // NOLINT
    /**
     * @symbol ?isNameTag\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isNameTag() const; // NOLINT
    /**
     * @symbol ?isSeed\@Item\@\@QEBA_NXZ
     */
    MCAPI bool isSeed() const; // NOLINT
    /**
     * @symbol ??8Item\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class Item const&) const; // NOLINT
    /**
     * @symbol ?setAllowOffhand\@Item\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class Item& setAllowOffhand(bool); // NOLINT
    /**
     * @symbol ?setCategory\@Item\@\@QEAAAEAV1\@W4CreativeItemCategory\@\@\@Z
     */
    MCAPI class Item& setCategory(enum class CreativeItemCategory); // NOLINT
    /**
     * @symbol
     * ?setCreativeGroup\@Item\@\@QEAAAEAV1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Item& setCreativeGroup(std::string const&); // NOLINT
    /**
     * @symbol ?setFurnaceBurnIntervalMultiplier\@Item\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float); // NOLINT
    /**
     * @symbol ?setFurnaceXPmultiplier\@Item\@\@QEAAAEAV1\@M\@Z
     */
    MCAPI class Item& setFurnaceXPmultiplier(float); // NOLINT
    /**
     * @symbol ?setHoverTextColorFormat\@Item\@\@QEAAXAEBV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI void
    setHoverTextColorFormat(class std::basic_string_view<char, struct std::char_traits<char>> const&); // NOLINT
    /**
     * @symbol ?setIsMirroredArt\@Item\@\@QEAAAEAV1\@_N\@Z
     */
    MCAPI class Item& setIsMirroredArt(bool); // NOLINT
    /**
     * @symbol ?setMinRequiredBaseGameVersion\@Item\@\@QEAAAEAV1\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?shouldDespawn\@Item\@\@QEBA_NXZ
     */
    MCAPI bool shouldDespawn() const; // NOLINT
    /**
     * @symbol ?updateCustomBlockEntityTag\@Item\@\@QEBA_NAEAVBlockSource\@\@AEAVItemStackBase\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool
    updateCustomBlockEntityTag(class BlockSource&, class ItemStackBase&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?useOn\@Item\@\@QEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@HHHEAEBVVec3\@\@\@Z
     */
    MCAPI class InteractionResult
    useOn(class ItemStack&, class Actor&, int, int, int, unsigned char, class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const&); // NOLINT
    /**
     * @symbol ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const&); // NOLINT
    /**
     * @symbol ?addCreativeItem\@Item\@\@SAXVItemRegistryRef\@\@AEBVItemInstance\@\@\@Z
     */
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const&); // NOLINT
    /**
     * @symbol ?addLooseCreativeItems\@Item\@\@SAX_NAEBVBaseGameVersion\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const&, class ItemRegistryRef); // NOLINT
    /**
     * @symbol ?endCreativeItemDefinitions\@Item\@\@SAX_N\@Z
     */
    MCAPI static void endCreativeItemDefinitions(bool); // NOLINT
    /**
     * @symbol ?isElytra\@Item\@\@SA_NAEBVItemDescriptor\@\@\@Z
     */
    MCAPI static bool isElytra(class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?isElytraBroken\@Item\@\@SA_NH\@Z
     */
    MCAPI static bool isElytraBroken(int); // NOLINT
    /**
     * @symbol ?isFlyEnabled\@Item\@\@SA_NAEBVItemInstance\@\@\@Z
     */
    MCAPI static bool isFlyEnabled(class ItemInstance const&); // NOLINT
    /**
     * @symbol ?isSameTypeAndItem\@Item\@\@SA_NAEBVItemStackBase\@\@0\@Z
     */
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?startCreativeItemDefinitions\@Item\@\@SAX_NPEAVCreativeItemRegistry\@\@\@Z
     */
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry*); // NOLINT
    /**
     * @symbol ?toBlockId\@Item\@\@SA?AUNewBlockID\@\@F\@Z
     */
    MCAPI static struct NewBlockID toBlockId(short); // NOLINT
    /**
     * @symbol
     * ?ICON_DESCRIPTION_PREFIX\@Item\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX; // NOLINT
    /**
     * @symbol ?TAG_DAMAGE\@Item\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DAMAGE; // NOLINT
    /**
     * @symbol ?mActiveCreativeGroupInfo\@Item\@\@2PEAVCreativeGroupInfo\@\@EA
     */
    MCAPI static class CreativeGroupInfo* mActiveCreativeGroupInfo; // NOLINT
    /**
     * @symbol ?mActiveCreativeItemCategory\@Item\@\@2PEAVCreativeItemGroupCategory\@\@EA
     */
    MCAPI static class CreativeItemGroupCategory* mActiveCreativeItemCategory; // NOLINT
    /**
     * @symbol ?mActiveCreativeItemRegistry\@Item\@\@2PEAVCreativeItemRegistry\@\@EA
     */
    MCAPI static class CreativeItemRegistry* mActiveCreativeItemRegistry; // NOLINT
    /**
     * @symbol ?mGenerateDenyParticleEffect\@Item\@\@2_NB
     */
    MCAPI static bool const mGenerateDenyParticleEffect; // NOLINT

    // protected:
    /**
     * @symbol
     * ?_helpChangeInventoryItemInPlace\@Item\@\@IEBAXAEAVActor\@\@AEAVItemStack\@\@1W4ItemAcquisitionMethod\@\@\@Z
     */
    MCAPI void
    _helpChangeInventoryItemInPlace(class Actor&, class ItemStack&, class ItemStack&, enum class ItemAcquisitionMethod)
        const; // NOLINT

    // private:
    /**
     * @symbol ?_addLooseCreativeItemsClient\@Item\@\@CAXXZ
     */
    MCAPI static void _addLooseCreativeItemsClient(); // NOLINT
    /**
     * @symbol ?_addLooseCreativeItemsServer\@Item\@\@CAXAEBVBaseGameVersion\@\@VItemRegistryRef\@\@\@Z
     */
    MCAPI static void _addLooseCreativeItemsServer(class BaseGameVersion const&, class ItemRegistryRef); // NOLINT

protected:
private:
    /**
     * @symbol
     * ?mServerItemsUsedInCreativeItems\@Item\@\@0V?$unique_ptr\@V?$set\@FU?$less\@F\@std\@\@V?$allocator\@F\@2\@\@std\@\@U?$default_delete\@V?$set\@FU?$less\@F\@std\@\@V?$allocator\@F\@2\@\@std\@\@\@2\@\@std\@\@A
     */
    MCAPI static std::unique_ptr<class std::set<short, struct std::less<short>, class std::allocator<short>>>
        mServerItemsUsedInCreativeItems; // NOLINT
};
