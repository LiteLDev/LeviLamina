#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class ItemStackBase {
public:
    // ItemStackBase inner types declare
    // clang-format off
    struct ComparisonOptions;
    // clang-format on

    // ItemStackBase inner types define
    struct ComparisonOptions {

    public:
        // prevent constructor by default
        ComparisonOptions& operator=(ComparisonOptions const&) = delete;
        ComparisonOptions(ComparisonOptions const&)            = delete;
        ComparisonOptions()                                    = delete;
    };

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?reinit\@ItemStackBase\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const&, int, int); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?reinit\@ItemStackBase\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const&, int); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?reinit\@ItemStackBase\@\@UEAAXV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HH\@Z
     */
    virtual void reinit(class std::basic_string_view<char, struct std::char_traits<char>>, int, int); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?setNull\@ItemStackBase\@\@UEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    virtual void setNull(class std::optional<std::string>); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?toString\@ItemStackBase\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?toDebugString\@ItemStackBase\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toDebugString() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ItemStackBase(); // NOLINT
#endif
    /**
     * @symbol ?add\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void add(int); // NOLINT
    /**
     * @symbol
     * ?addComponents\@ItemStackBase\@\@QEAA_NAEBVValue\@Json\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addComponents(class Json::Value const&, std::string&); // NOLINT
    /**
     * @symbol ?addCustomUserData\@ItemStackBase\@\@QEAAXAEAVBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void addCustomUserData(class BlockActor&, class BlockSource&); // NOLINT
    /**
     * @symbol ?addCustomUserData\@ItemStackBase\@\@QEAAXAEAVContainerComponent\@\@\@Z
     */
    MCAPI void addCustomUserData(class ContainerComponent&); // NOLINT
    /**
     * @symbol ?canBeCharged\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool canBeCharged() const; // NOLINT
    /**
     * @symbol ?canDestroy\@ItemStackBase\@\@QEBA_NPEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroy(class Block const*) const; // NOLINT
    /**
     * @symbol ?canDestroySpecial\@ItemStackBase\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroySpecial(class Block const&) const; // NOLINT
    /**
     * @symbol ?canPlaceOn\@ItemStackBase\@\@QEBA_NPEBVBlock\@\@\@Z
     */
    MCAPI bool canPlaceOn(class Block const*) const; // NOLINT
    /**
     * @symbol ?clearChargedItem\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void clearChargedItem(); // NOLINT
    /**
     * @symbol ?clearCustomLore\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void clearCustomLore(); // NOLINT
    /**
     * @symbol ?componentsMatch\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool componentsMatch(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?constructItemEnchantsFromUserData\@ItemStackBase\@\@QEBA?AVItemEnchants\@\@XZ
     */
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const; // NOLINT
    /**
     * @symbol
     * ?executeEvent\@ItemStackBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void executeEvent(std::string const&, class RenderParams&); // NOLINT
    /**
     * @symbol ?getArmorSlot\@ItemStackBase\@\@QEBA?AW4ArmorSlot\@\@XZ
     */
    MCAPI enum class ArmorSlot getArmorSlot() const; // NOLINT
    /**
     * @symbol ?getAttackDamage\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getAttackDamage() const; // NOLINT
    /**
     * @symbol ?getAuxValue\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getAuxValue() const; // NOLINT
    /**
     * @symbol ?getBaseRepairCost\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getBaseRepairCost() const; // NOLINT
    /**
     * @symbol ?getBlock\@ItemStackBase\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const* getBlock() const; // NOLINT
    /**
     * @symbol ?getBlockingTick\@ItemStackBase\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const& getBlockingTick() const; // NOLINT
    /**
     * @symbol ?getChargedItem\@ItemStackBase\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const& getChargedItem() const; // NOLINT
    /**
     * @symbol ?getColor\@ItemStackBase\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getColor() const; // NOLINT
    /**
     * @symbol ?getComponent\@ItemStackBase\@\@QEBAPEBVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemComponent const* getComponent(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?getComponentItem\@ItemStackBase\@\@QEBAPEBVComponentItem\@\@XZ
     */
    MCAPI class ComponentItem const* getComponentItem() const; // NOLINT
    /**
     * @symbol
     * ?getCustomLore\@ItemStackBase\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getCustomLore() const; // NOLINT
    /**
     * @symbol
     * ?getCustomName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCustomName() const; // NOLINT
    /**
     * @symbol ?getDamageValue\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getDamageValue() const; // NOLINT
    /**
     * @symbol
     * ?getDescriptionId\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const; // NOLINT
    /**
     * @symbol ?getDescriptor\@ItemStackBase\@\@QEBA?AVItemDescriptor\@\@XZ
     */
    MCAPI class ItemDescriptor getDescriptor() const; // NOLINT
    /**
     * @symbol
     * ?getEffectName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getEffectName() const; // NOLINT
    /**
     * @symbol ?getEnchantSlot\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getEnchantSlot() const; // NOLINT
    /**
     * @symbol ?getEnchantValue\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getEnchantValue() const; // NOLINT
    /**
     * @symbol ?getFullNameHash\@ItemStackBase\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getFullNameHash() const; // NOLINT
    /**
     * @symbol
     * ?getHoverName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getHoverName() const; // NOLINT
    /**
     * @symbol ?getId\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getId() const; // NOLINT
    /**
     * @symbol ?getIdAux\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getIdAux() const; // NOLINT
    /**
     * @symbol ?getItem\@ItemStackBase\@\@QEBAPEBVItem\@\@XZ
     */
    MCAPI class Item const* getItem() const; // NOLINT
    /**
     * @symbol ?getLegacyBlock\@ItemStackBase\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const; // NOLINT
    /**
     * @symbol ?getMaxDamage\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getMaxDamage() const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@ItemStackBase\@\@QEBAEXZ
     */
    MCAPI unsigned char getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const; // NOLINT
    /**
     * @symbol
     * ?getNetworkUserData\@ItemStackBase\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const; // NOLINT
    /**
     * @symbol ?getRawNameHash\@ItemStackBase\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getRawNameHash() const; // NOLINT
    /**
     * @symbol
     * ?getRawNameId\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRawNameId() const; // NOLINT
    /**
     * @symbol ?getUseAnimation\@ItemStackBase\@\@QEBA?AW4UseAnimation\@\@XZ
     */
    MCAPI enum class UseAnimation getUseAnimation() const; // NOLINT
    /**
     * @symbol ?getUserData\@ItemStackBase\@\@QEAAPEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag* getUserData(); // NOLINT
    /**
     * @symbol ?getUserData\@ItemStackBase\@\@QEBAPEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const* getUserData() const; // NOLINT
    /**
     * @symbol ?getWasPickedUp\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool getWasPickedUp() const; // NOLINT
    /**
     * @symbol ?hasChargedItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasChargedItem() const; // NOLINT
    /**
     * @symbol ?hasCompoundTextUserData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasCompoundTextUserData() const; // NOLINT
    /**
     * @symbol ?hasContainerData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasContainerData() const; // NOLINT
    /**
     * @symbol ?hasCustomHoverName\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasCustomHoverName() const; // NOLINT
    /**
     * @symbol ?hasDamageValue\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasDamageValue() const; // NOLINT
    /**
     * @symbol ?hasSameAuxValue\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool hasSameAuxValue(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?hasSameUserData\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool hasSameUserData(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?hasTag\@ItemStackBase\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const&) const; // NOLINT
    /**
     * @symbol ?hasTag\@ItemStackBase\@\@QEBA_NAEBUItemTag\@\@\@Z
     */
    MCAPI bool hasTag(struct ItemTag const&) const; // NOLINT
    /**
     * @symbol ?hasUserData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasUserData() const; // NOLINT
    /**
     * @symbol ?hurtAndBreak\@ItemStackBase\@\@QEAA_NHPEAVActor\@\@\@Z
     */
    MCAPI bool hurtAndBreak(int, class Actor*); // NOLINT
    /**
     * @symbol ?initParams\@ItemStackBase\@\@QEAAXAEAVRenderParams\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams&, class Actor*); // NOLINT
    /**
     * @symbol ?isArmorItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isArmorItem() const; // NOLINT
    /**
     * @symbol ?isBlock\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isBlock() const; // NOLINT
    /**
     * @symbol ?isBlockInstance\@ItemStackBase\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool isBlockInstance(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?isDamageableItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isDamageableItem() const; // NOLINT
    /**
     * @symbol ?isDamaged\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isDamaged() const; // NOLINT
    /**
     * @symbol ?isEnchanted\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isEnchanted() const; // NOLINT
    /**
     * @symbol ?isEnchantingBook\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isEnchantingBook() const; // NOLINT
    /**
     * @symbol ?isExplodable\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isExplodable() const; // NOLINT
    /**
     * @symbol ?isFireResistant\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const; // NOLINT
    /**
     * @symbol ?isFullStack\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isFullStack() const; // NOLINT
    /**
     * @symbol ?isGlint\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isGlint() const; // NOLINT
    /**
     * @symbol ?isHorseArmorItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isHorseArmorItem() const; // NOLINT
    /**
     * @symbol ?isInstance\@ItemStackBase\@\@QEBA_NAEBVHashedString\@\@_N\@Z
     */
    MCAPI bool isInstance(class HashedString const&, bool) const; // NOLINT
    /**
     * @symbol ?isLiquidClipItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isLiquidClipItem() const; // NOLINT
    /**
     * @symbol ?isMusicDiscItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isMusicDiscItem() const; // NOLINT
    /**
     * @symbol ?isNull\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const; // NOLINT
    /**
     * @symbol ?isOffhandItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isOffhandItem() const; // NOLINT
    /**
     * @symbol
     * ?isOneOfBlockInstances\@ItemStackBase\@\@QEBA_NAEBV?$vector\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@V?$allocator\@V?$reference_wrapper\@$$CBVHashedString\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool
    isOneOfBlockInstances(std::vector<class std::reference_wrapper<class HashedString const>> const&) const; // NOLINT
    /**
     * @symbol ?isOneOfBlockInstances\@ItemStackBase\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@\@Z
     */
    MCAPI bool isOneOfBlockInstances(class std::initializer_list<class HashedString const>) const; // NOLINT
    /**
     * @symbol ?isOneOfInstances\@ItemStackBase\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@_N\@Z
     */
    MCAPI bool isOneOfInstances(class std::initializer_list<class HashedString const>, bool) const; // NOLINT
    /**
     * @symbol ?isPattern\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isPattern() const; // NOLINT
    /**
     * @symbol ?isPotionItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isPotionItem() const; // NOLINT
    /**
     * @symbol ?isStackable\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isStackable(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?isStackable\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const; // NOLINT
    /**
     * @symbol ?isStackedByData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isStackedByData() const; // NOLINT
    /**
     * @symbol ?isValidAuxValue\@ItemStackBase\@\@QEBA_NH\@Z
     */
    MCAPI bool isValidAuxValue(int) const; // NOLINT
    /**
     * @symbol ?isWearableItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isWearableItem() const; // NOLINT
    /**
     * @symbol ?load\@ItemStackBase\@\@QEAAXAEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&, class Level&); // NOLINT
    /**
     * @symbol ?load\@ItemStackBase\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?matches\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matches(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?matchesEitherWearableCase\@ItemStackBase\@\@QEBA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI bool matchesEitherWearableCase(class CompoundTag const*) const; // NOLINT
    /**
     * @symbol ?matchesItem\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesItem(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ??BItemStackBase\@\@QEBA_NXZ
     */
    MCAPI operator bool() const; // NOLINT
    /**
     * @symbol ??9ItemStackBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ??8ItemStackBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol ?refreshedInContainer\@ItemStackBase\@\@QEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void refreshedInContainer(class Level&) const; // NOLINT
    /**
     * @symbol ?remove\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void remove(int); // NOLINT
    /**
     * @symbol ?removeDamageValue\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void removeDamageValue(); // NOLINT
    /**
     * @symbol ?removeEnchants\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void removeEnchants(); // NOLINT
    /**
     * @symbol ?resetHoverName\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void resetHoverName(); // NOLINT
    /**
     * @symbol ?sameItem\@ItemStackBase\@\@QEBA_NAEBV1\@AEBUComparisonOptions\@1\@\@Z
     */
    MCAPI bool sameItem(class ItemStackBase const&, struct ItemStackBase::ComparisonOptions const&) const; // NOLINT
    /**
     * @symbol ?sameItem\@ItemStackBase\@\@QEBA_NHH\@Z
     */
    MCAPI bool sameItem(int, int) const; // NOLINT
    /**
     * @symbol ?sameItemAndAux\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItemAndAux(class ItemStackBase const&) const; // NOLINT
    /**
     * @symbol
     * ?save\@ItemStackBase\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const; // NOLINT
    /**
     * @symbol ?saveEnchantsToUserData\@ItemStackBase\@\@QEAAXAEBVItemEnchants\@\@\@Z
     */
    MCAPI void saveEnchantsToUserData(class ItemEnchants const&); // NOLINT
    /**
     * @symbol
     * ?sendEventTriggered\@ItemStackBase\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRenderParams\@\@\@Z
     */
    MCAPI bool sendEventTriggered(std::string const&, class RenderParams const&); // NOLINT
    /**
     * @symbol ?set\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void set(int); // NOLINT
    /**
     * @symbol ?setAuxValue\@ItemStackBase\@\@QEAAXF\@Z
     */
    MCAPI void setAuxValue(short); // NOLINT
    /**
     * @symbol ?setBlock\@ItemStackBase\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setBlock(class Block const*); // NOLINT
    /**
     * @symbol ?setBlockingTick\@ItemStackBase\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void setBlockingTick(struct Tick); // NOLINT
    /**
     * @symbol
     * ?setCanDestroy\@ItemStackBase\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool setCanDestroy(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?setCanPlaceOn\@ItemStackBase\@\@QEAA_NAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI bool setCanPlaceOn(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol ?setChargedItem\@ItemStackBase\@\@QEAAXAEBVItemInstance\@\@_N\@Z
     */
    MCAPI void setChargedItem(class ItemInstance const&, bool); // NOLINT
    /**
     * @symbol
     * ?setCustomLore\@ItemStackBase\@\@QEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomLore(std::vector<std::string> const&); // NOLINT
    /**
     * @symbol
     * ?setCustomName\@ItemStackBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomName(std::string const&); // NOLINT
    /**
     * @symbol ?setDamageValue\@ItemStackBase\@\@QEAAXF\@Z
     */
    MCAPI void setDamageValue(short); // NOLINT
    /**
     * @symbol ?setJustBrewed\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setJustBrewed(bool); // NOLINT
    /**
     * @symbol ?setPickupTime\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void setPickupTime(); // NOLINT
    /**
     * @symbol ?setRepairCost\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void setRepairCost(int); // NOLINT
    /**
     * @symbol ?setShowPickUp\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setShowPickUp(bool); // NOLINT
    /**
     * @symbol ?setStackSize\@ItemStackBase\@\@QEAAXE\@Z
     */
    MCAPI void setStackSize(unsigned char); // NOLINT
    /**
     * @symbol
     * ?setUserData\@ItemStackBase\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>); // NOLINT
    /**
     * @symbol ?setWasPickedUp\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setWasPickedUp(bool); // NOLINT
    /**
     * @symbol ?shouldInteractionWithBlockBypassLiquid\@ItemStackBase\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const&) const; // NOLINT
    /**
     * @symbol ?shouldVanish\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool shouldVanish() const; // NOLINT
    /**
     * @symbol ?startCoolDown\@ItemStackBase\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void startCoolDown(class Player*) const; // NOLINT
    /**
     * @symbol
     * ?updateComponent\@ItemStackBase\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool updateComponent(std::string const&, class Json::Value const&); // NOLINT
    /**
     * @symbol
     * ?isValidComponent\@ItemStackBase\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isValidComponent(std::string const&); // NOLINT
    /**
     * @symbol ?COMPARISONOPTIONS_RELEVANTUSERDATA\@ItemStackBase\@\@2UComparisonOptions\@1\@B
     */
    MCAPI static struct ItemStackBase::ComparisonOptions const COMPARISONOPTIONS_RELEVANTUSERDATA; // NOLINT
    /**
     * @symbol
     * ?TAG_CAN_DESTROY\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CAN_DESTROY; // NOLINT
    /**
     * @symbol
     * ?TAG_CAN_PLACE_ON\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CAN_PLACE_ON; // NOLINT
    /**
     * @symbol
     * ?TAG_DISPLAY\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DISPLAY; // NOLINT
    /**
     * @symbol
     * ?TAG_DISPLAY_NAME\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DISPLAY_NAME; // NOLINT
    /**
     * @symbol
     * ?TAG_ENCHANTS\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_ENCHANTS; // NOLINT
    /**
     * @symbol ?TAG_LORE\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_LORE; // NOLINT
    /**
     * @symbol
     * ?TAG_REPAIR_COST\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_REPAIR_COST; // NOLINT

    // protected:
    /**
     * @symbol
     * ??0ItemStackBase\@\@IEAA\@V?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI
    ItemStackBase(class std::basic_string_view<char, struct std::char_traits<char>>, int, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStackBase\@\@IEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class Item const&, int, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStackBase\@\@IEAA\@AEBV0\@\@Z
     */
    MCAPI ItemStackBase(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ??0ItemStackBase\@\@IEAA\@XZ
     */
    MCAPI ItemStackBase(); // NOLINT
    /**
     * @symbol ??0ItemStackBase\@\@IEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class Block const&, int, class CompoundTag const*); // NOLINT
    /**
     * @symbol ??0ItemStackBase\@\@IEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemStackBase(class BlockLegacy const&, int); // NOLINT
    /**
     * @symbol ??0ItemStackBase\@\@IEAA\@AEBVRecipeIngredient\@\@\@Z
     */
    MCAPI ItemStackBase(class RecipeIngredient const&); // NOLINT
    /**
     * @symbol
     * ?_getHoverFormattingPrefix\@ItemStackBase\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _getHoverFormattingPrefix() const; // NOLINT
    /**
     * @symbol ?_setItem\@ItemStackBase\@\@IEAA_NH_N\@Z
     */
    MCAPI bool _setItem(int, bool); // NOLINT
    /**
     * @symbol ?init\@ItemStackBase\@\@IEAAXAEBVBlockLegacy\@\@H\@Z
     */
    MCAPI void init(class BlockLegacy const&, int); // NOLINT
    /**
     * @symbol ?init\@ItemStackBase\@\@IEAAXAEBVItem\@\@HHPEBVCompoundTag\@\@_N\@Z
     */
    MCAPI void init(class Item const&, int, int, class CompoundTag const*, bool); // NOLINT
    /**
     * @symbol ?init\@ItemStackBase\@\@IEAAXHHH_N\@Z
     */
    MCAPI void init(int, int, int, bool); // NOLINT
    /**
     * @symbol ??4ItemStackBase\@\@IEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemStackBase& operator=(class ItemStackBase const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_addCustomUserDataCommon\@ItemStackBase\@\@AEAAX$$QEAV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag>&&); // NOLINT
    /**
     * @symbol ?_checkForItemWorldCompatibility\@ItemStackBase\@\@AEAAXXZ
     */
    MCAPI void _checkForItemWorldCompatibility(); // NOLINT
    /**
     * @symbol ?_cloneComponents\@ItemStackBase\@\@AEAAXAEBV1\@\@Z
     */
    MCAPI void _cloneComponents(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?_isInstance\@ItemStackBase\@\@AEBA_NV?$basic_string_view\@DU?$char_traits\@D\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool _isInstance(class std::basic_string_view<char, struct std::char_traits<char>>) const; // NOLINT
    /**
     * @symbol ?_loadItem\@ItemStackBase\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadItem(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?_setBlockList\@ItemStackBase\@\@AEAA_NAEAV?$vector\@PEBVBlockLegacy\@\@V?$allocator\@PEBVBlockLegacy\@\@\@std\@\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI bool _setBlockList(std::vector<class BlockLegacy const*>&, std::vector<std::string> const&); // NOLINT
    /**
     * @symbol ?_setChargedItem\@ItemStackBase\@\@AEAAXAEBVItemInstance\@\@\@Z
     */
    MCAPI void _setChargedItem(class ItemInstance const&); // NOLINT
    /**
     * @symbol ?_updateCompareHashes\@ItemStackBase\@\@AEAAXXZ
     */
    MCAPI void _updateCompareHashes(); // NOLINT
    /**
     * @symbol
     * ?_loadBlocksForCanPlaceOnCanDestroy\@ItemStackBase\@\@CA_NAEAV?$vector\@PEBVBlockLegacy\@\@V?$allocator\@PEBVBlockLegacy\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static bool
    _loadBlocksForCanPlaceOnCanDestroy(std::vector<class BlockLegacy const*>&, std::string const&); // NOLINT

protected:
    /**
     * @symbol
     * ?TAG_CHARGED_ITEM\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CHARGED_ITEM; // NOLINT
    /**
     * @symbol
     * ?TAG_STORE_CAN_DESTROY\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_STORE_CAN_DESTROY; // NOLINT
    /**
     * @symbol
     * ?TAG_STORE_CAN_PLACE_ON\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON; // NOLINT

private:
    /**
     * @symbol ?MAX_STACK_SIZE\@ItemStackBase\@\@0HB
     */
    MCAPI static int const MAX_STACK_SIZE; // NOLINT
};
