/**
 * @file  ItemStackBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStackBase();
    /**
     * @hash   -714210022
     * @vftbl  1
     * @symbol ?reinit@ItemStackBase@@UEAAXAEBVItem@@HH@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @hash   -557378784
     * @vftbl  2
     * @symbol ?reinit@ItemStackBase@@UEAAXAEBVBlockLegacy@@H@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @hash   -851043809
     * @vftbl  3
     * @symbol ?reinit@ItemStackBase@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   -1623059334
     * @vftbl  4
     * @symbol ?setNull@ItemStackBase@@UEAAXXZ
     */
    virtual void setNull();
    /**
     * @hash   104610784
     * @vftbl  5
     * @symbol ?toString@ItemStackBase@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   391969021
     * @vftbl  6
     * @symbol ?toDebugString@ItemStackBase@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toDebugString() const;
    /**
     * @hash   -105180652
     * @symbol ?add@ItemStackBase@@QEAAXH@Z
     */
    MCAPI void add(int);
    /**
     * @hash   -296086260
     * @symbol ?addComponents@ItemStackBase@@QEAA_NAEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool addComponents(class Json::Value const &, std::string &);
    /**
     * @hash   1183333712
     * @symbol ?addCustomUserData@ItemStackBase@@QEAAXAEAVContainerComponent@@@Z
     */
    MCAPI void addCustomUserData(class ContainerComponent &);
    /**
     * @hash   823886873
     * @symbol ?addCustomUserData@ItemStackBase@@QEAAXAEAVBlockActor@@AEAVBlockSource@@@Z
     */
    MCAPI void addCustomUserData(class BlockActor &, class BlockSource &);
    /**
     * @hash   691875044
     * @symbol ?canBeCharged@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool canBeCharged() const;
    /**
     * @hash   -828928494
     * @symbol ?canDestroy@ItemStackBase@@QEBA_NPEBVBlock@@@Z
     */
    MCAPI bool canDestroy(class Block const *) const;
    /**
     * @hash   -1323757753
     * @symbol ?canDestroySpecial@ItemStackBase@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool canDestroySpecial(class Block const &) const;
    /**
     * @hash   1350298626
     * @symbol ?canPlaceOn@ItemStackBase@@QEBA_NPEBVBlock@@@Z
     */
    MCAPI bool canPlaceOn(class Block const *) const;
    /**
     * @hash   -34048929
     * @symbol ?clearChargedItem@ItemStackBase@@QEAAXXZ
     */
    MCAPI void clearChargedItem();
    /**
     * @hash   -769537700
     * @symbol ?componentsMatch@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool componentsMatch(class ItemStackBase const &) const;
    /**
     * @hash   658470796
     * @symbol ?constructItemEnchantsFromUserData@ItemStackBase@@QEBA?AVItemEnchants@@XZ
     */
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;
    /**
     * @hash   1662017642
     * @symbol ?deserializeComponents@ItemStackBase@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserializeComponents(class IDataInput &);
    /**
     * @hash   1600893465
     * @symbol ?executeEvent@ItemStackBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
     */
    MCAPI void executeEvent(std::string const &, class RenderParams &);
    /**
     * @hash   -604592996
     * @symbol ?getArmorSlot@ItemStackBase@@QEBA?AW4ArmorSlot@@XZ
     */
    MCAPI enum ArmorSlot getArmorSlot() const;
    /**
     * @hash   -1618814974
     * @symbol ?getAttackDamage@ItemStackBase@@QEBAHXZ
     */
    MCAPI int getAttackDamage() const;
    /**
     * @hash   1328363043
     * @symbol ?getAuxValue@ItemStackBase@@QEBAFXZ
     */
    MCAPI short getAuxValue() const;
    /**
     * @hash   -1978109782
     * @symbol ?getBaseRepairCost@ItemStackBase@@QEBAHXZ
     */
    MCAPI int getBaseRepairCost() const;
    /**
     * @hash   1415068193
     * @symbol ?getBlock@ItemStackBase@@QEBAPEBVBlock@@XZ
     */
    MCAPI class Block const * getBlock() const;
    /**
     * @hash   410976274
     * @symbol ?getBlockingTick@ItemStackBase@@QEBAAEBUTick@@XZ
     */
    MCAPI struct Tick const & getBlockingTick() const;
    /**
     * @hash   -747009808
     * @symbol ?getCategoryName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getCategoryName() const;
    /**
     * @hash   773237312
     * @symbol ?getChargedItem@ItemStackBase@@QEBAAEBVItemInstance@@XZ
     */
    MCAPI class ItemInstance const & getChargedItem() const;
    /**
     * @hash   613149344
     * @symbol ?getColor@ItemStackBase@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @hash   1705848364
     * @symbol ?getComponent@ItemStackBase@@QEBAPEBVItemComponent@@AEBVHashedString@@@Z
     */
    MCAPI class ItemComponent const * getComponent(class HashedString const &) const;
    /**
     * @hash   -830875151
     * @symbol ?getComponentItem@ItemStackBase@@QEBAPEBVComponentItem@@XZ
     */
    MCAPI class ComponentItem const * getComponentItem() const;
    /**
     * @hash   -176432407
     * @symbol ?getCustomLore@ItemStackBase@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getCustomLore() const;
    /**
     * @hash   1938418304
     * @symbol ?getCustomName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getCustomName() const;
    /**
     * @hash   -1702150221
     * @symbol ?getDamageValue@ItemStackBase@@QEBAFXZ
     */
    MCAPI short getDamageValue() const;
    /**
     * @hash   -1668022574
     * @symbol ?getDescriptionId@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getDescriptionId() const;
    /**
     * @hash   547695734
     * @symbol ?getDescriptor@ItemStackBase@@QEBA?AVItemDescriptor@@XZ
     */
    MCAPI class ItemDescriptor getDescriptor() const;
    /**
     * @hash   -256710704
     * @symbol ?getEffectName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getEffectName() const;
    /**
     * @hash   1327120600
     * @symbol ?getEnchantSlot@ItemStackBase@@QEBAHXZ
     */
    MCAPI int getEnchantSlot() const;
    /**
     * @hash   -963209740
     * @symbol ?getEnchantValue@ItemStackBase@@QEBAHXZ
     */
    MCAPI int getEnchantValue() const;
    /**
     * @hash   1753259234
     * @symbol ?getFullNameHash@ItemStackBase@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getFullNameHash() const;
    /**
     * @hash   -1323637326
     * @symbol ?getHoverName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getHoverName() const;
    /**
     * @hash   392884319
     * @symbol ?getIcon@ItemStackBase@@QEBAPEBUTextureUVCoordinateSet@@H_N@Z
     */
    MCAPI struct TextureUVCoordinateSet const * getIcon(int, bool) const;
    /**
     * @hash   1455090111
     * @symbol ?getId@ItemStackBase@@QEBAFXZ
     */
    MCAPI short getId() const;
    /**
     * @hash   1971735228
     * @symbol ?getIdAux@ItemStackBase@@QEBAHXZ
     */
    MCAPI int getIdAux() const;
    /**
     * @hash   811515827
     * @symbol ?getItem@ItemStackBase@@QEBAPEBVItem@@XZ
     */
    MCAPI class Item const * getItem() const;
    /**
     * @hash   1895782619
     * @symbol ?getLegacyBlock@ItemStackBase@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
     */
    MCAPI class WeakPtr<class BlockLegacy> const & getLegacyBlock() const;
    /**
     * @hash   1981868501
     * @symbol ?getMaxDamage@ItemStackBase@@QEBAFXZ
     */
    MCAPI short getMaxDamage() const;
    /**
     * @hash   471137199
     * @symbol ?getMaxStackSize@ItemStackBase@@QEBAEXZ
     */
    MCAPI unsigned char getMaxStackSize() const;
    /**
     * @hash   1271613424
     * @symbol ?getName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getName() const;
    /**
     * @hash   -626353224
     * @symbol ?getNetworkUserData@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;
    /**
     * @hash   888193700
     * @symbol ?getRawNameHash@ItemStackBase@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getRawNameHash() const;
    /**
     * @hash   255718994
     * @symbol ?getRawNameId@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getRawNameId() const;
    /**
     * @hash   1902837654
     * @symbol ?getRequiredBaseGameVersion@ItemStackBase@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getRequiredBaseGameVersion() const;
    /**
     * @hash   289803744
     * @symbol ?getUseAnimation@ItemStackBase@@QEBA?AW4UseAnimation@@XZ
     */
    MCAPI enum UseAnimation getUseAnimation() const;
    /**
     * @hash   1492971629
     * @symbol ?getUserData@ItemStackBase@@QEAAPEAVCompoundTag@@XZ
     */
    MCAPI class CompoundTag * getUserData();
    /**
     * @hash   387351271
     * @symbol ?getUserData@ItemStackBase@@QEBAPEBVCompoundTag@@XZ
     */
    MCAPI class CompoundTag const * getUserData() const;
    /**
     * @hash   1345839092
     * @symbol ?getWasPickedUp@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool getWasPickedUp() const;
    /**
     * @hash   -1732869404
     * @symbol ?hasChargedItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool hasChargedItem() const;
    /**
     * @hash   -1440407246
     * @symbol ?hasCompoundTextUserData@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool hasCompoundTextUserData() const;
    /**
     * @hash   -1951233980
     * @symbol ?hasContainerData@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool hasContainerData() const;
    /**
     * @hash   -1331447244
     * @symbol ?hasCustomHoverName@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool hasCustomHoverName() const;
    /**
     * @symbol ?hasDamageValue@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool hasDamageValue() const;
    /**
     * @hash   -1689162944
     * @symbol ?hasSameAuxValue@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool hasSameAuxValue(class ItemStackBase const &) const;
    /**
     * @hash   -1468488992
     * @symbol ?hasSameUserData@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool hasSameUserData(class ItemStackBase const &) const;
    /**
     * @hash   -1138417629
     * @symbol ?hasTag@ItemStackBase@@QEBA_NAEBUItemTag@@@Z
     */
    MCAPI bool hasTag(struct ItemTag const &) const;
    /**
     * @hash   -1505755357
     * @symbol ?hasTag@ItemStackBase@@QEBA_NAEB_K@Z
     */
    MCAPI bool hasTag(unsigned __int64 const &) const;
    /**
     * @hash   -1658391326
     * @symbol ?hasUserData@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool hasUserData() const;
    /**
     * @hash   944434813
     * @symbol ?hurtAndBreak@ItemStackBase@@QEAA_NHPEAVActor@@@Z
     */
    MCAPI bool hurtAndBreak(int, class Actor *);
    /**
     * @hash   -1774136474
     * @symbol ?initParams@ItemStackBase@@QEAAXAEAVRenderParams@@PEAVActor@@@Z
     */
    MCAPI void initParams(class RenderParams &, class Actor *);
    /**
     * @hash   1420829570
     * @symbol ?isArmorItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isArmorItem() const;
    /**
     * @hash   512908818
     * @symbol ?isBlock@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isBlock() const;
    /**
     * @hash   49059987
     * @symbol ?isBlockInstance@ItemStackBase@@QEBA_NAEBVHashedString@@@Z
     */
    MCAPI bool isBlockInstance(class HashedString const &) const;
    /**
     * @hash   2051105060
     * @symbol ?isDamageableItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isDamageableItem() const;
    /**
     * @hash   -2128324526
     * @symbol ?isDamaged@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isDamaged() const;
    /**
     * @hash   -1864591150
     * @symbol ?isEnchanted@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isEnchanted() const;
    /**
     * @hash   2065849364
     * @symbol ?isEnchantingBook@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isEnchantingBook() const;
    /**
     * @hash   -1729099660
     * @symbol ?isExplodable@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isExplodable() const;
    /**
     * @hash   786748882
     * @symbol ?isFireResistant@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isFireResistant() const;
    /**
     * @hash   -1703918414
     * @symbol ?isFullStack@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isFullStack() const;
    /**
     * @hash   -1083544334
     * @symbol ?isGlint@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isGlint() const;
    /**
     * @hash   -907234076
     * @symbol ?isHorseArmorItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isHorseArmorItem() const;
    /**
     * @hash   -413019184
     * @symbol ?isInstance@ItemStackBase@@QEBA_NAEBVHashedString@@_N@Z
     */
    MCAPI bool isInstance(class HashedString const &, bool) const;
    /**
     * @hash   -1827686044
     * @symbol ?isLiquidClipItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isLiquidClipItem() const;
    /**
     * @hash   1585492130
     * @symbol ?isMusicDiscItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isMusicDiscItem() const;
    /**
     * @hash   -693050316
     * @symbol ?isNull@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isNull() const;
    /**
     * @hash   184797058
     * @symbol ?isOffhandItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isOffhandItem() const;
    /**
     * @hash   -709325608
     * @symbol ?isOneOfInstances@ItemStackBase@@QEBA_NV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@std@@_N@Z
     */
    MCAPI bool isOneOfInstances(std::vector<class HashedString>, bool) const;
    /**
     * @hash   2120015298
     * @symbol ?isPattern@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isPattern() const;
    /**
     * @hash   1020230340
     * @symbol ?isPotionItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isPotionItem() const;
    /**
     * @hash   387171330
     * @symbol ?isStackable@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isStackable() const;
    /**
     * @hash   -626188790
     * @symbol ?isStackable@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool isStackable(class ItemStackBase const &) const;
    /**
     * @hash   730726610
     * @symbol ?isStackedByData@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isStackedByData() const;
    /**
     * @hash   1648211975
     * @symbol ?isValidAuxValue@ItemStackBase@@QEBA_NH@Z
     */
    MCAPI bool isValidAuxValue(int) const;
    /**
     * @hash   -2042906140
     * @symbol ?isWearableItem@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool isWearableItem() const;
    /**
     * @hash   -1612740088
     * @symbol ?load@ItemStackBase@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   -988210271
     * @symbol ?load@ItemStackBase@@QEAAXAEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI void load(class CompoundTag const &, class Level &);
    /**
     * @hash   -233625644
     * @symbol ?matches@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matches(class ItemStackBase const &) const;
    /**
     * @hash   1959216752
     * @symbol ?matchesEitherWearableCase@ItemStackBase@@QEBA_NPEBVCompoundTag@@@Z
     */
    MCAPI bool matchesEitherWearableCase(class CompoundTag const *) const;
    /**
     * @hash   1650628590
     * @symbol ?matchesItem@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matchesItem(class ItemStackBase const &) const;
    /**
     * @hash   -1383794264
     * @symbol ??BItemStackBase@@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @hash   -1044063258
     * @symbol ??9ItemStackBase@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator!=(class ItemStackBase const &) const;
    /**
     * @hash   1980388017
     * @symbol ??8ItemStackBase@@QEBA_NAEBV0@@Z
     */
    MCAPI bool operator==(class ItemStackBase const &) const;
    /**
     * @hash   -1801784070
     * @symbol ?refreshedInContainer@ItemStackBase@@QEBAXAEAVLevel@@@Z
     */
    MCAPI void refreshedInContainer(class Level &) const;
    /**
     * @hash   -335854544
     * @symbol ?remove@ItemStackBase@@QEAAXH@Z
     */
    MCAPI void remove(int);
    /**
     * @symbol ?removeDamageValue@ItemStackBase@@QEAAXXZ
     */
    MCAPI void removeDamageValue();
    /**
     * @hash   -910011105
     * @symbol ?removeEnchants@ItemStackBase@@QEAAXXZ
     */
    MCAPI void removeEnchants();
    /**
     * @hash   2050732451
     * @symbol ?resetHoverName@ItemStackBase@@QEAAXXZ
     */
    MCAPI void resetHoverName();
    /**
     * @hash   1428789468
     * @symbol ?sameItem@ItemStackBase@@QEBA_NHH@Z
     */
    MCAPI bool sameItem(int, int) const;
    /**
     * @hash   900521930
     * @symbol ?sameItem@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool sameItem(class ItemStackBase const &) const;
    /**
     * @hash   1368198192
     * @symbol ?sameItemAndAux@ItemStackBase@@QEBA_NAEBV1@@Z
     */
    MCAPI bool sameItemAndAux(class ItemStackBase const &) const;
    /**
     * @hash   21469528
     * @symbol ?save@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @hash   -1203694998
     * @symbol ?saveEnchantsToUserData@ItemStackBase@@QEAAXAEBVItemEnchants@@@Z
     */
    MCAPI void saveEnchantsToUserData(class ItemEnchants const &);
    /**
     * @hash   -1984650940
     * @symbol ?sendEventTriggered@ItemStackBase@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVRenderParams@@@Z
     */
    MCAPI bool sendEventTriggered(std::string const &, class RenderParams const &);
    /**
     * @hash   -688308624
     * @symbol ?serializeComponents@ItemStackBase@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serializeComponents(class IDataOutput &) const;
    /**
     * @hash   -559242430
     * @symbol ?set@ItemStackBase@@QEAAXH@Z
     */
    MCAPI void set(int);
    /**
     * @hash   -1550008851
     * @symbol ?setAuxValue@ItemStackBase@@QEAAXF@Z
     */
    MCAPI void setAuxValue(short);
    /**
     * @hash   82463647
     * @symbol ?setBlock@ItemStackBase@@QEAAXPEBVBlock@@@Z
     */
    MCAPI void setBlock(class Block const *);
    /**
     * @hash   271339464
     * @symbol ?setBlockingTick@ItemStackBase@@QEAAXUTick@@@Z
     */
    MCAPI void setBlockingTick(struct Tick);
    /**
     * @hash   -1692102895
     * @symbol ?setChargedItem@ItemStackBase@@QEAAXAEBVItemInstance@@_N@Z
     */
    MCAPI void setChargedItem(class ItemInstance const &, bool);
    /**
     * @hash   746838979
     * @symbol ?setCustomLore@ItemStackBase@@QEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     */
    MCAPI void setCustomLore(std::vector<std::string> const &);
    /**
     * @hash   1561844112
     * @symbol ?setCustomName@ItemStackBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setCustomName(std::string const &);
    /**
     * @hash   -897280419
     * @symbol ?setDamageValue@ItemStackBase@@QEAAXF@Z
     */
    MCAPI void setDamageValue(short);
    /**
     * @hash   602182362
     * @symbol ?setJustBrewed@ItemStackBase@@QEAAX_N@Z
     */
    MCAPI void setJustBrewed(bool);
    /**
     * @hash   406950027
     * @symbol ?setPickupTime@ItemStackBase@@QEAAXXZ
     */
    MCAPI void setPickupTime();
    /**
     * @hash   -2063880562
     * @symbol ?setRepairCost@ItemStackBase@@QEAAXH@Z
     */
    MCAPI void setRepairCost(int);
    /**
     * @symbol ?setShowPickUp@ItemStackBase@@QEAAX_N@Z
     */
    MCAPI void setShowPickUp(bool);
    /**
     * @hash   -1556936064
     * @symbol ?setUserData@ItemStackBase@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
     */
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);
    /**
     * @hash   495763608
     * @symbol ?setWasPickedUp@ItemStackBase@@QEAAX_N@Z
     */
    MCAPI void setWasPickedUp(bool);
    /**
     * @hash   1183600997
     * @symbol ?shouldInteractionWithBlockBypassLiquid@ItemStackBase@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const &) const;
    /**
     * @hash   612670516
     * @symbol ?shouldVanish@ItemStackBase@@QEBA_NXZ
     */
    MCAPI bool shouldVanish() const;
    /**
     * @hash   1941717839
     * @symbol ?startCoolDown@ItemStackBase@@QEBAXPEAVPlayer@@@Z
     */
    MCAPI void startCoolDown(class Player *) const;
    /**
     * @hash   1906822604
     * @symbol ?updateComponent@ItemStackBase@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
     */
    MCAPI bool updateComponent(std::string const &, class Json::Value const &);
    /**
     * @hash   837034791
     * @symbol ?TAG_CAN_DESTROY@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_CAN_DESTROY;
    /**
     * @hash   1387418249
     * @symbol ?TAG_CAN_PLACE_ON@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_CAN_PLACE_ON;
    /**
     * @hash   2087454535
     * @symbol ?TAG_DISPLAY@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_DISPLAY;
    /**
     * @hash   597338441
     * @symbol ?TAG_DISPLAY_NAME@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_DISPLAY_NAME;
    /**
     * @hash   -2108273815
     * @symbol ?TAG_ENCHANTS@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_ENCHANTS;
    /**
     * @hash   -221432535
     * @symbol ?TAG_LORE@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_LORE;
    /**
     * @hash   1469450055
     * @symbol ?TAG_REPAIR_COST@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_REPAIR_COST;

//protected:
    /**
     * @hash   1757389091
     * @symbol ??0ItemStackBase@@IEAA@XZ
     */
    MCAPI ItemStackBase();
    /**
     * @hash   -486792146
     * @symbol ??0ItemStackBase@@IEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemStackBase(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @hash   51305527
     * @symbol ??0ItemStackBase@@IEAA@AEBVRecipeIngredient@@@Z
     */
    MCAPI ItemStackBase(class RecipeIngredient const &);
    /**
     * @hash   -292082653
     * @symbol ??0ItemStackBase@@IEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemStackBase(class Item const &, int, int, class CompoundTag const *);
    /**
     * @hash   -1841767265
     * @symbol ??0ItemStackBase@@IEAA@AEBVBlockLegacy@@H@Z
     */
    MCAPI ItemStackBase(class BlockLegacy const &, int);
    /**
     * @hash   -2036211488
     * @symbol ??0ItemStackBase@@IEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     */
    MCAPI ItemStackBase(class Block const &, int, class CompoundTag const *);
    /**
     * @hash   -1249412352
     * @symbol ??0ItemStackBase@@IEAA@AEBV0@@Z
     */
    MCAPI ItemStackBase(class ItemStackBase const &);
    /**
     * @hash   -1508372316
     * @symbol ?_getHoverFormattingPrefix@ItemStackBase@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string _getHoverFormattingPrefix() const;
    /**
     * @hash   -790170894
     * @symbol ?_setItem@ItemStackBase@@IEAA_NH_N@Z
     */
    MCAPI bool _setItem(int, bool);
    /**
     * @hash   -534630183
     * @symbol ?init@ItemStackBase@@IEAAXAEBVBlockLegacy@@H@Z
     */
    MCAPI void init(class BlockLegacy const &, int);
    /**
     * @hash   -2044127801
     * @symbol ?init@ItemStackBase@@IEAAXAEBVItem@@HHPEBVCompoundTag@@_N@Z
     */
    MCAPI void init(class Item const &, int, int, class CompoundTag const *, bool);
    /**
     * @hash   -306338030
     * @symbol ?init@ItemStackBase@@IEAAXHHH_N@Z
     */
    MCAPI void init(int, int, int, bool);
    /**
     * @hash   2057895732
     * @symbol ??4ItemStackBase@@IEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ItemStackBase & operator=(class ItemStackBase const &);

//private:
    /**
     * @hash   -1697178281
     * @symbol ?_addCustomUserDataCommon@ItemStackBase@@AEAAX$$QEAV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
     */
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag> &&);
    /**
     * @hash   1878863479
     * @symbol ?_checkForItemWorldCompatibility@ItemStackBase@@AEAAXXZ
     */
    MCAPI void _checkForItemWorldCompatibility();
    /**
     * @hash   -107637719
     * @symbol ?_cloneComponents@ItemStackBase@@AEAAXAEBV1@@Z
     */
    MCAPI void _cloneComponents(class ItemStackBase const &);
    /**
     * @hash   -174282356
     * @symbol ?_isInstance@ItemStackBase@@AEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI bool _isInstance(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -865475463
     * @symbol ?_loadComponents@ItemStackBase@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _loadComponents(class CompoundTag const &);
    /**
     * @hash   670957740
     * @symbol ?_loadItem@ItemStackBase@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _loadItem(class CompoundTag const &);
    /**
     * @hash   -391678357
     * @symbol ?_setChargedItem@ItemStackBase@@AEAAXAEBVItemInstance@@@Z
     */
    MCAPI void _setChargedItem(class ItemInstance const &);
    /**
     * @hash   880058143
     * @symbol ?_updateCompareHashes@ItemStackBase@@AEAAXXZ
     */
    MCAPI void _updateCompareHashes();

protected:
    /**
     * @hash   -1483672764
     * @symbol ?TAG_CHARGED_ITEM@ItemStackBase@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_CHARGED_ITEM;
    /**
     * @hash   -709156155
     * @symbol ?TAG_STORE_CAN_DESTROY@ItemStackBase@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_STORE_CAN_DESTROY;
    /**
     * @hash   559051590
     * @symbol ?TAG_STORE_CAN_PLACE_ON@ItemStackBase@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;

private:
    /**
     * @hash   100611237
     * @symbol ?MAX_STACK_SIZE@ItemStackBase@@0HB
     */
    MCAPI static int const MAX_STACK_SIZE;

};