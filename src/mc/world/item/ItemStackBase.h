#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/shared_types/UseAnimation.h"
#include "mc/world/item/ArmorSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockLegacy;
class BlockSource;
class ComponentItem;
class CompoundTag;
class ContainerComponent;
class DynamicProperties;
class HashedString;
class IDataInput;
class IDataOutput;
class Item;
class ItemComponent;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class Level;
class Player;
class RecipeIngredient;
class RenderParams;
class SaveContext;
class Vec3;
struct ItemTag;
struct Tick;
namespace Bedrock::Safety { class RedactableString; }
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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mCompareAux;
        ::ll::TypedStorage<1, 1, bool> mCompareRelevantUserData;
        ::ll::TypedStorage<1, 1, bool> mCompareDamage;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::WeakPtr<::Item>>                       mItem;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>        mUserData;
    ::ll::TypedStorage<8, 8, ::Block const*>                          mBlock;
    ::ll::TypedStorage<2, 2, short>                                   mAuxValue;
    ::ll::TypedStorage<1, 1, uchar>                                   mCount;
    ::ll::TypedStorage<1, 1, bool>                                    mValid_DeprecatedSeeComment;
    ::ll::TypedStorage<1, 1, bool>                                    mShowPickUp;
    ::ll::TypedStorage<1, 1, bool>                                    mWasPickedUp;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mPickupTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockLegacy const*>>    mCanPlaceOn;
    ::ll::TypedStorage<8, 8, uint64>                                  mCanPlaceOnHash;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockLegacy const*>>    mCanDestroy;
    ::ll::TypedStorage<8, 8, uint64>                                  mCanDestroyHash;
    ::ll::TypedStorage<8, 8, ::Tick>                                  mBlockingTick;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemInstance>>       mChargedItem;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackBase();

    // vIndex: 3
    virtual void reinit(::Item const& item, int count, int auxValue);

    // vIndex: 2
    virtual void reinit(::BlockLegacy const& block, int count);

    // vIndex: 1
    virtual void reinit(::std::string_view const name, int count, int auxValue);

    // vIndex: 4
    virtual void setNull(::std::optional<::std::string> reason);

    // vIndex: 5
    virtual ::std::string toString() const;

    // vIndex: 6
    virtual ::std::string toDebugString() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackBase();

    MCAPI explicit ItemStackBase(::RecipeIngredient const& ingredient);

    MCAPI ItemStackBase(::ItemStackBase const& rhs);

    MCAPI ItemStackBase(::BlockLegacy const& block, int count);

    MCAPI ItemStackBase(::Block const& block, int count, ::CompoundTag const* _userData);

    MCAPI ItemStackBase(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);

    MCAPI ItemStackBase(::std::string_view name, int count, int auxValue, ::CompoundTag const* _userData);

    MCAPI void _addCustomUserDataCommon(::std::unique_ptr<::CompoundTag>&& tag);

    MCAPI void _checkForItemWorldCompatibility();

    MCAPI ::std::string _getHoverFormattingPrefix() const;

    MCAPI void _loadItem(::CompoundTag const& compoundTag);

    MCAPI void _saveComponents(::CompoundTag& tag) const;

    MCAPI void _setChargedItem(::ItemInstance const& item);

    MCAPI bool _setItem(int id, bool doRemap);

    MCAPI void _updateCompareHashes();

    MCAPI void add(int inCount);

    MCAPI bool addComponents(::Json::Value const& root, ::std::string& errorMsg);

    MCAPI void addCustomUserData(::ContainerComponent const& containerComponent);

    MCAPI void addCustomUserData(::BlockActor& blockEntity, ::BlockSource& region);

    MCAPI bool canBeCharged() const;

    MCAPI bool canDestroy(::Block const* block) const;

    MCAPI bool canDestroySpecial(::Block const& block) const;

    MCAPI bool canPlaceOn(::Block const* block) const;

    MCAPI bool clearAllDynamicProperties(::std::string const& collection);

    MCAPI void clearChargedItem();

    MCAPI void clearCustomLore();

    MCAPI bool componentsMatch(::ItemStackBase const& other) const;

    MCAPI ::ItemEnchants constructItemEnchantsFromUserData() const;

    MCAPI void deserializeComponents(::IDataInput& input);

    MCAPI ::ArmorSlot getArmorSlot() const;

    MCAPI int getAttackDamage() const;

    MCAPI short getAuxValue() const;

    MCAPI int getBaseRepairCost() const;

    MCAPI ::Block const* getBlock() const;

    MCAPI ::Tick const& getBlockingTick() const;

    MCAPI ::std::vector<::BlockLegacy const*> const& getCanDestroy() const;

    MCAPI ::std::vector<::BlockLegacy const*> const& getCanPlaceOn() const;

    MCAPI ::std::string getCategoryName() const;

    MCAPI ::ItemInstance const& getChargedItem() const;

    MCAPI ::mce::Color getColor() const;

    MCAPI ::ItemComponent const* getComponent(::HashedString const& id) const;

    MCAPI ::ComponentItem const* getComponentItem() const;

    MCAPI ::std::vector<::std::string> getCustomLore() const;

    MCAPI ::std::string getCustomName() const;

    MCAPI short getDamageValue() const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI ::ItemDescriptor getDescriptor() const;

    MCAPI ::std::unique_ptr<::DynamicProperties> getDynamicProperties() const;

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const;

    MCAPI ::std::string getEffectName() const;

    MCAPI int getEnchantSlot() const;

    MCAPI int getEnchantValue() const;

    MCAPI ::HashedString const& getFullNameHash() const;

    MCAPI ::std::string getHoverName() const;

    MCAPI short getId() const;

    MCAPI int getIdAux() const;

    MCAPI ::Item const* getItem() const;

    MCAPI ::WeakPtr<::BlockLegacy const> const& getLegacyBlock() const;

    MCAPI short getMaxDamage() const;

    MCAPI uchar getMaxStackSize() const;

    MCAPI ::std::string getName() const;

    MCAPI ::std::unique_ptr<::CompoundTag> getNetworkUserData() const;

    MCAPI ::HashedString const& getRawNameHash() const;

    MCAPI ::std::string getRawNameId() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactedCustomName() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactedHoverName() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactedName() const;

    MCAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI ::SharedTypes::Legacy::UseAnimation getUseAnimation() const;

    MCAPI ::CompoundTag const* getUserData() const;

    MCAPI ::CompoundTag* getUserData();

    MCAPI bool getWasPickedUp() const;

    MCAPI bool hasChargedItem() const;

    MCAPI bool hasContainerData() const;

    MCAPI bool hasCustomHoverName() const;

    MCAPI bool hasDamageValue() const;

    MCAPI bool hasSameAuxValue(::ItemStackBase const& other) const;

    MCAPI bool hasSameUserData(::ItemStackBase const& other) const;

    MCAPI bool hasTag(uint64 const& hash) const;

    MCAPI bool hasTag(::ItemTag const& string) const;

    MCAPI bool hasUserData() const;

    MCAPI bool hurtAndBreak(int deltaDamage, ::Actor* owner);

    MCAPI void init(::BlockLegacy const& block, int count);

    MCAPI void init(int id, int count_, int aux_, bool doRemap);

    MCAPI void init(::Item const& item, int count, int auxValue, ::CompoundTag const* userData, bool doRemap);

    MCAPI bool isArmorItem() const;

    MCAPI bool isBlock() const;

    MCAPI bool isBlockInstance(::HashedString const& blockName) const;

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

    MCAPI bool isInstance(::HashedString const& itemName, bool useItemLookup) const;

    MCAPI bool isLiquidClipItem() const;

    MCAPI bool isMusicDiscItem() const;

    MCAPI bool isNull() const;

    MCAPI bool isOffhandItem() const;

    MCAPI bool isOneOfBlockInstances(::std::vector<::std::reference_wrapper<::HashedString const>> const& blockTypeIds
    ) const;

    MCAPI bool isOneOfBlockInstances(::std::initializer_list<::std::reference_wrapper<::HashedString const>> blocks
    ) const;

    MCAPI bool isOneOfInstances(
        ::std::initializer_list<::std::reference_wrapper<::HashedString const>> items,
        bool                                                                    useItemLookup
    ) const;

    MCAPI bool isPattern() const;

    MCAPI bool isPotionItem() const;

    MCAPI bool isStackable() const;

    MCAPI bool isStackable(::ItemStackBase const& other) const;

    MCAPI bool isStackedByData() const;

    MCAPI bool isValidAuxValue(int value) const;

    MCAPI void load(::CompoundTag const& compoundTag);

    MCAPI void load(::CompoundTag const& compoundTag, ::Level& level);

    MCAPI bool matches(::ItemStackBase const& other) const;

    MCAPI bool matchesChargedItem(::ItemStackBase const& other) const;

    MCAPI bool matchesEitherWearableCase(::CompoundTag const* userData) const;

    MCAPI bool matchesItem(::ItemStackBase const& other) const;

    MCAPI explicit operator bool() const;

    MCAPI bool operator!=(::ItemStackBase const& rhs) const;

    MCAPI ::ItemStackBase& operator=(::ItemStackBase const& rhs);

    MCAPI bool operator==(::ItemStackBase const& rhs) const;

    MCAPI void refreshedInContainer(::Level& level) const;

    MCAPI void remove(int inCount);

    MCAPI void removeDamageValue();

    MCAPI bool removeDynamicProperty(::std::string const& key, ::std::string const& collectionName);

    MCAPI void removeEnchants();

    MCAPI void resetHoverName();

    MCAPI bool sameItem(::ItemStackBase const& other, ::ItemStackBase::ComparisonOptions const& options) const;

    MCAPI bool sameItemAndAux(::ItemStackBase const& other) const;

    MCAPI ::std::unique_ptr<::CompoundTag> save(::SaveContext const& saveContext) const;

    MCAPI void saveEnchantsToUserData(::ItemEnchants const& enchant);

    MCAPI bool sendEventTriggered(::std::string const& event, ::RenderParams const& params);

    MCAPI void serializeComponents(::IDataOutput& output) const;

    MCAPI void set(int inCount);

    MCAPI void setAuxValue(short value);

    MCAPI void setBlock(::Block const* block);

    MCAPI bool setCanDestroy(::std::vector<::std::string> const& blockIds);

    MCAPI bool setCanPlaceOn(::std::vector<::std::string> const& blockIds);

    MCAPI void setChargedItem(::ItemInstance const& instance, bool isSwapping);

    MCAPI void setCustomLore(::std::vector<::std::string> const& lore);

    MCAPI void setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCAPI void setDamageValue(short newDamage);

    MCAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
    );

    MCAPI void setJustBrewed(bool crafted);

    MCAPI void setPickupTime();

    MCAPI void setRepairCost(int cost);

    MCAPI void setShowPickUp(bool show);

    MCAPI void setUserData(::std::unique_ptr<::CompoundTag> tag);

    MCAPI void setWasPickedUp(bool wasPickedUp);

    MCAPI bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    MCAPI bool shouldVanish() const;

    MCAPI void startCoolDown(::Player* player) const;

    MCAPI bool updateComponent(::std::string const& name, ::Json::Value const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _loadBlocksForCanPlaceOnCanDestroy(::std::vector<::BlockLegacy const*>& blockList, ::std::string const& blockName);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_RELEVANTUSERDATA();

    MCAPI static int const& MAX_STACK_SIZE();

    MCAPI static ::std::string const& TAG_CAN_DESTROY();

    MCAPI static ::std::string const& TAG_CAN_PLACE_ON();

    MCAPI static ::std::string const& TAG_CHARGED_ITEM();

    MCAPI static ::std::string const& TAG_DISPLAY();

    MCAPI static ::std::string const& TAG_DISPLAY_FILTERED_NAME();

    MCAPI static ::std::string const& TAG_DISPLAY_NAME();

    MCAPI static ::std::string const& TAG_ENCHANTS();

    MCAPI static ::std::string const& TAG_LORE();

    MCAPI static ::std::string const& TAG_REPAIR_COST();

    MCAPI static ::std::string const& TAG_STORE_CAN_DESTROY();

    MCAPI static ::std::string const& TAG_STORE_CAN_PLACE_ON();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::RecipeIngredient const& ingredient);

    MCAPI void* $ctor(::ItemStackBase const& rhs);

    MCAPI void* $ctor(::BlockLegacy const& block, int count);

    MCAPI void* $ctor(::Block const& block, int count, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);

    MCAPI void* $ctor(::std::string_view name, int count, int auxValue, ::CompoundTag const* _userData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reinit(::Item const& item, int count, int auxValue);

    MCAPI void $reinit(::BlockLegacy const& block, int count);

    MCAPI void $reinit(::std::string_view const name, int count, int auxValue);

    MCAPI void $setNull(::std::optional<::std::string> reason);

    MCAPI ::std::string $toString() const;

    MCAPI ::std::string $toDebugString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
