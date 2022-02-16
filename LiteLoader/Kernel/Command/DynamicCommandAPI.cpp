#include <DynamicCommandAPI.h>
#include <MC/AvailableCommandsPacket.hpp>
#include <MC/LoopbackPacketSender.hpp>
#include <MC/Level.hpp>
#include <LoggerAPI.h>

extern Logger logger;
typedef DynamicCommand::Parameter Parameter;
typedef DynamicCommand::Result Result;
typedef DynamicCommand::ParameterType ParameterType;
typedef DynamicCommandInstance::ParameterIndex ParameterIndex;
#include <LLAPI.h>
inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string func, HMODULE handler)
{
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Function ({})", func);
    if (handler)
        logger.error("In Plugin <{}>", LL::getPlugin(handler)->name);
}

#define CatchDynamicCommandError(func, handler)                                             \
    catch (const seh_exception& e)                                                          \
    {                                                                                       \
        OutputError("Uncaught SEH Exception Detected!", e.code(), e.what(), func, handler); \
    }                                                                                       \
    catch (const std::exception& e)                                                         \
    {                                                                                       \
        OutputError("Uncaught C++ Exception Detected!", errno, e.what(), func, handler);    \
    }                                                                                       \
    catch (...)                                                                             \
    {                                                                                       \
        OutputError("Uncaught Exception Detected!", -1, "", func, handler);                 \
    }

namespace
{
static std::string latestAllocateName = "";
static std::mutex commandAllocateLock;
std::unordered_map<std::string, std::unique_ptr<DynamicCommandInstance>> dynamicCommandInstances;
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
} // namespace

inline size_t getDynamicCommandSize(std::vector<Parameter> const& parameters)
{
    if (parameters.empty())
        return sizeof(DynamicCommand);
    // offset + sizeof(value) + sizeof(XXX_isSet)
    return (parameters.end() - 1)->offset + (parameters.end() - 1)->size + 8;
}

Parameter::Parameter(ParameterType type, std::string const& name, bool optional, std::string const& description)
    : type(type)
    , name(name)
    , optional(optional)
    , description(description)
{
    size = ParameterSize.at(type);
}

Result Parameter::getResult(DynamicCommand const* command) const
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

template <typename T>
CommandParameterData Parameter::makeParameterData() const
{
    assert(offsetInited);
    assert(checkTempateType<T>(type));
    CommandParameterDataType dataType;
    if (type == ParameterType::Enum)
        dataType = CommandParameterDataType::ENUM;
    else if (type == ParameterType::SoftEnum)
        dataType = CommandParameterDataType::SOFT_ENUM;
    else
        dataType = CommandParameterDataType::NORMAL;

    CommandParameterData param{
        std::is_same_v<T, bool> ? SymCall("??$type_id@VCommandRegistry@@_N@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ", typeid_t<CommandRegistry>)() : CommandRegistry::getNextTypeId(),
        type == ParameterType::Enum ? &CommandRegistry::fakeParse<T> : CommandRegistry::getParseFn<T>(),
        name,
        dataType,
        description == "" ? nullptr : description.data(),
        (int)offset,
        optional,
        (int)offset + (int)size};
    if ((int)option != -1)
        param.addOptions(option);
    return std::move(param);
}
CommandParameterData Parameter::makeParameterData() const
{
    switch (type)
    {
        case ParameterType::Bool:
            return makeParameterData<bool>();
            break;
        case ParameterType::Int:
            return makeParameterData<int>();
            break;
        case ParameterType::Float:
            return makeParameterData<float>();
            break;
        case ParameterType::Actor:
            return makeParameterData<CommandSelector<Actor>>();
            break;
        case ParameterType::Player:
            return makeParameterData<CommandSelector<Player>>();
            break;
        case ParameterType::String:
            return makeParameterData<std::string>();
            break;
        case ParameterType::Position:
            return makeParameterData<CommandPosition>();
            break;
        case ParameterType::Enum:
            return makeParameterData<int>();
            break;
        case ParameterType::SoftEnum:
            return makeParameterData<std::string>();
            break;
        default:
            logger.error("Unknown Parameter Type {}", (int)type);
            break;
    }
    return {};
};

std::unique_ptr<Command> DynamicCommand::commandBuilder()
{
    assert(dynamicCommandInstances.count(latestAllocateName));
    if (dynamicCommandInstances.count(latestAllocateName) == 0)
    {
        logger.error("Error in allocate dynamic command");
        return std::make_unique<DynamicCommand>();
    }
    std::vector<Parameter> const& params = dynamicCommandInstances.at(latestAllocateName)->parameters;
    size_t size = getDynamicCommandSize(params);
    auto command = new char[size]{0};
    (*(DynamicCommand*)command).DynamicCommand::DynamicCommand();
    (*(DynamicCommand*)command).commandName = latestAllocateName;
    for (auto& param : params)
    {
        size_t offset = param.offset;
        dAccess<bool>(command, offset + size) = false; //XXXX_isSet;
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
    return std::unique_ptr<DynamicCommand>((DynamicCommand*)command);
}

DynamicCommand::~DynamicCommand()
{
    auto& parameters = dynamicCommandInstances.at(commandName)->parameters;
    auto size = getDynamicCommandSize(parameters);
    for (auto& parameter : parameters)
    {
        auto offset = parameter.offset;
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
    auto& paramData = dynamicCommandInstances.at(commandName);
    try
    {
        auto& params = paramData->parameters;
        std::vector<Result> results;

        for (auto& param : params)
        {
            results.emplace_back(param.getResult(this));
        }
        paramData->callback(origin, output, results);
    }
    CatchDynamicCommandError("DynamicCommand::execute", paramData->handler);
}
#include <LLAPI.h>
bool DynamicCommand::setup(std::string const& name, std::string const& description, std::vector<Parameter>&& params, std::unordered_map<std::string, std::vector<std::string>>&& enumData, DynamicCommand::CallBackFn&& callback, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    try
    {
        auto instance = registerCommand(name, description, permission, flag1, flag2, handler);
        if (!instance)
            return false;
        std::vector<CommandParameterData> datas;
        for (auto& [name, values] : enumData) {
            instance->addEnum(name, std::move(values));
        }
        for (Parameter& param : params)
        {
            auto paramIndex = instance->addParameter(std::move(param));
            if (!paramIndex->description.empty()) {
                auto desc = paramIndex->description.data();
                if (enumData.count(desc) && enumData.at(desc).size() < 4
                    || instance->enumRanges.count(desc) && instance->enumRanges.at(desc).second < 4)
                {
                    paramIndex->setOption((CommandParameterOption)1);
                }
            }
        }
        instance->buildSingleOverload();
        instance->setCallback(std::move(callback));
        setup(std::move(instance));

        //auto packet = new char[120];
        ////((AvailableCommandsPacket*)packet)->AvailableCommandsPacket::AvailableCommandsPacket();
        //auto tmp = &CommandRegistry::serializeAvailableCommands;
        //AvailableCommandsPacket& (CommandRegistry::*func)(AvailableCommandsPacket&);
        //*(void**)&func = *(void**)&tmp;
        //(Global<CommandRegistry>->*func)(*(AvailableCommandsPacket*)packet);
        //((AvailableCommandsPacket*)packet)->AvailableCommandsPacket::~AvailableCommandsPacket();
        //delete packet;

        auto packet = Global<CommandRegistry>->serializeAvailableCommands();
        auto sender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
        if (sender)
            sender->sendBroadcast(packet);
        return true;
    }
    CatchDynamicCommandError("DynamicCommand::setup", handler);
    return false;
}
inline bool DynamicCommand::setup(std::string const& name, std::string const& description, DynamicCommand::CallBackFn&& callback, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    return setup(name, description, {}, {}, std::move(callback), permission, flag1, flag2, handler);
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
    for (auto& overload : commandInstance->overloads)
    {
        Global<CommandRegistry>->registerOverload(commandInstance->name, &DynamicCommand::commandBuilder, std::forward<std::vector<CommandParameterData>>(overload));
    }
    commandInstance->overloads.clear();
    dynamicCommandInstances.emplace(commandInstance->name, std::move(commandInstance));
}
std::unique_ptr<class DynamicCommandInstance> DynamicCommand::registerCommand(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    if (Global<CommandRegistry>->findCommand(name))
        return {};
    return std::make_unique<DynamicCommandInstance>(name, description, permission, flag1 |= flag2, std::vector<DynamicCommand::Parameter>{}, nullptr, handler);
}
Result& DynamicCommand::getFirstResultByName(std::vector<Result>& results, std::string const& name)
{
    for (auto& result : results)
    {
        if (result.getName() == name)
        {
            return result;
        }
    }
};

inline void DynamicCommandInstance::setCallback(DynamicCommand::CallBackFn&& callback)
{
    this->callback = callback;
}
ParameterIndex DynamicCommandInstance::addParameter(DynamicCommand::Parameter&& parameter)
{
    size_t offset = getDynamicCommandSize(parameters);
    if (parameter.type == ParameterType::Enum) {
        if (enumRanges.find(parameter.description.data()) == enumRanges.end()) {
            //throw std::runtime_error("TODO");
        }
    }
    //else if (parameter.type == ParameterType::Enum)
    //{
    //}
    auto param = &parameters.emplace_back(std::move(parameter));
    param->offset = offset;
    param->size = ParameterSize.at(param->type);
    param->offsetInited = true;
    return {&parameters, parameters.size() - 1};
};

ParameterIndex DynamicCommandInstance::addParameter(ParameterType type, std::string const& name, bool optional, std::string const& description)
{
    size_t offset = getDynamicCommandSize(parameters);
    auto param = &parameters.emplace_back(type, name, optional, description);
    param->offset = offset;
    param->size = ParameterSize.at(type);
    param->offsetInited = true;
    return {&parameters, parameters.size() - 1};
}
ParameterIndex DynamicCommandInstance::findFirstParameterByName(std::string const& name)
{
    size_t index = 0;
    for (auto& param : parameters)
    {
        if (param.name == name)
            return {&parameters, index};
        index++;
    }
    return {nullptr, (size_t)-1};
}
bool DynamicCommandInstance::buildOverload(std::vector<std::tuple<ParameterIndex, bool, std::string const&>> params)
{
    std::vector<CommandParameterData> datas;
    for (auto& [param, optional, options] : params)
    {
        param->setOptional(optional);
        param->setEnumOptions(options);
        datas.emplace_back(param->makeParameterData());
    }
    overloads.emplace_back(std::move(datas));
    return true;
}
bool DynamicCommandInstance::buildOverload(std::vector<std::tuple<ParameterIndex, bool>> params)
{
    std::vector<CommandParameterData> datas;
    for (auto& [param, optional] : params)
    {
        param->setOptional(optional);
        datas.emplace_back(param->makeParameterData());
    }
    overloads.emplace_back(std::move(datas));
    return true;
}
bool DynamicCommandInstance::buildOverload(std::vector<std::tuple<ParameterIndex, std::string const&>> params)
{
    std::vector<CommandParameterData> datas;
    for (auto& [param, options] : params)
    {
        param->setEnumOptions(options);
        datas.emplace_back(param->makeParameterData());
    }
    overloads.emplace_back(std::move(datas));
    return true;
}
bool DynamicCommandInstance::buildOveload(std::vector<ParameterIndex> params)
{
    std::vector<CommandParameterData> datas;
    for (auto& param : params)
    {
        datas.emplace_back(param->makeParameterData());
    }
    overloads.emplace_back(std::move(datas));
    return true;
}
bool DynamicCommandInstance::buildSingleOverload()
{
    std::vector<CommandParameterData> datas;
    for (auto& param : parameters)
    {
        datas.emplace_back(param.makeParameterData());
    }
    overloads.emplace_back(std::move(datas));
    return true;
}


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


TInstanceHook(std::unique_ptr<Command>&, "?createCommand@CommandRegistry@@AEBA?AV?$unique_ptr@VCommand@@U?$default_delete@VCommand@@@std@@@std@@AEBUParseToken@1@AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z",
              CommandRegistry, std::unique_ptr<Command>& res, struct CommandRegistry::ParseToken const& parseToken, class CommandOrigin const& origin, int unk, std::string& str, class std::vector<std::string>& strs)
{
    uintptr_t* v9 = *(uintptr_t**)&parseToken;
    int v10 = *(int*)(*(uintptr_t*)&parseToken + 36i64);
    if ((v10 & 0x200000) != 0)
        v10 = *(int*)(*v9 + 36i64);
    auto& commandName = *(std::string*)(*(uintptr_t*)(this + 192) + 32 * (v10 & 0xFFFFFFFFF80FFFFFui64));
    if (dynamicCommandInstances.count(commandName) == 0)
        return original(this, res, parseToken, origin, unk, str, strs);

    commandAllocateLock.lock();
    latestAllocateName = commandName;
    auto& rtn = original(this, res, parseToken, origin, unk, str, strs);
    commandAllocateLock.unlock();
    return rtn;
}

#ifdef TEST_DYNAMIC_COMMAND
#include <third-party/magic_enum/magic_enum.hpp>
#include <MC/CommandUtils.hpp>

void testRegCommand(std::string const& name = "dyncmd")
{
    using Param = DynamicCommand::Parameter;
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
        {boolParam, intParam, floatParam, strParam, actorParam, playerParam, posParam},
        {},
        [](CommandOrigin const& origin, CommandOutput& output, std::vector<Result>& results) {
            output.success("Success");
            auto testBool = DynamicCommand::getFirstResultByName<bool>(results, "testBool");
            output.success(fmt::format("testBool is {}", testBool));
            for (auto& result : results)
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
        "dynamic command", //  command description
        {
            // dynamic command parameter
            DynamicCommand::Parameter(DynamicCommand::ParameterType::Enum, "testEnum", false, "TestEnum"),
            DynamicCommand::Parameter(DynamicCommand::ParameterType::Int, "testInt", true),
        },
        // enum data
        {
            {"TestEnum", {"add", "list", "test"}}},
        // dynamic command callback
        [](CommandOrigin const& origin, CommandOutput& output, std::vector<Result>& results) {
            output.success("Success");
            // get parameter value by parameter name
            auto& testBool = DynamicCommand::getFirstResultByName<std::string>(results, "testEnum");
            output.success(fmt::format("testEnum is {}", testBool));
            // get parameter value index
            if (results[1].isSet)
                output.success(fmt::format("testInt is {}", results[1].get<int>()));
            else
                output.success("testInt is not set");
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
    // get dynamic command instance
    auto command = DynamicCommand::registerCommand("dyncmd", "dynamic command", CommandPermissionLevel::GameMasters);

    // add enum parameter options ["add" and "remove"]
    auto& options = command->addEnum("TestOperation1", std::vector<std::string>{"add", "remove"});
    // add enum parameter ["list"]
    auto& optionsList = command->addEnum("TestOperation2", std::vector<std::string>{"list"});

    // make enum parameter with default options ["add" and "remove"]
    auto enumParam = command->addParameter(ParamType::Enum, "testEnum", false, options);
    enumParam->setOption((CommandParameterOption)1);
    auto stringParam = command->addParameter(ParamType::String, "testString", false);

    // build overload, at this time, enumParam's options are ["add" and "remove"]
    command->buildOveload({enumParam, stringParam}); // dyncmd <add|remove> <testString:string>

    // switch enum options to ["list"]
    enumParam->setEnumOptions(optionsList);
    command->buildOveload({enumParam}); // dyncmd <list>

    command->setCallback([](CommandOrigin const& origin, CommandOutput& output, std::vector<Result>& results) {
        switch (do_hash(results[0].get<std::string>().c_str()))
        {
            case do_hash("add"):
                output.success(fmt::format("Add - {}", results[1].get<std::string>()));
                break;
            case do_hash("remove"):
                output.success(fmt::format("Remove - {}", results[1].get<std::string>()));
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
    testRegCommand(name);

    return original(this, ac, damageCause);
}

#endif // DEBUG