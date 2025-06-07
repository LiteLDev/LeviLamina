#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/Tick.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class ComponentItem;
class CompoundTag;
class ContainerComponent;
class DynamicProperties;
class HashedString;
class Item;
class ItemDescriptor;
class ItemEnchants;
class ItemInstance;
class RecipeIngredient;
class RenderParams;
class SaveContext;
class Vec3;
struct ItemTag;
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
    ::std::vector<::BlockLegacy const*>     mCanPlaceOn;
    uint64                                  mCanPlaceOnHash;
    ::std::vector<::BlockLegacy const*>     mCanDestroy;
    uint64                                  mCanDestroyHash;
    ::Tick                                  mBlockingTick;
    ::std::unique_ptr<::ItemInstance>       mChargedItem;
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

    MCAPI ItemStackBase(::Block const& block, int count = 1, ::CompoundTag const* _userData = nullptr);

    MCAPI
    ItemStackBase(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr);

    MCAPI void _addCustomUserDataCommon(::std::unique_ptr<::CompoundTag>&& tag);

    MCAPI void _checkForItemWorldCompatibility();

    MCAPI ::std::string _getHoverFormattingPrefix() const;

    MCAPI void _loadComponents(::CompoundTag const& compoundTag);

    MCAPI void _loadItem(::CompoundTag const& compoundTag);

    MCAPI void _setChargedItem(::ItemInstance const& item);

    MCAPI bool _setItem(int id, bool doRemap);

    MCAPI void _setItemFromBlockName(::HashedString const& blockName);

    MCAPI void _updateCompareHashes();

    MCAPI bool addComponents(::Json::Value const& root, ::std::string& errorMsg);

    MCAPI void addCustomUserData(::ContainerComponent const& containerComponent);

    MCAPI void clearChargedItem();

    MCAPI void clearCustomLore();

    MCAPI ::ItemEnchants constructItemEnchantsFromUserData() const;

    MCAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlot() const;

    MCAPI short getAuxValue() const;

    MCAPI int getBaseRepairCost() const;

    MCAPI ::mce::Color getColor() const;

    MCAPI ::ComponentItem const* getComponentItem() const;

    MCAPI ::std::vector<::std::string> getCustomLore() const;

    MCAPI ::std::string getCustomName() const;

    MCAPI short getDamageValue() const;

    MCAPI ::std::string getDescriptionId() const;

    MCAPI ::ItemDescriptor getDescriptor() const;

    MCAPI ::std::unique_ptr<::DynamicProperties> getDynamicProperties() const;

    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>
    getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const;

    MCAPI ::HashedString const& getFullNameHash() const;

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

    MCAPI bool hasContainerData() const;

    MCAPI bool hasCustomHoverName() const;

    MCAPI bool hasSameAuxValue(::ItemStackBase const& other) const;

    MCAPI bool hasSameUserData(::ItemStackBase const& other) const;

    MCAPI bool hasTag(::ItemTag const& string) const;

    MCAPI bool hurtAndBreak(int deltaDamage, ::Actor* owner);

    MCAPI void init(::BlockLegacy const& block, int count);

    MCAPI void init(int id, int count_, int aux_, bool doRemap);

    MCAPI void init(::Item const& item, int count, int auxValue, ::CompoundTag const* userData, bool doRemap);

    MCAPI bool isArmorItem() const;

    MCAPI bool isBlock() const;

    MCAPI bool isDamageableItem() const;

    MCAPI bool isDamaged() const;

    MCAPI bool isEnchanted() const;

    MCAPI bool isEnchantingBook() const;

    MCAPI bool isFullStack() const;

    MCAPI bool isGlint() const;

    MCAPI bool isHorseArmorItem() const;

    MCAPI bool isHumanoidArmorItem() const;

    MCAPI bool isHumanoidWearableBlockItem() const;

    MCAPI bool isInstance(::HashedString const& itemName, bool useItemLookup) const;

    MCAPI bool isNull() const;

    MCAPI bool
    isOneOfBlockInstances(::std::vector<::std::reference_wrapper<::HashedString const>> const& blockTypeIds) const;

    MCAPI bool isOneOfInstances(
        ::std::initializer_list<::std::reference_wrapper<::HashedString const>> items,
        bool                                                                    useItemLookup
    ) const;

    MCAPI bool isPotionItem() const;

    MCAPI bool isStackable() const;

    MCAPI bool isStackable(::ItemStackBase const& other) const;

    MCAPI bool isStackedByData() const;

    MCFOLD bool matches(::ItemStackBase const& other) const;

    MCAPI bool matchesEitherWearableCase(::CompoundTag const* userData) const;

    MCAPI bool matchesItem(::ItemStackBase const& other) const;

    MCAPI explicit operator bool() const;

    MCAPI bool operator!=(::ItemStackBase const& rhs) const;

    MCAPI ::ItemStackBase& operator=(::ItemStackBase const& rhs);

    MCFOLD bool operator==(::ItemStackBase const& rhs) const;

    MCAPI void remove(int inCount);

    MCAPI void removeEnchants();

    MCAPI void resetHoverName();

    MCAPI bool sameItem(int itemId, int auxValue) const;

    MCAPI ::std::unique_ptr<::CompoundTag> save(::SaveContext const& saveContext) const;

    MCAPI void saveEnchantsToUserData(::ItemEnchants const& enchant);

    MCAPI bool sendEventTriggered(::std::string const& event, ::RenderParams const& params);

    MCAPI void set(int inCount);

    MCAPI void setChargedItem(::ItemInstance const& instance, bool isSwapping);

    MCAPI void setCustomLore(::std::vector<::std::string> const& lore);

    MCAPI void setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCAPI void setDamageValue(short newDamage);

    MCAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
    );

    MCAPI void setRepairCost(int cost);

    MCAPI void setUserData(::std::unique_ptr<::CompoundTag> tag);

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

    MCFOLD void $reinit(::BlockLegacy const& block, int count);

    MCFOLD void $reinit(::std::string_view const name, int count, int auxValue);

    MCAPI void $setNull(::std::optional<::std::string> reason);

    MCAPI ::std::string $toString() const;

    MCAPI ::std::string $toDebugString() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
