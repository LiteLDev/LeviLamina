/**
 * @file  ItemStackBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
LIAPI int getCount() const;

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStackBase();
    /**
     * @hash   -622323046
     * @vftbl  1
     * @symbol  ?reinit\@ItemStackBase\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @hash   -465491808
     * @vftbl  2
     * @symbol  ?reinit\@ItemStackBase\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @hash   -759156833
     * @vftbl  3
     * @symbol  ?reinit\@ItemStackBase\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@HH\@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   -1794653423
     * @vftbl  4
     * @symbol  ?setNull\@ItemStackBase\@\@UEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    virtual void setNull(class std::optional<std::string>);
    /**
     * @hash   965497648
     * @vftbl  5
     * @symbol  ?toString\@ItemStackBase\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   1252040957
     * @vftbl  6
     * @symbol  ?toDebugString\@ItemStackBase\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toDebugString() const;
    /**
     * @hash   753615076
     * @symbol  ?add\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void add(int);
    /**
     * @hash   562709468
     * @symbol  ?addComponents\@ItemStackBase\@\@QEAA_NAEBVValue\@Json\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addComponents(class Json::Value const &, std::string &);
    /**
     * @hash   1682605721
     * @symbol  ?addCustomUserData\@ItemStackBase\@\@QEAAXAEAVBlockActor\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void addCustomUserData(class BlockActor &, class BlockSource &);
    /**
     * @hash   2042067936
     * @symbol  ?addCustomUserData\@ItemStackBase\@\@QEAAXAEAVContainerComponent\@\@\@Z
     */
    MCAPI void addCustomUserData(class ContainerComponent &);
    /**
     * @hash   1550624644
     * @symbol  ?canBeCharged\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool canBeCharged() const;
    /**
     * @hash   29836482
     * @symbol  ?canDestroy\@ItemStackBase\@\@QEBA_NPEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroy(class Block const *) const;
    /**
     * @hash   -464992777
     * @symbol  ?canDestroySpecial\@ItemStackBase\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   -2085888318
     * @symbol  ?canPlaceOn\@ItemStackBase\@\@QEBA_NPEBVBlock\@\@\@Z
     */
    MCAPI bool canPlaceOn(class Block const *) const;
    /**
     * @hash   824731423
     * @symbol  ?clearChargedItem\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void clearChargedItem();
    /**
     * @hash   89242652
     * @symbol  ?componentsMatch\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool componentsMatch(class ItemStackBase const &) const;
    /**
     * @hash   1517251148
     * @symbol  ?constructItemEnchantsFromUserData\@ItemStackBase\@\@QEBA?AVItemEnchants\@\@XZ
     */
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;
    /**
     * @hash   -1774153926
     * @symbol  ?deserializeComponents\@ItemStackBase\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserializeComponents(class IDataInput &);
    /**
     * @hash   -1835231975
     * @symbol  ?executeEvent\@ItemStackBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &);
    /**
     * @hash   254248860
     * @symbol  ?getArmorSlot\@ItemStackBase\@\@QEBA?AW4ArmorSlot\@\@XZ
     */
    MCAPI enum class ArmorSlot getArmorSlot() const;
    /**
     * @hash   -759757854
     * @symbol  ?getAttackDamage\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getAttackDamage() const;
    /**
     * @hash   -2107531757
     * @symbol  ?getAuxValue\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @hash   -1119037286
     * @symbol  ?getBaseRepairCost\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getBaseRepairCost() const;
    /**
     * @hash   1668464673
     * @symbol  ?getBlock\@ItemStackBase\@\@QEBAPEBVBlock\@\@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   1721411250
     * @symbol  ?getBlockingTick\@ItemStackBase\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const & getBlockingTick() const;
    /**
     * @hash   112078064
     * @symbol  ?getCategoryName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCategoryName() const;
    /**
     * @hash   1632325184
     * @symbol  ?getChargedItem\@ItemStackBase\@\@QEBAAEBVItemInstance\@\@XZ
     */
    MCAPI class ItemInstance const & getChargedItem() const;
    /**
     * @hash   1472237216
     * @symbol  ?getColor\@ItemStackBase\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @hash   -1730000308
     * @symbol  ?getComponent\@ItemStackBase\@\@QEBAPEBVItemComponent\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI class ItemComponent const * getComponent(class HashedString const &) const;
    /**
     * @hash   28258849
     * @symbol  ?getComponentItem\@ItemStackBase\@\@QEBAPEBVComponentItem\@\@XZ
     */
    MCAPI class ComponentItem const * getComponentItem() const;
    /**
     * @hash   682716969
     * @symbol  ?getCustomLore\@ItemStackBase\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getCustomLore() const;
    /**
     * @hash   -1497399616
     * @symbol  ?getCustomName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCustomName() const;
    /**
     * @hash   -843000845
     * @symbol  ?getDamageValue\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getDamageValue() const;
    /**
     * @hash   -808873198
     * @symbol  ?getDescriptionId\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   1406906614
     * @symbol  ?getDescriptor\@ItemStackBase\@\@QEBA?AVItemDescriptor\@\@XZ
     */
    MCAPI class ItemDescriptor getDescriptor() const;
    /**
     * @hash   602546304
     * @symbol  ?getEffectName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getEffectName() const;
    /**
     * @hash   -2108574312
     * @symbol  ?getEnchantSlot\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getEnchantSlot() const;
    /**
     * @hash   -103921980
     * @symbol  ?getEnchantValue\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getEnchantValue() const;
    /**
     * @hash   -1682404926
     * @symbol  ?getFullNameHash\@ItemStackBase\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @hash   -464334190
     * @symbol  ?getHoverName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getHoverName() const;
    /**
     * @hash   -1980620177
     * @symbol  ?getId\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @hash   -1463975060
     * @symbol  ?getIdAux\@ItemStackBase\@\@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @hash   1670772835
     * @symbol  ?getItem\@ItemStackBase\@\@QEBAPEBVItem\@\@XZ
     */
    MCAPI class Item const * getItem() const;
    /**
     * @hash   -1539927669
     * @symbol  ?getLegacyBlock\@ItemStackBase\@\@QEBAAEBV?$WeakPtr\@VBlockLegacy\@\@\@\@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @hash   -1453841787
     * @symbol  ?getMaxDamage\@ItemStackBase\@\@QEBAFXZ
     */
    MCAPI short getMaxDamage() const;
    /**
     * @hash   1330409583
     * @symbol  ?getMaxStackSize\@ItemStackBase\@\@QEBAEXZ
     */
    MCAPI unsigned char getMaxStackSize() const;
    /**
     * @hash   2130901184
     * @symbol  ?getName\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   232934536
     * @symbol  ?getNetworkUserData\@ItemStackBase\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;
    /**
     * @hash   1747496836
     * @symbol  ?getRawNameHash\@ItemStackBase\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @hash   1115022130
     * @symbol  ?getRawNameId\@ItemStackBase\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @hash   -1532826506
     * @symbol  ?getRequiredBaseGameVersion\@ItemStackBase\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   1149106880
     * @symbol  ?getUseAnimation\@ItemStackBase\@\@QEBA?AW4UseAnimation\@\@XZ
     */
    MCAPI enum class UseAnimation getUseAnimation() const;
    /**
     * @hash   1596744253
     * @symbol  ?getUserData\@ItemStackBase\@\@QEAAPEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag * getUserData();
    /**
     * @hash   491123895
     * @symbol  ?getUserData\@ItemStackBase\@\@QEBAPEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const * getUserData() const;
    /**
     * @hash   -2089825068
     * @symbol  ?getWasPickedUp\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool getWasPickedUp() const;
    /**
     * @hash   -873566268
     * @symbol  ?hasChargedItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasChargedItem() const;
    /**
     * @hash   -581104110
     * @symbol  ?hasCompoundTextUserData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasCompoundTextUserData() const;
    /**
     * @hash   -1091930844
     * @symbol  ?hasContainerData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasContainerData() const;
    /**
     * @hash   -472144108
     * @symbol  ?hasCustomHoverName\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasCustomHoverName() const;
    /**
     * @hash   -1251047212
     * @symbol  ?hasDamageValue\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasDamageValue() const;
    /**
     * @hash   -829829056
     * @symbol  ?hasSameAuxValue\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool hasSameAuxValue(class ItemStackBase const &) const;
    /**
     * @hash   -609124352
     * @symbol  ?hasSameUserData\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool hasSameUserData(class ItemStackBase const &) const;
    /**
     * @hash   -278991485
     * @symbol  ?hasTag\@ItemStackBase\@\@QEBA_NAEBUItemTag\@\@\@Z
     */
    MCAPI bool hasTag(struct ItemTag const &) const;
    /**
     * @hash   -646313837
     * @symbol  ?hasTag\@ItemStackBase\@\@QEBA_NAEB_K\@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   2000101826
     * @symbol  ?hasUserData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool hasUserData() const;
    /**
     * @hash   1803876333
     * @symbol  ?hurtAndBreak\@ItemStackBase\@\@QEAA_NHPEAVActor\@\@\@Z
     */
    MCAPI bool hurtAndBreak(int, class Actor *);
    /**
     * @hash   -914633450
     * @symbol  ?initParams\@ItemStackBase\@\@QEAAXAEAVRenderParams\@\@PEAVActor\@\@\@Z
     */
    MCAPI void initParams(class RenderParams &, class Actor *);
    /**
     * @hash   -2014634702
     * @symbol  ?isArmorItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isArmorItem() const;
    /**
     * @hash   1372427218
     * @symbol  ?isBlock\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isBlock() const;
    /**
     * @hash   908578387
     * @symbol  ?isBlockInstance\@ItemStackBase\@\@QEBA_NAEBVHashedString\@\@\@Z
     */
    MCAPI bool isBlockInstance(class HashedString const &) const;
    /**
     * @hash   -1384343836
     * @symbol  ?isDamageableItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isDamageableItem() const;
    /**
     * @hash   -1268790750
     * @symbol  ?isDamaged\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isDamaged() const;
    /**
     * @hash   -1005041998
     * @symbol  ?isEnchanted\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isEnchanted() const;
    /**
     * @hash   -1369568780
     * @symbol  ?isEnchantingBook\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isEnchantingBook() const;
    /**
     * @hash   -869550508
     * @symbol  ?isExplodable\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isExplodable() const;
    /**
     * @hash   1646298034
     * @symbol  ?isFireResistant\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const;
    /**
     * @hash   -844369262
     * @symbol  ?isFullStack\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isFullStack() const;
    /**
     * @hash   -223995182
     * @symbol  ?isGlint\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isGlint() const;
    /**
     * @hash   -47684924
     * @symbol  ?isHorseArmorItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isHorseArmorItem() const;
    /**
     * @hash   446453088
     * @symbol  ?isInstance\@ItemStackBase\@\@QEBA_NAEBVHashedString\@\@_N\@Z
     */
    MCAPI bool isInstance(class HashedString const &, bool) const;
    /**
     * @hash   -968213772
     * @symbol  ?isLiquidClipItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isLiquidClipItem() const;
    /**
     * @hash   -1850002894
     * @symbol  ?isMusicDiscItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isMusicDiscItem() const;
    /**
     * @hash   166437332
     * @symbol  ?isNull\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   1044284706
     * @symbol  ?isOffhandItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isOffhandItem() const;
    /**
     * @symbol  ?isOneOfBlockInstances\@ItemStackBase\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@\@Z
     */
    MCAPI bool isOneOfBlockInstances(class std::initializer_list<class HashedString const>) const;
    /**
     * @hash   -1214818213
     * @symbol  ?isOneOfInstances\@ItemStackBase\@\@QEBA_NV?$initializer_list\@$$CBVHashedString\@\@\@std\@\@_N\@Z
     */
    MCAPI bool isOneOfInstances(class std::initializer_list<class HashedString const>, bool) const;
    /**
     * @hash   -1315510478
     * @symbol  ?isPattern\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isPattern() const;
    /**
     * @hash   1879687236
     * @symbol  ?isPotionItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isPotionItem() const;
    /**
     * @hash   233206602
     * @symbol  ?isStackable\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool isStackable(class ItemStackBase const &) const;
    /**
     * @hash   1246597474
     * @symbol  ?isStackable\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @hash   1590168130
     * @symbol  ?isStackedByData\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isStackedByData() const;
    /**
     * @hash   -1787298425
     * @symbol  ?isValidAuxValue\@ItemStackBase\@\@QEBA_NH\@Z
     */
    MCAPI bool isValidAuxValue(int) const;
    /**
     * @hash   -1183326236
     * @symbol  ?isWearableItem\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool isWearableItem() const;
    /**
     * @hash   -128630367
     * @symbol  ?load\@ItemStackBase\@\@QEAAXAEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &, class Level &);
    /**
     * @hash   -753160184
     * @symbol  ?load\@ItemStackBase\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   625954260
     * @symbol  ?matches\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matches(class ItemStackBase const &) const;
    /**
     * @hash   -1476170640
     * @symbol  ?matchesEitherWearableCase\@ItemStackBase\@\@QEBA_NPEBVCompoundTag\@\@\@Z
     */
    MCAPI bool matchesEitherWearableCase(class CompoundTag const *) const;
    /**
     * @hash   -1784743426
     * @symbol  ?matchesItem\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesItem(class ItemStackBase const &) const;
    /**
     * @hash   -1178939816
     * @symbol  ??BItemStackBase\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -185774938
     * @symbol  ??9ItemStackBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class ItemStackBase const &) const;
    /**
     * @hash   -1456290959
     * @symbol  ??8ItemStackBase\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class ItemStackBase const &) const;
    /**
     * @hash   -942188790
     * @symbol  ?refreshedInContainer\@ItemStackBase\@\@QEBAXAEAVLevel\@\@\@Z
     */
    MCAPI void refreshedInContainer(class Level &) const;
    /**
     * @hash   523740736
     * @symbol  ?remove\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void remove(int);
    /**
     * @hash   402723153
     * @symbol  ?removeDamageValue\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void removeDamageValue();
    /**
     * @hash   -50385073
     * @symbol  ?removeEnchants\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void removeEnchants();
    /**
     * @hash   -1384608813
     * @symbol  ?resetHoverName\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void resetHoverName();
    /**
     * @hash   1649788716
     * @symbol  ?sameItem\@ItemStackBase\@\@QEBA_NHH\@Z
     */
    MCAPI bool sameItem(int, int) const;
    /**
     * @hash   1760147962
     * @symbol  ?sameItem\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItem(class ItemStackBase const &) const;
    /**
     * @hash   -2067143072
     * @symbol  ?sameItemAndAux\@ItemStackBase\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItemAndAux(class ItemStackBase const &) const;
    /**
     * @hash   881095560
     * @symbol  ?save\@ItemStackBase\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   -344084342
     * @symbol  ?saveEnchantsToUserData\@ItemStackBase\@\@QEAAXAEBVItemEnchants\@\@\@Z
     */
    MCAPI void saveEnchantsToUserData(class ItemEnchants const &);
    /**
     * @hash   -1125024908
     * @symbol  ?sendEventTriggered\@ItemStackBase\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVRenderParams\@\@\@Z
     */
    MCAPI bool sendEventTriggered(std::string const &, class RenderParams const &);
    /**
     * @hash   171348160
     * @symbol  ?serializeComponents\@ItemStackBase\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serializeComponents(class IDataOutput &) const;
    /**
     * @hash   300445106
     * @symbol  ?set\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void set(int);
    /**
     * @hash   -690305939
     * @symbol  ?setAuxValue\@ItemStackBase\@\@QEAAXF\@Z
     */
    MCAPI void setAuxValue(short);
    /**
     * @hash   941751407
     * @symbol  ?setBlock\@ItemStackBase\@\@QEAAXPEBVBlock\@\@\@Z
     */
    MCAPI void setBlock(class Block const *);
    /**
     * @hash   1131042376
     * @symbol  ?setBlockingTick\@ItemStackBase\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void setBlockingTick(struct Tick);
    /**
     * @hash   -832399983
     * @symbol  ?setChargedItem\@ItemStackBase\@\@QEAAXAEBVItemInstance\@\@_N\@Z
     */
    MCAPI void setChargedItem(class ItemInstance const &, bool);
    /**
     * @hash   1606557267
     * @symbol  ?setCustomLore\@ItemStackBase\@\@QEAAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomLore(std::vector<std::string> const &);
    /**
     * @hash   -1873389520
     * @symbol  ?setCustomName\@ItemStackBase\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @hash   -37531379
     * @symbol  ?setDamageValue\@ItemStackBase\@\@QEAAXF\@Z
     */
    MCAPI void setDamageValue(short);
    /**
     * @hash   1461931402
     * @symbol  ?setJustBrewed\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setJustBrewed(bool);
    /**
     * @hash   1266960459
     * @symbol  ?setPickupTime\@ItemStackBase\@\@QEAAXXZ
     */
    MCAPI void setPickupTime();
    /**
     * @hash   -1203870130
     * @symbol  ?setRepairCost\@ItemStackBase\@\@QEAAXH\@Z
     */
    MCAPI void setRepairCost(int);
    /**
     * @hash   964133370
     * @symbol  ?setShowPickUp\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setShowPickUp(bool);
    /**
     * @symbol  ?setStackSize\@ItemStackBase\@\@QEAAXE\@Z
     */
    MCAPI void setStackSize(unsigned char);
    /**
     * @hash   -696925632
     * @symbol  ?setUserData\@ItemStackBase\@\@QEAAXV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   1355804792
     * @symbol  ?setWasPickedUp\@ItemStackBase\@\@QEAAX_N\@Z
     */
    MCAPI void setWasPickedUp(bool);
    /**
     * @hash   2043642181
     * @symbol  ?shouldInteractionWithBlockBypassLiquid\@ItemStackBase\@\@QEBA_NAEBVBlock\@\@\@Z
     */
    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @hash   1472727076
     * @symbol  ?shouldVanish\@ItemStackBase\@\@QEBA_NXZ
     */
    MCAPI bool shouldVanish() const;
    /**
     * @hash   -1493192897
     * @symbol  ?startCoolDown\@ItemStackBase\@\@QEBAXPEAVPlayer\@\@\@Z
     */
    MCAPI void startCoolDown(class Player *) const;
    /**
     * @hash   -1527257828
     * @symbol  ?updateComponent\@ItemStackBase\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool updateComponent(std::string const &, class Json::Value const &);
    /**
     * @hash   -1541129593
     * @symbol  ?TAG_CAN_DESTROY\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CAN_DESTROY;
    /**
     * @hash   -990746135
     * @symbol  ?TAG_CAN_PLACE_ON\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CAN_PLACE_ON;
    /**
     * @hash   -290709849
     * @symbol  ?TAG_DISPLAY\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DISPLAY;
    /**
     * @hash   -1780825943
     * @symbol  ?TAG_DISPLAY_NAME\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_DISPLAY_NAME;
    /**
     * @hash   -191470903
     * @symbol  ?TAG_ENCHANTS\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_ENCHANTS;
    /**
     * @hash   1695370377
     * @symbol  ?TAG_LORE\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_LORE;
    /**
     * @hash   -908714329
     * @symbol  ?TAG_REPAIR_COST\@ItemStackBase\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_REPAIR_COST;

//protected:
    /**
     * @hash   -1679320637
     * @symbol  ??0ItemStackBase\@\@IEAA\@XZ
     */
    MCAPI ItemStackBase();
    /**
     * @hash   371388542
     * @symbol  ??0ItemStackBase\@\@IEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @hash   909455463
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVRecipeIngredient\@\@\@Z
     */
    MCAPI ItemStackBase(class RecipeIngredient const &);
    /**
     * @hash   566067283
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class Item const &, int, int, class CompoundTag const *);
    /**
     * @hash   -982771649
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemStackBase(class BlockLegacy const &, int);
    /**
     * @hash   -1177246624
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStackBase(class Block const &, int, class CompoundTag const *);
    /**
     * @hash   -390478240
     * @symbol  ??0ItemStackBase\@\@IEAA\@AEBV0\@\@Z
     */
    MCAPI ItemStackBase(class ItemStackBase const &);
    /**
     * @hash   -649899484
     * @symbol  ?_getHoverFormattingPrefix\@ItemStackBase\@\@IEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string _getHoverFormattingPrefix() const;
    /**
     * @hash   68501826
     * @symbol  ?_setItem\@ItemStackBase\@\@IEAA_NH_N\@Z
     */
    MCAPI bool _setItem(int, bool);
    /**
     * @hash   324842089
     * @symbol  ?init\@ItemStackBase\@\@IEAAXAEBVBlockLegacy\@\@H\@Z
     */
    MCAPI void init(class BlockLegacy const &, int);
    /**
     * @hash   -1184655529
     * @symbol  ?init\@ItemStackBase\@\@IEAAXAEBVItem\@\@HHPEBVCompoundTag\@\@_N\@Z
     */
    MCAPI void init(class Item const &, int, int, class CompoundTag const *, bool);
    /**
     * @hash   553149618
     * @symbol  ?init\@ItemStackBase\@\@IEAAXHHH_N\@Z
     */
    MCAPI void init(int, int, int, bool);
    /**
     * @hash   -1378798620
     * @symbol  ??4ItemStackBase\@\@IEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemStackBase & operator=(class ItemStackBase const &);

//private:
    /**
     * @hash   -838889961
     * @symbol  ?_addCustomUserDataCommon\@ItemStackBase\@\@AEAAX$$QEAV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag> &&);
    /**
     * @hash   -1557815497
     * @symbol  ?_checkForItemWorldCompatibility\@ItemStackBase\@\@AEAAXXZ
     */
    MCAPI void _checkForItemWorldCompatibility();
    /**
     * @hash   750835113
     * @symbol  ?_cloneComponents\@ItemStackBase\@\@AEAAXAEBV1\@\@Z
     */
    MCAPI void _cloneComponents(class ItemStackBase const &);
    /**
     * @hash   684175100
     * @symbol  ?_isInstance\@ItemStackBase\@\@AEBA_NV?$basic_string_span\@$$CBD$0?0\@gsl\@\@\@Z
     */
    MCAPI bool _isInstance(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -7018007
     * @symbol  ?_loadComponents\@ItemStackBase\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadComponents(class CompoundTag const &);
    /**
     * @hash   1529415196
     * @symbol  ?_loadItem\@ItemStackBase\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadItem(class CompoundTag const &);
    /**
     * @hash   466978987
     * @symbol  ?_setChargedItem\@ItemStackBase\@\@AEAAXAEBVItemInstance\@\@\@Z
     */
    MCAPI void _setChargedItem(class ItemInstance const &);
    /**
     * @hash   1738853871
     * @symbol  ?_updateCompareHashes\@ItemStackBase\@\@AEAAXXZ
     */
    MCAPI void _updateCompareHashes();

protected:
    /**
     * @hash   433130148
     * @symbol  ?TAG_CHARGED_ITEM\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_CHARGED_ITEM;
    /**
     * @hash   1207646757
     * @symbol  ?TAG_STORE_CAN_DESTROY\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_STORE_CAN_DESTROY;
    /**
     * @hash   -1819112794
     * @symbol  ?TAG_STORE_CAN_PLACE_ON\@ItemStackBase\@\@1V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;

private:
    /**
     * @hash   1142181477
     * @symbol  ?MAX_STACK_SIZE\@ItemStackBase\@\@0HB
     */
    MCAPI static int const MAX_STACK_SIZE;

};