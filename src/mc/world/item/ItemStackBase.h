#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/deps/puv/UseAnimation.h"
#include "mc/enums/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
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
    // vIndex: 0
    virtual ~ItemStackBase();

    // vIndex: 1
    virtual void reinit(class Item const& item, int count, int auxValue);

    // vIndex: 2
    virtual void reinit(class BlockLegacy const& block, int count);

    // vIndex: 3
    virtual void reinit(std::string_view name, int count, int auxValue);

    // vIndex: 4
    virtual void setNull(std::optional<std::string> reason);

    // vIndex: 5
    virtual std::string toString() const;

    // vIndex: 6
    virtual std::string toDebugString() const;

    MCAPI void add(int inCount); // same as set(mCount + inCount)

    MCAPI bool addComponents(class Json::Value const& root, std::string& errorMsg);

    MCAPI void addCustomUserData(class ContainerComponent const& containerComponent);

    MCAPI void addCustomUserData(class BlockActor& blockEntity, class BlockSource& region);

    MCAPI bool canBeCharged() const;

    MCAPI bool canDestroy(class Block const* block) const;

    MCAPI bool canDestroySpecial(class Block const& block) const;

    MCAPI bool canPlaceOn(class Block const* block) const;

    MCAPI bool clearAllDynamicProperties(std::string const&);

    MCAPI void clearChargedItem();

    MCAPI void clearCustomLore();

    MCAPI bool componentsMatch(class ItemStackBase const& other) const;

    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;

    MCAPI void deserializeComponents(class IDataInput& input);

    MCAPI ::ArmorSlot getArmorSlot() const;

    MCAPI int getAttackDamage() const;

    MCAPI short getAuxValue() const;

    MCAPI int getBaseRepairCost() const;

    MCAPI class Block const* getBlock() const;

    MCAPI struct Tick const& getBlockingTick() const;

    MCAPI std::vector<class BlockLegacy const*> const& getCanDestroy() const;

    MCAPI std::vector<class BlockLegacy const*> const& getCanPlaceOn() const;

    MCAPI std::string getCategoryName() const;

    MCAPI class ItemInstance const& getChargedItem() const;

    MCAPI class mce::Color getColor() const;

    MCAPI class ItemComponent const* getComponent(class HashedString const& id) const;

    MCAPI class ComponentItem const* getComponentItem() const;

    MCAPI std::vector<std::string> getCustomLore() const;

    MCAPI std::string getCustomName() const;

    MCAPI short getDamageValue() const;

    MCAPI std::string getDescriptionId() const;

    MCAPI class ItemDescriptor getDescriptor() const;

    MCAPI std::unique_ptr<class DynamicProperties> getDynamicProperties(struct cereal::ReflectionCtx const&) const;

    MCAPI std::optional<std::variant<double, float, bool, std::string, class Vec3>>
          getDynamicProperty(std::string const&, std::string const&, struct cereal::ReflectionCtx const&) const;

    MCAPI std::string getEffectName() const;

    MCAPI int getEnchantSlot() const;

    MCAPI int getEnchantValue() const;

    MCAPI class HashedString const& getFullNameHash() const;

    MCAPI std::string getHoverName() const;

    MCAPI short getId() const;

    MCAPI int getIdAux() const;

    MCAPI class Item const* getItem() const;

    MCAPI class WeakPtr<class BlockLegacy const> const& getLegacyBlock() const;

    MCAPI short getMaxDamage() const;

    MCAPI uchar getMaxStackSize() const;

    MCAPI std::string getName() const;

    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;

    MCAPI class HashedString const& getRawNameHash() const;

    MCAPI std::string getRawNameId() const;

    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI ::Puv::Legacy::UseAnimation getUseAnimation() const;

    MCAPI class CompoundTag* getUserData();

    MCAPI class CompoundTag const* getUserData() const;

    MCAPI bool getWasPickedUp() const;

    MCAPI bool hasChargedItem() const;

    MCAPI bool hasCompoundTextUserData() const;

    MCAPI bool hasContainerData() const;

    MCAPI bool hasCustomHoverName() const;

    MCAPI bool hasDamageValue() const;

    MCAPI bool hasSameAuxValue(class ItemStackBase const& other) const;

    MCAPI bool hasSameUserData(class ItemStackBase const& other) const;

    MCAPI bool hasTag(struct ItemTag const& string) const;

    MCAPI bool hasTag(uint64 const& hash) const;

    MCAPI bool hasUserData() const;

    MCAPI bool hurtAndBreak(int deltaDamage, class Actor* owner);

    MCAPI bool isArmorItem() const;

    MCAPI bool isBlock() const;

    MCAPI bool isBlockInstance(class HashedString const& blockName) const;

    MCAPI bool isCoolableItem() const;

    MCAPI bool isDamageableItem() const;

    MCAPI bool isDamaged() const;

    MCAPI bool isEnchanted() const;

    MCAPI bool isEnchantingBook() const;

    MCAPI bool isExplodable() const;

    MCAPI bool isFireResistant() const;

    MCAPI bool isFullStack() const;

    MCAPI bool isGlint() const;

    MCAPI bool isHorseArmorItem() const;

    MCAPI bool isHumanoidArmorItem() const;

    MCAPI bool isHumanoidWearableBlockItem() const;

    MCAPI bool isHumanoidWearableItem() const;

    MCAPI bool isInstance(class HashedString const& itemName, bool useItemLookup) const;

    MCAPI bool isItem() const;

    MCAPI bool isLiquidClipItem() const;

    MCAPI bool isMusicDiscItem() const;

    MCAPI bool isNull() const;

    MCAPI bool isOffhandItem() const;

    MCAPI bool isOneOfBlockInstances(std::initializer_list<std::reference_wrapper<class HashedString const>>) const;

    MCAPI bool isOneOfBlockInstances(std::vector<std::reference_wrapper<class HashedString const>> const&) const;

    MCAPI bool isOneOfInstances(std::initializer_list<std::reference_wrapper<class HashedString const>>, bool) const;

    MCAPI bool isPattern() const;

    MCAPI bool isPotionItem() const;

    MCAPI bool isStackable() const;

    MCAPI bool isStackable(class ItemStackBase const& with) const;

    MCAPI bool isStackedByData() const;

    MCAPI bool isValidAuxValue(int value) const;

    MCAPI void load(class CompoundTag const& compoundTag);

    MCAPI void load(class CompoundTag const& compoundTag, class Level& level);

    MCAPI bool matches(class ItemStackBase const& other) const;

    MCAPI bool matchesEitherWearableCase(class CompoundTag const* userData) const;

    MCAPI bool matchesItem(class ItemStackBase const& other) const;

    MCAPI explicit operator bool() const;

    MCAPI bool operator!=(class ItemStackBase const& rhs) const;

    MCAPI bool operator==(class ItemStackBase const& rhs) const;

    MCAPI void refreshedInContainer(class Level& level) const;

    MCAPI void remove(int inCount); // same as set(mCount - inCount)

    MCAPI void removeDamageValue();

    MCAPI bool removeDynamicProperty(std::string const&, std::string const&);

    MCAPI void removeEnchants();

    MCAPI void resetHoverName();

    MCAPI bool sameItem(class ItemStackBase const& other, struct ItemStackBase::ComparisonOptions const& options) const;

    MCAPI bool sameItem(int, int) const;

    MCAPI bool sameItemAndAux(class ItemStackBase const& other) const;

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI void saveEnchantsToUserData(class ItemEnchants const& enchant);

    MCAPI bool sendEventTriggered(std::string const& event, class RenderParams const& params);

    MCAPI void serializeComponents(class IDataOutput& output) const;

    MCAPI void set(int inCount);

    MCAPI void setAuxValue(short value);

    MCAPI void setBlock(class Block const* block);

    MCAPI void setBlockingTick(struct Tick blockingTick);

    MCAPI bool setCanDestroy(std::vector<std::string> const&);

    MCAPI bool setCanPlaceOn(std::vector<std::string> const&);

    MCAPI void setChargedItem(class ItemInstance const& instance, bool isSwapping);

    MCAPI void setCustomLore(std::vector<std::string> const& lore);

    MCAPI void setCustomName(std::string const& name);

    MCAPI void setDamageValue(short newDamage);

    MCAPI void
    setDynamicProperty(std::string const&, std::variant<double, float, bool, std::string, class Vec3> const&, std::string const&, struct cereal::ReflectionCtx const&);

    MCAPI void setJustBrewed(bool crafted);

    MCAPI void setPickupTime();

    MCAPI void setRepairCost(int cost);

    MCAPI void setShowPickUp(bool show);

    MCAPI void setStackSize(uchar);

    MCAPI void setUserData(std::unique_ptr<class CompoundTag> tag);

    MCAPI void setWasPickedUp(bool);

    MCAPI bool shouldInteractionWithBlockBypassLiquid(class Block const& block) const;

    MCAPI bool shouldVanish() const;

    MCAPI void startCoolDown(class Player* player) const;

    MCAPI bool updateComponent(std::string const& name, class Json::Value const& data);

    MCAPI static bool isValidComponent(std::string const& name);

    MCAPI static struct ItemStackBase::ComparisonOptions const COMPARISONOPTIONS_RELEVANTUSERDATA;

    MCAPI static std::string const TAG_CAN_DESTROY;

    MCAPI static std::string const TAG_CAN_PLACE_ON;

    MCAPI static std::string const TAG_DISPLAY;

    MCAPI static std::string const TAG_DISPLAY_NAME;

    MCAPI static std::string const TAG_ENCHANTS;

    MCAPI static std::string const TAG_LORE;

    MCAPI static std::string const TAG_REPAIR_COST;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ItemStackBase();

    MCAPI ItemStackBase(class ItemStackBase const& rhs);

    MCAPI explicit ItemStackBase(class RecipeIngredient const& ingredient);

    MCAPI ItemStackBase(class BlockLegacy const& blockLegacy, int count = 1);

    MCAPI ItemStackBase(class Block const& block, int count = 1, class CompoundTag const* userData = nullptr);

    MCAPI
    ItemStackBase(class Item const& item, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    MCAPI
    ItemStackBase(std::string_view name, int count = 1, int auxValue = 0, class CompoundTag const* userData = nullptr);

    MCAPI std::string _getHoverFormattingPrefix() const;

    MCAPI void init(class BlockLegacy const& block, int count);

    MCAPI void init(int id, int count_, int aux_, bool doRemap);

    MCAPI void init(class Item const& item, int count, int auxValue, class CompoundTag const* userData, bool doRemap);

    MCAPI class ItemStackBase& operator=(class ItemStackBase const& rhs);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addCustomUserDataCommon(std::unique_ptr<class CompoundTag>&& tag);

    MCAPI void _checkForItemWorldCompatibility();

    MCAPI void _cloneComponents(class ItemStackBase const& other);

    MCAPI void _loadItem(class CompoundTag const& compoundTag);

    MCAPI bool _setBlockList(std::vector<class BlockLegacy const*>& blockList, std::vector<std::string> const&);

    MCAPI void _setChargedItem(class ItemInstance const& item);

    MCAPI bool _setItem(int id, bool doRemap);

    MCAPI void _updateCompareHashes();

    MCAPI static bool
    _loadBlocksForCanPlaceOnCanDestroy(std::vector<class BlockLegacy const*>& blockList, std::string const& blockName);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static std::string const TAG_CHARGED_ITEM;

    MCAPI static std::string const TAG_STORE_CAN_DESTROY;

    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static int const MAX_STACK_SIZE;

    // NOLINTEND
};
