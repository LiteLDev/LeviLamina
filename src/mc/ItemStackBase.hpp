/**
 * @file  ItemStackBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Item;

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackBase.
 *
 */
class ItemStackBase {

#define AFTER_EXTRA
// Add Member There
private:
//void* vtbl;
    char filler[128];

public:
LLAPI int getCount() const;

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackBase();
    /**
     * @vftbl  1
     * @symbol  ?reinit\@ItemStackBase\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @vftbl  2
     * @symbol  ?reinit\@ItemStackBase\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @vftbl  3
     * @symbol  ?reinit\@ItemStackBase\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@HH\@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @vftbl  4
     * @symbol  ?setNull\@ItemStackBase\@\@UEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    virtual void setNull(class std::optional<std::string>);
    /**
     * @vftbl  5
     * @symbol  ?toString\@ItemStackBase\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @vftbl  6
     * @symbol  ?toDebugString\@ItemStackBase\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toDebugString() const;
    /**
     * @symbol  ?add\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void add(int);
    /**
     * @symbol  ?addComponents\@ItemStackBase\@\@QEAA_NAEBVValue\@Json\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addComponents(class Json::Value const &, std::string &);
    /**
     * @symbol  ?addCustomUserData\@ItemStackBase\@\@QEAAXAEAVBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void addCustomUserData(class BlockActor &, class BlockSource &);
    /**
     * @symbol  ?addCustomUserData\@ItemStackBase\@\@QEAAXAEAVContainerComponent\@\@\@Z
     */
    MCAPI void addCustomUserData(class ContainerComponent &);
    /**
     * @symbol  ?canBeCharged\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool canBeCharged() const;
    /**
     * @symbol  ?canDestroy\@ItemStackBase\@\@QEBA_NPEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroy(class Block const *) const;
    /**
     * @symbol  ?canDestroySpecial\@ItemStackBase\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroySpecial(class Block const &) const;
    /**
     * @symbol  ?canPlaceOn\@ItemStackBase\@\@QEBA_NPEBVBlock\@\@\@Z
     */
    MCAPI bool canPlaceOn(class Block const *) const;
    /**
     * @symbol  ?clearChargedItem\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void clearChargedItem();
    /**
     * @symbol  ?componentsMatch\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool componentsMatch(class ItemStackBase const &) const;
    /**
     * @symbol  ?constructItemEnchantsFromUserData\@ItemStackBase\@\@QEBA?AVItemEnchants\@\@XZ
     */
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;
    /**
     * @symbol  ?deserializeComponents\@ItemStackBase\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeComponents(class IDataInput &);
    /**
     * @symbol  ?executeEvent\@ItemStackBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &);
    /**
     * @symbol  ?getArmorSlot\@ItemStackBase\@\@QEBA?AW4ArmorSlot\@\@XZ
     */
    MCAPI enum class ArmorSlot getArmorSlot() const;
    /**
     * @symbol  ?getAttackDamage\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getAttackDamage() const;
    /**
     * @symbol  ?getAuxValue\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @symbol  ?getBaseRepairCost\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getBaseRepairCost() const;
    /**
     * @symbol  ?getBlock\@ItemStackBase\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @symbol  ?getBlockingTick\@ItemStackBase\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const & getBlockingTick() const;
    /**
     * @symbol  ?getCategoryName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCategoryName() const;
    /**
     * @symbol  ?getChargedItem\@ItemStackBase\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getChargedItem() const;
    /**
     * @symbol  ?getColor\@ItemStackBase\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @symbol  ?getComponent\@ItemStackBase\@\@QEBAPEBVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemComponent const * getComponent(class HashedString const &) const;
    /**
     * @symbol  ?getComponentItem\@ItemStackBase\@\@QEBAPEBVComponentItem\@\@XZ
     */
    MCAPI class ComponentItem const * getComponentItem() const;
    /**
     * @symbol  ?getCustomLore\@ItemStackBase\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getCustomLore() const;
    /**
     * @symbol  ?getCustomName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCustomName() const;
    /**
     * @symbol  ?getDamageValue\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getDamageValue() const;
    /**
     * @symbol  ?getDescriptionId\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @symbol  ?getDescriptor\@ItemStackBase\@\@QEBA?AVItemDescriptor\@\@XZ
     */
    MCAPI class ItemDescriptor getDescriptor() const;
    /**
     * @symbol  ?getEffectName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getEffectName() const;
    /**
     * @symbol  ?getEnchantSlot\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getEnchantSlot() const;
    /**
     * @symbol  ?getEnchantValue\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getEnchantValue() const;
    /**
     * @symbol  ?getFullNameHash\@ItemStackBase\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @symbol  ?getHoverName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getHoverName() const;
    /**
     * @symbol  ?getId\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @symbol  ?getIdAux\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @symbol  ?getItem\@ItemStackBase\@\@QEBAPEBVItem\@\@XZ
     */
    MCAPI class Item const * getItem() const;
    /**
     * @symbol  ?getLegacyBlock\@ItemStackBase\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @symbol  ?getMaxDamage\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getMaxDamage() const;
    /**
     * @symbol  ?getMaxStackSize\@ItemStackBase\@\@QEBAEXZ
     */
    MCAPI unsigned char getMaxStackSize() const;
    /**
     * @symbol  ?getName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @symbol  ?getNetworkUserData\@ItemStackBase\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;
    /**
     * @symbol  ?getRawNameHash\@ItemStackBase\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @symbol  ?getRawNameId\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @symbol  ?getRequiredBaseGameVersion\@ItemStackBase\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @symbol  ?getUseAnimation\@ItemStackBase\@\@QEBA?AW4UseAnimation\@\@XZ
     */
    MCAPI enum class UseAnimation getUseAnimation() const;
    /**
     * @symbol  ?getUserData\@ItemStackBase\@\@QEAAPEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag * getUserData();
    /**
     * @symbol  ?getUserData\@ItemStackBase\@\@QEBAPEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const * getUserData() const;
    /**
     * @symbol  ?getWasPickedUp\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool getWasPickedUp() const;
    /**
     * @symbol  ?hasChargedItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasChargedItem() const;
    /**
     * @symbol  ?hasCompoundTextUserData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasCompoundTextUserData() const;
    /**
     * @symbol  ?hasContainerData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasContainerData() const;
    /**
     * @symbol  ?hasCustomHoverName\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasCustomHoverName() const;
    /**
     * @symbol  ?hasDamageValue\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasDamageValue() const;
    /**
     * @symbol  ?hasSameAuxValue\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool hasSameAuxValue(class ItemStackBase const &) const;
    /**
     * @symbol  ?hasSameUserData\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool hasSameUserData(class ItemStackBase const &) const;
    /**
     * @symbol  ?hasTag\@ItemStackBase\@\@QEBA_NAEBUItemTag\@\@\@Z
     */
    MCAPI bool hasTag(struct ItemTag const &) const;
    /**
     * @symbol  ?hasTag\@ItemStackBase\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @symbol  ?hasUserData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasUserData() const;
    /**
     * @symbol  ?hurtAndBreak\@ItemStackBase\@\@QEAA_NHPEAVActor\@\@\@Z
     */
    MCAPI bool hurtAndBreak(int, class Actor *);
    /**
     * @symbol  ?initParams\@ItemStackBase\@\@QEAAXAEAVRenderParams\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &, class Actor *);
    /**
     * @symbol  ?isArmorItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isArmorItem() const;
    /**
     * @symbol  ?isBlock\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isBlock() const;
    /**
     * @symbol  ?isBlockInstance\@ItemStackBase\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool isBlockInstance(class HashedString const &) const;
    /**
     * @symbol  ?isDamageableItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isDamageableItem() const;
    /**
     * @symbol  ?isDamaged\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isDamaged() const;
    /**
     * @symbol  ?isEnchanted\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isEnchanted() const;
    /**
     * @symbol  ?isEnchantingBook\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isEnchantingBook() const;
    /**
     * @symbol  ?isExplodable\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isExplodable() const;
    /**
     * @symbol  ?isFireResistant\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const;
    /**
     * @symbol  ?isFullStack\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isFullStack() const;
    /**
     * @symbol  ?isGlint\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isGlint() const;
    /**
     * @symbol  ?isHorseArmorItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isHorseArmorItem() const;
    /**
     * @symbol  ?isInstance\@ItemStackBase\@\@QEBA_NAEBVHashedString\@\@_N\@Z
     */
    MCAPI bool isInstance(class HashedString const &, bool) const;
    /**
     * @symbol  ?isLiquidClipItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isLiquidClipItem() const;
    /**
     * @symbol  ?isMusicDiscItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isMusicDiscItem() const;
    /**
     * @symbol  ?isNull\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @symbol  ?isOffhandItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isOffhandItem() const;
    /**
     * @symbol  ?isOneOfBlockInstances\@ItemStackBase\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@\@Z
     */
    MCAPI bool isOneOfBlockInstances(class std::initializer_list<class HashedString const>) const;
    /**
     * @symbol  ?isOneOfInstances\@ItemStackBase\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@_N\@Z
     */
    MCAPI bool isOneOfInstances(class std::initializer_list<class HashedString const>, bool) const;
    /**
     * @symbol  ?isPattern\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isPattern() const;
    /**
     * @symbol  ?isPotionItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isPotionItem() const;
    /**
     * @symbol  ?isStackable\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isStackable(class ItemStackBase const &) const;
    /**
     * @symbol  ?isStackable\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @symbol  ?isStackedByData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isStackedByData() const;
    /**
     * @symbol  ?isValidAuxValue\@ItemStackBase\@\@QEBA_NH\@Z
     */
    MCAPI bool isValidAuxValue(int) const;
    /**
     * @symbol  ?isWearableItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isWearableItem() const;
    /**
     * @symbol  ?load\@ItemStackBase\@\@QEAAXAEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class Level &);
    /**
     * @symbol  ?load\@ItemStackBase\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @symbol  ?matches\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matches(class ItemStackBase const &) const;
    /**
     * @symbol  ?matchesEitherWearableCase\@ItemStackBase\@\@QEBA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI bool matchesEitherWearableCase(class CompoundTag const *) const;
    /**
     * @symbol  ?matchesItem\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesItem(class ItemStackBase const &) const;
    /**
     * @symbol  ??BItemStackBase\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol  ??9ItemStackBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ItemStackBase const &) const;
    /**
     * @symbol  ??8ItemStackBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ItemStackBase const &) const;
    /**
     * @symbol  ?refreshedInContainer\@ItemStackBase\@\@QEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void refreshedInContainer(class Level &) const;
    /**
     * @symbol  ?remove\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void remove(int);
    /**
     * @symbol  ?removeDamageValue\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void removeDamageValue();
    /**
     * @symbol  ?removeEnchants\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void removeEnchants();
    /**
     * @symbol  ?resetHoverName\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void resetHoverName();
    /**
     * @symbol  ?sameItem\@ItemStackBase\@\@QEBA_NHH\@Z
     */
    MCAPI bool sameItem(int, int) const;
    /**
     * @symbol  ?sameItem\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItem(class ItemStackBase const &) const;
    /**
     * @symbol  ?sameItemAndAux\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItemAndAux(class ItemStackBase const &) const;
    /**
     * @symbol  ?save\@ItemStackBase\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol  ?saveEnchantsToUserData\@ItemStackBase\@\@QEAAXAEBVItemEnchants\@\@\@Z
     */
    MCAPI void saveEnchantsToUserData(class ItemEnchants const &);
    /**
     * @symbol  ?sendEventTriggered\@ItemStackBase\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRenderParams\@\@\@Z
     */
    MCAPI bool sendEventTriggered(std::string const &, class RenderParams const &);
    /**
     * @symbol  ?serializeComponents\@ItemStackBase\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeComponents(class IDataOutput &) const;
    /**
     * @symbol  ?set\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void set(int);
    /**
     * @symbol  ?setAuxValue\@ItemStackBase\@\@QEAAXF\@Z
     */
    MCAPI void setAuxValue(short);
    /**
     * @symbol  ?setBlock\@ItemStackBase\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setBlock(class Block const *);
    /**
     * @symbol  ?setBlockingTick\@ItemStackBase\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void setBlockingTick(struct Tick);
    /**
     * @symbol  ?setChargedItem\@ItemStackBase\@\@QEAAXAEBVItemInstance\@\@_N\@Z
     */
    MCAPI void setChargedItem(class ItemInstance const &, bool);
    /**
     * @symbol  ?setCustomLore\@ItemStackBase\@\@QEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomLore(std::vector<std::string> const &);
    /**
     * @symbol  ?setCustomName\@ItemStackBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @symbol  ?setDamageValue\@ItemStackBase\@\@QEAAXF\@Z
     */
    MCAPI void setDamageValue(short);
    /**
     * @symbol  ?setJustBrewed\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setJustBrewed(bool);
    /**
     * @symbol  ?setPickupTime\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void setPickupTime();
    /**
     * @symbol  ?setRepairCost\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void setRepairCost(int);
    /**
     * @symbol  ?setShowPickUp\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setShowPickUp(bool);
    /**
     * @symbol  ?setStackSize\@ItemStackBase\@\@QEAAXE\@Z
     */
    MCAPI void setStackSize(unsigned char);
    /**
     * @symbol  ?setUserData\@ItemStackBase\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);
    /**
     * @symbol  ?setWasPickedUp\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setWasPickedUp(bool);
    /**
     * @symbol  ?shouldInteractionWithBlockBypassLiquid\@ItemStackBase\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @symbol  ?shouldVanish\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool shouldVanish() const;
    /**
     * @symbol  ?startCoolDown\@ItemStackBase\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void startCoolDown(class Player *) const;
    /**
     * @symbol  ?updateComponent\@ItemStackBase\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool updateComponent(std::string const &, class Json::Value const &);
    /**
     * @symbol  ?TAG_CAN_DESTROY\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CAN_DESTROY;
    /**
     * @symbol  ?TAG_CAN_PLACE_ON\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CAN_PLACE_ON;
    /**
     * @symbol  ?TAG_DISPLAY\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DISPLAY;
    /**
     * @symbol  ?TAG_DISPLAY_NAME\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DISPLAY_NAME;
    /**
     * @symbol  ?TAG_ENCHANTS\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_ENCHANTS;
    /**
     * @symbol  ?TAG_LORE\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_LORE;
    /**
     * @symbol  ?TAG_REPAIR_COST\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_REPAIR_COST;

//protected:
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@XZ
     */
    MCAPI ItemStackBase();
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVRecipeIngredient\@\@\@Z
     */
    MCAPI ItemStackBase(class RecipeIngredient const &);
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class Item const &, int, int, class CompoundTag const *);
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemStackBase(class BlockLegacy const &, int);
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class Block const &, int, class CompoundTag const *);
    /**
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBV0\@\@Z
     */
    MCAPI ItemStackBase(class ItemStackBase const &);
    /**
     * @symbol  ?_getHoverFormattingPrefix\@ItemStackBase\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _getHoverFormattingPrefix() const;
    /**
     * @symbol  ?_setItem\@ItemStackBase\@\@IEAA_NH_N\@Z
     */
    MCAPI bool _setItem(int, bool);
    /**
     * @symbol  ?init\@ItemStackBase\@\@IEAAXAEBVBlockLegacy\@\@H\@Z
     */
    MCAPI void init(class BlockLegacy const &, int);
    /**
     * @symbol  ?init\@ItemStackBase\@\@IEAAXAEBVItem\@\@HHPEBVCompoundTag\@\@_N\@Z
     */
    MCAPI void init(class Item const &, int, int, class CompoundTag const *, bool);
    /**
     * @symbol  ?init\@ItemStackBase\@\@IEAAXHHH_N\@Z
     */
    MCAPI void init(int, int, int, bool);
    /**
     * @symbol  ??4ItemStackBase\@\@IEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemStackBase & operator=(class ItemStackBase const &);

//private:
    /**
     * @symbol  ?_addCustomUserDataCommon\@ItemStackBase\@\@AEAAX$$QEAV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag> &&);
    /**
     * @symbol  ?_checkForItemWorldCompatibility\@ItemStackBase\@\@AEAAXXZ
     */
    MCAPI void _checkForItemWorldCompatibility();
    /**
     * @symbol  ?_cloneComponents\@ItemStackBase\@\@AEAAXAEBV1\@\@Z
     */
    MCAPI void _cloneComponents(class ItemStackBase const &);
    /**
     * @symbol  ?_isInstance\@ItemStackBase\@\@AEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool _isInstance(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol  ?_loadComponents\@ItemStackBase\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadComponents(class CompoundTag const &);
    /**
     * @symbol  ?_loadItem\@ItemStackBase\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadItem(class CompoundTag const &);
    /**
     * @symbol  ?_setChargedItem\@ItemStackBase\@\@AEAAXAEBVItemInstance\@\@\@Z
     */
    MCAPI void _setChargedItem(class ItemInstance const &);
    /**
     * @symbol  ?_updateCompareHashes\@ItemStackBase\@\@AEAAXXZ
     */
    MCAPI void _updateCompareHashes();

protected:
    /**
     * @symbol  ?TAG_CHARGED_ITEM\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CHARGED_ITEM;
    /**
     * @symbol  ?TAG_STORE_CAN_DESTROY\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_STORE_CAN_DESTROY;
    /**
     * @symbol  ?TAG_STORE_CAN_PLACE_ON\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;

private:
    /**
     * @symbol  ?MAX_STACK_SIZE\@ItemStackBase\@\@0HB
     */
    MCAPI static int const MAX_STACK_SIZE;

};