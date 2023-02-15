#include <string>
#include <utility>
#include <vector>

#include "llapi/Global.h"
#include "llapi/memory/Hook.h"
#include "llapi/mc/Item.hpp"
#include "llapi/mc/ItemStack.hpp"
#include "llapi/mc/Spawner.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/ItemInstance.hpp"
#include "llapi/mc/I18n.hpp"
#include "llapi/mc/PropertiesSettings.hpp"
#include "llapi/mc/CompoundTag.hpp"

using namespace std;
using ll::memory::dAccess;

static_assert(sizeof(ItemStack) == 160);
static_assert(sizeof(ItemInstance) == 136);

ItemStack* ItemStack::create() {
    try {
        return new ItemStack();
    } catch (...) {
        return nullptr;
    }
}

ItemStack* ItemStack::create(std::unique_ptr<CompoundTag> tag) {
    ItemStack* item = create();
    if (!item)
        return nullptr;
    tag->setItemStack(item);
    return item;
}

#include "llapi/mc/ItemRegistryRef.hpp"
#include "llapi/mc/ItemRegistryManager.hpp"
ItemStack* ItemStack::create(short itemId, int aux, int count) {
    auto item = ItemRegistryManager::getItemRegistry().getItem(itemId);
    if (item)
        return new ItemStack(*item, count, aux, 0);
    return nullptr;
}

ItemStack* ItemStack::create(std::string type, int count) {
    auto nbt = CompoundTag::create();
    nbt->putByte("WasPickedUp", 0);
    nbt->putShort("Damage", 0);
    nbt->putString("Name", std::move(type));
    nbt->putByte("Count", count);
    return create(std::move(nbt));
}

ItemStack ItemStack::fromItemInstance(ItemInstance const& ins) {
    try {
        return {ins};
    } catch (...) {
        return ItemStack::EMPTY_ITEM;
    }
}

ItemStack* ItemStack::clone_s() const {
    ItemStack* a = ItemStack::create();
    *a           = clone();
    return a;
}

std::string ItemStack::getTypeName() const {
    if (isNull())
        return "";
    return getItem()->getSerializedName();
}

int ItemStack::getAux() const {
    if (this->isNull())
        return 0;
    return getAuxValue();
}

int ItemStack::getCount() const {
    if (this->isNull())
        return 0;
    return dAccess<unsigned char, 34>(this);
}

bool ItemStack::setItem(ItemStack* newItem) {
    auto nbt = CompoundTag::fromItemStack(newItem);
    nbt->setItemStack(this);
    return true;
}

bool ItemStack::setLore(const vector<string>& lores) {
    if (this->isNull())
        return false;
    this->setCustomLore(lores);
    return true;
}

std::unique_ptr<CompoundTag> ItemStack::getNbt() { return CompoundTag::fromItemStack(this); }

bool ItemStack::setNbt(CompoundTag* nbt) {
    nbt->setItemStack(this);
    return true;
}

int ItemStackBase::getCount() const {
    if (this->isNull())
        return 0;
    return dAccess<unsigned char, 34>(this);
}

string ItemStack::getStandardName(const Localization& language) {
    I18n::chooseLanguage(language);
    string standardName = this->getItem()->buildDescriptionName(*this);
    I18n::chooseLanguage(Global<PropertiesSettings>->getLanguage());
    return (standardName);
};
