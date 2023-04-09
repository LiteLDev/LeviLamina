#include "api/APIHelp.h"
#include "api/BaseAPI.h"
#include "api/ItemAPI.h"
#include "api/McAPI.h"
#include "api/EntityAPI.h"
#include "api/NbtAPI.h"
#include "api/NativeAPI.h"
#include <llapi/mc/CompoundTag.hpp>
#include <llapi/mc/ItemStack.hpp>
#include <vector>
#include <string>


//////////////////// Class Definition ////////////////////

ClassDefine<ItemClass> ItemClassBuilder = defineClass<ItemClass>("LLSE_Item")
                                              .constructor(nullptr)
                                              .instanceFunction("asPointer", &ItemClass::asPointer)

                                              .instanceProperty("name", &ItemClass::getName)
                                              .instanceProperty("type", &ItemClass::getType)
                                              .instanceProperty("id", &ItemClass::getId)
                                              .instanceProperty("count", &ItemClass::getCount)
                                              .instanceProperty("aux", &ItemClass::getAux)
                                              .instanceProperty("damage", &ItemClass::getDamage)
                                              .instanceProperty("lore", &ItemClass::getLore)
                                              .instanceProperty("attackDamage", &ItemClass::getAttackDamage)
                                              .instanceProperty("maxDamage", &ItemClass::getMaxDamage)
                                              .instanceProperty("maxStackSize", &ItemClass::maxStackSize)
                                              .instanceProperty("isArmorItem", &ItemClass::isArmorItem)
                                              .instanceProperty("isBlock", &ItemClass::isBlock)
                                              .instanceProperty("isDamageableItem", &ItemClass::isDamageableItem)
                                              .instanceProperty("isDamaged", &ItemClass::isDamaged)
                                              .instanceProperty("isEnchanted", &ItemClass::isEnchanted)
                                              .instanceProperty("isEnchantingBook", &ItemClass::isEnchantingBook)
                                              .instanceProperty("isFireResistant", &ItemClass::isFireResistant)
                                              .instanceProperty("isFullStack", &ItemClass::isFullStack)
                                              .instanceProperty("isGlint", &ItemClass::isGlint)
                                              .instanceProperty("isHorseArmorItem", &ItemClass::isHorseArmorItem)
                                              .instanceProperty("isLiquidClipItem", &ItemClass::isLiquidClipItem)
                                              .instanceProperty("isMusicDiscItem", &ItemClass::isMusicDiscItem)
                                              .instanceProperty("isOffhandItem", &ItemClass::isOffhandItem)
                                              .instanceProperty("isPotionItem", &ItemClass::isPotionItem)
                                              .instanceProperty("isStackable", &ItemClass::isStackable)
                                              .instanceProperty("isWearableItem", &ItemClass::isWearableItem)

                                              .instanceFunction("set", &ItemClass::set)
                                              .instanceFunction("clone", &ItemClass::clone)
                                              .instanceFunction("isNull", &ItemClass::isNull)
                                              .instanceFunction("setNull", &ItemClass::setNull)
                                              .instanceFunction("setAux", &ItemClass::setAux)
                                              .instanceFunction("setLore", &ItemClass::setLore)
                                              .instanceFunction("setDisplayName", &ItemClass::setDisplayName)
                                              .instanceFunction("setDamage", &ItemClass::setDamage)
                                              .instanceFunction("setNbt", &ItemClass::setNbt)
                                              .instanceFunction("getNbt", &ItemClass::getNbt)

                                              .instanceFunction("match", &ItemClass::match)

                                              // For Compatibility
                                              .instanceFunction("setTag", &ItemClass::setNbt)
                                              .instanceFunction("getTag", &ItemClass::getNbt)
                                              .build();

//////////////////// Classes ////////////////////

ItemClass::ItemClass(ItemStack* p) : ScriptClass(ScriptClass::ConstructFromCpp<ItemClass>{}), item(p) {
    preloadData();
}

// 生成函数
Local<Object> ItemClass::newItem(ItemStack* p) {
    auto newp = new ItemClass(p);
    return newp->getScriptObject();
}

ItemStack* ItemClass::extract(Local<Value> v) {
    if (EngineScope::currentEngine()->isInstanceOf<ItemClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<ItemClass>(v)->get();
    else
        return nullptr;
}

// 成员函数
void ItemClass::preloadData() {
    name = item->getCustomName();
    if (name.empty())
        name = item->getName();

    type = item->getTypeName();
    id = item->getId();
    count = item->getCount();
    aux = item->getAux();
}

Local<Value> ItemClass::getName() {
    try {
        // 已预加载
        return String::newString(name);
    }
    CATCH("Fail in GetItemName!");
}

Local<Value> ItemClass::getType() {
    try {
        // 已预加载
        return String::newString(type);
    }
    CATCH("Fail in GetType!");
}

Local<Value> ItemClass::getId() {
    try {
        // 已预加载
        return Number::newNumber(id);
    }
    CATCH("Fail in GetType!");
}

Local<Value> ItemClass::getCount() {
    try {
        // 已预加载
        return Number::newNumber(count);
    }
    CATCH("Fail in GetCount!");
}

Local<Value> ItemClass::getAux() {
    try {
        // 已预加载
        return Number::newNumber(aux);
    }
    CATCH("Fail in GetAux!");
}

Local<Value> ItemClass::getDamage() {
    try {
        return Number::newNumber(item->getDamageValue());
    }
    CATCH("Fail in GetDamage!");
}

Local<Value> ItemClass::getAttackDamage() {
    try {
        return Number::newNumber(item->getAttackDamage());
    }
    CATCH("Fail in GetAttackDamage!");
}

Local<Value> ItemClass::getMaxDamage() {
    try {
        return Number::newNumber(item->getMaxDamage());
    }
    CATCH("Fail in GetMaxDamage!");
}

Local<Value> ItemClass::getMaxStackSize() {
    try {
        return Number::newNumber(item->getMaxStackSize());
    }
    CATCH("Fail in GetMaxStackSize!");
}

Local<Value> ItemClass::getLore() {
    try {
        std::vector<std::string> loreArray = item->getCustomLore();

        Local<Array> loreValueList = Array::newArray();

        for (std::string lore : loreArray) {
            loreValueList.add(String::newString(lore));
        }

        return loreValueList;
    }
    CATCH("Fail in GetLore!");
}

Local<Value> ItemClass::isArmorItem() {
    try {
        return Boolean::newBoolean(item->isArmorItem());
    }
    CATCH("Fail in isArmorItem!");
}

Local<Value> ItemClass::isBlock() {
    try {
        return Boolean::newBoolean(item->isBlock());
    }
    CATCH("Fail in isBlock!");
}

Local<Value> ItemClass::isDamageableItem() {
    try {
        return Boolean::newBoolean(item->isDamageableItem());
    }
    CATCH("Fail in isDamageableItem!");
}

Local<Value> ItemClass::isDamaged() {
    try {
        return Boolean::newBoolean(item->isDamaged());
    }
    CATCH("Fail in isDamaged!");
}

Local<Value> ItemClass::isEnchanted() {
    try {
        return Boolean::newBoolean(item->isEnchanted());
    }
    CATCH("Fail in isEnchanted!");
}

Local<Value> ItemClass::isEnchantingBook() {
    try {
        return Boolean::newBoolean(item->isEnchantingBook());
    }
    CATCH("Fail in isEnchantingBook!");
}

Local<Value> ItemClass::isFireResistant() {
    try {
        return Boolean::newBoolean(item->isFireResistant());
    }
    CATCH("Fail in isFireResistant!");
}

Local<Value> ItemClass::isFullStack() {
    try {
        return Boolean::newBoolean(item->isFullStack());
    }
    CATCH("Fail in isFullStack!");
}

Local<Value> ItemClass::isGlint() {
    try {
        return Boolean::newBoolean(item->isGlint());
    }
    CATCH("Fail in isGlint!");
}

Local<Value> ItemClass::isHorseArmorItem() {
    try {
        return Boolean::newBoolean(item->isHorseArmorItem());
    }
    CATCH("Fail in isHorseArmorItem!");
}

Local<Value> ItemClass::isLiquidClipItem() {
    try {
        return Boolean::newBoolean(item->isLiquidClipItem());
    }
    CATCH("Fail in isLiquidClipItem!");
}

Local<Value> ItemClass::isMusicDiscItem() {
    try {
        return Boolean::newBoolean(item->isMusicDiscItem());
    }
    CATCH("Fail in isMusicDiscItem!");
}

Local<Value> ItemClass::isOffhandItem() {
    try {
        return Boolean::newBoolean(item->isOffhandItem());
    }
    CATCH("Fail in isOffhandItem!");
}

Local<Value> ItemClass::isPotionItem() {
    try {
        return Boolean::newBoolean(item->isPotionItem());
    }
    CATCH("Fail in isPotionItem!");
}

Local<Value> ItemClass::isStackable() {
    try {
        return Boolean::newBoolean(item->isStackable());
    }
    CATCH("Fail in isStackable!");
}

Local<Value> ItemClass::isWearableItem() {
    try {
        return Boolean::newBoolean(item->isWearableItem());
    }
    CATCH("Fail in isWearableItem!");
}

Local<Value> ItemClass::asPointer(const Arguments& args) {
    try {
        return NativePointer::newNativePointer(item);
    }
    CATCH("Fail in asPointer!");
}

Local<Value> ItemClass::set(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        auto itemNew = ItemClass::extract(args[0]);
        if (!itemNew)
            return Local<Value>(); // Null

        return Boolean::newBoolean(item->setItem(itemNew));
    }
    CATCH("Fail in set!");
}

Local<Value> ItemClass::clone(const Arguments& args) {
    try {
        auto item = get();
        if (!item)
            return Local<Value>(); // Null

        return ItemClass::newItem(item->clone_s());
    }
    CATCH("Fail in cloneItem!");
}

Local<Value> ItemClass::isNull(const Arguments& args) {
    try {
        return Boolean::newBoolean(item->isNull());
    }
    CATCH("Fail in isNull!");
}

Local<Value> ItemClass::setNull(const Arguments& args) {
    try {
        item->setNull({});
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setNull!");
}

Local<Value> ItemClass::setAux(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        item->setAuxValue(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAux!");
}

Local<Value> ItemClass::setLore(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kArray);

    try {
        auto arr = args[0].asArray();
        std::vector<std::string> lores;
        for (int i = 0; i < arr.size(); ++i) {
            auto value = arr.get(i);
            if (value.getKind() == ValueKind::kString)
                lores.push_back(value.asString().toString());
        }
        if (lores.empty())
            return Boolean::newBoolean(false);

        item->setLore(lores);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in SetLore!");
}

Local<Value> ItemClass::setDisplayName(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);

    try {
        item->setCustomName(args[0].asString().toString());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setDisplayName!");
}

Local<Value> ItemClass::setDamage(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        if (item->isDamageableItem() && args[0].toInt() <= 32767) {
            item->setDamageValue(args[0].toInt());
            return Boolean::newBoolean(true);
        } else {
            return Boolean::newBoolean(false);
        }
    }
    CATCH("Fail in setDamage!");
}

Local<Value> ItemClass::getNbt(const Arguments& args) {
    try {
        return NbtCompoundClass::pack(std::move(item->getNbt()));
    }
    CATCH("Fail in getNbt!");
}

Local<Value> ItemClass::setNbt(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        auto nbt = NbtCompoundClass::extract(args[0]);
        if (!nbt)
            return Local<Value>(); // Null
        auto item = get();
        item->setNbt(nbt);
        // update Pre Data
        preloadData();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setNbt!");
}

Local<Value> McClass::newItem(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);

    try {
        if (args[0].isString()) {
            // name & count
            if (args.size() >= 2 && args[1].isNumber()) {
                string type = args[0].toStr();
                int cnt = args[1].toInt();

                ItemStack* item = ItemStack::create(type, cnt);
                if (!item)
                    return Local<Value>(); // Null
                else
                    return ItemClass::newItem(item);
            } else {
                LOG_TOO_FEW_ARGS();
                return Local<Value>();
            }
        } else {
            CompoundTag* nbt = (CompoundTag*)NbtCompoundClass::extract(args[0]);
            if (nbt) {
                ItemStack* item = ItemStack::create(nbt->clone());
                if (!item)
                    return Local<Value>(); // Null
                else
                    return ItemClass::newItem(item);
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        }
    }
    CATCH("Fail in NewItem!");
}

Local<Value> McClass::spawnItem(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 2);

    try {
        FloatVec4 pos;
        if (args.size() == 2) {
            if (IsInstanceOf<IntPos>(args[1])) {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            } else if (IsInstanceOf<FloatPos>(args[1])) {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else {
                    pos = *posObj;
                }
            } else {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        } else if (args.size() == 5) {
            // Number Pos
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
            pos = {args[1].asNumber().toFloat(), args[2].asNumber().toFloat(), args[3].asNumber().toFloat(),
                   args[4].toInt()};
        } else {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }


        ItemStack* it = ItemClass::extract(args[0]);
        if (it) {
            // By Item
            Actor* entity = Level::spawnItem(pos.getVec3(), pos.dim, it);
            if (!entity)
                return Local<Value>(); // Null
            else
                return EntityClass::newEntity(entity);
        } else {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
    }
    CATCH("Fail in SpawnItem!");
}

Local<Value> ItemClass::match(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kObject)
    if (!IsInstanceOf<ItemClass>(args[0])) {
        LOG_WRONG_ARG_TYPE();
        return Boolean::newBoolean(false);
    }

    try {
        ItemStackBase itemNew = *ItemClass::extract(args[0]);
        if (!itemNew)
            return Boolean::newBoolean(false);

        return Boolean::newBoolean(item->matchesItem(itemNew));
    }
    CATCH("Fail in MatchItem!");
}
