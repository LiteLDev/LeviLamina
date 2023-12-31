#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/deps/puv/UseAnimation.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/world/item/components/ItemAcquisitionMethod.h"
#include "mc/world/item/components/ItemColor.h"
#include "mc/world/item/components/ItemUseMethod.h"
#include "mc/world/level/block/utils/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Item {
public:
    // Item inner types declare
    // clang-format off
    class ScopedCreativeGroup;
    class Tier;
    // clang-format on

    // Item inner types define
    class ScopedCreativeGroup {
    public:
        // prevent constructor by default
        ScopedCreativeGroup& operator=(ScopedCreativeGroup const&);
        ScopedCreativeGroup(ScopedCreativeGroup const&);
        ScopedCreativeGroup();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemInstance@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class ItemInstance const&);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBlock@@PEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, class Block const*, class CompoundTag const*);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@FFPEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(std::string const&, short, short, class CompoundTag const*);

        // symbol: ??1ScopedCreativeGroup@Item@@QEAA@XZ
        MCAPI ~ScopedCreativeGroup();

        // NOLINTEND
    };

    class Tier {
    public:
        // prevent constructor by default
        Tier& operator=(Tier const&);
        Tier(Tier const&);
        Tier();

    public:
        // NOLINTBEGIN
        // symbol: ??0Tier@Item@@QEAA@HHMHH@Z
        MCAPI Tier(int level, int uses, float speed, int damage, int enchant);

        // symbol: ?getAttackDamageBonus@Tier@Item@@QEBAHXZ
        MCAPI int getAttackDamageBonus() const;

        // symbol: ?getEnchantmentValue@Tier@Item@@QEBAHXZ
        MCAPI int getEnchantmentValue() const;

        // symbol: ?getLevel@Tier@Item@@QEBAHXZ
        MCAPI int getLevel() const;

        // symbol: ?getSpeed@Tier@Item@@QEBAMXZ
        MCAPI float getSpeed() const;

        // symbol: ?getUses@Tier@Item@@QEBAHXZ
        MCAPI int getUses() const;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Item& operator=(Item const&);
    Item(Item const&);
    Item();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Item@@UEAA@XZ
    virtual ~Item();

    // vIndex: 1, symbol: ?initServer@Item@@UEAA_NAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual bool initServer(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 2, symbol: ?tearDown@Item@@UEAAXXZ
    virtual void tearDown();

    // vIndex: 3, symbol:
    // ?setDescriptionId@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual class Item& setDescriptionId(std::string const&);

    // vIndex: 4, symbol:
    // ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getDescriptionId() const;

    // vIndex: 5, symbol: ?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z
    virtual int getMaxUseDuration(class ItemStack const* instance) const;

    // vIndex: 6, symbol: ?isMusicDisk@Item@@UEBA_NXZ
    virtual bool isMusicDisk() const;

    // vIndex: 7, symbol:
    // ?executeEvent@Item@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase&, std::string const&, class RenderParams&) const;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: ?isArmor@Item@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 10, symbol: ?isBlockPlanterItem@Item@@UEBA_NXZ
    virtual bool isBlockPlanterItem() const;

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: ?isDamageable@Item@@UEBA_NXZ
    virtual bool isDamageable() const;

    // vIndex: 14, symbol: ?isDyeable@Item@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 15, symbol: ?isDye@Item@@UEBA_NXZ
    virtual bool isDye() const;

    // vIndex: 16, symbol: ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
    virtual ::ItemColor getItemColor() const;

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: ?isFood@Item@@UEBA_NXZ
    virtual bool isFood() const;

    // vIndex: 19, symbol: ?isThrowable@Item@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 20, symbol: ?isUseable@Item@@UEBA_NXZ
    virtual bool isUseable() const;

    // vIndex: 21, symbol: ?getComponent@Item@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
    virtual class ItemComponent* getComponent(class HashedString const&) const;

    // vIndex: 22, symbol: ?getFood@Item@@UEBAPEAVIFoodItemComponent@@XZ
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 23, symbol: ?setMaxDamage@Item@@UEAAAEAV1@H@Z
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 24, symbol: ?setMaxUseDuration@Item@@UEAAAEAV1@H@Z
    virtual class Item& setMaxUseDuration(int maxUseDuration);

    // vIndex: 25, symbol:
    // ?buildNetworkTag@Item@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 26, symbol: ?initializeFromNetwork@Item@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const&);

    // vIndex: 27, symbol:
    // ?validateFromNetwork@Item@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&);

    // vIndex: 28, symbol: ?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 29, symbol: ?canBeDepleted@Item@@UEBA_NXZ
    virtual bool canBeDepleted() const;

    // vIndex: 30, symbol: ?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 31, symbol: ?getLevelDataForAuxValue@Item@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 32, symbol: ?isStackedByData@Item@@UEBA_NXZ
    virtual bool isStackedByData() const;

    // vIndex: 33, symbol: ?getMaxDamage@Item@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 34, symbol: ?getAttackDamage@Item@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 35, symbol: ?isHandEquipped@Item@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 36, symbol: ?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: ?getPatternIndex@Item@@UEBAHXZ
    virtual int getPatternIndex() const;

    // vIndex: 39, symbol: __unk_vfn_39
    virtual void __unk_vfn_39();

    // vIndex: 40, symbol: ?isWearableThroughLootTable@Item@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool isWearableThroughLootTable(class CompoundTag const*) const;

    // vIndex: 41, symbol: ?canDestroyInCreative@Item@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 42, symbol: ?isDestructive@Item@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 43, symbol: ?isLiquidClipItem@Item@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 44, symbol: ?shouldInteractionWithBlockBypassLiquid@Item@@UEBA_NAEBVBlock@@@Z
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const&) const;

    // vIndex: 45, symbol: ?requiresInteract@Item@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 46, symbol:
    // ?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 47, symbol: ?isValidRepairItem@Item@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool
    isValidRepairItem(class ItemStackBase const&, class ItemStackBase const&, class BaseGameVersion const&) const;

    // vIndex: 48, symbol: ?getEnchantSlot@Item@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 49, symbol: ?getEnchantValue@Item@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 50, symbol: ?getArmorValue@Item@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 51, symbol: ?getToughnessValue@Item@@UEBAHXZ
    virtual int getToughnessValue() const;

    // vIndex: 52, symbol: __unk_vfn_52
    virtual void __unk_vfn_52();

    // vIndex: 53, symbol: ?isValidAuxValue@Item@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 54, symbol: ?getDamageChance@Item@@UEBAHH@Z
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 55, symbol: ?getViewDamping@Item@@UEBAMXZ
    virtual float getViewDamping() const;

    // vIndex: 56, symbol: __unk_vfn_56
    virtual void __unk_vfn_56();

    // vIndex: 57, symbol: __unk_vfn_57
    virtual void __unk_vfn_57();

    // vIndex: 58, symbol: __unk_vfn_58
    virtual void __unk_vfn_58();

    // vIndex: 59, symbol: ?getColor@Item@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const*, class ItemDescriptor const&) const;

    // vIndex: 60, symbol: ?hasCustomColor@Item@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const*) const;

    // vIndex: 61, symbol: __unk_vfn_61
    virtual void __unk_vfn_61();

    // vIndex: 62, symbol: ?clearColor@Item@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase&) const;

    // vIndex: 63, symbol: ?clearColor@Item@@UEBAXPEAVCompoundTag@@@Z
    virtual void clearColor(class CompoundTag*) const;

    // vIndex: 64, symbol: ?setColor@Item@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase&, class mce::Color const&) const;

    // vIndex: 65, symbol: __unk_vfn_65
    virtual void __unk_vfn_65();

    // vIndex: 66, symbol: __unk_vfn_66
    virtual void __unk_vfn_66();

    // vIndex: 67, symbol: ?getActorIdentifier@Item@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;

    // vIndex: 68, symbol: ?buildIdAux@Item@@UEBAHFPEBVCompoundTag@@@Z
    virtual int buildIdAux(short, class CompoundTag const*) const;

    // vIndex: 69, symbol: ?canUseOnSimTick@Item@@UEBA_NXZ
    virtual bool canUseOnSimTick() const;

    // vIndex: 70, symbol: ?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& itemStack, class Player& player) const;

    // vIndex: 71, symbol: ?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 72, symbol: ?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 73, symbol: ?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& itemStack, class Player* player, int durationLeft) const;

    // vIndex: 74, symbol: ?getDestroySpeed@Item@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& itemStack, class Block const& block) const;

    // vIndex: 75, symbol: ?hurtActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 76, symbol: ?hitActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hitActor(class ItemStack&, class Actor&, class Mob&) const;

    // vIndex: 77, symbol: ?hitBlock@Item@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
    virtual void hitBlock(class ItemStack&, class Block const&, class BlockPos const&, class Mob&) const;

    // vIndex: 78, symbol: ?mineBlock@Item@@UEBA_NAEAVItemInstance@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemInstance& instance, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 79, symbol: ?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& instance, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 80, symbol:
    // ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 82, symbol:
    // ?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 83, symbol: ?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
    virtual void
    readUserData(class ItemStackBase& stack, class IDataInput& input, class ReadOnlyBinaryStream& underlyingStream)
        const;

    // vIndex: 84, symbol: ?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
    virtual void writeUserData(class ItemStackBase const& stack, class IDataOutput& output) const;

    // vIndex: 85, symbol: ?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const& item) const;

    // vIndex: 86, symbol: ?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& itemStack, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 87, symbol: ?refreshedInContainer@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
    virtual void refreshedInContainer(class ItemStackBase const& stack, class Level& level) const;

    // vIndex: 88, symbol: ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 89, symbol: ?getCooldownTime@Item@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 90, symbol: ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase&) const;

    // vIndex: 91, symbol: ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    virtual void fixupCommon(class ItemStackBase&, class Level&) const;

    // vIndex: 92, symbol: ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&       player,
        class ItemInstance const& oldItem,
        class ItemInstance const& newItem,
        bool,
        bool
    ) const;

    // vIndex: 93, symbol: ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&    player,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool,
        bool
    ) const;

    // vIndex: 94, symbol: ?validFishInteraction@Item@@UEBA_NH@Z
    virtual bool validFishInteraction(int) const;

    // vIndex: 95, symbol: ?enchantProjectile@Item@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
    virtual void enchantProjectile(class ItemStackBase const&, class Actor&) const;

    // vIndex: 96, symbol: ?getEquipLocation@Item@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 97, symbol: ?getEquipSound@Item@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 98, symbol: __unk_vfn_98
    virtual void __unk_vfn_98();

    // vIndex: 99, symbol: __unk_vfn_99
    virtual void __unk_vfn_99();

    // vIndex: 100, symbol: ?hasSameRelevantUserData@Item@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const;

    // vIndex: 101, symbol: ?initClient@Item@@UEAAXAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 102, symbol:
    // ?setIconInfo@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const&, int);

    // vIndex: 103, symbol: ?getIconInfo@Item@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 104, symbol:
    // ?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 105, symbol: ?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@_N@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 106, symbol: ?isEmissive@Item@@UEBA_NH@Z
    virtual bool isEmissive(int data) const;

    // vIndex: 107, symbol: ?getLightEmission@Item@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int) const;

    // vIndex: 108, symbol: ?getIconYOffset@Item@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 109, symbol: ?canBeCharged@Item@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // vIndex: 110, symbol: ?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z
    virtual void playSoundIncrementally(class ItemStack const& itemStack, class Mob& mob) const;

    // vIndex: 111, symbol: ?getFurnaceXPmultiplier@Item@@UEBAMAEBVItemStackBase@@@Z
    virtual float getFurnaceXPmultiplier(class ItemStackBase const&) const;

    // vIndex: 112, symbol:
    // ?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 113, symbol: ?calculatePlacePos@Item@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool calculatePlacePos(class ItemStackBase&, class Actor&, uchar&, class BlockPos&) const;

    // vIndex: 114, symbol: ?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 115, symbol: ?_calculatePlacePos@Item@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 116, symbol: ?_shouldAutoCalculatePlacePos@Item@@EEBA_NXZ
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 117, symbol: ?_useOn@Item@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack&, class Actor&, class BlockPos, uchar, class Vec3 const&) const;

    // symbol: ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    MCVAPI class mce::Color getBaseColor(class ItemStack const& instance) const;

    // symbol: ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    MCVAPI class mce::Color getSecondaryColor(class ItemStack const& instance) const;

    // symbol: ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
    MCVAPI bool hasCustomColor(class ItemStackBase const&) const;

    // symbol: ?isActorPlacerItem@Item@@UEBA_NXZ
    MCVAPI bool isActorPlacerItem() const;

    // symbol: ?isBucket@Item@@UEBA_NXZ
    MCVAPI bool isBucket() const;

    // symbol: ?isCandle@Item@@UEBA_NXZ
    MCVAPI bool isCandle() const;

    // symbol: ?isComplex@Item@@UEBA_NXZ
    MCVAPI bool isComplex() const;

    // symbol: ?isComponentBased@Item@@UEBA_NXZ
    MCVAPI bool isComponentBased() const;

    // symbol: ?isFertilizer@Item@@UEBA_NXZ
    MCVAPI bool isFertilizer() const;

    // symbol: ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
    MCVAPI bool isMultiColorTinted(class ItemStack const& instance) const;

    // symbol: ?isPattern@Item@@UEBA_NXZ
    MCVAPI bool isPattern() const;

    // symbol: ?shouldSendInteractionGameEvents@Item@@UEBA_NXZ
    MCVAPI bool shouldSendInteractionGameEvents() const;

    // symbol: ?showsDurabilityInCreative@Item@@UEBA_NXZ
    MCVAPI bool showsDurabilityInCreative() const;

    // symbol: ?uniqueAuxValues@Item@@UEBA_NXZ
    MCVAPI bool uniqueAuxValues() const;

    // symbol: ?useInterruptedByAttacking@Item@@UEBA_NXZ
    MCVAPI bool useInterruptedByAttacking() const;

    // symbol: ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI Item(std::string const& nameId, short id);

    // symbol: ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
    MCAPI void addOnResetBAIcallback(std::function<void(void)> const& callback);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class Item& addTag(class HashedString const&);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
    MCAPI class Item& addTag(struct ItemTag const&);

    // symbol: ?addTags@Item@@QEAAAEAV1@V?$initializer_list@V?$reference_wrapper@$$CBUItemTag@@@std@@@std@@@Z
    MCAPI class Item& addTags(std::initializer_list<std::reference_wrapper<struct ItemTag const>>);

    // symbol: ?allowOffhand@Item@@QEBA_NXZ
    MCAPI bool allowOffhand() const;

    // symbol:
    // ?buildCategoryDescriptionName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string buildCategoryDescriptionName() const;

    // symbol: ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
    MCAPI class ItemDescriptor buildDescriptor(short, class CompoundTag const*) const;

    // symbol: ?canBeUsedInCommands@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // symbol: ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
    MCAPI float destroySpeedBonus(class ItemStackBase const&) const;

    // symbol: ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void fixupOnLoad(class ItemStackBase& stack) const;

    // symbol: ?fixupOnLoad@Item@@QEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    MCAPI void fixupOnLoad(class ItemStackBase& stack, class Level& level) const;

    // symbol: ?getCamera@Item@@QEBAPEAVICameraItemComponent@@XZ
    MCAPI class ICameraItemComponent* getCamera() const;

    // symbol: ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    // symbol: ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCreativeGroup() const;

    // symbol: ?getDamageValue@Item@@QEBAFPEBVCompoundTag@@@Z
    MCAPI short getDamageValue(class CompoundTag const*) const;

    // symbol: ?getFrameCount@Item@@QEBAHXZ
    MCAPI int getFrameCount() const;

    // symbol: ?getFullItemName@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFullItemName() const;

    // symbol: ?getFullNameHash@Item@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getFullNameHash() const;

    // symbol: ?getFurnaceBurnIntervalMultipler@Item@@QEBAMXZ
    MCAPI float getFurnaceBurnIntervalMultipler() const;

    // symbol: ?getId@Item@@QEBAFXZ
    MCAPI short getId() const;

    // symbol: ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@VBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy> const& getLegacyBlock() const;

    // symbol: ?getNamespace@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNamespace() const;

    // symbol: ?getRawNameHash@Item@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getRawNameHash() const;

    // symbol: ?getRawNameId@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getRawNameId() const;

    // symbol: ?getRequiredBaseGameVersion@Item@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;

    // symbol: ?getSerializedName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getSerializedName() const;

    // symbol: ?getUseAnimation@Item@@QEBA?AW4UseAnimation@Legacy@Puv@@XZ
    MCAPI ::Puv::Legacy::UseAnimation getUseAnimation() const;

    // symbol: ?hasDamageValue@Item@@QEBA_NPEBVCompoundTag@@@Z
    MCAPI bool hasDamageValue(class CompoundTag const*) const;

    // symbol: ?hasTag@Item@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasTag(class HashedString const&) const;

    // symbol: ?hasTag@Item@@QEBA_NAEBUItemTag@@@Z
    MCAPI bool hasTag(struct ItemTag const&) const;

    // symbol: ?hasTag@Item@@QEBA_NAEB_K@Z
    MCAPI bool hasTag(uint64 const&) const;

    // symbol: ?isCommandOnly@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool isCommandOnly(class BaseGameVersion const&) const;

    // symbol: ?isElytra@Item@@QEBA_NXZ
    MCAPI bool isElytra() const;

    // symbol: ?isExplodable@Item@@QEBA_NXZ
    MCAPI bool isExplodable() const;

    // symbol: ?isFireResistant@Item@@QEBA_NXZ
    MCAPI bool isFireResistant() const;

    // symbol: ?isNameTag@Item@@QEBA_NXZ
    MCAPI bool isNameTag() const;

    // symbol: ?isSeed@Item@@QEBA_NXZ
    MCAPI bool isSeed() const;

    // symbol: ??8Item@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Item const&) const;

    // symbol: ?removeDamageValue@Item@@QEBAXAEAVItemStackBase@@@Z
    MCAPI void removeDamageValue(class ItemStackBase&) const;

    // symbol: ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setAllowOffhand(bool offhand);

    // symbol: ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class Item& setCategory(::CreativeItemCategory creativeCategory);

    // symbol: ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Item& setCreativeGroup(std::string const&);

    // symbol: ?setDamageValue@Item@@QEBAXAEAVItemStackBase@@F@Z
    MCAPI void setDamageValue(class ItemStackBase& stack, short newDamage) const;

    // symbol: ?setExplodable@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setExplodable(bool boom);

    // symbol: ?setFireResistant@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setFireResistant(bool);

    // symbol: ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float);

    // symbol: ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceXPmultiplier(float);

    // symbol: ?setHandEquipped@Item@@QEAAAEAV1@XZ
    MCAPI class Item& setHandEquipped();

    // symbol: ?setHoverTextColorFormat@Item@@QEAAXAEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void setHoverTextColorFormat(std::string_view const&);

    // symbol: ?setIsGlint@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setIsGlint(bool glint);

    // symbol: ?setIsMirroredArt@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setIsMirroredArt(bool val);

    // symbol: ?setMaxStackSize@Item@@QEAAAEAV1@E@Z
    MCAPI class Item& setMaxStackSize(uchar max);

    // symbol: ?setMinRequiredBaseGameVersion@Item@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class Item& setMinRequiredBaseGameVersion(class BaseGameVersion const& baseGameVersion);

    // symbol: ?setRequiresWorldBuilder@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setRequiresWorldBuilder(bool value);

    // symbol: ?setShouldDespawn@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setShouldDespawn(bool despawn);

    // symbol: ?setStackedByData@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setStackedByData(bool isStackedByData);

    // symbol: ?setUseAnimation@Item@@QEAAAEAV1@W4UseAnimation@Legacy@Puv@@@Z
    MCAPI class Item& setUseAnimation(::Puv::Legacy::UseAnimation);

    // symbol: ?shouldDespawn@Item@@QEBA_NXZ
    MCAPI bool shouldDespawn() const;

    // symbol: ?updateCustomBlockEntityTag@Item@@QEBA_NAEAVBlockSource@@AEAVItemStackBase@@AEBVBlockPos@@@Z
    MCAPI bool
    updateCustomBlockEntityTag(class BlockSource& region, class ItemStackBase& instance, class BlockPos const& pos)
        const;

    // symbol: ?useOn@Item@@QEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@@Z
    MCAPI class InteractionResult useOn(class ItemStack&, class Actor&, int, int, int, uchar, class Vec3 const&) const;

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVBlock@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const&);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemInstance@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const&);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemStack@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const&);

    // symbol: ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@VItemRegistryRef@@@Z
    MCAPI static void addLooseCreativeItems(bool, class BaseGameVersion const&, class ItemRegistryRef);

    // symbol: ?endCreativeItemDefinitions@Item@@SAX_N@Z
    MCAPI static void endCreativeItemDefinitions(bool);

    // symbol: ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isElytra(class ItemDescriptor const&);

    // symbol: ?isElytraBroken@Item@@SA_NH@Z
    MCAPI static bool isElytraBroken(int);

    // symbol: ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
    MCAPI static bool isFlyEnabled(class ItemInstance const&);

    // symbol: ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);

    // symbol: ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
    MCAPI static void startCreativeItemDefinitions(bool, class CreativeItemRegistry*);

    // symbol: ?toBlockId@Item@@SA?AUNewBlockID@@F@Z
    MCAPI static struct NewBlockID toBlockId(short itemId);

    // symbol: ?ICON_DESCRIPTION_PREFIX@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const ICON_DESCRIPTION_PREFIX;

    // symbol: ?TAG_DAMAGE@Item@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const TAG_DAMAGE;

    // symbol: ?mActiveCreativeGroupInfo@Item@@2PEAVCreativeGroupInfo@@EA
    MCAPI static class CreativeGroupInfo* mActiveCreativeGroupInfo;

    // symbol: ?mActiveCreativeItemCategory@Item@@2PEAVCreativeItemGroupCategory@@EA
    MCAPI static class CreativeItemGroupCategory* mActiveCreativeItemCategory;

    // symbol: ?mActiveCreativeItemRegistry@Item@@2PEAVCreativeItemRegistry@@EA
    MCAPI static class CreativeItemRegistry* mActiveCreativeItemRegistry;

    // symbol: ?mGenerateDenyParticleEffect@Item@@2_NB
    MCAPI static bool const mGenerateDenyParticleEffect;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_helpChangeInventoryItemInPlace@Item@@IEBAXAEAVActor@@AEAVItemStack@@1W4ItemAcquisitionMethod@@@Z
    MCAPI void _helpChangeInventoryItemInPlace(
        class Actor&            actor,
        class ItemStack&        startingItem,
        class ItemStack&        replacementItem,
        ::ItemAcquisitionMethod acquisitionMethod
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dispenseHoneycombItem@Item@@AEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@@Z
    MCAPI bool _dispenseHoneycombItem(class BlockSource&, class Container&, int, class Vec3 const&) const;

    // symbol: ?_addLooseCreativeItemsClient@Item@@CAXXZ
    MCAPI static void _addLooseCreativeItemsClient();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mServerItemsUsedInCreativeItems@Item@@0V?$unique_ptr@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@U?$default_delete@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@@2@@std@@A
    MCAPI static std::unique_ptr<std::set<short>> mServerItemsUsedInCreativeItems;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mServerItemsUsedInCreativeItems() { return mServerItemsUsedInCreativeItems; }

    // NOLINTEND
};
