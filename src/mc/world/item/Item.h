#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/item/UseAnimation.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/world/interactions/mining/MineBlockItemEffectType.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/ItemAcquisitionMethod.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemCommandVisibility.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/item/registry/ItemVersion.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class CameraItemComponentLegacy;
class CompoundTag;
class Container;
class FoodItemComponentLegacy;
class IDataInput;
class IDataOutput;
class IFoodItemComponent;
class ILevel;
class IPackLoadContext;
class InteractionResult;
class ItemComponent;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class Mob;
class Player;
class ReadOnlyBinaryStream;
class RenderParams;
class SeedItemComponentLegacy;
class SemVersion;
class Vec3;
struct ActorDefinitionIdentifier;
struct Brightness;
struct CommandName;
struct ItemTag;
struct ItemUsedOnEventContext;
struct ResolvedItemIconInfo;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // Item inner types declare
    // clang-format off
    class Tier;
    // clang-format on

    // Item inner types define
    class Tier {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int const>   mLevel;
        ::ll::TypedStorage<4, 4, int const>   mUses;
        ::ll::TypedStorage<4, 4, float const> mSpeed;
        ::ll::TypedStorage<4, 4, int const>   mDamage;
        ::ll::TypedStorage<4, 4, int const>   mEnchantmentValue;
        // NOLINTEND
    };

public:
    // 成员变量 (这些都是该物品种类的静态属性)
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ItemVersion>                                   mItemParseVersion;       // 解析此物品定义时使用的版本号。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mTextureAtlasFile;       // 物品纹理所在的图集文件名。
    ::ll::TypedStorage<4, 4, int>                                             mFrameCount;             // 纹理动画的总帧数。
    ::ll::TypedStorage<1, 1, bool>                                            mAnimatesInToolbar;      // 在工具栏中是否播放动画。
    ::ll::TypedStorage<1, 1, bool>                                            mIsMirroredArt;          // 艺术贴图是否需要镜像（用于画）。
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::UseAnimation>             mUseAnim;                // 使用物品时的动画类型（如吃、喝、拉弓）。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mHoverTextColorFormat;   // 悬停文本的颜色格式代码。
    ::ll::TypedStorage<4, 4, int>                                             mIconFrame;              // 图标帧。
    ::ll::TypedStorage<4, 4, int>                                             mAtlasFrame;             // 图集帧。
    ::ll::TypedStorage<4, 4, int>                                             mAtlasTotalFrames;       // 图集总帧数。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mIconName;               // 图标名称。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mAtlasName;              // 图集名称。
    ::ll::TypedStorage<1, 1, uchar>                                           mMaxStackSize;           // 最大堆叠数量。
    ::ll::TypedStorage<2, 2, short>                                           mId;                     // 物品的数字ID（旧系统）。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mDescriptionId;          // 描述ID，用于本地化，如 "item.apple.name"。
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mRawNameId;              // 原始名称ID（不含命名空间）的哈希字符串。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mNamespace;              // 物品的命名空间，如 "minecraft"。
    ::ll::TypedStorage<8, 48, ::HashedString>                                 mFullName;               // 完整名称（含命名空间）的哈希字符串。
    ::ll::TypedStorage<2, 2, short>                                           mMaxDamage;              // 最大耐久度。0表示不可损坏。
    bool                                                                      mIsGlint              : 1; // 是否默认带有附魔光效。
    bool                                                                      mHandEquipped         : 1; // 是否在手中时有特殊渲染模型（像工具一样）。
    bool                                                                      mIsStackedByData      : 1; // 堆叠时是否需要考虑附加数据（NBT）。
    bool                                                                      mRequiresWorldBuilder : 1; // 是否需要世界建造者权限才能使用。
    bool                                                                      mExplodable           : 1; // 是否会爆炸（如床在下界）。
    bool                                                                      mFireResistant        : 1; // 是否防火（不会被岩浆或火烧毁）。
    bool                                                                      mShouldDespawn        : 1; // 作为掉落物时是否应该消失。
    bool                                                                      mAllowOffhand         : 1; // 是否允许放在副手。
    bool                                                                      mIgnoresPermissions   : 1; // 是否忽略权限限制。
    ::ll::TypedStorage<4, 4, int>                                             mMaxUseDuration;         // 最大使用时长。
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                              mMinRequiredBaseGameVersion; // 运行所需的最低游戏版本。
    ::ll::TypedStorage<8, 8, ::WeakPtr<::BlockLegacy const>>                  mLegacyBlock;            // 如果这是一个方块物品，这里指向其方块定义。
    ::ll::TypedStorage<4, 4, ::CreativeItemCategory>                          mCreativeCategory;       // 在创造模式物品栏中的分类。
    ::ll::TypedStorage<8, 8, ::Item*>                                         mCraftingRemainingItem;  // 合成后返还的物品（如装牛奶的桶合成蛋糕后返还空桶）。
    ::ll::TypedStorage<8, 32, ::std::string>                                  mCreativeGroup;          // 在创造模式物品栏中的分组名。
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceBurnIntervalModifier; // 作为燃料时的燃烧间隔修改器。
    ::ll::TypedStorage<4, 4, float>                                           mFurnaceXPmultiplier;    // 作为燃料烧炼后产出的经验倍率。
    ::ll::TypedStorage<1, 1, ::ItemCommandVisibility>                         mIsHiddenInCommands;     // 在命令中是否可见。
    ::ll::TypedStorage<4, 4, ::Rarity>                                        mBaseRarity;             // 基础稀有度。
    ::ll::TypedStorage<4, 4, ::Interactions::Mining::MineBlockItemEffectType> mMineBlockType;        // 挖掘方块时的物品效果类型。
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::FoodItemComponentLegacy>>    mFoodComponentLegacy;    // 旧版的食物组件。
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SeedItemComponentLegacy>>    mSeedComponent;          // 种子组件。
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CameraItemComponentLegacy>>  mCameraComponentLegacy;  // 旧版的相机组件。
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>         mOnResetBAIcallbacks;    // 重置行为、属性和物品时（BAI）的回调。
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemTag>>                       mTags;                   // 此物品拥有的标签列表。
    // NOLINTEND

public:
    // 默认构造函数被禁用。
    Item();

public:
    // 虚函数 (这些函数定义了物品的核心行为，子类可以重写以实现特定功能)
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Item();

    // vIndex: 1
    virtual bool initServer(::Json::Value const&, ::SemVersion const&, ::IPackLoadContext&, ::JsonBetaState const); // [服务端] 从JSON初始化。

    // vIndex: 2
    virtual void tearDown(); // 卸载时清理资源。

    // vIndex: 3
    virtual ::Item& setDescriptionId(::std::string const& description); // 设置描述ID。

    // vIndex: 4
    virtual ::std::string const& getDescriptionId() const; // 获取描述ID。

    // vIndex: 5
    virtual int getMaxUseDuration(::ItemStack const*) const; // 获取最大使用时长。

    // vIndex: 6
    virtual ::WeakPtr<::BlockLegacy const> const& getLegacyBlockForRendering() const; // 获取用于渲染的关联方块。

    // vIndex: 7
    virtual bool isMusicDisk() const; // 是否是音乐唱片。

    // vIndex: 8
    virtual void executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const; // 执行一个物品事件。

    // vIndex: 9
    virtual bool isComponentBased() const; // 是否是基于组件的物品。

    // vIndex: 10
    virtual bool isHumanoidArmor() const; // 是否是人形生物盔甲。

    // vIndex: 11
    virtual bool isBlockPlanterItem() const; // 是否是方块种植器物品（如种子）。

    // vIndex: 12
    virtual bool isBucket() const; // 是否是桶。

    // vIndex: 13
    virtual bool isCandle() const; // 是否是蜡烛。

    // vIndex: 14
    virtual bool isDamageable() const; // 是否可损坏。

    // vIndex: 15
    virtual bool isDyeable() const; // 是否可染色。

    // vIndex: 16
    virtual bool isDye() const; // 是否是染料。

    // vIndex: 17
    virtual ::ItemColor getItemColor() const; // 获取物品颜色（用于染料）。

    // vIndex: 18
    virtual bool isFertilizer() const; // 是否是肥料（如骨粉）。

    // vIndex: 19
    virtual bool isFood() const; // 是否是食物。

    // vIndex: 20
    virtual bool isThrowable() const; // 是否是可投掷物。

    // vIndex: 21
    virtual bool isUseable() const; // 是否可使用。

    // vIndex: 22
    virtual bool isTrimAllowed() const; // 是否允许盔甲纹饰。

    // vIndex: 23
    virtual ::ItemComponent* getComponent(::HashedString const&) const; // 获取指定的物品组件。

    // vIndex: 24
    virtual ::IFoodItemComponent* getFood() const; // 获取食物组件接口。

    // vIndex: 25
    virtual ::Item& setMaxDamage(int maxDamage); // 设置最大耐久度。

    // vIndex: 26
    virtual ::Item& setMaxUseDuration(int maxUseDuration); // 设置最大使用时长。

    // vIndex: 27
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const; // 构建用于网络同步的NBT标签。

    // vIndex: 28
    virtual void initializeFromNetwork(::CompoundTag const& tag); // 从网络同步的NBT标签初始化。

    // vIndex: 29
    virtual ::std::vector<::std::string> validateFromNetwork(::CompoundTag const&); // 验证从网络收到的NBT数据。

    // vIndex: 30
    virtual ::BlockShape getBlockShape() const; // 获取物品对应的方块形状。

    // vIndex: 31
    virtual bool canBeDepleted() const; // 是否可以被消耗完（如药水、食物）。

    // vIndex: 32
    virtual bool canDestroySpecial(::Block const&) const; // 是否能破坏特殊方块（如蜘蛛网）。

    // vIndex: 33
    virtual int getLevelDataForAuxValue(int) const; // 根据附加值获取关卡数据。

    // vIndex: 34
    virtual bool isStackedByData() const; // 堆叠时是否受数据影响。

    // vIndex: 35
    virtual short getMaxDamage() const; // 获取最大耐久度。

    // vIndex: 36
    virtual int getAttackDamage() const; // 获取基础攻击伤害。

    // vIndex: 37
    virtual float getAttackDamageBonus(::Actor const&, float) const; // 获取对特定实体的额外攻击伤害。

    // vIndex: 38
    virtual bool isHandEquipped() const; // 是否在手持时有特殊渲染模型。

    // vIndex: 39
    virtual bool isGlint(::ItemStackBase const& stack) const; // 根据物品栈判断是否显示附魔光效。

    // vIndex: 40
    virtual bool isPattern() const; // 是否是旗帜图案。

    // vIndex: 41
    virtual int getPatternIndex() const; // 获取旗帜图案的索引。

    // vIndex: 42
    virtual ::Rarity getBaseRarity() const; // 获取基础稀有度。

    // vIndex: 43
    virtual ::Rarity getRarity(::ItemStackBase const& stack) const; // 根据物品栈获取稀有度。

    // vIndex: 44
    virtual bool showsDurabilityInCreative() const; // 在创造模式下是否显示耐久度。

    // vIndex: 45
    virtual bool isWearableThroughLootTable(::CompoundTag const*) const; // 是否可通过战利品表穿戴。

    // vIndex: 46
    virtual bool canDestroyInCreative() const; // 在创造模式下是否能被销毁。

    // vIndex: 47
    virtual bool isDestructive(int) const; // 是否具有破坏性。

    // vIndex: 48
    virtual bool isLiquidClipItem() const; // 是否是液体裁剪物品（如桶）。

    // vIndex: 49
    virtual bool shouldInteractionWithBlockBypassLiquid(::Block const&) const; // 与方块交互时是否应忽略液体。

    // vIndex: 50
    virtual bool requiresInteract() const; // 是否需要交互（才能使用）。

    // vIndex: 51
    virtual ::std::string getHoverTextColor(::ItemStackBase const& stack) const; // 获取悬停文本颜色。

    // vIndex: 52
    virtual void appendFormattedHovertext(::ItemStackBase const&,::Level&,::Bedrock::Safety::RedactableString&, bool) const; // 追加格式化悬停文本。

    // vIndex: 53
    virtual bool isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const; // 检查修复材料是否有效。

    // vIndex: 54
    virtual int getEnchantSlot() const; // 获取附魔类型槽位（剑、盔甲等）。

    // vIndex: 55
    virtual int getEnchantValue() const; // 获取附魔能力值。

    // vIndex: 56
    virtual int getArmorValue() const; // 获取盔甲值。

    // vIndex: 57
    virtual int getToughnessValue() const; // 获取韧性值。

    // vIndex: 58
    virtual ::SharedTypes::Legacy::LevelSoundEvent getBreakSound() const; // 获取物品破坏时的声音。

    // vIndex: 59
    virtual bool isComplex() const; // 是否是复杂物品（需要特殊处理，如地图）。

    // vIndex: 60
    virtual bool isValidAuxValue(int) const; // 检查附加值是否有效。

    // vIndex: 61
    virtual int getDamageChance(int unbreaking) const; // 根据耐久附魔等级计算受到伤害的几率。

    // vIndex: 62
    virtual float getViewDamping() const; // 获取视角阻尼。

    // vIndex: 63
    virtual bool uniqueAuxValues() const; // 是否具有唯一的附加值。

    // vIndex: 64
    virtual bool isActorPlacerItem() const; // 是否是实体放置物品（如刷怪蛋）。

    // vIndex: 65
    virtual bool isMultiColorTinted(::ItemStack const&) const; // 是否有多色染色。

    // vIndex: 66
    virtual ::mce::Color getColor(::CompoundTag const*, ::ItemDescriptor const&) const; // 根据NBT和描述符获取颜色。

    // vIndex: 68
    virtual bool hasCustomColor(::ItemStackBase const&) const; // 检查物品栈是否有自定义颜色。

    // vIndex: 67
    virtual bool hasCustomColor(::CompoundTag const*) const; // 检查NBT中是否有自定义颜色。

    // vIndex: 69
    virtual void clearColor(::ItemStackBase&) const; // 清除物品栈的颜色。

    // vIndex: 70
    virtual void setColor(::ItemStackBase&, ::mce::Color const&) const; // 设置物品栈的颜色。

    // vIndex: 71
    virtual ::mce::Color getBaseColor(::ItemStack const&) const; // 获取基础颜色。

    // vIndex: 72
    virtual ::mce::Color getSecondaryColor(::ItemStack const&) const; // 获取次要颜色。

    // vIndex: 73
    virtual ::ActorDefinitionIdentifier getActorIdentifier(::ItemStack const&) const; // 获取物品对应的实体定义标识符。

    // vIndex: 74
    virtual int buildIdAux(short auxValue, ::CompoundTag const*) const; // 构建包含ID和附加值的整数。

    // vIndex: 75
    virtual bool canUseOnSimTick() const; // 能否在模拟刻上使用。

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const; // 玩家使用物品。

    // vIndex: 77
    virtual ::Actor* createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const; // 创建投掷物实体。

    // vIndex: 78
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const; // 定义在发射器中的行为。

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const; // 使用时长耗尽时的行为。

    // vIndex: 80
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const; // 玩家停止使用物品时的行为。

    // vIndex: 81
    virtual float getDestroySpeed(::ItemStackBase const&, ::Block const&) const; // 获取对此特定方块的挖掘速度。

    // vIndex: 82
    virtual void hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const; // 攻击实体后对物品自身造成的伤害。

    // vIndex: 83
    virtual void hitActor(::ItemStack&, ::Actor&, ::Mob&) const; // 击中一个实体时调用。

    // vIndex: 84
    virtual void hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const; // 击中一个方块时调用。

    // vIndex: 85
    virtual ::std::string buildDescriptionName(::ItemStackBase const& stack) const; // 构建物品的显示名称。

    // vIndex: 86
    virtual ::Bedrock::Safety::RedactableString const buildRedactedDescriptionName(::ItemStackBase const& stack) const; // 构建经过审查的显示名称。

    // vIndex: 87
    virtual ::std::string buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const; // 构建描述ID。

    // vIndex: 88
    virtual ::std::string buildEffectDescriptionName(::ItemStackBase const& stack) const; // 构建效果描述名称（如药水）。

    // vIndex: 89
    virtual void readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const; // 读取用户数据。

    // vIndex: 90
    virtual void writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const; // 写入用户数据。

    // vIndex: 91
    virtual uchar getMaxStackSize(::ItemDescriptor const&) const; // 根据描述符获取最大堆叠数。

    // vIndex: 92
    virtual bool inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const; // 物品在物品栏中的每一刻更新。

    // vIndex: 93
    virtual void refreshedInContainer(::ItemStackBase const&, ::Level&) const; // 在容器中刷新时调用。

    // vIndex: 94
    virtual ::HashedString const& getCooldownType() const; // 获取冷却类型。

    // vIndex: 95
    virtual int getCooldownTime() const; // 获取冷却时间。

    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const; // 修复物品数据。

    // vIndex: 96
    virtual void fixupCommon(::ItemStackBase& stack, ::ILevel&) const; // 修复物品数据（带世界上下文）。

    // vIndex: 98
    virtual ::InHandUpdateType getInHandUpdateType(::Player const&,::ItemStack const&,::ItemStack const&,bool const,bool const) const; // 获取手持物品的更新类型。

    // vIndex: 99
    virtual bool validFishInteraction(int) const; // 是否是有效的钓鱼交互。

    // vIndex: 100
    virtual void enchantProjectile(::ItemStackBase const&, ::Actor&) const; // 附魔投掷物。

    // vIndex: 101
    virtual ::SharedTypes::Legacy::ActorLocation getEquipLocation() const; // 获取穿戴位置。

    // vIndex: 102
    virtual ::SharedTypes::Legacy::LevelSoundEvent getEquipSound() const; // 获取穿戴声音。

    // vIndex: 103
    virtual bool shouldSendInteractionGameEvents() const; // 是否应发送交互游戏事件。

    // vIndex: 104
    virtual bool useInterruptedByAttacking() const; // 使用过程是否会被攻击打断。

    // vIndex: 105
    virtual bool hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const; // 比较两个物品栈是否有相同的相关用户数据。

    // vIndex: 106
    virtual void initClient(::Json::Value const&, ::SemVersion const&, ::JsonBetaState const, ::IPackLoadContext&); // [客户端] 从JSON初始化。

    // vIndex: 107
    virtual ::Item& setIconInfo(::std::string const& name, int index); // 设置图标信息。

    // vIndex: 108
    virtual ::ResolvedItemIconInfo getIconInfo(::ItemStackBase const& item, int, bool) const; // 获取解析后的图标信息。

    // vIndex: 109
    virtual ::std::string getInteractText(::Player const& player) const; // 获取交互文本（如“骑乘”）。

    // vIndex: 110
    virtual int getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const; // 获取动画帧。

    // vIndex: 111
    virtual bool isEmissive(int auxValue) const; // 是否自发光。

    // vIndex: 112
    virtual ::Brightness getLightEmission(int) const; // 获取光照亮度。

    // vIndex: 113
    virtual bool canBeCharged() const; // 是否可以被充能（如弩）。

    // vIndex: 114
    virtual void playSoundIncrementally(::ItemStack const&, ::Mob&) const; // 增量播放使用声音。

    // vIndex: 115
    virtual float getFurnaceXPmultiplier(::ItemStackBase const&) const; // 获取作为燃料的经验倍率。

    // vIndex: 116
    virtual bool calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const; // 计算放置位置。

    // vIndex: 117
    virtual bool _checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const; // [内部] 检查使用权限。

    // vIndex: 118
    virtual bool _calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const; // [内部] 计算放置位置。

    // vIndex: 119
    virtual bool _shouldAutoCalculatePlacePos() const; // [内部] 是否应自动计算放置位置。

    // vIndex: 120
    virtual ::InteractionResult _useOn(::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&) const; // [内部] 在方块上使用的核心逻辑。
    // NOLINTEND

public:
    // 成员函数
    // NOLINTBEGIN
    MCAPI Item(::std::string const& nameId, short id); // 构造函数。

    MCAPI bool _dispenseHoneycombItem(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos) const; // [内部] 发射蜜脾的逻辑。

    MCAPI void _helpChangeInventoryItemInPlace(::Actor&,::ItemStack&,::ItemStack&,::ItemAcquisitionMethod) const; // [内部] 辅助函数，在物品栏中原地替换物品。

    MCAPI ::CoordinatorResult _sendTryPlaceBlockEvent(::Block const&,::BlockSource const&,::Actor const&,::BlockPos const&,uchar,::Vec3 const&) const; // [内部] 发送尝试放置方块的事件。

    MCAPI ::Item& addTag(::HashedString const& tag); // 添加一个哈希字符串形式的标签。
    MCAPI ::Item& addTag(::ItemTag const& tag); // 添加一个物品标签。
    MCAPI ::Item& addTags(::std::initializer_list<::std::reference_wrapper<::ItemTag const>> tags); // 添加多个物品标签。
    MCAPI ::std::string buildCategoryDescriptionName() const; // 构建分类的描述名称。
    MCAPI bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const; // 检查在指定游戏版本中是否能在命令中使用。
    MCAPI void clearTags(); // 清除所有标签。
    MCAPI ::std::vector<::CommandName> getCommandNames() const; // 获取此物品的命令名称。
    MCAPI ::std::string getSerializedName() const; // 获取序列化名称 (namespace:name)。
    MCAPI bool hasTag(::HashedString const& tag) const; // 检查是否含有某个标签。
    MCAPI bool isCommandOnly(::BaseGameVersion const& baseGameVersion) const; // 检查在指定游戏版本中是否是命令专属物品。
    MCAPI bool isElytra() const; // 是否是鞘翅。
    MCAPI bool operator==(::Item const& rhs) const; // 等于运算符重载。
    MCAPI void removeDamageValue(::ItemStackBase& stack) const; // 移除物品栈的损伤值。
    MCAPI ::Item& setAllowOffhand(bool offhand); // 设置是否允许放副手。
    MCAPI ::Item& setCreativeGroup(::std::string const& group); // 设置创造模式分组。
    MCAPI void setDamageValue(::ItemStackBase& stack, short newDamage) const; // 设置物品栈的损伤值。
    MCAPI ::Item& setIsGlint(bool glint); // 设置是否默认发光。
    MCAPI ::Item& setMinRequiredBaseGameVersion(::BaseGameVersion const& baseGameVersion); // 设置最低要求游戏版本。
    MCAPI ::Item& setShouldDespawn(bool despawn); // 设置作为掉落物时是否应消失。
    MCAPI ::Item& setStackedByData(bool isStackedByData); // 设置堆叠时是否受数据影响。
    MCAPI bool updateCustomBlockEntityTag(::BlockSource& region, ::ItemStackBase& instance, ::BlockPos const& pos) const; // 更新自定义方块实体的NBT。
    MCAPI ::InteractionResult useOn(::ItemStack&,::Actor&,int,int,int,uchar,::Vec3 const&,::ItemUsedOnEventContext) const; // 在方块上使用物品（顶级入口）。
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN
    MCAPI static bool isElytra(::ItemDescriptor const& itemDescriptor); // 静态方法：通过描述符判断是否为鞘翅。
    MCAPI static bool isElytraBroken(int value); // 静态方法：判断鞘翅是否已损坏。
    MCAPI static bool isSameTypeAndItem(::ItemStackBase const& firstItem, ::ItemStackBase const& secondItem); // 静态方法：比较两个物品栈是否为同一种物品。
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN
    MCAPI static ::std::string const& ICON_DESCRIPTION_PREFIX(); // "item.icon."
    MCAPI static ::std::string const& TAG_DAMAGE(); // "Damage"
    MCAPI static bool const& mGenerateDenyParticleEffect(); // 是否生成拒绝粒子效果。
    // NOLINTEND
public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, short id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tearDown();

    MCAPI ::Item& $setDescriptionId(::std::string const& description);

    MCFOLD ::std::string const& $getDescriptionId() const;

    MCAPI int $getMaxUseDuration(::ItemStack const*) const;

    MCFOLD ::WeakPtr<::BlockLegacy const> const& $getLegacyBlockForRendering() const;

    MCFOLD bool $isMusicDisk() const;

    MCFOLD void $executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const;

    MCFOLD bool $isComponentBased() const;

    MCFOLD bool $isHumanoidArmor() const;

    MCFOLD bool $isBlockPlanterItem() const;

    MCFOLD bool $isBucket() const;

    MCFOLD bool $isCandle() const;

    MCAPI bool $isDamageable() const;

    MCFOLD bool $isDyeable() const;

    MCFOLD bool $isDye() const;

    MCFOLD bool $isFertilizer() const;

    MCFOLD bool $isFood() const;

    MCFOLD bool $isThrowable() const;

    MCFOLD bool $isUseable() const;

    MCFOLD bool $isTrimAllowed() const;

    MCFOLD ::ItemComponent* $getComponent(::HashedString const&) const;

    MCAPI ::IFoodItemComponent* $getFood() const;

    MCAPI ::Item& $setMaxDamage(int maxDamage);

    MCAPI ::Item& $setMaxUseDuration(int maxUseDuration);

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag() const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag);

    MCFOLD ::std::vector<::std::string> $validateFromNetwork(::CompoundTag const&);

    MCFOLD ::BlockShape $getBlockShape() const;

    MCAPI bool $canBeDepleted() const;

    MCFOLD bool $canDestroySpecial(::Block const&) const;

    MCFOLD int $getLevelDataForAuxValue(int) const;

    MCAPI bool $isStackedByData() const;

    MCFOLD short $getMaxDamage() const;

    MCFOLD int $getAttackDamage() const;

    MCFOLD float $getAttackDamageBonus(::Actor const&, float) const;

    MCAPI bool $isHandEquipped() const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;

    MCFOLD bool $isPattern() const;

    MCFOLD int $getPatternIndex() const;

    MCAPI ::Rarity $getBaseRarity() const;

    MCAPI ::Rarity $getRarity(::ItemStackBase const& stack) const;

    MCFOLD bool $showsDurabilityInCreative() const;

    MCFOLD bool $isWearableThroughLootTable(::CompoundTag const*) const;

    MCFOLD bool $canDestroyInCreative() const;

    MCFOLD bool $isDestructive(int) const;

    MCFOLD bool $isLiquidClipItem() const;

    MCFOLD bool $shouldInteractionWithBlockBypassLiquid(::Block const&) const;

    MCFOLD bool $requiresInteract() const;

    MCAPI ::std::string $getHoverTextColor(::ItemStackBase const& stack) const;

    MCAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool                                 showCategory
    ) const;

    MCFOLD bool $isValidRepairItem(::ItemStackBase const&, ::ItemStackBase const&, ::BaseGameVersion const&) const;

    MCFOLD int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCFOLD int $getArmorValue() const;

    MCFOLD int $getToughnessValue() const;

    MCFOLD ::SharedTypes::Legacy::LevelSoundEvent $getBreakSound() const;

    MCFOLD bool $isComplex() const;

    MCFOLD bool $isValidAuxValue(int) const;

    MCAPI int $getDamageChance(int unbreaking) const;

    MCFOLD float $getViewDamping() const;

    MCFOLD bool $uniqueAuxValues() const;

    MCFOLD bool $isActorPlacerItem() const;

    MCFOLD bool $isMultiColorTinted(::ItemStack const&) const;

    MCFOLD ::mce::Color $getColor(::CompoundTag const*, ::ItemDescriptor const&) const;

    MCFOLD bool $hasCustomColor(::ItemStackBase const&) const;

    MCFOLD bool $hasCustomColor(::CompoundTag const*) const;

    MCFOLD void $clearColor(::ItemStackBase&) const;

    MCFOLD void $setColor(::ItemStackBase&, ::mce::Color const&) const;

    MCFOLD ::mce::Color $getBaseColor(::ItemStack const&) const;

    MCFOLD ::mce::Color $getSecondaryColor(::ItemStack const&) const;

    MCAPI ::ActorDefinitionIdentifier $getActorIdentifier(::ItemStack const&) const;

    MCAPI int $buildIdAux(short auxValue, ::CompoundTag const*) const;

    MCFOLD bool $canUseOnSimTick() const;

    MCAPI ::ItemStack& $use(::ItemStack& item, ::Player& player) const;

    MCFOLD ::Actor* $createProjectileActor(::BlockSource&, ::ItemStack const&, ::Vec3 const&, ::Vec3 const&) const;

    MCAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar) const;

    MCAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCFOLD void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCFOLD float $getDestroySpeed(::ItemStackBase const&, ::Block const&) const;

    MCAPI void $hurtActor(::ItemStack& item, ::Actor& actor, ::Mob& attacker) const;

    MCFOLD void $hitActor(::ItemStack&, ::Actor&, ::Mob&) const;

    MCFOLD void $hitBlock(::ItemStack&, ::Block const&, ::BlockPos const&, ::Mob&) const;

    MCAPI ::std::string $buildDescriptionName(::ItemStackBase const& stack) const;

    MCAPI ::Bedrock::Safety::RedactableString const $buildRedactedDescriptionName(::ItemStackBase const& stack) const;

    MCAPI ::std::string $buildDescriptionId(::ItemDescriptor const&, ::CompoundTag const*) const;

    MCAPI ::std::string $buildEffectDescriptionName(::ItemStackBase const& stack) const;

    MCAPI void
    $readUserData(::ItemStackBase& stack, ::IDataInput& input, ::ReadOnlyBinaryStream& underlyingStream) const;

    MCAPI void $writeUserData(::ItemStackBase const& stack, ::IDataOutput& output) const;

    MCFOLD uchar $getMaxStackSize(::ItemDescriptor const&) const;

    MCFOLD bool $inventoryTick(::ItemStack&, ::Level&, ::Actor&, int, bool) const;

    MCFOLD void $refreshedInContainer(::ItemStackBase const&, ::Level&) const;

    MCAPI ::HashedString const& $getCooldownType() const;

    MCAPI int $getCooldownTime() const;

    MCAPI void $fixupCommon(::ItemStackBase& stack) const;

    MCFOLD void $fixupCommon(::ItemStackBase& stack, ::ILevel&) const;

    MCAPI ::InHandUpdateType $getInHandUpdateType(
        ::Player const&,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool const,
        bool const slotChanged
    ) const;

    MCFOLD bool $validFishInteraction(int) const;

    MCFOLD void $enchantProjectile(::ItemStackBase const&, ::Actor&) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getEquipSound() const;

    MCFOLD bool $shouldSendInteractionGameEvents() const;

    MCFOLD bool $useInterruptedByAttacking() const;

    MCFOLD bool $hasSameRelevantUserData(::ItemStackBase const&, ::ItemStackBase const&) const;

    MCFOLD ::Item& $setIconInfo(::std::string const& name, int index);

    MCAPI ::ResolvedItemIconInfo $getIconInfo(::ItemStackBase const& item, int, bool) const;

    MCAPI ::std::string $getInteractText(::Player const& player) const;

    MCFOLD int $getAnimationFrameFor(::Mob*, bool, ::ItemStack const*, bool) const;

    MCAPI bool $isEmissive(int auxValue) const;

    MCFOLD ::Brightness $getLightEmission(int) const;

    MCFOLD bool $canBeCharged() const;

    MCFOLD void $playSoundIncrementally(::ItemStack const&, ::Mob&) const;

    MCAPI float $getFurnaceXPmultiplier(::ItemStackBase const&) const;

    MCAPI bool $calculatePlacePos(::ItemStackBase& instance, ::Actor& entity, uchar& face, ::BlockPos& pos) const;

    MCFOLD bool
    $_checkUseOnPermissions(::Actor& entity, ::ItemStackBase& item, uchar const& face, ::BlockPos const& pos) const;

    MCFOLD bool $_calculatePlacePos(::ItemStackBase&, ::Actor&, uchar&, ::BlockPos&) const;

    MCFOLD bool $_shouldAutoCalculatePlacePos() const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
