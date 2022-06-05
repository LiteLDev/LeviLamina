#include "APIHelp.h"
#include "BaseAPI.h"
#include "ItemAPI.h"
#include "McAPI.h"
#include "EntityAPI.h"
#include "NbtAPI.h"
#include <MC/CompoundTag.hpp>
#include <MC/ItemStack.hpp>
#include <vector>
#include <string>


//////////////////// Class Definition ////////////////////

ClassDefine<ItemClass> ItemClassBuilder =
    defineClass<ItemClass>("LLSE_Item")
        .constructor(nullptr)
        .instanceFunction("getRawPtr", &ItemClass::getRawPtr)

        .instanceProperty("name", &ItemClass::getName)
        .instanceProperty("type", &ItemClass::getType)
        .instanceProperty("id", &ItemClass::getId)
        .instanceProperty("count", &ItemClass::getCount)
        .instanceProperty("aux", &ItemClass::getAux)

        .instanceFunction("set", &ItemClass::set)
        .instanceFunction("clone", &ItemClass::clone)
        .instanceFunction("isNull", &ItemClass::isNull)
        .instanceFunction("setNull", &ItemClass::setNull)
        .instanceFunction("setAux", &ItemClass::setAux)
        .instanceFunction("setLore", &ItemClass::setLore)
        .instanceFunction("setNbt", &ItemClass::setNbt)
        .instanceFunction("getNbt", &ItemClass::getNbt)

        //For Compatibility
        .instanceFunction("setTag", &ItemClass::setNbt)
        .instanceFunction("getTag", &ItemClass::getNbt)
        .build();


//////////////////// Classes ////////////////////

ItemClass::ItemClass(ItemStack *p)
    :ScriptClass(ScriptClass::ConstructFromCpp<ItemClass>{}),item(p)
{
    preloadData();
}

//生成函数
Local<Object> ItemClass::newItem(ItemStack *p)
{
    auto newp = new ItemClass(p);
    return newp->getScriptObject();
}
ItemStack* ItemClass::extract(Local<Value> v)
{
    if(EngineScope::currentEngine()->isInstanceOf<ItemClass>(v))
        return EngineScope::currentEngine()->getNativeInstance<ItemClass>(v)->get();
    else
        return nullptr;
}

//成员函数
void ItemClass::preloadData()
{
    name = item->getCustomName();
    if (name.empty())
        name = item->getName();

    type = item->getTypeName();
    id = item->getId();
    count = item->getCount();
    aux = item->getAux();
}

Local<Value> ItemClass::getName()
{ 
    try{
        //已预加载
        return String::newString(name);
    }
    CATCH("Fail in GetItemName!");
}

Local<Value> ItemClass::getType()
{
    try{
        //已预加载
        return String::newString(type);
    }
    CATCH("Fail in GetType!");
}

Local<Value> ItemClass::getId()
{
    try {
        //已预加载
        return Number::newNumber(id);
    }
    CATCH("Fail in GetType!");
}

Local<Value> ItemClass::getCount()
{
    try{
        //已预加载
        return Number::newNumber(count);
    }
    CATCH("Fail in GetCount!");
}

Local<Value> ItemClass::getAux()
{
    try{
        //已预加载
        return Number::newNumber(aux);
    }
    CATCH("Fail in GetAux!");
}

Local<Value> ItemClass::getRawPtr(const Arguments& args)
{
    try {
        return Number::newNumber((intptr_t)item);
    }
    CATCH("Fail in getRawPtr!");
}

Local<Value> ItemClass::set(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        auto itemNew = ItemClass::extract(args[0]);
        if (!itemNew)
            return Local<Value>();    //Null

        return Boolean::newBoolean(item->setItem(itemNew));
    }
    CATCH("Fail in set!");
}

Local<Value> ItemClass::clone(const Arguments& args)
{
    try {
        auto item = get();
        if (!item)
            return Local<Value>();    //Null

        return ItemClass::newItem(item->clone_s());
    }
    CATCH("Fail in cloneItem!");
}

Local<Value> ItemClass::isNull(const Arguments& args)
{
    try{
        return Boolean::newBoolean(item->isNull());
    }
    CATCH("Fail in isNull!");
}

Local<Value> ItemClass::setNull(const Arguments& args)
{
    try {
        item->setNull();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setNull!");
}

Local<Value> ItemClass::setAux(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);

    try {
        item->setAuxValue(args[0].toInt());
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setAux!");
}

Local<Value> ItemClass::setLore(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kArray);

    try{
        auto arr = args[0].asArray();
        std::vector<std::string> lores;
        for(int i=0;i<arr.size();++i)
        {
            auto value = arr.get(i);
            if(value.getKind() == ValueKind::kString)
                lores.push_back(value.asString().toString());
        }
        if(lores.empty())
            return Boolean::newBoolean(false);
        
        item->setLore(lores);
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in SetLore!");
}

Local<Value> ItemClass::getNbt(const Arguments& args)
{
    try {
        return NbtCompoundClass::pack(std::move(item->getNbt()));
    }
    CATCH("Fail in getNbt!");
}

Local<Value> ItemClass::setNbt(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        auto nbt = NbtCompoundClass::extract(args[0]);
        if (!nbt)
            return Local<Value>();    //Null
        auto item = get();
        item->setNbt(nbt);
        // update Pre Data
        preloadData();
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setNbt!");
}

Local<Value> McClass::newItem(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);

    try {
        if (args[0].isString())
        {
            //name & count
            if (args.size() >= 2 && args[1].isNumber())
            {
                string type = args[0].toStr();
                int cnt = args[1].toInt();

                ItemStack* item = ItemStack::create(type,cnt);
                if (!item)
                    return Local<Value>();    //Null
                else
                    return ItemClass::newItem(item);
            }
            else
            {
                LOG_TOO_FEW_ARGS();
                return Local<Value>();
            }
        }
        else
        {
            CompoundTag* nbt = (CompoundTag*)NbtCompoundClass::extract(args[0]);
            if (nbt)
            {
                ItemStack* item = ItemStack::create(nbt->clone());
                if (!item)
                    return Local<Value>();    //Null
                else
                    return ItemClass::newItem(item);
            }
            else
            {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        }
    }
    CATCH("Fail in NewItem!");
}

Local<Value> McClass::spawnItem(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);

    try {
        FloatVec4 pos;
        if (args.size() == 2)
        {
            if (IsInstanceOf<IntPos>(args[1]))
            {
                // IntPos
                IntPos* posObj = IntPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else
                {
                    pos.x = posObj->x;
                    pos.y = posObj->y;
                    pos.z = posObj->z;
                    pos.dim = posObj->dim;
                }
            }
            else if (IsInstanceOf<FloatPos>(args[1]))
            {
                // FloatPos
                FloatPos* posObj = FloatPos::extractPos(args[1]);
                if (posObj->dim < 0)
                    return Boolean::newBoolean(false);
                else
                {
                    pos = *posObj;
                }
            }
            else
            {
                LOG_WRONG_ARG_TYPE();
                return Local<Value>();
            }
        }
        else if (args.size() == 5)
        {
            // Number Pos
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
            CHECK_ARG_TYPE(args[4], ValueKind::kNumber);
            pos = { args[1].asNumber().toFloat(), args[2].asNumber().toFloat(), args[3].asNumber().toFloat(), args[4].toInt() };
        }
        else
        {
            LOG_WRONG_ARGS_COUNT();
            return Local<Value>();
        }


        ItemStack* it = ItemClass::extract(args[0]);
        if (it)
        {
            //By Item
            Actor* entity = Level::spawnItem(pos.getVec3(), pos.dim, it);
            if (!entity)
                return Local<Value>();    //Null
            else
                return EntityClass::newEntity(entity);
        }
        else
        {
            LOG_WRONG_ARG_TYPE();
            return Local<Value>();
        }
    }
    CATCH("Fail in SpawnItem!");
}