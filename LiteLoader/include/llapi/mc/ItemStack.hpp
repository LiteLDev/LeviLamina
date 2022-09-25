/**
 * @file  ItemStack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "ItemStackNetIdVariant.hpp"
#include "I18n.hpp"
#include "PropertiesSettings.hpp"
class Tag;
class ItemActor;
class CompoundTag;
class ItemInstance;

#undef BEFORE_EXTRA

/**
 * @brief The item stack
 * 
 * @par An item stack is a set of identical items that can be picked up with the pointer at a time.
 */
class ItemStack : public ItemStackBase {

#define AFTER_EXTRA
// Add new members to class
    ItemStackNetIdVariant mNetId;

public:
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create();
    
    /**
     * @brief Create an item stack.
     * 
     * @param type The identifier of the items
     * @param count The number of the items
     * @return A pointer to the item stack
     * 
     * @note To prevent memory leakage, the item stack created should be released.
     */
    LIAPI static ItemStack* create(std::string type, int count = 1);

    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(std::unique_ptr<CompoundTag> tag);
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(short itemId, int aux,int count = 1);
    LIAPI ItemStack* clone_s() const;
    LIAPI static ItemStack fromItemInstance(ItemInstance const& ins);

    LIAPI std::string getTypeName() const;
    LIAPI int getAux() const;
    LIAPI int getCount() const;

    LIAPI bool setItem(ItemStack* newItem);
    LIAPI bool setLore(const std::vector<std::string>& lores);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    LIAPI string getStandardName(const Localization& language);

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ItemStack();
    /**
     * @hash   -1284094375
     * @vftbl  1
     * @symbol ?reinit@ItemStack@@UEAAXAEBVItem@@HH@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @hash   -1701205839
     * @vftbl  2
     * @symbol ?reinit@ItemStack@@UEAAXAEBVBlockLegacy@@H@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @hash   87459854
     * @vftbl  3
     * @symbol ?reinit@ItemStack@@UEAAXV?$basic_string_span@$$CBD$0?0@gsl@@HH@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   756915227
     * @vftbl  4
     * @symbol ?setNull@ItemStack@@UEAAXXZ
     */
    virtual void setNull();
    /**
     * @hash   -1518720175
     * @vftbl  5
     * @symbol ?toString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -1787844786
     * @vftbl  6
     * @symbol ?toDebugString@ItemStack@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string toDebugString() const;
    /**
     * @hash   1136298657
     * @symbol ??0ItemStack@@QEAA@XZ
     */
    MCAPI ItemStack();
    /**
     * @hash   1936078426
     * @symbol ??0ItemStack@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemStack(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @hash   -13054936
     * @symbol ??0ItemStack@@QEAA@AEBVRecipeIngredient@@@Z
     */
    MCAPI ItemStack(class RecipeIngredient const &);
    /**
     * @hash   1366165270
     * @symbol ??0ItemStack@@QEAA@AEBVItemInstance@@@Z
     */
    MCAPI ItemStack(class ItemInstance const &);
    /**
     * @hash   1451621244
     * @symbol ??0ItemStack@@QEAA@AEBVItem@@HHPEBVCompoundTag@@@Z
     */
    MCAPI ItemStack(class Item const &, int, int, class CompoundTag const *);
    /**
     * @hash   1543718891
     * @symbol ??0ItemStack@@QEAA@AEBVBlockLegacy@@H@Z
     */
    MCAPI ItemStack(class BlockLegacy const &, int);
    /**
     * @hash   1412920803
     * @symbol ??0ItemStack@@QEAA@AEBVBlock@@HPEBVCompoundTag@@@Z
     */
    MCAPI ItemStack(class Block const &, int, class CompoundTag const *);
    /**
     * @hash   653102545
     * @symbol ??0ItemStack@@QEAA@AEBV0@@Z
     */
    MCAPI ItemStack(class ItemStack const &);
    /**
     * @hash   -1000460258
     * @symbol ?_assignNetIdVariant@ItemStack@@QEBAXAEBV1@@Z
     */
    MCAPI void _assignNetIdVariant(class ItemStack const &) const;
    /**
     * @hash   -260946031
     * @symbol ?clientInitLegacyRequestId@ItemStack@@QEAAXAEBV?$TypedClientNetId@UItemStackLegacyRequestIdTag@@H$0A@@@@Z
     */
    MCAPI void clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @hash   -1407531178
     * @symbol ?clone@ItemStack@@QEBA?AV1@XZ
     */
    MCAPI class ItemStack clone() const;
    /**
     * @hash   -43564387
     * @symbol ?getDestroySpeed@ItemStack@@QEBAMAEBVBlock@@@Z
     */
    MCAPI float getDestroySpeed(class Block const &) const;
    /**
     * @hash   -745557194
     * @symbol ?getItemStackNetIdVariant@ItemStack@@QEBAAEBUItemStackNetIdVariant@@XZ
     */
    MCAPI struct ItemStackNetIdVariant const & getItemStackNetIdVariant() const;
    /**
     * @hash   -1848336766
     * @symbol ?getMaxUseDuration@ItemStack@@QEBAHXZ
     */
    MCAPI int getMaxUseDuration() const;
    /**
     * @hash   1297446434
     * @symbol ?getStrippedNetworkItem@ItemStack@@QEBA?AV1@XZ
     */
    MCAPI class ItemStack getStrippedNetworkItem() const;
    /**
     * @hash   -3852188
     * @symbol ?hasItemStackNetId@ItemStack@@QEBA_NXZ
     */
    MCAPI bool hasItemStackNetId() const;
    /**
     * @hash   -1264108114
     * @symbol ?inventoryTick@ItemStack@@QEAA_NAEAVLevel@@AEAVActor@@H_N@Z
     */
    MCAPI bool inventoryTick(class Level &, class Actor &, int, bool);
    /**
     * @hash   -2078266249
     * @symbol ?matchesAndNetIdVariantMatches@ItemStack@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const &) const;
    /**
     * @hash   1372262155
     * @symbol ?matchesNetIdVariant@ItemStack@@QEBA_NAEBV1@@Z
     */
    MCAPI bool matchesNetIdVariant(class ItemStack const &) const;
    /**
     * @hash   1540381133
     * @symbol ?mineBlock@ItemStack@@QEAAXAEBVBlock@@HHHPEAVMob@@@Z
     */
    MCAPI void mineBlock(class Block const &, int, int, int, class Mob *);
    /**
     * @hash   -1757434500
     * @symbol ??4ItemStack@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ItemStack & operator=(class ItemStack const &);
    /**
     * @hash   -955045010
     * @symbol ?playSoundIncrementally@ItemStack@@QEBAXAEAVMob@@@Z
     */
    MCAPI void playSoundIncrementally(class Mob &) const;
    /**
     * @hash   -1810078122
     * @symbol ?releaseUsing@ItemStack@@QEAAXPEAVPlayer@@H@Z
     */
    MCAPI void releaseUsing(class Player *, int);
    /**
     * @hash   -586348015
     * @symbol ?sameItemAndAuxAndBlockData@ItemStack@@QEBA_NAEBV1@@Z
     */
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const &) const;
    /**
     * @hash   1464076015
     * @symbol ?serverInitNetId@ItemStack@@QEAAXXZ
     */
    MCAPI void serverInitNetId();
    /**
     * @hash   330107564
     * @symbol ?tryGetItemStackNetId@ItemStack@@QEBAPEBV?$TypedServerNetId@UItemStackNetIdTag@@H$0A@@@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetItemStackNetId() const;
    /**
     * @hash   192355989
     * @symbol ?use@ItemStack@@QEAAAEAV1@AEAVPlayer@@@Z
     */
    MCAPI class ItemStack & use(class Player &);
    /**
     * @hash   1177717891
     * @symbol ?useAsFuel@ItemStack@@QEAAXXZ
     */
    MCAPI void useAsFuel();
    /**
     * @hash   460422271
     * @symbol ?useOn@ItemStack@@QEAA_NAEAVActor@@HHHEAEBVVec3@@@Z
     */
    MCAPI bool useOn(class Actor &, int, int, int, unsigned char, class Vec3 const &);
    /**
     * @hash   922448576
     * @symbol ?useTimeDepleted@ItemStack@@QEAA?AW4ItemUseMethod@@PEAVLevel@@PEAVPlayer@@@Z
     */
    MCAPI enum ItemUseMethod useTimeDepleted(class Level *, class Player *);
    /**
     * @hash   -539680811
     * @symbol ?EMPTY_ITEM@ItemStack@@2V1@B
     */
    MCAPI static class ItemStack const EMPTY_ITEM;
    /**
     * @hash   45812289
     * @symbol ?fromDescriptor@ItemStack@@SA?AV1@AEBVNetworkItemStackDescriptor@@AEAVBlockPalette@@_N@Z
     */
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const &, class BlockPalette &, bool);
    /**
     * @hash   1631178687
     * @symbol ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &);
    /**
     * @hash   -1587787410
     * @symbol ?fromTag@ItemStack@@SA?AV1@AEBVCompoundTag@@AEAVLevel@@@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &, class Level &);

};