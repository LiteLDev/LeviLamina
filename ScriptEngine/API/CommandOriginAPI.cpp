#include "CommandOriginAPI.h"
#include "NbtAPI.h"
#include "EntityAPI.h"
#include "APIHelp.h"
#include "BaseAPI.h"
#include "BlockAPI.h"
#include "EntityAPI.h"
#include "ItemAPI.h"
#include "PlayerAPI.h"
#include "McAPI.h"
#include "ContainerAPI.h"
#include "NbtAPI.h"
#include <MC/Actor.hpp>
#include <MC/Level.hpp>
#include <MC/ItemActor.hpp>
#include <MC/SimpleContainer.hpp>
#include <MC/CompoundTag.hpp>
#include <MC/Mob.hpp>
#include <MC/Dimension.hpp>
#include <MC/Command.hpp>
#include <third-party/magic_enum/magic_enum.hpp>

//////////////////// Class Definition ////////////////////
ClassDefine<void> OriginTypeStaticBuilder = EnumDefineBuilder<OriginType>::build("OriginType");

ClassDefine<CommandOriginClass> CommandOriginClassBuilder =
    defineClass<CommandOriginClass>("LLSE_CommandOrigin")
        .constructor(nullptr)
        .instanceProperty("type", &CommandOriginClass::getOriginType)
        .instanceProperty("typeName", &CommandOriginClass::getOriginTypeName)
        .instanceProperty("name", &CommandOriginClass::getOriginName)
        .instanceProperty("pos", &CommandOriginClass::getPosition)
        .instanceProperty("blockPos", &CommandOriginClass::getBlockPosition)
        .instanceProperty("entity", &CommandOriginClass::getEntity)
        .instanceProperty("player", &CommandOriginClass::getPlayer)

        .instanceFunction("getNbt", &CommandOriginClass::getNbt)
        .instanceFunction("toString", &CommandOriginClass::toString)

        .build();

//////////////////// APIs ////////////////////

CommandOriginClass::CommandOriginClass(CommandOrigin const* p)
    : ScriptClass(ScriptClass::ConstructFromCpp<CommandOriginClass>{})
    , ptr(p){};

Local<Object> CommandOriginClass::newCommandOrigin(CommandOrigin const* p)
{
    auto newp = new CommandOriginClass(p);
    return newp->getScriptObject();
}

Local<Value> CommandOriginClass::getOriginType()
{
    try
    {
        return Number::newNumber((int)get()->getOriginType());
    }
    CATCH("Fail in getOriginType!");
}

Local<Value> CommandOriginClass::getOriginTypeName()
{
    try
    {
        return String::newString(magic_enum::enum_name((OriginType)get()->getOriginType()));
    }
    CATCH("Fail in getOriginTypeName!");
}

Local<Value> CommandOriginClass::getOriginName()
{
    try
    {
        return String::newString(get()->getName());
    }
    CATCH("Fail in getOriginName!");
}

Local<Value> CommandOriginClass::getBlockPosition()
{
    try
    {
        auto dim = get()->getDimension();
        return IntPos::newPos(get()->getBlockPosition(), dim ? (int)dim->getDimensionId() : 0);
    }
    CATCH("Fail in getBlockPosition!");
}

Local<Value> CommandOriginClass::getPosition()
{
    try
    {
        auto dim = get()->getDimension();
        return FloatPos::newPos(get()->getWorldPosition(), dim ? (int)dim->getDimensionId() : 0);
    }
    CATCH("Fail in getPosition!");
}

Local<Value> CommandOriginClass::getEntity()
{
    try
    {
        auto entity = get()->getEntity();
        if (!entity)
            return Local<Value>();
        return EntityClass::newEntity(entity);
    }
    CATCH("Fail in getEntity!");
}

Local<Value> CommandOriginClass::getPlayer()
{
    try
    {
        auto player = get()->getPlayer();
        if (!player)
            return Local<Value>();
        return PlayerClass::newPlayer((Player*)player);
    }
    CATCH("Fail in getEntity!");
}

Local<Value> CommandOriginClass::getNbt(const Arguments& args)
{
    try
    {
        return NbtCompoundClass::pack(std::make_unique<CompoundTag>(get()->serialize()));
    }
    CATCH("Fail in getNbt!");
}

Local<Value> CommandOriginClass::toString()
{
    try
    {
        return String::newString("<CommandOrigin>");
    }
    CATCH("Fail in toString!");
}
