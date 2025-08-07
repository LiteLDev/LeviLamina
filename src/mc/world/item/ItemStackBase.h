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
    // ItemStackBase 的内部类型声明
    // clang-format off
    struct ComparisonOptions; // 比较选项结构体
    // clang-format on

    // ItemStackBase 的内部类型定义
    /**
     * @brief 定义了在比较两个 ItemStackBase 时可以使用的选项。
     */
    struct ComparisonOptions {
    public:
        // 成员变量
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mCompareAux;             // 是否比较物品的附加值（AuxValue），通常是损伤值或变种。
        ::ll::TypedStorage<1, 1, bool> mCompareRelevantUserData; // 是否比较相关的用户数据（UserData/NBT）。
        ::ll::TypedStorage<1, 1, bool> mCompareDamage;          // 是否比较损伤值（Damage）。
        // NOLINTEND
    };

public:
    /**
     * @brief 获取此物品的类型名称。
     * @return std::string 物品的类型名，例如 "Item" 或 "Block"。
     */
    LLNDAPI std::string getTypeName() const;

    /**
     * @brief 获取此物品的描述性名称（通常是翻译键）。
     * @return std::string 描述性名称，例如 "item.apple.name"。
     */
    LLNDAPI std::string getDescriptionName() const;

public:
    // 成员变量
    // NOLINTBEGIN
    ::WeakPtr<::Item>                       mItem;                      // 指向该物品类型定义的弱指针（例如，苹果 Item）。如果是方块物品，可能为空。
    ::std::unique_ptr<::CompoundTag>        mUserData;                  // 指向该物品栈的自定义数据（NBT）。可以是 nullptr。存储如附魔、命名、lore 等信息。
    ::Block const*                          mBlock;                     // 如果这是一个方块物品，这里指向该方块的实例。
    short                                   mAuxValue;                  // 附加值。对于工具是损伤值，对于某些方块是其变种（如不同颜色的羊毛）。
    uchar                                   mCount;                     // 物品栈中的物品数量。
    bool                                    mValid_DeprecatedSeeComment;// 【已弃用】一个表示物品是否有效的旧标志。现在应使用 isNull() 方法。
    bool                                    mShowPickUp;                // 是否在拾取时显示动画。
    bool                                    mWasPickedUp;               // 该物品栈是否刚刚被拾取（用于动画或逻辑）。
    ::std::chrono::steady_clock::time_point mPickupTime;                // 物品被拾取的时间点。
    ::std::vector<::BlockLegacy const*>     mCanPlaceOn;                // 【冒险模式】可将此物品放置在哪些类型的方块上。
    uint64                                  mCanPlaceOnHash;            // `mCanPlaceOn` 列表的哈希值，用于快速比较。
    ::std::vector<::BlockLegacy const*>     mCanDestroy;                // 【冒险模式】此物品可以破坏哪些类型的方块。
    uint64                                  mCanDestroyHash;            // `mCanDestroy` 列表的哈希值，用于快速比较。
    ::Tick                                  mBlockingTick;              // 物品开始格挡时的游戏刻。
    ::std::unique_ptr<::ItemInstance>       mChargedItem;               // "已装填"的物品。例如，弩里装填的箭。
    // NOLINTEND

public:
    // 虚函数
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackBase(); // 虚析构函数，允许子类正确地释放资源。

    // vIndex: 3
    /**
     * @brief 使用物品（Item）定义、数量和附加值重新初始化此物品栈。
     * @param item 物品的静态定义。
     * @param count 物品数量。
     * @param auxValue 附加值。
     */
    virtual void reinit(::Item const& item, int count, int auxValue);

    // vIndex: 2
    /**
     * @brief 使用方块（BlockLegacy）定义和数量重新初始化此物品栈。
     * @param block 方块的静态定义。
     * @param count 物品数量。
     */
    virtual void reinit(::BlockLegacy const& block, int count);

    // vIndex: 1
    /**
     * @brief 使用物品名称、数量和附加值重新初始化此物品栈。
     * @param name 物品的命名空间ID，如 "minecraft:apple"。
     * @param count 物品数量。
     * @param auxValue 附加值。
     */
    virtual void reinit(::std::string_view const name, int count, int auxValue);

    // vIndex: 4
    /**
     * @brief 将物品栈设置为空状态（数量为0，类型为 air）。
     * @param reason 可选的置空原因字符串，可能用于调试。
     */
    virtual void setNull(::std::optional<::std::string> reason);

    // vIndex: 5
    /**
     * @brief 返回物品栈的字符串表示，通常用于显示。
     * @return std::string 物品栈的字符串描述。
     */
    virtual ::std::string toString() const;

    // vIndex: 6
    /**
     * @brief 返回物品栈的调试用字符串表示，信息更详细。
     * @return std::string 物品栈的调试字符串。
     */
    virtual ::std::string toDebugString() const;
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    MCAPI ItemStackBase(); // 默认构造函数，创建一个空的物品栈。

    MCAPI explicit ItemStackBase(::RecipeIngredient const& ingredient); // 从合成配方原料构造。

    MCAPI ItemStackBase(::ItemStackBase const& rhs); // 拷贝构造函数。

    MCAPI ItemStackBase(::BlockLegacy const& block, int count); // 从方块类型和数量构造。

    MCAPI ItemStackBase(::Block const& block, int count = 1, ::CompoundTag const* _userData = nullptr); // 从方块实例、数量和可选NBT数据构造。

    MCAPI ItemStackBase(::std::string_view name, int count = 1, int auxValue = 0, ::CompoundTag const* _userData = nullptr); // 从物品名称、数量、附加值和可选NBT数据构造。

    // 以下划线 `_` 开头的函数通常是内部辅助函数，不建议外部直接调用。
    MCAPI void _addCustomUserDataCommon(::std::unique_ptr<::CompoundTag>&& tag); // 添加自定义用户数据的通用内部实现。
    MCAPI void _checkForItemWorldCompatibility(); // 检查物品是否与当前世界兼容。
    MCAPI ::std::string _getHoverFormattingPrefix() const; // 获取悬停名称的格式化前缀（例如，附魔物品的紫色）。
    MCAPI void _loadComponents(::CompoundTag const& compoundTag); // 从 NBT 标签中加载物品组件数据。
    MCAPI void _loadItem(::CompoundTag const& compoundTag); // 从 NBT 标签中加载物品的核心数据。
    MCAPI void _setChargedItem(::ItemInstance const& item); // 内部设置已装填的物品。
    MCAPI bool _setItem(int id, bool doRemap); // 内部根据物品ID设置物品类型。
    MCAPI void _setItemFromBlockName(::HashedString const& blockName); // 内部根据方块名称设置物品类型。
    MCAPI void _updateCompareHashes(); // 更新用于快速比较的哈希值（如 mCanPlaceOnHash）。

    MCAPI bool addComponents(::Json::Value const& root, ::std::string& errorMsg); // 从 JSON 数据为物品添加组件。
    MCAPI void addCustomUserData(::ContainerComponent const& containerComponent); // 从容器组件添加自定义用户数据。
    MCAPI void clearChargedItem(); // 清除已装填的物品（如弩中的箭）。
    MCAPI void clearCustomLore(); // 清除自定义的 lore (传说/描述性文本)。
    MCAPI ::ItemEnchants constructItemEnchantsFromUserData() const; // 从用户数据（NBT）中构建附魔信息对象。
    MCAPI ::SharedTypes::Legacy::ArmorSlot getArmorSlot() const; // 获取物品对应的盔甲槽位（如果是盔甲）。
    MCAPI short getAuxValue() const; // 获取附加值/损伤值。
    MCAPI int getBaseRepairCost() const; // 获取修复此物品所需的基础经验消耗。
    MCAPI ::mce::Color getColor() const; // 获取物品的颜色（例如，皮革盔甲的颜色）。
    MCAPI ::ComponentItem const* getComponentItem() const; // 获取物品的组件化接口。
    MCAPI ::std::vector<::std::string> getCustomLore() const; // 获取自定义的 lore 列表。
    MCAPI ::std::string getCustomName() const; // 获取物品的自定义名称。
    MCAPI short getDamageValue() const; // 获取损伤值（与 getAuxValue 类似，但语义上更明确）。
    MCAPI ::std::string getDescriptionId() const; // 获取描述ID，用于本地化翻译。
    MCAPI ::ItemDescriptor getDescriptor() const; // 获取此物品的描述符（包含ID和附加值）。
    MCAPI ::std::unique_ptr<::DynamicProperties> getDynamicProperties() const; // 获取物品的动态属性。
    MCAPI ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const; // 获取指定的动态属性值。
    MCAPI ::HashedString const& getFullNameHash() const; // 获取物品完整名称（带命名空间）的哈希值。
    MCAPI short getId() const; // 获取物品的数字ID（旧版系统）。
    MCAPI int getIdAux() const; // 获取一个包含ID和附加值的整数。
    MCAPI ::Item const* getItem() const; // 获取物品的 Item 定义指针。
    MCAPI ::WeakPtr<::BlockLegacy const> const& getLegacyBlock() const; // 获取物品对应的方块定义（如果是方块物品）。
    MCAPI short getMaxDamage() const; // 获取物品的最大耐久度。
    MCAPI uchar getMaxStackSize() const; // 获取该物品的最大堆叠数量。
    MCAPI ::std::string getName() const; // 获取物品的显示名称（可能是自定义的，也可能是默认的）。
    MCAPI ::std::unique_ptr<::CompoundTag> getNetworkUserData() const; // 获取用于网络同步的用户数据。
    MCAPI ::HashedString const& getRawNameHash() const; // 获取物品原始名称（不含命名空间）的哈希值。
    MCAPI ::std::string getRawNameId() const; // 获取物品的原始名称ID（不含命名空间）。
    MCAPI ::Bedrock::Safety::RedactableString getRedactedCustomName() const; // 获取经过审查的自定义名称。
    MCAPI ::Bedrock::Safety::RedactableString getRedactedHoverName() const; // 获取经过审查的悬停显示名称。
    MCAPI ::Bedrock::Safety::RedactableString getRedactedName() const; // 获取经过审查的物品名称。
    MCAPI bool hasContainerData() const; // 检查物品是否有容器数据（如潜影盒）。
    MCAPI bool hasCustomHoverName() const; // 检查物品是否有自定义的悬停名称。
    MCAPI bool hasSameAuxValue(::ItemStackBase const& other) const; // 检查两个物品栈的附加值是否相同。
    MCAPI bool hasSameUserData(::ItemStackBase const& other) const; // 检查两个物品栈的用户数据（NBT）是否相同。
    MCAPI bool hasTag(::ItemTag const& string) const; // 检查物品是否具有指定的物品标签。
    MCAPI bool hurtAndBreak(int deltaDamage, ::Actor* owner); // 对物品造成伤害，并可能因此破坏它。返回是否破坏。
    MCAPI void init(::BlockLegacy const& block, int count); // 使用方块定义和数量初始化。
    MCAPI void init(int id, int count_, int aux_, bool doRemap); // 使用ID、数量、附加值初始化。
    MCAPI void init(::Item const& item, int count, int auxValue, ::CompoundTag const* userData, bool doRemap); // 使用Item定义、数量、附加值、NBT数据初始化。
    MCAPI bool isArmorItem() const; // 检查这是否是一个盔甲物品。
    MCAPI bool isBlock() const; // 检查这是否是一个方块物品。
    MCAPI bool isDamageableItem() const; // 检查这是否是一个可被损坏的物品（有耐久度）。
    MCAPI bool isDamaged() const; // 检查这个物品是否已经受损。
    MCAPI bool isEnchanted() const; // 检查这个物品是否被附魔。
    MCAPI bool isEnchantingBook() const; // 检查这是否是一本附魔书。
    MCAPI bool isFullStack() const; // 检查物品栈的数量是否已达到最大堆叠上限。
    MCAPI bool isGlint() const; // 检查物品是否应该显示附魔的光效。
    MCAPI bool isHorseArmorItem() const; // 检查这是否是马铠。
    MCAPI bool isHumanoidArmorItem() const; // 检查这是否是可供人形生物穿戴的盔甲。
    MCAPI bool isHumanoidWearableBlockItem() const; // 检查这是否是可供人形生物穿戴的方块物品（如南瓜头）。
    MCAPI bool isInstance(::HashedString const& itemName, bool useItemLookup) const; // 检查此物品是否是指定名称的物品实例。
    MCAPI bool isNull() const; // 检查这个物品栈是否为空（即无效或数量为0）。
    MCAPI bool isOneOfBlockInstances(::std::vector<::std::reference_wrapper<::HashedString const>> const& blockTypeIds) const; // 检查此物品是否是给定方块列表中的一员。
    MCAPI bool isOneOfInstances(::std::initializer_list<::std::reference_wrapper<::HashedString const>> items, bool useItemLookup) const; // 检查此物品是否是给定物品列表中的一员。
    MCAPI bool isPotionItem() const; // 检查这是否是一个药水物品。
    MCAPI bool isStackable() const; // 检查这个物品本身是否是可堆叠的。
    MCAPI bool isStackable(::ItemStackBase const& other) const; // 检查此物品栈是否能与另一个物品栈堆叠在一起。
    MCAPI bool isStackedByData() const; // 检查此物品的堆叠是否受其数据（NBT）影响。
    MCFOLD bool matches(::ItemStackBase const& other) const; // 检查两个物品栈是否匹配（不考虑数量）。
    MCAPI bool matchesEitherWearableCase(::CompoundTag const* userData) const; // 检查是否匹配可穿戴物品的某种情况。
    MCAPI bool matchesItem(::ItemStackBase const& other) const; // 检查两个物品栈是否为同一种物品（ID和附加值相同）。
    MCAPI explicit operator bool() const; // 类型转换到 bool，通常用于 if(itemStack) 判断是否非空。
    MCAPI bool operator!=(::ItemStackBase const& rhs) const; // 不等于运算符重载。
    MCAPI ::ItemStackBase& operator=(::ItemStackBase const& rhs); // 赋值运算符重载。
    MCFOLD bool operator==(::ItemStackBase const& rhs) const; // 等于运算符重载，会比较ID, 数量, 附加值和NBT。
    MCAPI void remove(int inCount); // 从物品栈中移除指定数量的物品。
    MCAPI void removeEnchants(); // 移除所有附魔。
    MCAPI void resetHoverName(); // 重置悬停名称为默认值。
    MCAPI bool sameItem(int itemId, int auxValue) const; // 检查此物品是否与给定的ID和附加值匹配。
    MCAPI ::std::unique_ptr<::CompoundTag> save(::SaveContext const& saveContext) const; // 将物品栈数据保存到一个 NBT 复合标签中。
    MCAPI void saveEnchantsToUserData(::ItemEnchants const& enchant); // 将附魔信息保存到用户数据（NBT）中。
    MCAPI bool sendEventTriggered(::std::string const& event, ::RenderParams const& params); // 触发一个事件（通常用于动画或组件）。
    MCAPI void set(int inCount); // 设置物品栈的数量。
    MCAPI void setChargedItem(::ItemInstance const& instance, bool isSwapping); // 设置已装填的物品。
    MCAPI void setCustomLore(::std::vector<::std::string> const& lore); // 设置自定义的 lore。
    MCAPI void setCustomName(::Bedrock::Safety::RedactableString const& name); // 设置自定义名称。
    MCAPI void setDamageValue(short newDamage); // 设置物品的损伤值。
    MCAPI void setDynamicProperty(::std::string const& key, ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value, ::std::string const& collectionName); // 设置一个动态属性。
    MCAPI void setRepairCost(int cost); // 设置修复花费。
    MCAPI void setUserData(::std::unique_ptr<::CompoundTag> tag); // 设置物品的用户数据（NBT）。
    MCAPI bool updateComponent(::std::string const& name, ::Json::Value const& data); // 更新一个组件的数据。
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    /**
     * @brief 从 NBT 标签中加载【冒险模式】的 CanPlaceOn/CanDestroy 列表。
     * @param blockList 输出参数，加载后的方块列表。
     * @param blockName NBT 中存储方块名称的标签名。
     * @return bool 是否加载成功。
     */
    MCAPI static bool _loadBlocksForCanPlaceOnCanDestroy(::std::vector<::BlockLegacy const*>& blockList, ::std::string const& blockName);
    // NOLINTEND

public:
    // 静态变量 - 这些函数返回 NBT 标签中常用的键名字符串常量。
    // NOLINTBEGIN
    MCAPI static ::std::string const& TAG_CAN_DESTROY();          // "CanDestroy" NBT 键名
    MCAPI static ::std::string const& TAG_CAN_PLACE_ON();         // "CanPlaceOn" NBT 键名
    MCAPI static ::std::string const& TAG_CHARGED_ITEM();         // "ChargedItem" NBT 键名
    MCAPI static ::std::string const& TAG_DISPLAY();              // "display" NBT 键名 (父标签)
    MCAPI static ::std::string const& TAG_DISPLAY_FILTERED_NAME();// "filtered_name" NBT 键名 (审查后的名称)
    MCAPI static ::std::string const& TAG_DISPLAY_NAME();         // "Name" NBT 键名 (自定义名称)
    MCAPI static ::std::string const& TAG_ENCHANTS();             // "ench" NBT 键名 (附魔列表)
    MCAPI static ::std::string const& TAG_LORE();                 // "Lore" NBT 键名 (lore列表)
    MCAPI static ::std::string const& TAG_REPAIR_COST();          // "RepairCost" NBT 键名 (修复花费)
    MCAPI static ::std::string const& TAG_STORE_CAN_DESTROY();    // "CanDestroy" NBT 键名 (在商店中)
    MCAPI static ::std::string const& TAG_STORE_CAN_PLACE_ON();   // "CanPlaceOn" NBT 键名 (在商店中)
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
