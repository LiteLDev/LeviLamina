#include "DynamicCommandAPI.h"
#include "CommandAPI.h"
#include "APIHelp.h"
#include "McAPI.h"
#include "ItemAPI.h"
#include "PlayerAPI.h"
#include "BlockAPI.h"
#include <Tools/Utils.h>
#include <Engine/GlobalShareData.h>
#include <Engine/LocalShareData.h>
#include <Engine/EngineOwnData.h>
#include <Engine/LoaderHelper.h>
#include <Utils/STLHelper.h>
#include <RegCommandAPI.h>
#include <Global.hpp>
#include <filesystem>
#include <Configs.h>
#include <vector>
#include <string>
#include <MC/ItemInstance.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Dimension.hpp>
#include <ScriptEngine/API/BaseAPI.h>
#include <ScriptEngine/API/EntityAPI.h>


//////////////////// Class Definition ////////////////////

ClassDefine<CommandClass> CommandClassBuilder =
    defineClass<CommandClass>("LLSE_Command")
        .constructor(nullptr)
        .instanceProperty("name", &CommandClass::getName)

        .instanceFunction("addEnum", &CommandClass::addEnum)
        .instanceFunction("newParameter", &CommandClass::newParameter)
        .instanceFunction("addOverload", &CommandClass::addOverload)
        .instanceFunction("setCallback", &CommandClass::setCallback)
        .instanceFunction("setup", &CommandClass::setup)

        .build();

//////////////////// MC APIs ////////////////////

Local<Value> McClass::runcmd(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try
    {
        return Boolean::newBoolean(Level::executeCommand(args[0].asString().toString()));
    }
    CATCH("Fail in RunCmd!")
}

Local<Value> McClass::runcmdEx(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try
    {
        std::pair<bool, string> result = Level::executeCommandEx(args[0].asString().toString());
        Local<Object> resObj = Object::newObject();
        resObj.set("success", result.first);
        resObj.set("output", result.second);
        return resObj;
    }
    CATCH("Fail in RunCmdEx!")
}

//name, description, permission, flag, alias
Local<Value> McClass::createCommand(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kString);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);

    try
    {
        auto name = args[0].toStr();
        auto desc = args[1].toStr();
        CommandPermissionLevel permission = CommandPermissionLevel::GameMasters;
        CommandFlag flag = {(CommandFlagValue)0x80};
        std::string alias = "";
        if (args.size() > 2)
        {
            CHECK_ARG_TYPE(args[2], ValueKind::kNumber);
            permission = (CommandPermissionLevel)args[2].toInt();
            if (args.size() > 3)
            {
                CHECK_ARG_TYPE(args[3], ValueKind::kNumber);
                flag = {(CommandFlagValue)args[3].toInt()};
                if (args.size() > 4)
                {
                    CHECK_ARG_TYPE(args[4], ValueKind::kString);
                    alias = args[4].toStr();
                }
            }
        }
        auto command = DynamicCommand::createCommand(name, desc, permission, flag);
        if (!alias.empty())
            command->setAlias(alias);
        return CommandClass::newCommand(std::move(command));
    }
    CATCH("Fail in getCommandName!")
}

//////////////////// Helper ////////////////////

Local<Value> convertResult(DynamicCommand::Result const& result)
{
    if (!result.isSet)
        return Local<Value>(); //null 
    switch (result.type)
    {
        case DynamicCommand::ParameterType::Bool:
            return Boolean::newBoolean(result.getRaw<bool>());
        case DynamicCommand::ParameterType::Int:
            return Number::newNumber(result.getRaw<int>());
        case DynamicCommand::ParameterType::Float:
            return Number::newNumber(result.getRaw<float>());
        case DynamicCommand::ParameterType::String:
            return String::newString(result.getRaw<std::string>());
        case DynamicCommand::ParameterType::Actor:
        {
            auto arr = Array::newArray();
            for (auto i : result.get<std::vector<Actor*>>())
            {
                arr.add(EntityClass::newEntity(i));
            }
            return arr;
        }
        case DynamicCommand::ParameterType::Player:
        {
            auto arr = Array::newArray();
            for (auto i : result.get<std::vector<Player*>>())
            {
                arr.add(PlayerClass::newPlayer(i));
            }
            return arr;
        }
        case DynamicCommand::ParameterType::BlockPos:
        {
            auto dim = result.origin->getDimension();
            return IntPos::newPos(result.get<BlockPos>(), dim ? (int)dim->getDimensionId() : -1);
        }
        case DynamicCommand::ParameterType::Vec3:
        {
            auto dim = result.origin->getDimension();
            return FloatPos::newPos(result.get<Vec3>(), dim ? (int)dim->getDimensionId() : -1);
        }
        case DynamicCommand::ParameterType::Message:
            return String::newString(result.getRaw<CommandMessage>().getMessage(*result.origin));
        case DynamicCommand::ParameterType::RawText:
            return String::newString(result.getRaw<std::string>());
        case DynamicCommand::ParameterType::JsonValue:
            return String::newString(result.getRaw<Json::Value>().toStyledString());
        case DynamicCommand::ParameterType::Command:
            return String::newString(result.getRaw<std::unique_ptr<Command>>()->getCommandName());
        case DynamicCommand::ParameterType::Item:
            return ItemClass::newItem(new ItemStack(result.getRaw<CommandItem>().createInstance(1,1,nullptr,true).value_or(ItemInstance::EMPTY_ITEM)));
        case DynamicCommand::ParameterType::Block:
            return BlockClass::newBlock(const_cast<Block*>(result.getRaw<Block const*>()), const_cast<BlockPos*>(&BlockPos::MIN), -1);
        case DynamicCommand::ParameterType::Effect:
            return String::newString(result.getRaw<MobEffect const*>()->getComponentName().getString());
        case DynamicCommand::ParameterType::Enum:
            return String::newString(result.getRaw<std::string>());
        case DynamicCommand::ParameterType::SoftEnum:
            return String::newString(result.getRaw<std::string>());
        default:
            return Local<Value>(); //null 
            break;
    }
}


//////////////////// Command APIs ////////////////////

// function (origin, output, results){}


// vector<identifier>
// vector<int>


// type, name, optional, description, identifier
// type, name, description, identifier


// string, vector<string>


CommandClass::CommandClass(std::unique_ptr<DynamicCommandInstance>&& p)
    : ScriptClass(ScriptClass::ConstructFromCpp<CommandClass>{})
    , uptr(std::move(p))
    , ptr(uptr.get()){};

Local<Object> CommandClass::newCommand(std::unique_ptr<DynamicCommandInstance>&& p)
{
    auto newp = new CommandClass(std::move(p));
    return newp->getScriptObject();
}


Local<Value> CommandClass::getName()
{
    try
    {
        return String::newString(get()->getCommandName());
    }
    CATCH("Fail in getCommandName!")
}

Local<Value> CommandClass::addEnum(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)
    CHECK_ARG_TYPE(args[1], ValueKind::kArray)
    try
    {
        auto enumName = args[0].toStr();
        auto enumArr = args[1].asArray();
        if (enumArr.size() == 0 || !enumArr.get(0).isString())
            return Local<Value>();
        vector<string> enumValues;
        for (int i = 0; i < enumArr.size(); ++i)
        {
            enumValues.push_back(enumArr.get(i).toStr());
        }
        return Boolean::newBoolean(!get()->addEnum(enumName, std::move(enumValues)).empty());
    }
    CATCH("Fail in addEnum!")
}

Local<Value> CommandClass::newParameter(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 2);
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber);
    CHECK_ARG_TYPE(args[1], ValueKind::kString);
    try
    {
        auto type = (DynamicCommand::ParameterType)args[0].toInt();
        auto name = args[1].toStr();
        std::string description = "";
        bool optional = false;
        std::string identifier = "";
        size_t index = 2;
        CommandParameterOption option = (CommandParameterOption)-1;
        if (args.size() > index && args[index].isBoolean())
            optional = args[index++].asBoolean().value();
        if (args.size() > index && args[index].isString())
            description = args[index++].toStr();
        if (args.size() > index && args[index].isString())
            identifier = args[index++].toStr();
        if (args.size() > index && args[index].isNumber())
            option = (CommandParameterOption)args[index++].toInt();

        return Number::newNumber((int64_t)get()->newParameter(type, name, optional, description, identifier, option).index);
    }
    CATCH("Fail in newParameter!")
}

Local<Value> CommandClass::addOverload(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kArray);
    try
    {
        auto command = get();
        auto paramArr = args[0].asArray();
        if (paramArr.size() == 0)
            return Local<Value>();
        if (paramArr.get(0).isString())
        {
            std::vector<std::string> params;
            for (int i = 0; i < paramArr.size(); ++i)
            {
                params.push_back(paramArr.get(i).toStr());
            }
            return Boolean::newBoolean(command->addOverload(std::move(params)));
        }
        else if (paramArr.get(0).isNumber())
        {
            std::vector<DynamicCommandInstance::ParameterIndex> params;
            for (int i = 0; i < paramArr.size(); ++i)
            {
                params.push_back({command, (size_t)paramArr.get(i).asNumber().toInt64()});
            }
            return Boolean::newBoolean(command->addOverload(std::move(params)));
        }
        else
        {
            throw std::runtime_error("");
        }
    }
    CATCH("Fail in addOverload!")
}

Local<Value> CommandClass::setCallback(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1);
    CHECK_ARG_TYPE(args[0], ValueKind::kFunction);
    try
    {
        auto func = args[0].asFunction();
        std::string commandName = get()->getCommandName();
        DynamicCommandInstance* command;
        localShareData->commandCallbacks[commandName] = {EngineScope::currentEngine(), 0, script::Global<Function>(func)};
        get()->setCallback(
            [commandName, command](CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, DynamicCommand::Result>& results) {
                Local<Array> args = Array::newArray();
                for (auto& [name, ptr] : command->parameterPtrs)
                    args.add(convertResult(results.at(name)));
                localShareData->commandCallbacks[commandName].func.get().call({}, args);
            });
        return Boolean::newBoolean(true);
    }
    CATCH("Fail in setCallback!")
}

Local<Value> CommandClass::setup(const Arguments& args)
{
    try
    {
        return Boolean::newBoolean(DynamicCommand::setup(std::move(uptr)));
    }
    CATCH("Fail in setup!")
}