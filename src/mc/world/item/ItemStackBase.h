#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Tick.h"

class IDataInput;

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/shared_types/item/ItemCooldownType.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPalette;
class BlockSource;
class BlockType;
class ComponentItem;
class CompoundTag;
class ContainerComponent;
class DynamicProperties;
class HashedString;
class IDataOutput;
class ILevel;
class Item;
class ItemComponent;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class ItemStack;
class Level;
class NetworkItemStackDescriptor;
class Player;
class RecipeIngredient;
class RenderParams;
class SaveContext;
class Vec3;
struct ItemTag;
struct ResolvedItemIconInfo;
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
    LLNDAPI std::string getTypeName() const;
    LLNDAPI std::string getDescriptionName() const;
    LLNDAPI bool        isEnchanted() const;
    LLNDAPI bool        removeEnchants() const;
    LLAPI void          deserializeComponents(IDataInput& input);

public:
    // member variables
    // NOLINTBEGIN
    ::WeakPtr<::Item>                       mItem;
    ::std::unique_ptr<::CompoundTag>        mUserData;
    ::Block const*                          mBlock;
    short                                   mAuxValue;
    uchar                                   mCount;
    bool                                    mValid_DeprecatedSeeComment;
    bool                                    mShowPickUp;
    bool                                    mWasPickedUp;
    ::std::chrono::steady_clock::time_point mPickupTime;
    ::std::vector<::BlockType const*>       mCanPlaceOn;
    uint64                                  mCanPlaceOnHash;
    ::std::vector<::BlockType const*>       mCanDestroy;
    uint64                                  mCanDestroyHash;
    ::Tick                                  mBlockingTick;
    ::std::unique_ptr<::ItemInstance>       mChargedItem;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackBase();

    virtual void reinit(::Item const& item, int count, int auxValue);

    virtual void reinit(::Block const& block, int count);

    virtual void reinit(::std::string_view const name, int count, int auxValue);

    virtual void setNull(::std::optional<::std::string> reason);

    virtual ::std::string toString() const;

    virtual ::std::string toDebugString() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ItemStackBase(::RecipeIngredient const& ingredient);

    MCAPI ItemStackBase(::ItemStackBase const& rhs);

    MCAPI ItemStackBase(::Block const& block, int count = 1, ::CompoundTag const* _userData = nullptr);

    MCAPI ItemStackBase(::Item const& item, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI ItemStackBase(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI void _addCustomUserDataCommon(::std::unique_ptr<::CompoundTag>&& tag);

    MCAPI void _checkForItemWorldCompatibility();

    MCAPI void _cloneComponents(::ItemStackBase const& other);

    MCAPI ::std::string _getHoverFormattingPrefix() const;

#ifdef LL_PLAT_C
    MCAPI bool _hasFullOrPartialTag(::HashedString const& string) const;
#endif

    MCAPI bool _isInstance(::std::string_view itemName) const;

    MCAPI void _loadComponents(::CompoundTag const& compoundTag);

    MCAPI void _loadItem(::CompoundTag const& compoundTag);

    MCAPI void _saveComponents(::CompoundTag& tag) const;

    MCAPI void _setChargedItem(::ItemInstance const& item);

    MCAPI bool _setItem(int id, bool doRemap);

    MCAPI void _setItemFromBlockName(::HashedString const& blockName);

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

    MCAPI bool componentsMatch(::ItemStackBase const&) const;

    MCAPI ::ItemEnchants constructItemEnchantsFromUserData() const;

    MCAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlot() const;

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackCriticalHitSound() const;

    MCAPI int getAttackDamage() const;

    MCAPI float getAttackDamageBonus(::Actor const& attacker) const;

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackHitSound() const;

    MCAPI ::std::optional<::SharedTypes::Legacy::LevelSoundEvent> getAttackMissSound() const;

    MCAPI short getAuxValue() const;

    MCAPI int getBaseRepairCost() const;

    MCFOLD ::Block const* getBlock() const;

#ifdef LL_PLAT_C
    MCAPI ::Block const* getBlockForRendering() const;
#endif

    MCAPI ::WeakPtr<::BlockType const> const& getBlockType() const;

#ifdef LL_PLAT_C
    MCAPI ::WeakPtr<::BlockType const> const& getBlockTypeForRendering() const;
#endif

    MCFOLD ::Tick const& getBlockingTick() const;

    MCFOLD ::std::vector<::BlockType const*> const& getCanDestroy() const;

    MCFOLD ::std::vector<::BlockType const*> const& getCanPlaceOn() const;

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

    MCAPI ::std::string getEffectName(bool playerIsCreative) const;

    MCAPI int getEnchantSlot() const;

    MCAPI int getEnchantValue() const;

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Safety::RedactableString getFormattedHovertext(::Level& level, bool showCategory) const;
#endif

    MCAPI ::HashedString const& getFullNameHash() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getHoverName() const;

    MCAPI ::ResolvedItemIconInfo getIconInfo(int newAnimationFrame, bool inInventoryPane) const;
#endif

    MCAPI short getId() const;

    MCAPI int getIdAux() const;

#ifdef LL_PLAT_C
    MCAPI int getIdAuxEnchanted() const;

    MCAPI bool getIsValidPickupTime() const;
#endif

    MCAPI ::Item const* getItem() const;

    MCAPI short getMaxDamage() const;

    MCAPI uchar getMaxStackSize() const;

    MCAPI ::std::string getName() const;

    MCAPI ::std::unique_ptr<::CompoundTag> getNetworkUserData() const;

#ifdef LL_PLAT_C
    MCAPI float getPickupPopPercentage() const;

    MCFOLD ::std::chrono::steady_clock::time_point getPickupTime() const;
#endif

    MCAPI ::HashedString const& getRawNameHash() const;

    MCAPI ::std::string getRawNameId() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactedCustomName() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactedHoverName() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactedName() const;

#ifdef LL_PLAT_C
    MCAPI ::HashedString const& getRendererId() const;
#endif

    MCAPI ::BaseGameVersion const& getRequiredBaseGameVersion() const;

    MCAPI uint getSwingDuration() const;

    MCAPI ::SharedTypes::Legacy::UseAnimation getUseAnimation() const;

    MCFOLD ::CompoundTag const* getUserData() const;

    MCFOLD ::CompoundTag* getUserData();

    MCFOLD bool getWasPickedUp() const;

    MCAPI bool hasChargedItem() const;

#ifdef LL_PLAT_C
    MCAPI bool hasComponent(::std::string const& name) const;
#endif

    MCAPI bool hasCompoundTextUserData() const;

    MCAPI bool hasContainerData() const;

    MCAPI bool hasCooldown() const;

    MCAPI bool hasCustomHoverName() const;

    MCAPI bool hasDamageValue() const;

    MCAPI bool hasDurability() const;

    MCAPI bool hasSameAuxValue(::ItemStackBase const& other) const;

    MCAPI bool hasSameUserData(::ItemStackBase const& other) const;

    MCAPI bool hasTag(uint64 const& hash) const;

    MCAPI bool hasTag(::ItemTag const& string) const;

    MCFOLD bool hasUserData() const;

    MCAPI bool hurtAndBreak(int deltaDamage, ::Actor* owner);

    MCAPI void init(::BlockType const& block, int count);

    MCAPI void init(::Item const& item, int count, int auxValue, ::CompoundTag const* userData, bool doRemap);

    MCAPI bool isArmorItem() const;

#ifdef LL_PLAT_C
    MCAPI bool isAttachableEquipment() const;
#endif

    MCAPI bool isBlock() const;

    MCAPI bool isBlockInstance(::HashedString const& blockName) const;

    MCAPI bool isDamageableItem() const;

    MCAPI bool isDamaged() const;

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

    MCAPI bool isOnCooldown(::Player& player, ::SharedTypes::ItemCooldownType type) const;

    MCAPI bool
    isOneOfBlockInstances(::std::vector<::std::reference_wrapper<::HashedString const>> const& blockTypeIds) const;

    MCAPI bool
    isOneOfBlockInstances(::std::initializer_list<::std::reference_wrapper<::HashedString const>> blocks) const;

    MCAPI bool isOneOfInstances(
        ::std::initializer_list<::std::reference_wrapper<::HashedString const>> items,
        bool                                                                    useItemLookup
    ) const;

    MCAPI bool isPattern() const;

    MCAPI bool isPotionItem() const;

    MCAPI bool isStackable() const;

    MCAPI bool isStackable(::ItemStackBase const& other) const;

    MCAPI bool isStackedByData() const;

#ifdef LL_PLAT_C
    MCAPI bool isThrowable() const;

    MCAPI bool isTransparentAttachable() const;
#endif

    MCAPI bool isUnbreakable() const;

#ifdef LL_PLAT_C
    MCAPI bool isUseable() const;
#endif

    MCAPI bool isValidAuxValue(int value) const;

    MCAPI void load(::CompoundTag const& compoundTag);

    MCAPI void load(::CompoundTag const& compoundTag, ::ILevel& level);

    MCFOLD bool matches(::ItemStackBase const& other) const;

    MCAPI bool matchesEitherWearableCase(::CompoundTag const* userData) const;

    MCAPI bool matchesItem(::ItemStackBase const& other) const;

    MCAPI explicit operator bool() const;

    MCAPI bool operator!=(::ItemStackBase const& rhs) const;

    MCAPI ::ItemStackBase& operator=(::ItemStackBase const& rhs);

    MCFOLD bool operator==(::ItemStackBase const& rhs) const;

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

    MCFOLD void setBlock(::Block const* block);

    MCFOLD void setBlockingTick(::Tick blockingTick);

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

    MCAPI void setJustBrewed(bool justBrewed);

    MCAPI void setPickupTime();

#ifdef LL_PLAT_C
    MCFOLD void setPickupTime(::std::chrono::steady_clock::time_point newPickupTime);
#endif

    MCAPI void setRepairCost(int cost);

    MCFOLD void setShowPickUp(bool show);

    MCAPI void setUnbreakable(bool isUnbreakable);

    MCAPI void setUserData(::std::unique_ptr<::CompoundTag> tag);

    MCFOLD void setWasPickedUp(bool wasPickedUp);

    MCAPI bool shouldInteractionWithBlockBypassLiquid(::Block const& block) const;

    MCAPI bool shouldVanish() const;

#ifdef LL_PLAT_C
    MCFOLD bool showPickUp() const;

    MCAPI bool showsDurabilityInCreative() const;
#endif

    MCAPI void startCooldown(::Player& player, ::SharedTypes::ItemCooldownType type) const;

    MCAPI bool updateComponent(::std::string const& name, ::Json::Value const& data);

#ifdef LL_PLAT_C
    MCAPI bool wasJustBrewed() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _loadBlocksForCanPlaceOnCanDestroy(::std::vector<::BlockType const*>& blockList, ::std::string const& blockName);

#ifdef LL_PLAT_C
    MCAPI static void loadItemStacksFromDescriptor(
        ::std::vector<::ItemStack>&                        outItems,
        ::std::vector<::NetworkItemStackDescriptor> const& descriptors,
        ::BlockPalette&                                    blockPalette,
        bool                                               isClientSide
    );

    MCAPI static int retrieveAuxValFromIDAux(int idAux);

    MCAPI static bool retrieveEnchantFromIDAux(int idAux);

    MCAPI static short retrieveIDFromIDAux(int idAux);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_AUXANDRELEVANTUSERDATA();

    MCAPI static ::ItemStackBase::ComparisonOptions const& COMPARISONOPTIONS_RELEVANTUSERDATA();

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

    MCAPI static ::std::string const& TAG_UNBREAKABLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RecipeIngredient const& ingredient);

    MCAPI void* $ctor(::ItemStackBase const& rhs);

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
    MCFOLD void $reinit(::Item const& item, int count, int auxValue);

    MCFOLD void $reinit(::Block const& block, int count);

    MCFOLD void $reinit(::std::string_view const name, int count, int auxValue);

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
