/**
 * @file  ItemStack.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ItemStack();
    /**
     * @hash   -426313463
     * @vftbl  1
     * @symbol  ?reinit\@ItemStack\@\@UEAAXAEBVItem\@\@HH\@Z
     */
    virtual void reinit(class Item const &, int, int);
    /**
     * @hash   -843440303
     * @vftbl  2
     * @symbol  ?reinit\@ItemStack\@\@UEAAXAEBVBlockLegacy\@\@H\@Z
     */
    virtual void reinit(class BlockLegacy const &, int);
    /**
     * @hash   945256142
     * @vftbl  3
     * @symbol  ?reinit\@ItemStack\@\@UEAAXV?$basic_string_span\@$$CBD$0?0\@gsl\@\@HH\@Z
     */
    virtual void reinit(class gsl::basic_string_span<char const, -1>, int, int);
    /**
     * @hash   -783605424
     * @vftbl  4
     * @symbol  ?setNull\@ItemStack\@\@UEAAXV?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    virtual void setNull(class std::optional<std::string>);
    /**
     * @hash   -660800879
     * @vftbl  5
     * @symbol  ?toString\@ItemStack\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toString() const;
    /**
     * @hash   -929925490
     * @vftbl  6
     * @symbol  ?toDebugString\@ItemStack\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string toDebugString() const;
    /**
     * @hash   1994018065
     * @symbol  ??0ItemStack\@\@QEAA\@XZ
     */
    MCAPI ItemStack();
    /**
     * @hash   -1501169462
     * @symbol  ??0ItemStack\@\@QEAA\@V?$basic_string_span\@$$CBD$0?0\@gsl\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStack(class gsl::basic_string_span<char const, -1>, int, int, class CompoundTag const *);
    /**
     * @hash   844664472
     * @symbol  ??0ItemStack\@\@QEAA\@AEBVRecipeIngredient\@\@\@Z
     */
    MCAPI ItemStack(class RecipeIngredient const &);
    /**
     * @hash   -2071082618
     * @symbol  ??0ItemStack\@\@QEAA\@AEBVItemInstance\@\@\@Z
     */
    MCAPI ItemStack(class ItemInstance const &);
    /**
     * @hash   -1985626644
     * @symbol  ??0ItemStack\@\@QEAA\@AEBVItem\@\@HHPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStack(class Item const &, int, int, class CompoundTag const *);
    /**
     * @hash   -1893344485
     * @symbol  ??0ItemStack\@\@QEAA\@AEBVBlockLegacy\@\@H\@Z
     */
    MCAPI ItemStack(class BlockLegacy const &, int);
    /**
     * @hash   -2024142573
     * @symbol  ??0ItemStack\@\@QEAA\@AEBVBlock\@\@HPEBVCompoundTag\@\@\@Z
     */
    MCAPI ItemStack(class Block const &, int, class CompoundTag const *);
    /**
     * @hash   1511006465
     * @symbol  ??0ItemStack\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI ItemStack(class ItemStack const &);
    /**
     * @hash   -142740850
     * @symbol  ?_assignNetIdVariant\@ItemStack\@\@QEBAXAEBV1\@\@Z
     */
    MCAPI void _assignNetIdVariant(class ItemStack const &) const;
    /**
     * @hash   596773377
     * @symbol  ?clientInitLegacyRequestId\@ItemStack\@\@QEAAXAEBV?$TypedClientNetId\@UItemStackLegacyRequestIdTag\@\@H$0A\@\@\@\@Z
     */
    MCAPI void clientInitLegacyRequestId(class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const &);
    /**
     * @hash   -549811770
     * @symbol  ?clone\@ItemStack\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemStack clone() const;
    /**
     * @hash   814155021
     * @symbol  ?getDestroySpeed\@ItemStack\@\@QEBAMAEBVBlock\@\@\@Z
     */
    MCAPI float getDestroySpeed(class Block const &) const;
    /**
     * @hash   -615122586
     * @symbol  ?getItemStackNetIdVariant\@ItemStack\@\@QEBAAEBUItemStackNetIdVariant\@\@XZ
     */
    MCAPI struct ItemStackNetIdVariant const & getItemStackNetIdVariant() const;
    /**
     * @hash   -990617358
     * @symbol  ?getMaxUseDuration\@ItemStack\@\@QEBAHXZ
     */
    MCAPI int getMaxUseDuration() const;
    /**
     * @hash   -2139786078
     * @symbol  ?getStrippedNetworkItem\@ItemStack\@\@QEBA?AV1\@XZ
     */
    MCAPI class ItemStack getStrippedNetworkItem() const;
    /**
     * @hash   853897972
     * @symbol  ?hasItemStackNetId\@ItemStack\@\@QEBA_NXZ
     */
    MCAPI bool hasItemStackNetId() const;
    /**
     * @hash   -406357954
     * @symbol  ?inventoryTick\@ItemStack\@\@QEAA_NAEAVLevel\@\@AEAVActor\@\@H_N\@Z
     */
    MCAPI bool inventoryTick(class Level &, class Actor &, int, bool);
    /**
     * @hash   -1220516089
     * @symbol  ?matchesAndNetIdVariantMatches\@ItemStack\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const &) const;
    /**
     * @hash   -2064954981
     * @symbol  ?matchesNetIdVariant\@ItemStack\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool matchesNetIdVariant(class ItemStack const &) const;
    /**
     * @hash   -1896836003
     * @symbol  ?mineBlock\@ItemStack\@\@QEAAXAEBVBlock\@\@HHHPEAVMob\@\@\@Z
     */
    MCAPI void mineBlock(class Block const &, int, int, int, class Mob *);
    /**
     * @hash   -899715092
     * @symbol  ??4ItemStack\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemStack & operator=(class ItemStack const &);
    /**
     * @hash   -97294850
     * @symbol  ?playSoundIncrementally\@ItemStack\@\@QEBAXAEAVMob\@\@\@Z
     */
    MCAPI void playSoundIncrementally(class Mob &) const;
    /**
     * @hash   -952281834
     * @symbol  ?releaseUsing\@ItemStack\@\@QEAAXPEAVPlayer\@\@H\@Z
     */
    MCAPI void releaseUsing(class Player *, int);
    /**
     * @hash   271463649
     * @symbol  ?sameItemAndAuxAndBlockData\@ItemStack\@\@QEBA_NAEBV1\@\@Z
     */
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const &) const;
    /**
     * @hash   -1973079617
     * @symbol  ?serverInitNetId\@ItemStack\@\@QEAAXXZ
     */
    MCAPI void serverInitNetId();
    /**
     * @hash   1188026860
     * @symbol  ?tryGetItemStackNetId\@ItemStack\@\@QEBAPEBV?$TypedServerNetId\@UItemStackNetIdTag\@\@H$0A\@\@\@XZ
     */
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const * tryGetItemStackNetId() const;
    /**
     * @hash   1050275285
     * @symbol  ?use\@ItemStack\@\@QEAAAEAV1\@AEAVPlayer\@\@\@Z
     */
    MCAPI class ItemStack & use(class Player &);
    /**
     * @hash   2035652563
     * @symbol  ?useAsFuel\@ItemStack\@\@QEAAXXZ
     */
    MCAPI void useAsFuel();
    /**
     * @hash   1318356943
     * @symbol  ?useOn\@ItemStack\@\@QEAA_NAEAVActor\@\@HHHEAEBVVec3\@\@\@Z
     */
    MCAPI bool useOn(class Actor &, int, int, int, unsigned char, class Vec3 const &);
    /**
     * @hash   1780398624
     * @symbol  ?useTimeDepleted\@ItemStack\@\@QEAA?AW4ItemUseMethod\@\@PEAVLevel\@\@PEAVPlayer\@\@\@Z
     */
    MCAPI enum class ItemUseMethod useTimeDepleted(class Level *, class Player *);
    /**
     * @hash   357201269
     * @symbol  ?EMPTY_ITEM\@ItemStack\@\@2V1\@B
     */
    MCAPI static class ItemStack const EMPTY_ITEM;
    /**
     * @hash   903531697
     * @symbol  ?fromDescriptor\@ItemStack\@\@SA?AV1\@AEBVNetworkItemStackDescriptor\@\@AEAVBlockPalette\@\@_N\@Z
     */
    MCAPI static class ItemStack fromDescriptor(class NetworkItemStackDescriptor const &, class BlockPalette &, bool);
    /**
     * @hash   -1806069201
     * @symbol  ?fromTag\@ItemStack\@\@SA?AV1\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &);
    /**
     * @hash   -730068002
     * @symbol  ?fromTag\@ItemStack\@\@SA?AV1\@AEBVCompoundTag\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static class ItemStack fromTag(class CompoundTag const &, class Level &);

};