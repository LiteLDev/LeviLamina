#pragma once

#include <chrono>
#include <memory>
#include <string>
#include <vector>

#include "../Core/NBT.h"
#include "../Core/json.h"
#include "../Level/Tick.h"
#include "../dll.h"
#include "ItemStackNetIdVariant.h"

#include <loader/Loader.h>

class Item;
class Block;
class BlockLegacy;
class CompoundTag;
class IDataOutput;
class IDataInput;
class ItemInstance;
class ItemEnchants;

class ItemStackBase {
public:
    static std::string const TAG_LORE;
    static std::string const TAG_DISPLAY;
    static std::string const TAG_ENCHANTS;
    static std::string const TAG_CAN_DESTROY;
    static std::string const TAG_REPAIR_COST;
    static std::string const TAG_CAN_PLACE_ON;
    static std::string const TAG_DISPLAY_NAME;

protected:
    static std::string const TAG_CHARGED_ITEM;
    static std::string const TAG_STORE_CAN_DESTROY;
    static std::string const TAG_STORE_CAN_PLACE_ON;

public:
    Item*                                 item{};
    CompoundTag*                          tag;
    uint64_t                              block_state{};
    uint16_t                              aux_value{};
    unsigned char                         count{};
    bool                                  flag35{};
    std::chrono::steady_clock::time_point create_time{};
    bool                                  flag48{};
    std::vector<BlockLegacy*>             blv56;
    uint64_t                              unk80{};
    std::vector<BlockLegacy*>             blv88;
    uint64_t                              unk112{};
    Tick                                  blocking_tick;
    std::unique_ptr<ItemInstance>         instance;

    MCAPI virtual ~ItemStackBase();

    MCAPI bool isNull(void) const;
    MCAPI bool isBlock(void) const;
    MCAPI bool isDamaged(void) const;
    MCAPI bool isEnchanted(void) const;
    MCAPI bool isPotionItem(void) const;
    MCAPI bool isExperimental(void) const;
    MCAPI bool isWearableItem(void) const;
    MCAPI bool isStackedByData(void) const;
    MCAPI bool isHorseArmorItem(void) const;
    MCAPI bool isStackable(class ItemStackBase const&) const;

    MCAPI virtual std::string toString(void) const;

    MCAPI short                getId(void) const;
    MCAPI int                  getIdAux(void) const;
    MCAPI class Item const*    getItem(void) const;
    MCAPI short                getAuxValue(void) const;
    MCAPI class ItemDescriptor getDescriptor(void) const;
    MCAPI unsigned char        getMaxStackSize(void) const;
    MCAPI class ItemEnchants   constructItemEnchantsFromUserData(void) const;
    MCAPI std::string getName(void) const;
    MCAPI std::string getHoverName(void) const;
    MCAPI std::string getRawNameId(void) const;
    MCAPI std::string getCustomName(void) const;
    MCAPI std::string getDescriptionId(void) const;
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData(void) const;

    MCAPI bool hasCustomHoverName(void) const;
    MCAPI bool hasSameAuxValue(class ItemStackBase const&) const;
    MCAPI bool hasSameUserData(class ItemStackBase const&) const;

    MCAPI void set(int);
    MCAPI void setNull(void);
    MCAPI void setChargedItem(class ItemInstance const&, bool);
    MCAPI void setCustomName(std::string const&);
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);
    MCAPI void setCustomLore(std::vector<std::string> const&);

    MCAPI void saveEnchantsToUserData(class ItemEnchants const&);
    MCAPI void addCustomUserData(class BlockActor&, class BlockSource&);

    MCAPI bool hasComponent(std::string const&) const;
    MCAPI bool addComponents(class Json::Value const&, std::string&);
    MCAPI bool updateComponent(std::string const&, class Json::Value const&);

    MCAPI void serializeComponents(class IDataOutput&) const;
    MCAPI void deserializeComponents(class IDataInput&);

    MCAPI std::unique_ptr<class CompoundTag> save(void) const;

    MCAPI bool sameItem(int, int) const;
    MCAPI bool matches(class ItemStackBase const&) const;
    MCAPI void setRepairCost(int);
    MCAPI void clearChargedItem(void);
    MCAPI bool matchesItem(class ItemStackBase const&) const;
    MCAPI bool sameItemAndAux(class ItemStackBase const&) const;
    MCAPI void _write(class BinaryStream&) const;
    MCAPI void hurtAndBreak(int, class Actor*);
    MCAPI void _read(class ReadOnlyBinaryStream&);

    inline unsigned char getStackSize() const {
        return count;
    }
    //AS_FIELD(short, Id, getId);
    //AS_FIELD(short, Aux, getAuxValue);
    //AS_FIELD(int, IdAux, getIdAux);
    //AS_FIELD(std::string, Name, getName);
    //AS_FIELD(std::string, HoverName, getHoverName);
    //AS_FIELD(std::string, RawNameId, getRawNameId);
    //AS_FIELD(std::string, DescriptionId, getDescriptionId);
    //DEF_FIELD_RW(std::string, CustomName);

    inline std::vector<std::string> getCustomLore() const {
        std::vector<std::string> ret;
        if (tag && tag->contains(TAG_DISPLAY, Tag::Compound)) {
            auto disp = tag->getCompound(TAG_DISPLAY);
            if (disp->contains(TAG_LORE, Tag::List)) {
                auto list = disp->getList(TAG_LORE);
                for (auto& item : list->value)
                    ret.emplace_back(static_cast<StringTag*>(item.get())->value);
            }
        }
        return ret;
    }

    //DEF_FIELD_RW(std::vector<std::string>, CustomLore);

    MCAPI bool operator!=(ItemStackBase const& rhs) const;
    MCAPI      operator bool() const;

protected:
    virtual void reinit(Item const&, int, int) = 0;
    MCAPI        ItemStackBase();
    MCAPI        ItemStackBase(Item const& item);
    MCAPI        ItemStackBase(Item const& ite, int);
    MCAPI        ItemStackBase(Item const& ite, int, int);
    MCAPI        ItemStackBase(Item const& ite, int, int, CompoundTag const*);
    MCAPI        ItemStackBase(BlockLegacy const&, int);
    MCAPI        ItemStackBase(Block const&, int, CompoundTag const*);
    MCAPI        ItemStackBase(ItemStackBase const& rhs);
    MCAPI ItemStackBase& operator=(ItemStackBase const& rhs);

public:
    virtual void reinit(BlockLegacy const&, int) = 0;
};
class ItemStack : public ItemStackBase {
public:
    ItemStackNetIdVariant var_id;

    MCAPI static ItemStack const EMPTY_ITEM;

    MCAPI ItemStack();
    ItemStack(Item const& item)
        : ItemStackBase(item) {
    }
    MCAPI ItemStack(Item const&, int);
    ItemStack(Item const& item, int a, int b)
        : ItemStackBase(item, a, b) {
    }
    ItemStack(Item const& item, int a, int b, CompoundTag const* tag)
        : ItemStackBase(item, a, b, tag) {
    }
    ItemStack(BlockLegacy const& block, int a)
        : ItemStackBase(block, a) {
    }
    ItemStack(Block const& block, int a, CompoundTag const* tag)
        : ItemStackBase(block, a, tag) {
    }
    ItemStack(ItemStack const& rhs)
        : ItemStackBase(rhs) {
    }
    MCAPI ~ItemStack();
    MCAPI static ItemStack fromTag(CompoundTag const&);
    MCAPI void             reinit(Item const&, int, int);
    MCAPI void             reinit(BlockLegacy const&, int);
};
static_assert(offsetof(ItemStackBase, tag) == 16);
static_assert(sizeof(ItemStackBase) == 136);
static_assert(sizeof(ItemStack) == 144);