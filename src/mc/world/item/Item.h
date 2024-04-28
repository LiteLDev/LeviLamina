#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/WeakPtr.h"
#include "mc/deps/puv/UseAnimation.h"
#include "mc/entity/utilities/ActorLocation.h"
#include "mc/enums/CreativeItemCategory.h"
#include "mc/enums/InHandUpdateType.h"
#include "mc/events/LevelSoundEvent.h"
#include "mc/events/NotifyItemUsedOnEvent.h"
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
        MCAPI ScopedCreativeGroup(std::string const& groupName, class ItemInstance const& iconInstance);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVBlock@@PEBVCompoundTag@@@Z
        MCAPI
        ScopedCreativeGroup(std::string const& groupName, class Block const* block, class CompoundTag const* userData);

        // symbol:
        // ??0ScopedCreativeGroup@Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV1@FPEBVCompoundTag@@@Z
        MCAPI ScopedCreativeGroup(
            std::string const&       groupName,
            class Item*              item,
            short                    auxValue,
            class CompoundTag const* userData
        );

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
    virtual class Item& setDescriptionId(std::string const& description);

    // vIndex: 4, symbol:
    // ?getDescriptionId@Item@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getDescriptionId() const;

    // vIndex: 5, symbol: ?getMaxUseDuration@Item@@UEBAHPEBVItemStack@@@Z
    virtual int getMaxUseDuration(class ItemStack const* instance) const;

    // vIndex: 6, symbol: ?isMusicDisk@Item@@UEBA_NXZ
    virtual bool isMusicDisk() const;

    // vIndex: 7, symbol:
    // ?executeEvent@Item@@UEBAXAEAVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVRenderParams@@@Z
    virtual void executeEvent(class ItemStackBase& item, std::string const& name, class RenderParams& params) const;

    // vIndex: 8, symbol: ?isComponentBased@Item@@UEBA_NXZ
    virtual bool isComponentBased() const;

    // vIndex: 9, symbol: ?isArmor@Item@@UEBA_NXZ
    virtual bool isArmor() const;

    // vIndex: 10, symbol: ?isBlockPlanterItem@Item@@UEBA_NXZ
    virtual bool isBlockPlanterItem() const;

    // vIndex: 11, symbol: ?isBucket@Item@@UEBA_NXZ
    virtual bool isBucket() const;

    // vIndex: 12, symbol: ?isCandle@Item@@UEBA_NXZ
    virtual bool isCandle() const;

    // vIndex: 13, symbol: ?isDamageable@Item@@UEBA_NXZ
    virtual bool isDamageable() const;

    // vIndex: 14, symbol: ?isDyeable@Item@@UEBA_NXZ
    virtual bool isDyeable() const;

    // vIndex: 15, symbol: ?isDye@Item@@UEBA_NXZ
    virtual bool isDye() const;

    // vIndex: 16, symbol: ?getItemColor@Item@@UEBA?AW4ItemColor@@XZ
    virtual ::ItemColor getItemColor() const;

    // vIndex: 17, symbol: ?isFertilizer@Item@@UEBA_NXZ
    virtual bool isFertilizer() const;

    // vIndex: 18, symbol: ?isFood@Item@@UEBA_NXZ
    virtual bool isFood() const;

    // vIndex: 19, symbol: ?isThrowable@Item@@UEBA_NXZ
    virtual bool isThrowable() const;

    // vIndex: 20, symbol: ?isUseable@Item@@UEBA_NXZ
    virtual bool isUseable() const;

    // vIndex: 21, symbol: ?isTrimAllowed@Item@@UEBA_NXZ
    virtual bool isTrimAllowed() const;

    // vIndex: 22, symbol: ?getComponent@Item@@UEBAPEAVItemComponent@@AEBVHashedString@@@Z
    virtual class ItemComponent* getComponent(class HashedString const&) const;

    // vIndex: 23, symbol: ?getFood@Item@@UEBAPEAVIFoodItemComponent@@XZ
    virtual class IFoodItemComponent* getFood() const;

    // vIndex: 24, symbol: ?setMaxDamage@Item@@UEAAAEAV1@H@Z
    virtual class Item& setMaxDamage(int maxDamage);

    // vIndex: 25, symbol: ?setMaxUseDuration@Item@@UEAAAEAV1@H@Z
    virtual class Item& setMaxUseDuration(int maxUseDuration);

    // vIndex: 26, symbol:
    // ?buildNetworkTag@Item@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;

    // vIndex: 27, symbol: ?initializeFromNetwork@Item@@UEAAXAEBVCompoundTag@@@Z
    virtual void initializeFromNetwork(class CompoundTag const& tag);

    // vIndex: 28, symbol:
    // ?validateFromNetwork@Item@@UEAA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVCompoundTag@@@Z
    virtual std::vector<std::string> validateFromNetwork(class CompoundTag const&);

    // vIndex: 29, symbol: ?getBlockShape@Item@@UEBA?AW4BlockShape@@XZ
    virtual ::BlockShape getBlockShape() const;

    // vIndex: 30, symbol: ?canBeDepleted@Item@@UEBA_NXZ
    virtual bool canBeDepleted() const;

    // vIndex: 31, symbol: ?canDestroySpecial@Item@@UEBA_NAEBVBlock@@@Z
    virtual bool canDestroySpecial(class Block const& block) const;

    // vIndex: 32, symbol: ?getLevelDataForAuxValue@Item@@UEBAHH@Z
    virtual int getLevelDataForAuxValue(int auxValue) const;

    // vIndex: 33, symbol: ?isStackedByData@Item@@UEBA_NXZ
    virtual bool isStackedByData() const;

    // vIndex: 34, symbol: ?getMaxDamage@Item@@UEBAFXZ
    virtual short getMaxDamage() const;

    // vIndex: 35, symbol: ?getAttackDamage@Item@@UEBAHXZ
    virtual int getAttackDamage() const;

    // vIndex: 36, symbol: ?getAttackDamageBonus@Item@@UEBAMAEBVActor@@M@Z
    virtual float getAttackDamageBonus(class Actor const&, float) const;

    // vIndex: 37, symbol: ?isHandEquipped@Item@@UEBA_NXZ
    virtual bool isHandEquipped() const;

    // vIndex: 38, symbol: ?isGlint@Item@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 39, symbol: ?isPattern@Item@@UEBA_NXZ
    virtual bool isPattern() const;

    // vIndex: 40, symbol: ?getPatternIndex@Item@@UEBAHXZ
    virtual int getPatternIndex() const;

    // vIndex: 41, symbol: ?showsDurabilityInCreative@Item@@UEBA_NXZ
    virtual bool showsDurabilityInCreative() const;

    // vIndex: 42, symbol: ?isWearableThroughLootTable@Item@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool isWearableThroughLootTable(class CompoundTag const* userData) const;

    // vIndex: 43, symbol: ?canDestroyInCreative@Item@@UEBA_NXZ
    virtual bool canDestroyInCreative() const;

    // vIndex: 44, symbol: ?isDestructive@Item@@UEBA_NH@Z
    virtual bool isDestructive(int auxValue) const;

    // vIndex: 45, symbol: ?isLiquidClipItem@Item@@UEBA_NXZ
    virtual bool isLiquidClipItem() const;

    // vIndex: 46, symbol: ?shouldInteractionWithBlockBypassLiquid@Item@@UEBA_NAEBVBlock@@@Z
    virtual bool shouldInteractionWithBlockBypassLiquid(class Block const& block) const;

    // vIndex: 47, symbol: ?requiresInteract@Item@@UEBA_NXZ
    virtual bool requiresInteract() const;

    // vIndex: 48, symbol:
    // ?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 49, symbol: ?isValidRepairItem@Item@@UEBA_NAEBVItemStackBase@@0AEBVBaseGameVersion@@@Z
    virtual bool isValidRepairItem(
        class ItemStackBase const&   source,
        class ItemStackBase const&   repairItem,
        class BaseGameVersion const& baseGameVersion
    ) const;

    // vIndex: 50, symbol: ?getEnchantSlot@Item@@UEBAHXZ
    virtual int getEnchantSlot() const;

    // vIndex: 51, symbol: ?getEnchantValue@Item@@UEBAHXZ
    virtual int getEnchantValue() const;

    // vIndex: 52, symbol: ?getArmorValue@Item@@UEBAHXZ
    virtual int getArmorValue() const;

    // vIndex: 53, symbol: ?getToughnessValue@Item@@UEBAHXZ
    virtual int getToughnessValue() const;

    // vIndex: 54, symbol: ?getBreakSound@Item@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getBreakSound() const;

    // vIndex: 55, symbol: ?isComplex@Item@@UEBA_NXZ
    virtual bool isComplex() const;

    // vIndex: 56, symbol: ?isValidAuxValue@Item@@UEBA_NH@Z
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 57, symbol: ?getDamageChance@Item@@UEBAHH@Z
    virtual int getDamageChance(int unbreaking) const;

    // vIndex: 58, symbol: ?getViewDamping@Item@@UEBAMXZ
    virtual float getViewDamping() const;

    // vIndex: 59, symbol: ?uniqueAuxValues@Item@@UEBA_NXZ
    virtual bool uniqueAuxValues() const;

    // vIndex: 60, symbol: ?isActorPlacerItem@Item@@UEBA_NXZ
    virtual bool isActorPlacerItem() const;

    // vIndex: 61, symbol: ?isMultiColorTinted@Item@@UEBA_NAEBVItemStack@@@Z
    virtual bool isMultiColorTinted(class ItemStack const& instance) const;

    // vIndex: 62, symbol: ?getColor@Item@@UEBA?AVColor@mce@@PEBVCompoundTag@@AEBVItemDescriptor@@@Z
    virtual class mce::Color getColor(class CompoundTag const* userData, class ItemDescriptor const& instance) const;

    // vIndex: 63, symbol: ?hasCustomColor@Item@@UEBA_NAEBVItemStackBase@@@Z
    virtual bool hasCustomColor(class ItemStackBase const& instance) const;

    // vIndex: 64, symbol: ?hasCustomColor@Item@@UEBA_NPEBVCompoundTag@@@Z
    virtual bool hasCustomColor(class CompoundTag const* userData) const;

    // vIndex: 65, symbol: ?clearColor@Item@@UEBAXAEAVItemStackBase@@@Z
    virtual void clearColor(class ItemStackBase& instance) const;

    // vIndex: 66, symbol: ?setColor@Item@@UEBAXAEAVItemStackBase@@AEBVColor@mce@@@Z
    virtual void setColor(class ItemStackBase& instance, class mce::Color const& color) const;

    // vIndex: 67, symbol: ?getBaseColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    virtual class mce::Color getBaseColor(class ItemStack const& instance) const;

    // vIndex: 68, symbol: ?getSecondaryColor@Item@@UEBA?AVColor@mce@@AEBVItemStack@@@Z
    virtual class mce::Color getSecondaryColor(class ItemStack const& instance) const;

    // vIndex: 69, symbol: ?getActorIdentifier@Item@@UEBA?AUActorDefinitionIdentifier@@AEBVItemStack@@@Z
    virtual struct ActorDefinitionIdentifier getActorIdentifier(class ItemStack const&) const;

    // vIndex: 70, symbol: ?buildIdAux@Item@@UEBAHFPEBVCompoundTag@@@Z
    virtual int buildIdAux(short auxValue, class CompoundTag const*) const;

    // vIndex: 71, symbol: ?canUseOnSimTick@Item@@UEBA_NXZ
    virtual bool canUseOnSimTick() const;

    // vIndex: 72, symbol: ?use@Item@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 73, symbol: ?dispense@Item@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 74, symbol: ?useTimeDepleted@Item@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
    virtual ::ItemUseMethod
    useTimeDepleted(class ItemStack& inoutInstance, class Level* level, class Player* player) const;

    // vIndex: 75, symbol: ?releaseUsing@Item@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
    virtual void releaseUsing(class ItemStack& item, class Player* player, int durationLeft) const;

    // vIndex: 76, symbol: ?getDestroySpeed@Item@@UEBAMAEBVItemStackBase@@AEBVBlock@@@Z
    virtual float getDestroySpeed(class ItemStackBase const& item, class Block const& block) const;

    // vIndex: 77, symbol: ?hurtActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hurtActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 78, symbol: ?hitActor@Item@@UEBAXAEAVItemStack@@AEAVActor@@AEAVMob@@@Z
    virtual void hitActor(class ItemStack& item, class Actor& actor, class Mob& attacker) const;

    // vIndex: 79, symbol: ?hitBlock@Item@@UEBAXAEAVItemStack@@AEBVBlock@@AEBVBlockPos@@AEAVMob@@@Z
    virtual void
    hitBlock(class ItemStack& instance, class Block const& block, class BlockPos const& blockPos, class Mob& attacker)
        const;

    // vIndex: 80, symbol: ?mineBlock@Item@@UEBA_NAEAVItemStack@@AEBVBlock@@HHHPEAVActor@@@Z
    virtual bool
    mineBlock(class ItemStack& instance, class Block const& block, int x, int y, int z, class Actor* owner) const;

    // vIndex: 81, symbol:
    // ?buildDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildDescriptionName(class ItemStackBase const&) const;

    // vIndex: 82, symbol:
    // ?buildDescriptionId@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    // vIndex: 83, symbol:
    // ?buildEffectDescriptionName@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemStackBase@@@Z
    virtual std::string buildEffectDescriptionName(class ItemStackBase const&) const;

    // vIndex: 84, symbol: ?readUserData@Item@@UEBAXAEAVItemStackBase@@AEAVIDataInput@@AEAVReadOnlyBinaryStream@@@Z
    virtual void
    readUserData(class ItemStackBase& stack, class IDataInput& input, class ReadOnlyBinaryStream& underlyingStream)
        const;

    // vIndex: 85, symbol: ?writeUserData@Item@@UEBAXAEBVItemStackBase@@AEAVIDataOutput@@@Z
    virtual void writeUserData(class ItemStackBase const& stack, class IDataOutput& output) const;

    // vIndex: 86, symbol: ?getMaxStackSize@Item@@UEBAEAEBVItemDescriptor@@@Z
    virtual uchar getMaxStackSize(class ItemDescriptor const& item) const;

    // vIndex: 87, symbol: ?inventoryTick@Item@@UEBA_NAEAVItemStack@@AEAVLevel@@AEAVActor@@H_N@Z
    virtual bool
    inventoryTick(class ItemStack& item, class Level& level, class Actor& owner, int slot, bool selected) const;

    // vIndex: 88, symbol: ?refreshedInContainer@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@@Z
    virtual void refreshedInContainer(class ItemStackBase const& stack, class Level& level) const;

    // vIndex: 89, symbol: ?getCooldownType@Item@@UEBAAEBVHashedString@@XZ
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 90, symbol: ?getCooldownTime@Item@@UEBAHXZ
    virtual int getCooldownTime() const;

    // vIndex: 91, symbol: ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@@Z
    virtual void fixupCommon(class ItemStackBase& stack) const;

    // vIndex: 92, symbol: ?fixupCommon@Item@@UEBAXAEAVItemStackBase@@AEAVLevel@@@Z
    virtual void fixupCommon(class ItemStackBase& stack, class Level& level) const;

    // vIndex: 93, symbol: ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemInstance@@1_N2@Z
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&,
        class ItemInstance const& oldItem,
        class ItemInstance const& newItem,
        bool,
        bool slotChanged
    ) const;

    // vIndex: 94, symbol: ?getInHandUpdateType@Item@@UEBA?AW4InHandUpdateType@@AEBVPlayer@@AEBVItemStack@@1_N2@Z
    virtual ::InHandUpdateType getInHandUpdateType(
        class Player const&,
        class ItemStack const& oldItem,
        class ItemStack const& newItem,
        bool,
        bool slotChanged
    ) const;

    // vIndex: 95, symbol: ?validFishInteraction@Item@@UEBA_NH@Z
    virtual bool validFishInteraction(int auxValue) const;

    // vIndex: 96, symbol: ?enchantProjectile@Item@@UEBAXAEBVItemStackBase@@AEAVActor@@@Z
    virtual void enchantProjectile(class ItemStackBase const&, class Actor& projectile) const;

    // vIndex: 97, symbol: ?getEquipLocation@Item@@UEBA?AW4ActorLocation@@XZ
    virtual ::ActorLocation getEquipLocation() const;

    // vIndex: 98, symbol: ?getEquipSound@Item@@UEBA?AW4LevelSoundEvent@Legacy@Puv@@XZ
    virtual ::Puv::Legacy::LevelSoundEvent getEquipSound() const;

    // vIndex: 99, symbol: ?shouldSendInteractionGameEvents@Item@@UEBA_NXZ
    virtual bool shouldSendInteractionGameEvents() const;

    // vIndex: 100, symbol: ?useInterruptedByAttacking@Item@@UEBA_NXZ
    virtual bool useInterruptedByAttacking() const;

    // vIndex: 101, symbol: ?hasSameRelevantUserData@Item@@UEBA_NAEBVItemStackBase@@0@Z
    virtual bool hasSameRelevantUserData(class ItemStackBase const&, class ItemStackBase const&) const;

    // vIndex: 102, symbol: ?initClient@Item@@UEAAXAEAVValue@Json@@AEBVSemVersion@@_NAEBVExperiments@@@Z
    virtual void initClient(class Json::Value&, class SemVersion const&, bool, class Experiments const&);

    // vIndex: 103, symbol:
    // ?setIconInfo@Item@@UEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual class Item& setIconInfo(std::string const& name, int index);

    // vIndex: 104, symbol: ?getIconInfo@Item@@UEBA?AUResolvedItemIconInfo@@AEBVItemStackBase@@H_N@Z
    virtual struct ResolvedItemIconInfo getIconInfo(class ItemStackBase const&, int, bool) const;

    // vIndex: 105, symbol:
    // ?getInteractText@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
    virtual std::string getInteractText(class Player const&) const;

    // vIndex: 106, symbol: ?getAnimationFrameFor@Item@@UEBAHPEAVMob@@_NPEBVItemStack@@1@Z
    virtual int
    getAnimationFrameFor(class Mob* holder, bool asItemEntity, class ItemStack const* item, bool shouldAnimate) const;

    // vIndex: 107, symbol: ?isEmissive@Item@@UEBA_NH@Z
    virtual bool isEmissive(int auxValue) const;

    // vIndex: 108, symbol: ?getLightEmission@Item@@UEBA?AUBrightness@@H@Z
    virtual struct Brightness getLightEmission(int auxValue) const;

    // vIndex: 109, symbol: ?getIconYOffset@Item@@UEBAHXZ
    virtual int getIconYOffset() const;

    // vIndex: 110, symbol: ?canBeCharged@Item@@UEBA_NXZ
    virtual bool canBeCharged() const;

    // vIndex: 111, symbol: ?playSoundIncrementally@Item@@UEBAXAEBVItemStack@@AEAVMob@@@Z
    virtual void playSoundIncrementally(class ItemStack const& item, class Mob& mob) const;

    // vIndex: 112, symbol: ?getFurnaceXPmultiplier@Item@@UEBAMAEBVItemStackBase@@@Z
    virtual float getFurnaceXPmultiplier(class ItemStackBase const& instance) const;

    // vIndex: 113, symbol:
    // ?getAuxValuesDescription@Item@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getAuxValuesDescription() const;

    // vIndex: 114, symbol: ?calculatePlacePos@Item@@UEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 115, symbol: ?_checkUseOnPermissions@Item@@EEBA_NAEAVActor@@AEAVItemStackBase@@AEBEAEBVBlockPos@@@Z
    virtual bool
    _checkUseOnPermissions(class Actor& entity, class ItemStackBase& item, uchar const& face, class BlockPos const& pos)
        const;

    // vIndex: 116, symbol: ?_calculatePlacePos@Item@@EEBA_NAEAVItemStackBase@@AEAVActor@@AEAEAEAVBlockPos@@@Z
    virtual bool
    _calculatePlacePos(class ItemStackBase& instance, class Actor& entity, uchar& face, class BlockPos& pos) const;

    // vIndex: 117, symbol: ?_shouldAutoCalculatePlacePos@Item@@EEBA_NXZ
    virtual bool _shouldAutoCalculatePlacePos() const;

    // vIndex: 118, symbol: ?_useOn@Item@@EEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
    virtual class InteractionResult
    _useOn(class ItemStack& instance, class Actor& entity, class BlockPos pos, uchar face, class Vec3 const& clickPos)
        const;

    // symbol: ??0Item@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@F@Z
    MCAPI Item(std::string const& nameId, short id);

    // symbol: ?addOnResetBAIcallback@Item@@QEAAXAEBV?$function@$$A6AXXZ@std@@@Z
    MCAPI void addOnResetBAIcallback(std::function<void()> const& callback);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBVHashedString@@@Z
    MCAPI class Item& addTag(class HashedString const& tag);

    // symbol: ?addTag@Item@@QEAAAEAV1@AEBUItemTag@@@Z
    MCAPI class Item& addTag(struct ItemTag const& tag);

    // symbol: ?addTags@Item@@QEAAAEAV1@V?$initializer_list@V?$reference_wrapper@$$CBUItemTag@@@std@@@std@@@Z
    MCAPI class Item& addTags(std::initializer_list<std::reference_wrapper<struct ItemTag const>> tags);

    // symbol:
    // ?buildCategoryDescriptionName@Item@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string buildCategoryDescriptionName() const;

    // symbol: ?buildDescriptor@Item@@QEBA?AVItemDescriptor@@FPEBVCompoundTag@@@Z
    MCAPI class ItemDescriptor buildDescriptor(short auxValue, class CompoundTag const*) const;

    // symbol: ?canBeUsedInCommands@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // symbol: ?destroySpeedBonus@Item@@QEBAMAEBVItemStackBase@@@Z
    MCAPI float destroySpeedBonus(class ItemStackBase const& inst) const;

    // symbol: ?getCamera@Item@@QEBAPEAVICameraItemComponent@@XZ
    MCAPI class ICameraItemComponent* getCamera() const;

    // symbol: ?getCommandNames@Item@@QEBA?AV?$vector@UCommandName@@V?$allocator@UCommandName@@@std@@@std@@XZ
    MCAPI std::vector<struct CommandName> getCommandNames() const;

    // symbol: ?getCreativeCategory@Item@@QEBA?AW4CreativeItemCategory@@XZ
    MCAPI ::CreativeItemCategory getCreativeCategory() const;

    // symbol: ?getCreativeGroup@Item@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCreativeGroup() const;

    // symbol: ?getDamageValue@Item@@QEBAFPEBVCompoundTag@@@Z
    MCAPI short getDamageValue(class CompoundTag const* userData) const;

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

    // symbol: ?getLegacyBlock@Item@@QEBAAEBV?$WeakPtr@$$CBVBlockLegacy@@@@XZ
    MCAPI class WeakPtr<class BlockLegacy const> const& getLegacyBlock() const;

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

    // symbol: ?hasTag@Item@@QEBA_NAEBVHashedString@@@Z
    MCAPI bool hasTag(class HashedString const& tag) const;

    // symbol: ?hasTag@Item@@QEBA_NAEBUItemTag@@@Z
    MCAPI bool hasTag(struct ItemTag const& tag) const;

    // symbol: ?isCommandOnly@Item@@QEBA_NAEBVBaseGameVersion@@@Z
    MCAPI bool isCommandOnly(class BaseGameVersion const& baseGameVersion) const;

    // symbol: ?isElytra@Item@@QEBA_NXZ
    MCAPI bool isElytra() const;

    // symbol: ?isNameTag@Item@@QEBA_NXZ
    MCAPI bool isNameTag() const;

    // symbol: ?isSeed@Item@@QEBA_NXZ
    MCAPI bool isSeed() const;

    // symbol: ??8Item@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class Item const& rhs) const;

    // symbol: ?setAllowOffhand@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setAllowOffhand(bool offhand);

    // symbol: ?setCategory@Item@@QEAAAEAV1@W4CreativeItemCategory@@@Z
    MCAPI class Item& setCategory(::CreativeItemCategory creativeCategory);

    // symbol: ?setCreativeGroup@Item@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Item& setCreativeGroup(std::string const& group);

    // symbol: ?setDamageValue@Item@@QEBAXAEAVItemStackBase@@F@Z
    MCAPI void setDamageValue(class ItemStackBase& stack, short newDamage) const;

    // symbol: ?setExplodable@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setExplodable(bool boom);

    // symbol: ?setFireResistant@Item@@QEAAAEAV1@_N@Z
    MCAPI class Item& setFireResistant(bool);

    // symbol: ?setFurnaceBurnIntervalMultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceBurnIntervalMultiplier(float multiplier);

    // symbol: ?setFurnaceXPmultiplier@Item@@QEAAAEAV1@M@Z
    MCAPI class Item& setFurnaceXPmultiplier(float multiplier);

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

    // symbol:
    // ?useOn@Item@@QEBA?AVInteractionResult@@AEAVItemStack@@AEAVActor@@HHHEAEBVVec3@@W4NotifyItemUsedOnEvent@@@Z
    MCAPI class InteractionResult
    useOn(class ItemStack&, class Actor&, int, int, int, uchar, class Vec3 const&, ::NotifyItemUsedOnEvent) const;

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVBlock@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class Block const& block);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemInstance@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemInstance const& itemInstance);

    // symbol: ?addCreativeItem@Item@@SAXVItemRegistryRef@@AEBVItemStack@@@Z
    MCAPI static void addCreativeItem(class ItemRegistryRef, class ItemStack const& itemInstance);

    // symbol: ?addLooseCreativeItems@Item@@SAX_NAEBVBaseGameVersion@@VItemRegistryRef@@@Z
    MCAPI static void
    addLooseCreativeItems(bool isClient, class BaseGameVersion const& worldVersion, class ItemRegistryRef);

    // symbol: ?endCreativeItemDefinitions@Item@@SAX_N@Z
    MCAPI static void endCreativeItemDefinitions(bool isClient);

    // symbol: ?isElytra@Item@@SA_NAEBVItemDescriptor@@@Z
    MCAPI static bool isElytra(class ItemDescriptor const& itemDescriptor);

    // symbol: ?isElytraBroken@Item@@SA_NH@Z
    MCAPI static bool isElytraBroken(int value);

    // symbol: ?isFlyEnabled@Item@@SA_NAEBVItemInstance@@@Z
    MCAPI static bool isFlyEnabled(class ItemInstance const& item);

    // symbol: ?isSameTypeAndItem@Item@@SA_NAEBVItemStackBase@@0@Z
    MCAPI static bool isSameTypeAndItem(class ItemStackBase const&, class ItemStackBase const&);

    // symbol: ?startCreativeItemDefinitions@Item@@SAX_NPEAVCreativeItemRegistry@@@Z
    MCAPI static void startCreativeItemDefinitions(bool isClient, class CreativeItemRegistry* creativeItemRegistry);

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

    // symbol:
    // ?_sendTryPlaceBlockEvent@Item@@IEBA?AW4CoordinatorResult@@AEBVBlock@@AEBVBlockSource@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@@Z
    MCAPI ::CoordinatorResult
    _sendTryPlaceBlockEvent(class Block const&, class BlockSource const&, class Actor const&, class BlockPos const&, uchar, class Vec3 const&)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dispenseHoneycombItem@Item@@AEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@@Z
    MCAPI bool
    _dispenseHoneycombItem(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos)
        const;

    // symbol: ?_addLooseCreativeItemsClient@Item@@CAXXZ
    MCAPI static void _addLooseCreativeItemsClient();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mServerItemsUsedInCreativeItems@Item@@0V?$unique_ptr@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@U?$default_delete@V?$set@FU?$less@F@std@@V?$allocator@F@2@@std@@@2@@std@@A
    MCAPI static std::unique_ptr<std::set<short>> mServerItemsUsedInCreativeItems;

    // NOLINTEND
};
