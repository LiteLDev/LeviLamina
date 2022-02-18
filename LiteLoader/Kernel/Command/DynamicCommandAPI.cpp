#include <DynamicCommandAPI.h>
#include <I18nAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <MC/AvailableCommandsPacket.hpp>
#include <MC/CommandMessage.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/Level.hpp>
#include <MC/LoopbackPacketSender.hpp>
#include <third-party/dyncall/dyncall_callback.h>

extern Logger logger;
typedef DynamicCommand::Result Result;
typedef DynamicCommand::ParameterType ParameterType;
typedef DynamicCommand::ParameterPtr ParameterPtr;
typedef DynamicCommand::ParameterData ParameterData;
typedef DynamicCommandInstance::ParameterIndex ParameterIndex;

auto const ParameterSize = std::unordered_map<ParameterType, size_t>{
    {ParameterType::Bool, std::max((size_t)8, sizeof(bool))},
    {ParameterType::Int, std::max((size_t)8, sizeof(int))},
    {ParameterType::Float, std::max((size_t)8, sizeof(float))},
    {ParameterType::Actor, std::max((size_t)8, sizeof(CommandSelector<Actor>))},
    {ParameterType::Player, std::max((size_t)8, sizeof(CommandSelector<Player>))},
    {ParameterType::String, std::max((size_t)8, sizeof(std::string))},
    {ParameterType::Position, std::max((size_t)8, sizeof(CommandPosition))},
    {ParameterType::Enum, std::max((size_t)8, sizeof(int))},
    {ParameterType::SoftEnum, std::max((size_t)8, sizeof(std::string))},
};

namespace ParameterDataType
{
typedef bool Bool;
typedef int Int;
typedef float Float;
typedef std::string String;
typedef CommandSelector<Actor> Actor;
typedef CommandSelector<Player> Player;
typedef CommandPosition Position;
typedef int Enum;
typedef std::string SoftEnum;
} // namespace ParameterDataType

inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string func, HMODULE handler)
{
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Function ({})", func);
    if (handler)
        logger.error("In Plugin <{}>", LL::getPlugin(handler)->name);
}

#define CatchDynamicCommandError(func, handler)                                                                   \
    catch (const seh_exception& e)                                                                                \
    {                                                                                                             \
        OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), func, handler); \
    }                                                                                                             \
    catch (const std::exception& e)                                                                               \
    {                                                                                                             \
        OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), func, handler);    \
    }                                                                                                             \
    catch (...)                                                                                                   \
    {                                                                                                             \
        OutputError("Uncaught Exception Detected!", -1, "", func, handler);                                       \
    }

// global variable
namespace
{
//static std::string latestAllocateName = "";
static std::mutex commandAllocateLock;
std::unordered_map<std::string, std::unique_ptr<DynamicCommandInstance>> dynamicCommandInstances;
} // namespace

#pragma region ParameterPtr

inline DynamicCommand::ParameterPtr::ParameterPtr(ParameterType type, size_t offset)
    : type(type)
    , offset(offset)
{
}

inline bool DynamicCommand::ParameterPtr::isValueSet(DynamicCommand const* command) const
{
    return dAccess<bool>(command, offset + ParameterSize.at(type));
}

Result ParameterPtr::getResult(DynamicCommand const* command) const
{
    auto commandInstance = dynamicCommandInstances.at(command->commandName).get();
    switch (type)
    {
        case ParameterType::Bool:
            return {this, commandInstance, &getValue<bool>(command), isValueSet(command)};
            break;
        case ParameterType::Int:
            return {this, commandInstance, &getValue<int>(command), isValueSet(command)};
            break;
        case ParameterType::Float:
            return {this, commandInstance, &getValue<float>(command), isValueSet(command)};
            break;
        case ParameterType::Actor:
            return {this, commandInstance, &getValue<CommandSelector<Actor>>(command), isValueSet(command)};
            break;
        case ParameterType::Player:
            return {this, commandInstance, &getValue<CommandSelector<Player>>(command), isValueSet(command)};
            break;
        case ParameterType::String:
            return {this, commandInstance, &getValue<std::string>(command), isValueSet(command)};
            break;
        case ParameterType::Position:
            return {this, commandInstance, &getValue<CommandPosition>(command), isValueSet(command)};
            break;
        case ParameterType::Enum:
            return {this, commandInstance, &getValue<int>(command), isValueSet(command)};
            break;
        case ParameterType::SoftEnum:
            return {this, commandInstance, &getValue<std::string>(command), isValueSet(command)};
            break;
        default:
            logger.error("Unknown Parameter Type {}", (int)type);
            break;
    }
    return {};
}

#pragma endregion

#pragma region ParameterData

inline DynamicCommand::ParameterData::ParameterData(DynamicCommand::ParameterType type, std::string const& name, bool optional, std::string const& enumOptions, std::string const& identifier, CommandParameterOption parameterOption)
    : type(type)
    , name(name)
    , optional(optional)
    , description(enumOptions)
    , option(parameterOption)
{
    if (identifier.empty())
        this->identifier = description.empty() ? name : description;
    else
        this->identifier = identifier;
    if (type != DynamicCommand::ParameterType::Enum && type != DynamicCommand::ParameterType::SoftEnum)
    {
        if (!description.empty())
            description = "";
    }
    else
    {
        if (description.empty())
            throw std::runtime_error("Enum or SoftEnum parameter need a description to confirm which enum to use");
    }
}

inline DynamicCommand::ParameterData::ParameterData(DynamicCommand::ParameterType type, std::string const& name, std::string const& enumOptions, std::string const& identifier, CommandParameterOption parameterOption)
    : ParameterData(type, name, false, enumOptions, identifier, parameterOption)
{
}

inline CommandParameterData DynamicCommand::ParameterData::makeParameterData() const
{
    switch (type)
    {
        case ParameterType::Bool:
            return makeParameterData<ParameterType::Bool, bool>();
            break;
        case ParameterType::Int:
            return makeParameterData<ParameterType::Int, int>();
            break;
        case ParameterType::Float:
            return makeParameterData<ParameterType::Float, float>();
            break;
        case ParameterType::String:
            return makeParameterData<ParameterType::String, std::string>();
            break;
        case ParameterType::Actor:
            return makeParameterData<ParameterType::Actor, CommandSelector<Actor>>();
            break;
        case ParameterType::Player:
            return makeParameterData<ParameterType::Player, CommandSelector<Player>>();
            break;
        case ParameterType::Position:
            return makeParameterData<ParameterType::Position, CommandPosition>();
            break;
        case ParameterType::Enum:
            return makeParameterData<ParameterType::Enum, int>();
            break;
        case ParameterType::SoftEnum:
            return makeParameterData<ParameterType::SoftEnum, std::string>();
            break;
        default:
            return {};
            break;
    }
}

#pragma endregion

#pragma region Result

inline std::string const& DynamicCommand::Result::getEnumValue() const
{
    if (getType() == ParameterType::Enum)
    {
        auto index = get<int>();
        return command->getEnumValue(index);
    }
    else if (getType() == ParameterType::SoftEnum)
    {
        return get<std::string>();
    }
    return "";
}

inline ParameterType DynamicCommand::Result::getType() const
{
    return parameterPtr->type;
}

inline std::string DynamicCommand::Result::getName() const
{
    for (auto& [name, ptr] : command->parameterPtrs)
    {
        if (ptr.getOffset() == parameterPtr->getOffset())
            return name;
    }
}

#pragma endregion

#pragma region DynamicCommand

//std::unique_ptr<Command> DynamicCommand::commandBuilder()
//{
//    std::unique_ptr<Command> command;
//    commandBuilder2(&command, latestAllocateName);
//    return std::move(command);
//}

inline char DynamicCommand::builderCallbackHanler(DCCallback* cb, DCArgs* args, DCValue* result, void* userdata)
{
    DynamicCommandInstance& command = *(DynamicCommandInstance*)userdata;
    auto arg1 = (std::unique_ptr<Command>*)dcbArgPointer(args);
    DynamicCommand::commandBuilder2(arg1, command.getCommandName());
    return 'p';
}

std::unique_ptr<Command>* DynamicCommand::commandBuilder2(std::unique_ptr<Command>* rtn, std::string name)
{
    assert(dynamicCommandInstances.count(name));
    if (dynamicCommandInstances.count(name) == 0)
    {
        logger.error("Error in allocate dynamic command");
        return rtn;
    }
    auto& commandInstance = *dynamicCommandInstances.at(name);
    auto command = new char[commandInstance.commandSize]{0};
    (*(DynamicCommand*)command).DynamicCommand::DynamicCommand();
    (*(DynamicCommand*)command).commandName = name;
    for (auto& [name, param] : commandInstance.parameterPtrs)
    {
        size_t offset = param.getOffset();
        dAccess<bool>(command, offset + ParameterSize.at(param.type)) = false; //XXXX_isSet;
        switch (param.type)
        {
            case ParameterType::Bool:
                dAccess<bool>(command, offset) = bool();
                break;
            case ParameterType::Int:
                dAccess<int>(command, offset) = int();
                break;
            case ParameterType::Float:
                dAccess<float>(command, offset) = float();
                break;
            case ParameterType::Actor:
                dAccess<CommandSelector<Actor>>(command, offset).CommandSelector<Actor>::CommandSelector();
                break;
            case ParameterType::Player:
                dAccess<CommandSelector<Player>>(command, offset).CommandSelector<Player>::CommandSelector();
                break;
            case ParameterType::String:
                dAccess<std::string>(command, offset).basic_string::basic_string();
                break;
            case ParameterType::Position:
                dAccess<CommandPosition>(command, offset).CommandPosition::CommandPosition();
                break;
            case ParameterType::Enum:
                dAccess<int>(command, offset) = int();
                break;
            case ParameterType::SoftEnum:
                dAccess<std::string>(command, offset).basic_string::basic_string();
                break;
            default:
                logger.error("Unknown Parameter Type {}", (int)param.type);
                break;
        }
    }
    rtn->swap(std::unique_ptr<Command>((Command*)command));
    return rtn;
}

DynamicCommand::~DynamicCommand()
{
    auto& commandIns = *dynamicCommandInstances.at(commandName);
    for (auto& [name, parameter] : commandIns.parameterPtrs)
    {
        auto offset = parameter.getOffset();
        switch (parameter.type)
        {
            case ParameterType::Bool:
                break;
            case ParameterType::Int:
                break;
            case ParameterType::Float:
                break;
            case ParameterType::Actor:
                dAccess<CommandSelector<Actor>>(this, offset).CommandSelectorBase::~CommandSelectorBase();
                break;
            case ParameterType::Player:
                dAccess<CommandSelector<Player>>(this, offset).CommandSelectorBase::~CommandSelectorBase();
                break;
            case ParameterType::String:
                dAccess<std::string>(this, offset).~basic_string();
                break;
            case ParameterType::Position:
                dAccess<CommandPosition>(this, offset).~CommandPosition();
                break;
            case ParameterType::Enum:
                break;
            case ParameterType::SoftEnum:
                dAccess<std::string>(this, offset).~basic_string();
                break;
            default:
                logger.error("Unknown Parameter Type {}", (int)parameter.type);
                break;
        }
    }
}

void DynamicCommand::execute(CommandOrigin const& origin, CommandOutput& output) const
{
    if (dynamicCommandInstances.count(commandName) == 0)
    {
        logger.error("Dynamic Command Not Found");
        return;
    }
    auto& commandIns = *dynamicCommandInstances.at(commandName);
    try
    {
        std::unordered_map<std::string, Result> results;

        for (auto& [name, param] : commandIns.parameterPtrs)
        {
            results.emplace(name, param.getResult(this));
        }
        commandIns.callback(origin, output, results);
    }
    CatchDynamicCommandError("DynamicCommand::execute", commandIns.handler);
}
#include <LLAPI.h>

std::unique_ptr<class DynamicCommandInstance> DynamicCommand::createCommand(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    return DynamicCommandInstance::create(name, description, permission, flag1 |= flag2, handler);
}

bool DynamicCommand::setup(std::unique_ptr<class DynamicCommandInstance> commandInstance)
{
    if (!commandInstance->callback)
        return false;
    if (commandInstance->overloads.empty())
        return false;
    for (auto& [name, range] : commandInstance->enumRanges)
    {
        std::vector<std::pair<std::string, uint64_t>> values;
        size_t index = range.first;
        for (auto& iter = commandInstance->enumValues.begin() + range.first; iter != commandInstance->enumValues.begin() + range.first + range.second; ++iter)
        {
            values.emplace_back(*iter, index);
            index++;
        }
        Global<CommandRegistry>->_addEnumValuesInternal(name.data(), values, CommandRegistry::getNextTypeId(), &CommandRegistry::parseEnum<int>).val;
    }
    Global<CommandRegistry>->registerCommand(commandInstance->name, commandInstance->description->c_str(), commandInstance->permission, commandInstance->flag, commandInstance->flag);
    auto builder = commandInstance->initCommandBuilder();
    for (auto& overload : commandInstance->overloads)
    {
        Global<CommandRegistry>->registerOverload(commandInstance->name, builder, commandInstance->buildOverload(overload));
    }
    //commandInstance->overloads.clear();
    dynamicCommandInstances.emplace(commandInstance->name, std::move(commandInstance));
}

inline bool DynamicCommand::setup(std::string const& name, std::string const& description, std::unordered_map<std::string, std::vector<std::string>>&& enums, std::vector<ParameterData>&& params, std::vector<std::vector<std::string>>&& overloads, CallBackFn callback, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    auto command = createCommand(name, description, permission, flag1, flag2, handler);
    for (auto& [name, values] : enums)
    {
        command->addEnum(name, std::move(values));
    }
    for (auto& param : params)
    {
        command->newParameter(std::move(param));
    }
    for (auto& overload : overloads)
    {
        command->addOverload(std::move(overload));
    }
    command->setCallback(std::move(callback));
    setup(std::move(command));
    return true;
}

inline bool DynamicCommand::updateAvailableCommands()
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto sender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
    if (sender)
        sender->sendBroadcast(packet);
    return true;
}

#pragma endregion

#pragma region DynamicCommandInstance

inline DynamicCommandInstance::DynamicCommandInstance(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, HMODULE handler)
    : name(name)
    , description(std::make_unique<std::string>(description))
    , permission(permission)
    , flag(flag)
    , handler(handler)
{
}

inline DynamicCommandInstance::~DynamicCommandInstance()
{
    if (this->builder)
        dcbFreeCallback((DCCallback*)this->builder);
}

inline std::unique_ptr<DynamicCommandInstance> DynamicCommandInstance::create(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, HMODULE handler)
{
    if (Global<CommandRegistry>->findCommand(name))
    {
        logger.error("Command \"{}\" already exists", name);
        return {};
    }
    return std::unique_ptr<DynamicCommandInstance>(new DynamicCommandInstance(name, description, permission, flag, handler));
}

inline bool DynamicCommandInstance::addOverload(std::vector<DynamicCommand::ParameterData>&& params)
{
    std::vector<ParameterIndex> indices;
    for (auto& param : params)
    {
        indices.push_back(newParameter(std::forward<ParameterData>(param)));
    }
    return addOverload(std::move(indices));
}

inline bool DynamicCommandInstance::addOverload(std::vector<char const*>&& params)
{
    std::vector<ParameterIndex> paramIndices;
    for (auto& param : params)
    {
        paramIndices.push_back(findParameterIndex(param));
    }
    return addOverload(std::move(paramIndices));
}

inline bool DynamicCommandInstance::addOverload(std::vector<std::string>&& params)
{
    std::vector<ParameterIndex> paramIndices;
    for (auto& param : params)
    {
        paramIndices.push_back(findParameterIndex(param));
    }
    return addOverload(std::move(paramIndices));
}

inline std::string const& DynamicCommandInstance::addEnum(std::string const& description, std::vector<std::string> const& values)
{
    enumNames.push_back(std::make_unique<std::string>(description));
    std::string const& desc = **(enumNames.end() - 1);
    enumRanges.emplace(desc, std::pair{enumValues.size(), values.size()});
    enumValues.insert(enumValues.end(), values.begin(), values.end());
    return desc;
}

inline std::string const& DynamicCommandInstance::getEnumValue(int index) const
{
    return enumValues.at(index);
}

ParameterIndex DynamicCommandInstance::newParameter(DynamicCommand::ParameterData&& data)
{
    auto iter = parameterPtrs.find(data.name);
    size_t offset = -1;
    if (iter == parameterPtrs.end())
    {
        offset = commandSize;
        parameterPtrs.emplace(data.name, DynamicCommand::ParameterPtr(data.type, offset));
        commandSize += ParameterSize.at(data.type) + 8;
    }
    else
    {
        offset = iter->second.getOffset();
        if (iter->second.type != data.type)
            throw std::runtime_error(fmt::format("dynamic command \"{}\" register failed, Different type parameters with the same name {} are not allowed", name, data.name));
    }
    std::string const& identifier = data.identifier;
    if (parameterDatas.end() != std::find_if(parameterDatas.begin(), parameterDatas.end(), 
        [&](DynamicCommand::ParameterData const& data) { return data.identifier == identifier; }))
        throw std::runtime_error("parameter identifier already exists");
    data.offset = offset;
    parameterDatas.emplace_back(std::move(data));
    return {this, parameterDatas.size() - 1};
}
inline ParameterIndex DynamicCommandInstance::newParameter(DynamicCommand::ParameterType type, std::string const& name, std::string const& description, std::string const& identifier, CommandParameterOption parameterOption)
{
    return newParameter(type, name, false, description, identifier, parameterOption);
}

inline ParameterIndex DynamicCommandInstance::newParameter(DynamicCommand::ParameterType type, std::string const& name, bool optional, std::string const& description, std::string const& identifier, CommandParameterOption parameterOption)
{
    return newParameter(ParameterData(type, name, optional, description, identifier, parameterOption));
}


inline ParameterIndex DynamicCommandInstance::findParameterIndex(std::string const& indentifier)
{
    size_t index = 0;
    for (auto& paramData : parameterDatas)
    {
        if (paramData.identifier == indentifier)
            break;
        index++;
    }
    if (index == parameterDatas.size())
        index = -1;
    return {this, index};
}

inline bool DynamicCommandInstance::addOverload(std::vector<ParameterIndex>&& params)
{
    for (auto& index : params)
    {
        if (index >= parameterDatas.size())
            throw std::runtime_error("parameter index out of range");
    }
    overloads.emplace_back(params);
    return true;
}

inline bool DynamicCommandInstance::setAlias(std::string const& alias)
{
    this->alias = alias;
    return true;
}

inline std::vector<CommandParameterData> DynamicCommandInstance::buildOverload(std::vector<ParameterIndex> const& overload)
{
    std::vector<CommandParameterData> datas;
    for (auto& index : overload)
    {
        auto& param = parameterDatas.at(index);
        datas.emplace_back(param.makeParameterData());
    }
    return datas;
}

inline void DynamicCommandInstance::setCallback(DynamicCommand::CallBackFn&& callback)
{
    this->callback = callback;
}

inline bool DynamicCommandInstance::setBuilder(DynamicCommand::BuilderFn builder)
{
    if (this->builder == nullptr)
        this->builder = builder;
    else
        return false;
    return true;
}

inline DynamicCommand::BuilderFn DynamicCommandInstance::initCommandBuilder()
{
    auto builder = (DynamicCommand::BuilderFn)dcbNewCallback("ifsdl)p", &DynamicCommand::builderCallbackHanler, this);
    if (this->setBuilder(builder))
        return builder;
    return nullptr;
}

#pragma endregion

#ifdef TEST_DYNAMIC_COMMAND

//TInstanceHook(std::unique_ptr<Command>&, "?createCommand@CommandRegistry@@AEBA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z",
//              CommandRegistry, std::unique_ptr<Command>& res, struct CommandRegistry::ParseToken const& parseToken, class CommandOrigin const& origin, int unk, std::string& str, class std::vector<std::string>& strs)
//{
//    uintptr_t* v9 = *(uintptr_t**)&parseToken;
//    int v10 = *(int*)(*(uintptr_t*)&parseToken + 36i64);
//    if ((v10 & 0x200000) != 0)
//        v10 = *(int*)(*v9 + 36i64);
//    auto& commandName = *(std::string*)(*(uintptr_t*)(this + 192) + 32 * (v10 & 0xFFFFFFFFF80FFFFFui64));
//    if (dynamicCommandInstances.count(commandName) == 0)
//        return original(this, res, parseToken, origin, unk, str, strs);
//
//    commandAllocateLock.lock();
//    latestAllocateName = commandName;
//    auto& rtn = original(this, res, parseToken, origin, unk, str, strs);
//    commandAllocateLock.unlock();
//    return rtn;
//}

#include <third-party/magic_enum/magic_enum.hpp>
#include <MC/CommandUtils.hpp>
#include <MC/Actor.hpp>
#include <MC/Player.hpp>

void testRegCommand(std::string const& name = "dyncmd")
{
    using Param = DynamicCommand::ParameterData;
    using ParamType = DynamicCommand::ParameterType;
    Param boolParam(ParamType::Bool, "testBool", false);
    Param intParam(ParamType::Int, "testInt", false);
    Param floatParam(ParamType::Float, "testFloat", false);
    Param strParam(ParamType::String, "testStr", false);
    Param actorParam(ParamType::Actor, "testActor", true);
    Param playerParam(ParamType::Player, "testPlayer", true);
    Param posParam(ParamType::Position, "testPos", true);

    DynamicCommand::setup(
        name, "dynamic command",
        {},
        {boolParam, intParam, floatParam, strParam, actorParam, playerParam, posParam},
        {{"testBool", "testInt", "testFloat", "testStr", "testActor", "testPlayer", "testPos"}},
        [](CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
            output.success("Success");
            auto testBool = results["testBool"].get<bool>();
            output.success(fmt::format("testBool is {}", testBool));
            for (auto& [name, result] : results)
            {
                switch (result.getType())
                {
                    case ParameterType::Bool:
                        output.success(fmt::format("name: {}, type: {}, value: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), result.get<bool>()));
                        break;
                    case ParameterType::Int:
                        output.success(fmt::format("name: {}, type: {}, value: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), result.get<int>()));
                        break;
                    case ParameterType::Float:
                        output.success(fmt::format("name: {}, type: {}, value: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), result.get<float>()));
                        break;
                    case ParameterType::Actor:
                    {
                        auto& actors = result.get<std::vector<Actor*>>(origin);
                        output.success(fmt::format("name: {}, type: {}, size: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), actors.size()));
                        for (auto& actor : actors)
                        {
                            output.success(fmt::format("Name: {}", CommandUtils::getActorName(*actor)));
                        }
                        break;
                    }
                    case ParameterType::Player:
                    {
                        auto& players = result.get<std::vector<Player*>>(origin);
                        output.success(fmt::format("name: {}, type: {}, size: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), players.size()));
                        for (auto& player : players)
                        {
                            output.success(fmt::format("Name: {}", CommandUtils::getActorName(*player)));
                        }
                        break;
                    }
                    case ParameterType::String:
                        output.success(fmt::format("name: {}, type: {}, value: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), result.get<std::string>()));
                        break;
                    case ParameterType::Position:
                        output.success(fmt::format("name: {}, type: {}, value: {}",
                                                   result.getName(), magic_enum::enum_name(result.getType()), result.get<Vec3>(origin).toString()));
                        break;
                    case ParameterType::Enum:
                        break;
                    case ParameterType::SoftEnum:

                        break;
                    default:
                        logger.error("Unknown Parameter Type {}", (int)result.getType());
                        break;
                }
            }
        },
        CommandPermissionLevel::Any);
    //return;
    // Direct setup of dynamic command with necessary information
    DynamicCommand::setup(
        "dynenum",         // command name
        "dynamic command", // command description
        {
            // enums{enumName, {values...}}
            {"TestEnum1", {"add", "remove"}},
            {"TestEnum2", {"list"}},
        },
        {
            // parameters(type, name, [optional], [enumOptions(also enumName)]
            DynamicCommand::ParameterData(DynamicCommand::ParameterType::Enum, "testEnum", "TestEnum1"),
            DynamicCommand::ParameterData(DynamicCommand::ParameterType::Enum, "testEnum", "TestEnum2"),
            DynamicCommand::ParameterData(DynamicCommand::ParameterType::Int, "testInt", true),
        },
        {
            // overloads{ (type == Enum ? enumOptions : name) ...}
            {"TestEnum1", "testInt"},
            {"TestEnum2"},
        },
        // dynamic command callback
        [](CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
            auto& action = results["testEnum"].get<std::string>();
            switch (do_hash(action.c_str()))
            {
                case do_hash("list"):
                    output.success(fmt::format("testEnum: {}", action));
                case do_hash("add"):
                case do_hash("remove"):
                    if (results["testInt"].isSet)
                        output.success(fmt::format("testInt is {}", results["testInt"].get<int>()));
                    else
                        output.success("testInt is not set");
                    break;
                default:
                    break;
            }
        },
        CommandPermissionLevel::Any);
}
TClasslessInstanceHook2("TestDynamicCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ")
{
    original(this);
    testRegCommand("dyncmdtest");
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto sender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
    if (sender)
        sender->sendBroadcast(packet);

    using ParamType = DynamicCommand::ParameterType;
    using ParameterIndex = DynamicCommandInstance::ParameterIndex;
    // create a dynamic command
    auto command = DynamicCommand::createCommand("dyncmd", "dynamic command", CommandPermissionLevel::GameMasters);

    auto& optionsAdd = command->addEnum("TestOperation1", {"add", "remove"});
    auto& optionsList = command->addEnum("TestOperation2", {"list"});

    command->newParameter(ParamType::Enum, "testEnum", optionsAdd, "", (CommandParameterOption)1);
    command->newParameter(ParamType::Enum, "testEnum", optionsList, "", (CommandParameterOption)1);
    command->newParameter(ParamType::String, "testString", false);

    command->addOverload({optionsAdd, "testString"}); // dyncmd <add|remove> <testString:string>
    command->addOverload({"TestOperation2"});         // dyncmd <list>

    command->setCallback([](CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
        switch (do_hash(results["testEnum"].get<std::string>().c_str()))
        {
            case do_hash("add"):
                output.success(fmt::format("Add - {}", results["testString"].get<std::string>()));
                break;
            case do_hash("remove"):
                output.success(fmt::format("Remove - {}", results["testString"].get<std::string>()));
                break;
            case do_hash("list"):
                output.success("List");
                break;
            default:
                break;
        }
    });
    // do not forget to setup the command instance
    DynamicCommand::setup(std::move(command));
};


TClasslessInstanceHook2("TestDynamicCommand_attack", bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
                        Actor* ac, int* damageCause)
{
    static int i = 0;
    i++;
    auto name = fmt::format("dyncmd{}", i);
    //testRegCommand(name);

    return original(this, ac, damageCause);
}

#endif // DEBUG
