#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/enums/ArmorSlot.h"
#include "mc/enums/UseAnimation.h"

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
        bool mCompareAux;
        bool mCompareRelevantUserData;
    };

    WeakPtr<class Item>                   mItem;           // this+0x8
    std::unique_ptr<class CompoundTag>    mUserData;       // this+0x10
    class Block const*                    mBlock;          // this+0x18
    short                                 mAuxValue;       // this+0x20
    uchar                                 mCount;          // this+0x22
    bool                                  mValid;          // this+0x23
    std::chrono::steady_clock::time_point mPickupTime;     // this+0x28
    bool                                  mShowPickUp;     // this+0x30
    bool                                  mWasPickedUp;    // this+0x31
    std::vector<class BlockLegacy const*> mCanPlaceOn;     // this+0x38
    uint64                                mCanPlaceOnHash; // this+0x50
    std::vector<class BlockLegacy const*> mCanDestroy;     // this+0x58
    uint64                                mCanDestroyHash; // this+0x70
    Tick                                  mBlockingTick;   // this+0x78
    std::unique_ptr<class ItemInstance>   mChargedItem;    // this+0x80

    LLNDAPI std::string getTypeName() const;
    LLNDAPI std::string getDescriptionName() const;

    // we recommend using isValid instead of using isNull directly.
    [[nodiscard]] inline bool isValid() const { return mValid && mItem && !isNull() && mCount > 0; }

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ItemStackBase@@UEAA@XZ
    virtual ~ItemStackBase();

    // vIndex: 1, symbol: ?reinit@ItemStackBase@@UEAAXAEBVItem@@HH@Z
    virtual void reinit(class Item const&, int, int);

    // vIndex: 2, symbol: ?reinit@ItemStackBase@@UEAAXAEBVBlockLegacy@@H@Z
    virtual void reinit(class BlockLegacy const&, int);

    // vIndex: 3, symbol: ?reinit@ItemStackBase@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@HH@Z
    virtual void reinit(std::string_view, int, int);

    // vIndex: 4, symbol:
    // ?setNull@ItemStackBase@@UEAAXV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    virtual void setNull(std::optional<std::string>);

    // vIndex: 5, symbol:
    // ?toString@ItemStackBase@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toString() const;

    // vIndex: 6, symbol:
    // ?toDebugString@ItemStackBase@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string toDebugString() const;

    // symbol: ?add@ItemStackBase@@QEAAXH@Z
    MCAPI void add(int inCount); // same as set(mCount + inCount)

    // symbol:
    // ?addComponents@ItemStackBase@@QEAA_NAEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool addComponents(class Json::Value const&, std::string&);

    // symbol: ?addCustomUserData@ItemStackBase@@QEAAXAEAVContainerComponent@@@Z
    MCAPI void addCustomUserData(class ContainerComponent&);

    // symbol: ?addCustomUserData@ItemStackBase@@QEAAXAEAVBlockActor@@AEAVBlockSource@@@Z
    MCAPI void addCustomUserData(class BlockActor&, class BlockSource&);

    // symbol: ?canBeCharged@ItemStackBase@@QEBA_NXZ
    MCAPI bool canBeCharged() const;

    // symbol: ?canDestroy@ItemStackBase@@QEBA_NPEBVBlock@@@Z
    MCAPI bool canDestroy(class Block const*) const;

    // symbol: ?canDestroySpecial@ItemStackBase@@QEBA_NAEBVBlock@@@Z
    MCAPI bool canDestroySpecial(class Block const&) const;

    // symbol: ?canPlaceOn@ItemStackBase@@QEBA_NPEBVBlock@@@Z
    MCAPI bool canPlaceOn(class Block const*) const;

    // symbol: ?clearChargedItem@ItemStackBase@@QEAAXXZ
    MCAPI void clearChargedItem();

    // symbol: ?clearCustomLore@ItemStackBase@@QEAAXXZ
    MCAPI void clearCustomLore();

    // symbol: ?componentsMatch@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool componentsMatch(class ItemStackBase const&) const;

    // symbol: ?constructItemEnchantsFromUserData@ItemStackBase@@QEBA?AVItemEnchants@@XZ
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;

    // symbol: ?deserializeComponents@ItemStackBase@@QEAAXAEAVIDataInput@@@Z
    MCAPI void deserializeComponents(class IDataInput&);

    // symbol:
    // ?executeEvent@ItemStackBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    MCAPI void executeEvent(std::string const&, class RenderParams&);

    // symbol: ?getArmorSlot@ItemStackBase@@QEBA?AW4ArmorSlot@@XZ
    MCAPI ::ArmorSlot getArmorSlot() const;

    // symbol: ?getAttackDamage@ItemStackBase@@QEBAHXZ
    MCAPI int getAttackDamage() const;

    // symbol: ?getAuxValue@ItemStackBase@@QEBAFXZ
    MCAPI short getAuxValue() const;

    // symbol: ?getBaseRepairCost@ItemStackBase@@QEBAHXZ
    MCAPI int getBaseRepairCost() const;

    // symbol: ?getBlock@ItemStackBase@@QEBAPEBVBlock@@XZ
    MCAPI class Block const* getBlock() const;

    // symbol: ?getBlockingTick@ItemStackBase@@QEBAAEBUTick@@XZ
    MCAPI struct Tick const& getBlockingTick() const;

    // symbol:
    // ?getCanDestroy@ItemStackBase@@QEBAAEBV?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@XZ
    MCAPI std::vector<class BlockLegacy const*> const& getCanDestroy() const;

    // symbol:
    // ?getCanPlaceOn@ItemStackBase@@QEBAAEBV?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@XZ
    MCAPI std::vector<class BlockLegacy const*> const& getCanPlaceOn() const;

    // symbol: ?getCategoryName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCategoryName() const;

    // symbol: ?getChargedItem@ItemStackBase@@QEBAAEBVItemInstance@@XZ
    MCAPI class ItemInstance const& getChargedItem() const;

    // symbol: ?getColor@ItemStackBase@@QEBA?AVColor@mce@@XZ
    MCAPI class mce::Color getColor() const;

    // symbol: ?getComponent@ItemStackBase@@QEBAPEBVItemComponent@@AEBVHashedString@@@Z
    MCAPI class ItemComponent const* getComponent(class HashedString const&) const;

    // symbol: ?getComponentItem@ItemStackBase@@QEBAPEBVComponentItem@@XZ
    MCAPI class ComponentItem const* getComponentItem() const;

    // symbol:
    // ?getCustomLore@ItemStackBase@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getCustomLore() const;

    // symbol: ?getCustomName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCustomName() const;

    // symbol: ?getDamageValue@ItemStackBase@@QEBAFXZ
    MCAPI short getDamageValue() const;

    // symbol: ?getDescriptionId@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getDescriptionId() const;

    // symbol: ?getDescriptor@ItemStackBase@@QEBA?AVItemDescriptor@@XZ
    MCAPI class ItemDescriptor getDescriptor() const;

    // symbol: ?getEffectName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getEffectName() const;

    // symbol: ?getEnchantSlot@ItemStackBase@@QEBAHXZ
    MCAPI int getEnchantSlot() const;

    // symbol: ?getEnchantValue@ItemStackBase@@QEBAHXZ
    MCAPI int getEnchantValue() const;

    // symbol: ?getFullNameHash@ItemStackBase@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getFullNameHash() const;

    // symbol: ?getHoverName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getHoverName() const;

    // symbol: ?getId@ItemStackBase@@QEBAFXZ
    MCAPI short getId() const;

    // symbol: ?getIdAux@ItemStackBase@@QEBAHXZ
    MCAPI int getIdAux() const;

    // symbol: ?getItem@ItemStackBase@@QEBAPEBVItem@@XZ
    MCAPI class Item const* getItem() const;

    // symbol: ?getLegacyBlock@ItemStackBase@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;

    // symbol: ?getMaxDamage@ItemStackBase@@QEBAFXZ
    MCAPI short getMaxDamage() const;

    // symbol: ?getMaxStackSize@ItemStackBase@@QEBAEXZ
    MCAPI uchar getMaxStackSize() const;

    // symbol: ?getName@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getName() const;

    // symbol:
    // ?getNetworkUserData@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;

    // symbol: ?getRawNameHash@ItemStackBase@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getRawNameHash() const;

    // symbol: ?getRawNameId@ItemStackBase@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getRawNameId() const;

    // symbol: ?getRequiredBaseGameVersion@ItemStackBase@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol: ?getUseAnimation@ItemStackBase@@QEBA?AW4UseAnimation@@XZ
    MCAPI ::UseAnimation getUseAnimation() const;

    // symbol: ?getUserData@ItemStackBase@@QEAAPEAVCompoundTag@@XZ
    MCAPI class CompoundTag* getUserData();

    // symbol: ?getUserData@ItemStackBase@@QEBAPEBVCompoundTag@@XZ
    MCAPI class CompoundTag const* getUserData() const;

    // symbol: ?getWasPickedUp@ItemStackBase@@QEBA_NXZ
    MCAPI bool getWasPickedUp() const;

    // symbol: ?hasChargedItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool hasChargedItem() const;

    // symbol: ?hasContainerData@ItemStackBase@@QEBA_NXZ
    MCAPI bool hasContainerData() const;

    // symbol: ?hasCustomHoverName@ItemStackBase@@QEBA_NXZ
    MCAPI bool hasCustomHoverName() const;

    // symbol: ?hasDamageValue@ItemStackBase@@QEBA_NXZ
    MCAPI bool hasDamageValue() const;

    // symbol: ?hasSameAuxValue@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool hasSameAuxValue(class ItemStackBase const&) const;

    // symbol: ?hasSameUserData@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool hasSameUserData(class ItemStackBase const&) const;

    // symbol: ?hasTag@ItemStackBase@@QEBA_NAEBUItemTag@@@Z
    MCAPI bool hasTag(struct ItemTag const&) const;

    // symbol: ?hasTag@ItemStackBase@@QEBA_NAEB_K@Z
    MCAPI bool hasTag(uint64 const&) const;

    // symbol: ?hasUserData@ItemStackBase@@QEBA_NXZ
    MCAPI bool hasUserData() const;

    // symbol: ?hurtAndBreak@ItemStackBase@@QEAA_NHPEAVActor@@@Z
    MCAPI bool hurtAndBreak(int, class Actor*);

    // symbol: ?initParams@ItemStackBase@@QEAAXAEAVRenderParams@@PEAVActor@@@Z
    MCAPI void initParams(class RenderParams&, class Actor*);

    // symbol: ?isArmorItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isArmorItem() const;

    // symbol: ?isBlock@ItemStackBase@@QEBA_NXZ
    MCAPI bool isBlock() const;

    // symbol: ?isBlockInstance@ItemStackBase@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool isBlockInstance(class HashedString const&) const;

    // symbol: ?isDamageableItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isDamageableItem() const;

    // symbol: ?isDamaged@ItemStackBase@@QEBA_NXZ
    MCAPI bool isDamaged() const;

    // symbol: ?isEnchanted@ItemStackBase@@QEBA_NXZ
    MCAPI bool isEnchanted() const;

    // symbol: ?isEnchantingBook@ItemStackBase@@QEBA_NXZ
    MCAPI bool isEnchantingBook() const;

    // symbol: ?isExplodable@ItemStackBase@@QEBA_NXZ
    MCAPI bool isExplodable() const;

    // symbol: ?isFireResistant@ItemStackBase@@QEBA_NXZ
    MCAPI bool isFireResistant() const;

    // symbol: ?isFullStack@ItemStackBase@@QEBA_NXZ
    MCAPI bool isFullStack() const;

    // symbol: ?isGlint@ItemStackBase@@QEBA_NXZ
    MCAPI bool isGlint() const;

    // symbol: ?isHorseArmorItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isHorseArmorItem() const;

    // symbol: ?isInstance@ItemStackBase@@QEBA_NAEBVHashedString@@_N@Z
    MCAPI bool isInstance(class HashedString const&, bool) const;

    // symbol: ?isItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isItem() const;

    // symbol: ?isLiquidClipItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isLiquidClipItem() const;

    // symbol: ?isMusicDiscItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isMusicDiscItem() const;

    // symbol: ?isNull@ItemStackBase@@QEBA_NXZ
    MCAPI bool isNull() const;

    // symbol: ?isOffhandItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isOffhandItem() const;

    // symbol: ?isOneOfBlockInstances@ItemStackBase@@QEBA_NV?$initializer_list@$$CBVHashedString@@@std@@@Z
    MCAPI bool isOneOfBlockInstances(std::initializer_list<class HashedString const>) const;

    // symbol:
    // ?isOneOfBlockInstances@ItemStackBase@@QEBA_NAEBV?$vector@V?$reference_wrapper@$$CBVHashedString@@@std@@V?$allocator@V?$reference_wrapper@$$CBVHashedString@@@std@@@2@@std@@@Z
    MCAPI bool isOneOfBlockInstances(std::vector<std::reference_wrapper<class HashedString const>> const&) const;

    // symbol: ?isOneOfInstances@ItemStackBase@@QEBA_NV?$initializer_list@$$CBVHashedString@@@std@@_N@Z
    MCAPI bool isOneOfInstances(std::initializer_list<class HashedString const>, bool) const;

    // symbol: ?isPattern@ItemStackBase@@QEBA_NXZ
    MCAPI bool isPattern() const;

    // symbol: ?isPotionItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isPotionItem() const;

    // symbol: ?isStackable@ItemStackBase@@QEBA_NXZ
    MCAPI bool isStackable() const;

    // symbol: ?isStackable@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool isStackable(class ItemStackBase const& with) const;

    // symbol: ?isStackedByData@ItemStackBase@@QEBA_NXZ
    MCAPI bool isStackedByData() const;

    // symbol: ?isValidAuxValue@ItemStackBase@@QEBA_NH@Z
    MCAPI bool isValidAuxValue(int) const;

    // symbol: ?isWearableItem@ItemStackBase@@QEBA_NXZ
    MCAPI bool isWearableItem() const;

    // symbol: ?load@ItemStackBase@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void load(class CompoundTag const&);

    // symbol: ?load@ItemStackBase@@QEAAXAEBVCompoundTag@@AEAVLevel@@@Z
    MCAPI void load(class CompoundTag const&, class Level&);

    // symbol: ?matches@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool matches(class ItemStackBase const&) const;

    // symbol: ?matchesEitherWearableCase@ItemStackBase@@QEBA_NPEBVCompoundTag@@@Z
    MCAPI bool matchesEitherWearableCase(class CompoundTag const*) const;

    // symbol: ?matchesItem@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool matchesItem(class ItemStackBase const&) const;

    // symbol: ??BItemStackBase@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ??9ItemStackBase@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class ItemStackBase const&) const;

    // symbol: ??8ItemStackBase@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class ItemStackBase const&) const;

    // symbol: ?refreshedInContainer@ItemStackBase@@QEBAXAEAVLevel@@@Z
    MCAPI void refreshedInContainer(class Level&) const;

    // symbol: ?remove@ItemStackBase@@QEAAXH@Z
    MCAPI void remove(int inCount); // same as set(mCount - inCount)

    // symbol: ?removeDamageValue@ItemStackBase@@QEAAXXZ
    MCAPI void removeDamageValue();

    // symbol: ?removeEnchants@ItemStackBase@@QEAAXXZ
    MCAPI void removeEnchants();

    // symbol: ?resetHoverName@ItemStackBase@@QEAAXXZ
    MCAPI void resetHoverName();

    // symbol: ?sameItem@ItemStackBase@@QEBA_NAEBV1@AEBUComparisonOptions@1@@Z
    MCAPI bool sameItem(class ItemStackBase const&, struct ItemStackBase::ComparisonOptions const&) const;

    // symbol: ?sameItem@ItemStackBase@@QEBA_NHH@Z
    MCAPI bool sameItem(int, int) const;

    // symbol: ?sameItemAndAux@ItemStackBase@@QEBA_NAEBV1@@Z
    MCAPI bool sameItemAndAux(class ItemStackBase const&) const;

    // symbol: ?save@ItemStackBase@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // symbol: ?saveEnchantsToUserData@ItemStackBase@@QEAAXAEBVItemEnchants@@@Z
    MCAPI void saveEnchantsToUserData(class ItemEnchants const&);

    // symbol:
    // ?sendEventTriggered@ItemStackBase@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVRenderParams@@@Z
    MCAPI bool sendEventTriggered(std::string const&, class RenderParams const&);

    // symbol: ?serializeComponents@ItemStackBase@@QEBAXAEAVIDataOutput@@@Z
    MCAPI void serializeComponents(class IDataOutput&) const;

    // symbol: ?set@ItemStackBase@@QEAAXH@Z
    MCAPI void set(int inCount);

    // symbol: ?setAuxValue@ItemStackBase@@QEAAXF@Z
    MCAPI void setAuxValue(short);

    // symbol: ?setBlock@ItemStackBase@@QEAAXPEBVBlock@@@Z
    MCAPI void setBlock(class Block const*);

    // symbol:
    // ?setCanDestroy@ItemStackBase@@QEAA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI bool setCanDestroy(std::vector<std::string> const&);

    // symbol:
    // ?setCanPlaceOn@ItemStackBase@@QEAA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI bool setCanPlaceOn(std::vector<std::string> const&);

    // symbol: ?setChargedItem@ItemStackBase@@QEAAXAEBVItemInstance@@_N@Z
    MCAPI void setChargedItem(class ItemInstance const&, bool);

    // symbol:
    // ?setCustomLore@ItemStackBase@@QEAAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI void setCustomLore(std::vector<std::string> const&);

    // symbol: ?setCustomName@ItemStackBase@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setCustomName(std::string const&);

    // symbol: ?setDamageValue@ItemStackBase@@QEAAXF@Z
    MCAPI void setDamageValue(short);

    // symbol: ?setJustBrewed@ItemStackBase@@QEAAX_N@Z
    MCAPI void setJustBrewed(bool);

    // symbol: ?setPickupTime@ItemStackBase@@QEAAXXZ
    MCAPI void setPickupTime();

    // symbol: ?setRepairCost@ItemStackBase@@QEAAXH@Z
    MCAPI void setRepairCost(int);

    // symbol: ?setShowPickUp@ItemStackBase@@QEAAX_N@Z
    MCAPI void setShowPickUp(bool);

    // symbol: ?setStackSize@ItemStackBase@@QEAAXE@Z
    MCAPI void setStackSize(uchar);

    // symbol:
    // ?setUserData@ItemStackBase@@QEAAXV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);

    // symbol: ?setWasPickedUp@ItemStackBase@@QEAAX_N@Z
    MCAPI void setWasPickedUp(bool);

    // symbol: ?shouldInteractionWithBlockBypassLiquid@ItemStackBase@@QEBA_NAEBVBlock@@@Z
    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;

    // symbol: ?shouldVanish@ItemStackBase@@QEBA_NXZ
    MCAPI bool shouldVanish() const;

    // symbol: ?startCoolDown@ItemStackBase@@QEBAXPEAVPlayer@@@Z
    MCAPI void startCoolDown(class Player*) const;

    // symbol:
    // ?updateComponent@ItemStackBase@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI bool updateComponent(std::string const&, class Json::Value const&);

    // symbol: ?COMPARISONOPTIONS_RELEVANTUSERDATA@ItemStackBase@@2UComparisonOptions@1@B
    MCAPI static struct ItemStackBase::ComparisonOptions const COMPARISONOPTIONS_RELEVANTUSERDATA;

    // symbol: ?TAG_CAN_DESTROY@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_CAN_DESTROY;

    // symbol: ?TAG_CAN_PLACE_ON@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_CAN_PLACE_ON;

    // symbol: ?TAG_DISPLAY@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_DISPLAY;

    // symbol: ?TAG_DISPLAY_NAME@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_DISPLAY_NAME;

    // symbol: ?TAG_ENCHANTS@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_ENCHANTS;

    // symbol: ?TAG_LORE@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_LORE;

    // symbol: ?TAG_REPAIR_COST@ItemStackBase@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_REPAIR_COST;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ItemStackBase@@IEAA@XZ
    MCAPI ItemStackBase();

    // symbol: ??0ItemStackBase@@IEAA@AEBV0@@Z
    MCAPI ItemStackBase(class ItemStackBase const&);

    // symbol: ??0ItemStackBase@@IEAA@AEBVRecipeIngredient@@@Z
    MCAPI explicit ItemStackBase(class RecipeIngredient const&);

    // symbol: ??0ItemStackBase@@IEAA@AEBVBlockLegacy@@H@Z
    MCAPI ItemStackBase(class BlockLegacy const& blockLegacy, int count = 1);

    // symbol: ??0ItemStackBase@@IEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
    MCAPI ItemStackBase(class Block const& block, int count = 1, class CompoundTag const* userData = nullptr);

    // symbol: ??0ItemStackBase@@IEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
    MCAPI
    ItemStackBase(class Item const& item, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    // symbol: ??0ItemStackBase@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@HHPEBVCompoundTag@@@Z
    MCAPI
    ItemStackBase(std::string_view name, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    // symbol:
    // ?_getHoverFormattingPrefix@ItemStackBase@@IEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _getHoverFormattingPrefix() const;

    // symbol: ?_setItem@ItemStackBase@@IEAA_NH_N@Z
    MCAPI bool _setItem(int, bool);

    // symbol: ?init@ItemStackBase@@IEAAXAEBVBlockLegacy@@H@Z
    MCAPI void init(class BlockLegacy const&, int);

    // symbol: ?init@ItemStackBase@@IEAAXHHH_N@Z
    MCAPI void init(int, int, int, bool);

    // symbol: ?init@ItemStackBase@@IEAAXAEBVItem@@HHPEBVCompoundTag@@_N@Z
    MCAPI void init(class Item const&, int, int, class CompoundTag const*, bool);

    // symbol: ??4ItemStackBase@@IEAAAEAV0@AEBV0@@Z
    MCAPI class ItemStackBase& operator=(class ItemStackBase const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addCustomUserDataCommon@ItemStackBase@@AEAAX$$QEAV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@@Z
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag>&&);

    // symbol: ?_checkForItemWorldCompatibility@ItemStackBase@@AEAAXXZ
    MCAPI void _checkForItemWorldCompatibility();

    // symbol: ?_cloneComponents@ItemStackBase@@AEAAXAEBV1@@Z
    MCAPI void _cloneComponents(class ItemStackBase const&);

    // symbol: ?_loadItem@ItemStackBase@@AEAAXAEBVCompoundTag@@@Z
    MCAPI void _loadItem(class CompoundTag const&);

    // symbol:
    // ?_setBlockList@ItemStackBase@@AEAA_NAEAV?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
    MCAPI bool _setBlockList(std::vector<class BlockLegacy const*>&, std::vector<std::string> const&);

    // symbol: ?_setChargedItem@ItemStackBase@@AEAAXAEBVItemInstance@@@Z
    MCAPI void _setChargedItem(class ItemInstance const&);

    // symbol: ?_updateCompareHashes@ItemStackBase@@AEAAXXZ
    MCAPI void _updateCompareHashes();

    // symbol:
    // ?_loadBlocksForCanPlaceOnCanDestroy@ItemStackBase@@CA_NAEAV?$vector@PEBVBlockLegacy@@V?$allocator@PEBVBlockLegacy@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static bool _loadBlocksForCanPlaceOnCanDestroy(std::vector<class BlockLegacy const*>&, std::string const&);

    // NOLINTEND

protected:
    // NOLINTBEGIN
    // symbol: ?TAG_CHARGED_ITEM@ItemStackBase@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_CHARGED_ITEM;

    // symbol: ?TAG_STORE_CAN_DESTROY@ItemStackBase@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_STORE_CAN_DESTROY;

    // symbol: ?TAG_STORE_CAN_PLACE_ON@ItemStackBase@@1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_STACK_SIZE@ItemStackBase@@0HB
    MCAPI static int const MAX_STACK_SIZE;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MAX_STACK_SIZE() { return MAX_STACK_SIZE; }

    static auto& $TAG_CHARGED_ITEM() { return TAG_CHARGED_ITEM; }

    static auto& $TAG_STORE_CAN_DESTROY() { return TAG_STORE_CAN_DESTROY; }

    static auto& $TAG_STORE_CAN_PLACE_ON() { return TAG_STORE_CAN_PLACE_ON; }

    // NOLINTEND
};
