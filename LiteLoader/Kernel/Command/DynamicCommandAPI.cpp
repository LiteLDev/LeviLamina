#include <DynamicCommandAPI.h>
#include <I18nAPI.h>
#include <LLAPI.h>
#include <LoggerAPI.h>
#include <MC/AvailableCommandsPacket.hpp>
#include <MC/CommandMessage.hpp>
#include <MC/CommandOutput.hpp>
#include <MC/CommandRegistry.hpp>
#include <MC/ItemInstance.hpp>
#include <MC/MobEffect.hpp>
#include <MC/ActorDefinitionIdentifier.hpp>
#include <MC/Level.hpp>
#include <MC/Block.hpp>
#include <MC/LoopbackPacketSender.hpp>
#include <third-party/dyncall/dyncall_callback.h>
#include <third-party/magic_enum/magic_enum.hpp>
#include <MC/CommandUtils.hpp>

extern Logger logger;

// global variable and function
namespace
{
//static std::string latestAllocateName = "";
static std::mutex commandAllocateLock;
std::unordered_map<std::string, std::unique_ptr<DynamicCommandInstance>> dynamicCommandInstances;

typedef DynamicCommand::Result Result;
typedef DynamicCommand::ParameterType ParameterType;
typedef DynamicCommand::ParameterPtr ParameterPtr;
typedef DynamicCommand::ParameterData ParameterData;
typedef DynamicCommandInstance::ParameterIndex ParameterIndex;

auto const ParameterSizeMap = std::unordered_map<ParameterType, size_t>{
    {ParameterType::Bool, std::max((size_t)8, sizeof(bool))},
    {ParameterType::Int, std::max((size_t)8, sizeof(int))},
    {ParameterType::Float, std::max((size_t)8, sizeof(float))},
    {ParameterType::Actor, std::max((size_t)8, sizeof(CommandSelector<Actor>))},
    {ParameterType::Player, std::max((size_t)8, sizeof(CommandSelector<Player>))},
    {ParameterType::String, std::max((size_t)8, sizeof(std::string))},
    {ParameterType::BlockPos, std::max((size_t)8, sizeof(CommandPosition))},
    {ParameterType::Vec3, std::max((size_t)8, sizeof(CommandPositionFloat))},
    {ParameterType::RawText, std::max((size_t)8, sizeof(CommandRawText))},
    {ParameterType::Message, std::max((size_t)8, sizeof(CommandMessage))},
    {ParameterType::JsonValue, std::max((size_t)8, sizeof(Json::Value))},
    {ParameterType::Item, std::max((size_t)8, sizeof(CommandItem))},
    {ParameterType::Block, std::max((size_t)8, sizeof(Block const*))},
    {ParameterType::Effect, std::max((size_t)8, sizeof(MobEffect const*))},
    {ParameterType::Enum, std::max((size_t)8, sizeof(int))},
    {ParameterType::SoftEnum, std::max((size_t)8, sizeof(std::string))},
    {ParameterType::ActorType, std::max((size_t)8, sizeof(ActorDefinitionIdentifier const*))},
    {ParameterType::Command, std::max((size_t)8, sizeof(std::unique_ptr<Command>))},
};

namespace ParameterDataType
{
typedef bool Bool;
typedef int Int;
typedef float Float;
typedef std::string String;
typedef CommandSelector<Actor> Actor;
typedef CommandSelector<Player> Player;
typedef CommandPosition BlockPos;
typedef CommandPositionFloat Vec3;
typedef CommandRawText RawText;
typedef CommandMessage Message;
typedef Json::Value JsonValue;
typedef CommandItem Item;
typedef Block const* Block;
typedef MobEffect const* Effect;
//typedef CommandPosition Position;
typedef int Enum;
typedef std::string SoftEnum;
typedef ActorDefinitionIdentifier const* ActorType;
typedef std::unique_ptr<Command> Command;
} // namespace ParameterDataType

inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string func, HMODULE handler)
{
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Function ({})", func);
    if (auto plugin = LL::getPlugin(handler))
        logger.error("In Plugin <{}>", plugin->name);
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

} // namespace

#pragma region ParameterPtr

inline DynamicCommand::ParameterPtr::ParameterPtr(ParameterType type, size_t offset)
    : type(type)
    , offset(offset)
{
}

inline bool DynamicCommand::ParameterPtr::isValueSet(DynamicCommand const* command) const
{
    return dAccess<bool>(command, offset + ParameterSizeMap.at(type));
}

Result ParameterPtr::getResult(DynamicCommand const* command, CommandOrigin const* origin) const
{
    //auto commandInstance = dynamicCommandInstances.at(command->getCommandName()).get();
    return {this, command, origin};
}

#pragma endregion

#pragma region ParameterData

inline DynamicCommand::ParameterData::ParameterData(std::string const& name, ParameterType type, bool optional, std::string const& enumOptions, std::string const& identifier, CommandParameterOption parameterOption)
    : name(name)
    , type(type)
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

inline DynamicCommand::ParameterData::ParameterData(std::string const& name, DynamicCommand::ParameterType type, std::string const& enumOptions, std::string const& identifier, CommandParameterOption parameterOption)
    : ParameterData(name, type, false, enumOptions, identifier, parameterOption)
{
}

inline CommandParameterData DynamicCommand::ParameterData::makeParameterData() const
{
    switch (type)
    {
        case ParameterType::Bool:
            return makeParameterData<ParameterType::Bool, bool>();
        case ParameterType::Int:
            return makeParameterData<ParameterType::Int, int>();
        case ParameterType::Float:
            return makeParameterData<ParameterType::Float, float>();
        case ParameterType::String:
            return makeParameterData<ParameterType::String, std::string>();
        case ParameterType::Actor:
            return makeParameterData<ParameterType::Actor, CommandSelector<Actor>>();
        case ParameterType::Player:
            return makeParameterData<ParameterType::Player, CommandSelector<Player>>();
        case ParameterType::BlockPos:
            return makeParameterData<ParameterType::BlockPos, CommandPosition>();
        case ParameterType::Vec3:
            return makeParameterData<ParameterType::Vec3, CommandPositionFloat>();
        case ParameterType::RawText:
            return makeParameterData<ParameterType::RawText, CommandRawText>();
        case ParameterType::Message:
            return makeParameterData<ParameterType::Message, CommandMessage>();
        case ParameterType::JsonValue:
            return makeParameterData<ParameterType::JsonValue, Json::Value>();
        case ParameterType::Item:
            return makeParameterData<ParameterType::Item, CommandItem>();
        case ParameterType::Block:
            return makeParameterData<ParameterType::Block, Block const*>();
        case ParameterType::Effect:
            return makeParameterData<ParameterType::Effect, MobEffect const*>();
            //case ParameterType::Position:
            //    return makeParameterData<ParameterType::Position, CommandPosition>();
        case ParameterType::Enum:
            return makeParameterData<ParameterType::Enum, int>();
        case ParameterType::SoftEnum:
            return makeParameterData<ParameterType::SoftEnum, std::string>();
        case ParameterType::ActorType:
            return makeParameterData<ParameterType::ActorType, ActorDefinitionIdentifier const*>();
        case ParameterType::Command:
            return makeParameterData<ParameterType::Command, std::unique_ptr<Command>>();
        default:
            return {};
    }
}

#pragma endregion

#pragma region Result

inline DynamicCommand::Result::Result(ParameterPtr const* ptr, DynamicCommand const* command, CommandOrigin const* origin, DynamicCommandInstance const* instance)
    : type(ptr->type)
    , offset(ptr->offset)
    , command(command)
    , origin(origin)
    , instance(instance ? instance : command->getInstance())
    , isSet(ptr->isValueSet(command))
{
}

inline DynamicCommand::Result::Result()
    : type((ParameterType)-1)
    , offset(-1)
    , command(nullptr)
    , origin(nullptr)
    , instance(nullptr)
    , isSet(false)
{
}

inline std::string const& DynamicCommand::Result::getEnumValue() const
{
    if (getType() == ParameterType::Enum)
    {
        auto index = getRaw<int>();
        return instance->getEnumValue(index);
    }
    else if (getType() == ParameterType::SoftEnum)
    {
        return getRaw<std::string>();
    }
    return "";
}

inline ParameterType DynamicCommand::Result::getType() const
{
    return type;
}

inline std::string DynamicCommand::Result::getName() const
{
    for (auto& [name, ptr] : instance->parameterPtrs)
    {
        if (ptr.getOffset() == offset)
            return name;
    }
}

std::string DynamicCommand::Result::toDebugString() const
{
    std::string name = getName();
    ParameterType type = getType();
    std::string typeName = fmt::format("{}({})", magic_enum::enum_name(type), (int)type);
    switch (type)
    {
        case ParameterType::Bool:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<bool>());
        case ParameterType::Int:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<int>());
        case ParameterType::Float:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<float>());
        case ParameterType::Actor:
            //return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<CommandSelector<Actor>>().getName());
        case ParameterType::Player:
        {
            std::vector<Actor*> actors = get<std::vector<Actor*>>();
            std::ostringstream oss;
            oss << "count: " << actors.size() << ", actors: [";
            bool first = true;
            for (auto& actor : actors) {
                if (!first) oss << ", ";
                oss << CommandUtils::getActorName(*actor);
            }
            oss << "]";
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, oss.str());
        }
        case ParameterType::String:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<std::string>());
        case ParameterType::BlockPos:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<CommandPosition>().serialize().toSNBT());
        case ParameterType::Vec3:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<CommandPositionFloat>().serialize().toSNBT());
        case ParameterType::RawText:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<CommandRawText>().getText());
        case ParameterType::Message:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<CommandMessage>().getMessage(*origin));
        case ParameterType::JsonValue:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<Json::Value>().toStyledString().substr(0, getRaw<Json::Value>().toStyledString().size() - 1));
        case ParameterType::Item:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<CommandItem>().createInstance(1, 1, nullptr, true).value_or(ItemInstance::EMPTY_ITEM).toString());
        case ParameterType::Block:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, isSet ? getRaw<Block const*>()->toDebugString() : "nullptr");
        case ParameterType::Effect:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, isSet ? getRaw<MobEffect const*>()->getComponentName().getString() : "nullptr");
        case ParameterType::Enum:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<std::string>());
        case ParameterType::SoftEnum:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<std::string>());
        case ParameterType::ActorType:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, isSet ? getRaw<ActorDefinitionIdentifier const*>()->getCanonicalName() : "Null");
        case ParameterType::Command:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, isSet ? getRaw<std::unique_ptr<Command>>()->getCommandName() : "Null");
        default:
            logger.error("Unknown Parameter Type {}, name: {}", typeName, name);
            break;
    }
}

inline DynamicCommandInstance const* DynamicCommand::Result::getInstance() const
{
    std::string commandName = command->getCommandName();
    auto iter = dynamicCommandInstances.find(commandName);
    if (iter == dynamicCommandInstances.end())
        return nullptr;
    return iter->second.get();
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
    for (auto& [name, param] : commandInstance.parameterPtrs)
    {
        size_t offset = param.getOffset();
        dAccess<bool>(command, offset + ParameterSizeMap.at(param.type)) = false; //XXXX_isSet;
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
            case ParameterType::BlockPos:
                dAccess<CommandPosition>(command, offset).CommandPosition::CommandPosition();
                break;
            case ParameterType::Vec3:
                dAccess<CommandPositionFloat>(command, offset).CommandPositionFloat::CommandPositionFloat();
                break;
            case ParameterType::RawText:
                dAccess<CommandRawText>(command, offset).CommandRawText::CommandRawText();
                break;
            case ParameterType::Message:
                dAccess<CommandMessage>(command, offset).CommandMessage::CommandMessage();
                break;
            case ParameterType::JsonValue:
                dAccess<Json::Value>(command, offset).Json::Value::Value();
                break;
            case ParameterType::Item:
                dAccess<CommandItem>(command, offset).CommandItem::CommandItem();
                break;
            case ParameterType::Block:
                dAccess<Block const*>(command, offset) = nullptr;
                break;
            case ParameterType::Effect:
                dAccess<MobEffect const*>(command, offset) = nullptr;
                break;
                //case ParameterType::Position:
                //    dAccess<CommandPosition>(command, offset).CommandPosition::CommandPosition();
                break;
            case ParameterType::Enum:
                dAccess<int>(command, offset) = int();
                break;
            case ParameterType::SoftEnum:
                dAccess<std::string>(command, offset).basic_string::basic_string();
                break;
            case ParameterType::ActorType:
                dAccess<ActorDefinitionIdentifier const*>(command, offset) = nullptr;
                break;
            case ParameterType::Command:
                dAccess<std::unique_ptr<Command>>(command, offset) = {};
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
    auto& commandIns = *dynamicCommandInstances.at(getCommandName());
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
            case ParameterType::BlockPos:
                dAccess<CommandPosition>(this, offset).~CommandPosition();
                break;
            case ParameterType::Vec3:
                dAccess<CommandPositionFloat>(this, offset).~CommandPositionFloat();
                break;
            case ParameterType::RawText:
                dAccess<CommandRawText>(this, offset).~CommandRawText();
                break;
            case ParameterType::Message:
                dAccess<CommandMessage>(this, offset).~CommandMessage();
                break;
            case ParameterType::JsonValue:
                dAccess<Json::Value>(this, offset).~Value();
                break;
            case ParameterType::Item:
                dAccess<CommandItem>(this, offset).~CommandItem();
                break;
            case ParameterType::Block:
                dAccess<Block const*>(this, offset) = nullptr;
                break;
            case ParameterType::Effect:
                dAccess<MobEffect const*>(this, offset) = nullptr;
                break;
                //case ParameterType::Position:
                //    dAccess<CommandPosition>(this, offset).~CommandPosition();
                //    break;
            case ParameterType::Enum:
                break;
            case ParameterType::SoftEnum:
                dAccess<std::string>(this, offset).~basic_string();
                break;
            case ParameterType::ActorType:
                dAccess<ActorDefinitionIdentifier const*>(this, offset)=nullptr;
                break;
            case ParameterType::Command:
                dAccess<std::unique_ptr<Command>>(this, offset).~unique_ptr<Command>();
                break;
            default:
                logger.error("Unknown Parameter Type {}", (int)parameter.type);
                break;
        }
    }
}

void DynamicCommand::execute(CommandOrigin const& origin, CommandOutput& output) const
{
    auto iter = dynamicCommandInstances.find(getCommandName());
    if (iter == dynamicCommandInstances.end())
    {
        return output.error("Dynamic Command Not Found");
    }
    auto& commandIns = *iter->second;
    if (!commandIns.callback)
    {
        return output.error(fmt::format("Command {} has been removed.", getCommandName()));
    }
    try
    {
        std::unordered_map<std::string, Result> results;

        for (auto& [name, param] : commandIns.parameterPtrs)
        {
            results.emplace(name, param.getResult(this, &origin));
        }
        commandIns.callback(*this, origin, output, results);
    }
    CatchDynamicCommandError("DynamicCommand::execute", commandIns.handler);
}

std::unique_ptr<class DynamicCommandInstance> DynamicCommand::createCommand(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    return DynamicCommandInstance::create(name, description, permission, flag1 |= flag2, handler);
}

DynamicCommandInstance const* DynamicCommand::setup(std::unique_ptr<class DynamicCommandInstance> commandInstance)
{
    if (!commandInstance)
        return false;
    if (!commandInstance->callback)
        return false;
    if (commandInstance->overloads.empty())
        return false;
    commandInstance->updateSoftEnum();
    for (auto& [name, range] : commandInstance->enumRanges)
    {
        std::vector<std::pair<std::string, uint64_t>> values;
        size_t index = range.first;
        for (auto& iter = commandInstance->enumValues.begin() + range.first; iter != commandInstance->enumValues.begin() + range.first + range.second; ++iter)
        {
            values.emplace_back(*iter, index);
            index++;
        }
        Global<CommandRegistry>->_addEnumValuesInternal(name.data(), values, typeid_t<CommandRegistry>::count++, &CommandRegistry::parseEnum<int>).val;
    }
    Global<CommandRegistry>->registerCommand(commandInstance->name, commandInstance->description->c_str(), commandInstance->permission, commandInstance->flag, commandInstance->flag);
    auto builder = commandInstance->initCommandBuilder();
    for (auto& overload : commandInstance->overloads)
    {
        Global<CommandRegistry>->registerOverload(commandInstance->name, builder, commandInstance->buildOverload(overload));
    }
    updateAvailableCommands();
    //commandInstance->overloads.clear();
    auto res = dynamicCommandInstances.emplace(commandInstance->name, std::move(commandInstance));
    return res.first->second.get();
}

std::unique_ptr<class DynamicCommandInstance> DynamicCommand::createCommand(std::string const& name, std::string const& description, std::unordered_map<std::string, std::vector<std::string>>&& enums, std::vector<ParameterData>&& params, std::vector<std::vector<std::string>>&& overloads, CallBackFn callback, CommandPermissionLevel permission, CommandFlag flag1, CommandFlag flag2, HMODULE handler)
{
    auto command = createCommand(name, description, permission, flag1, flag2, handler);
    if (!command)
        return false;
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
    return std::move(command);
}

inline bool DynamicCommand::updateAvailableCommands()
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto sender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
    if (sender)
        sender->sendBroadcast(packet);
    return true;
}

inline DynamicCommandInstance const* DynamicCommand::getInstance() const
{
    return getInstance(getCommandName());
}

DynamicCommandInstance const* DynamicCommand::getInstance(std::string const& commandName)
{
    auto iter = dynamicCommandInstances.find(commandName);
    if (iter == dynamicCommandInstances.end())
        return nullptr;
    else
        return iter->second.get();
}

#pragma endregion

#pragma region DynamicCommandInstance

inline DynamicCommandInstance::DynamicCommandInstance(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, HMODULE handler)
    : name(name)
    , description(std::make_unique<std::string>(description))
    , permission(permission)
    , flag(flag)
    , handler(handler){};

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
        commandSize += ParameterSizeMap.at(data.type) + 8;
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

inline ParameterIndex DynamicCommandInstance::newParameter(std::string const& name, DynamicCommand::ParameterType type, bool optional, std::string const& description, std::string const& identifier, CommandParameterOption parameterOption)
{
    return newParameter(ParameterData(name, type, optional, description, identifier, parameterOption));
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

inline ParameterIndex DynamicCommandInstance::mandatory(std::string const& name, DynamicCommand::ParameterType type, std::string const& description, std::string const& identifier, CommandParameterOption parameterOption)
{
    return newParameter(ParameterData(name, type, false, description, identifier, parameterOption));
}
inline ParameterIndex DynamicCommandInstance::mandatory(std::string const& name, DynamicCommand::ParameterType type, std::string const& description, CommandParameterOption parameterOption)
{
    return mandatory(name, type, description, "", parameterOption);
};
inline ParameterIndex DynamicCommandInstance::mandatory(std::string const& name, DynamicCommand::ParameterType type)
{
    return mandatory(name, type, "", "", (CommandParameterOption)0);
};

inline ParameterIndex DynamicCommandInstance::optional(std::string const& name, DynamicCommand::ParameterType type, std::string const& description, std::string const& identifier, CommandParameterOption parameterOption)
{
    return newParameter(ParameterData(name, type, true, description, identifier, parameterOption));
}

inline ParameterIndex DynamicCommandInstance::optional(std::string const& name, DynamicCommand::ParameterType type, std::string const& description, CommandParameterOption parameterOption)
{
    return optional(name, type, description, "", parameterOption);
}

inline ParameterIndex DynamicCommandInstance::optional(std::string const& name, DynamicCommand::ParameterType type)
{
    return optional(name, type, "", "", (CommandParameterOption)0);
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

bool DynamicCommandInstance::updateSoftEnum(std::string const&) const
{
    if (!name.empty())
    {
        auto iter = softEnumValues.find(name);
        if (iter != softEnumValues.end())
            Global<CommandRegistry>->addSoftEnum(iter->first, iter->second);
        else
            return false;
        return true;
    }
    else
    {
        for (auto& [key, values] : softEnumValues)
        {
            Global<CommandRegistry>->addSoftEnum(key, values);
        }
    }
}
std::string DynamicCommandInstance::setSoftEnum(std::string const& name, std::vector<std::string> const& values) const
{
    if (softEnumValues.find(name) != softEnumValues.end())
        softEnumValues.erase(name);
    auto iter = softEnumValues.emplace(name, values);
    if (hasRegistered())
    {
        updateSoftEnum(name);
    }
    return name;
}
std::string DynamicCommandInstance::addSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const
{
    if (softEnumValues.find(name) == softEnumValues.end())
        addSoftEnumValues(name, values);
    auto& vals = softEnumValues.at(name);
    for (auto& val : values)
    {
        if (std::find(vals.begin(), vals.end(), val) == vals.end())
            vals.push_back(val);
    }
    if (hasRegistered())
    {
        updateSoftEnum(name);
    }
    return name;
};
std::string DynamicCommandInstance::removeSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const
{
    if (softEnumValues.find(name) == softEnumValues.end())
        return "";
    auto& vals = softEnumValues.at(name);
    for (auto& val : values)
    {
        auto iter = std::find(vals.begin(), vals.end(), val);
        if (iter != vals.end())
            vals.erase(iter);
    }
    if (hasRegistered())
    {
        updateSoftEnum(name);
    }
    return name;
}
inline std::vector<std::string> DynamicCommandInstance::getSoftEnumValues(std::string const& name) const
{
    if (softEnumValues.find(name) == softEnumValues.end())
        return {};
    return softEnumValues.at(name);
}
inline std::vector<std::string> DynamicCommandInstance::getSoftEnumNames() const
{
    std::vector<std::string> names;
    for (auto& [name, values] : softEnumValues)
    {
        names.push_back(name);
    }
    return names;
}

inline void DynamicCommandInstance::setCallback(DynamicCommand::CallBackFn&& callback) const
{
    this->callback = callback;
}

inline void DynamicCommandInstance::removeCallback() const
{
    callback = nullptr;
}

inline std::string const& DynamicCommandInstance::getCommandName() const
{
    return name;
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

#include <MC/Actor.hpp>
#include <MC/Player.hpp>

void testRegCommand(std::string const& name = "dyncmd")
{
    using Param = DynamicCommand::ParameterData;
    using ParamType = DynamicCommand::ParameterType;
    Param boolParam("testBool", ParamType::Bool, true);
    Param intParam("testInt", ParamType::Int, true);
    Param floatParam("testFloat", ParamType::Float, true);
    Param strParam("testStr", ParamType::String, true);
    Param actorParam("testActor", ParamType::Actor, true);
    Param playerParam("testPlayer", ParamType::Player, true);
    Param BlockPosParam("testBlockPos", ParamType::BlockPos, true);
    Param Vec3Param("testVec3", ParamType::Vec3, true);
    Param RawTextParam("testRawText", ParamType::RawText, true);
    Param MessageParam("testMessage", ParamType::Message, true);
    Param JsonValueParam("testJsonValue", ParamType::JsonValue, true);
    Param ItemParam("testItem", ParamType::Item, true);
    Param BlockParam("testBlock", ParamType::Block, true);
    Param ActorTypeParam("testActorType", ParamType::ActorType, true);
    Param EffectParam("testEffect", ParamType::Effect, true);
    Param CommandParam("testCommand", ParamType::Command, true);
    //Param posParam(ParamType::Position, "testPos", true);
    // Test Command: dynparam true 114 3.14 str @e @a 3 1 4 ~3 ~1 ~4 raw text msg {"a":4} stick concrete speed version
    DynamicCommand::setup(
        "dynparam", "dynamic command",
        {},
        {
            boolParam,
            intParam,
            floatParam,
            strParam,
            actorParam,
            playerParam,
            BlockPosParam,
            Vec3Param,
            RawTextParam,
            MessageParam,
            JsonValueParam,
            ItemParam,
            BlockParam,
            ActorTypeParam,
            EffectParam,
            CommandParam,
        },
        {{
            "testActorType",
            "testBool",
            "testInt",
            "testFloat",
            "testStr",
            "testActor",
            "testPlayer",
            "testBlockPos",
            "testVec3",
            //"testRawText",
            //"testMessage",
            //"testJsonValue",
            //"testItem",
            //"testBlock",
            //"testEffect",
            //"testCommand",
        }},
        [](DynamicCommand const& command, CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
            for (auto& [name, result] : results)
            {
                output.success(result.toDebugString());
            }
        },
        CommandPermissionLevel::Any);
    return;
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
            DynamicCommand::ParameterData("testEnum", DynamicCommand::ParameterType::Enum, "TestEnum1"),
            DynamicCommand::ParameterData("testEnum", DynamicCommand::ParameterType::Enum, "TestEnum2"),
            DynamicCommand::ParameterData("testInt", DynamicCommand::ParameterType::Int, true),
        },
        {
            // overloads{ (type == Enum ? enumOptions : name) ...}
            {"TestEnum1", "testInt"},
            {"TestEnum2"},
        },
        // dynamic command callback
        [](DynamicCommand const& command, CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
            auto& action = results["testEnum"].getRaw<std::string>();
            switch (do_hash(action.c_str()))
            {
                case do_hash("list"):
                    output.success(fmt::format("testEnum: {}", action));
                case do_hash("add"):
                case do_hash("remove"):
                    if (results["testInt"].isSet)
                        output.success(fmt::format("testInt is {}", results["testInt"].getRaw<int>()));
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
    testRegCommand("dynenum");
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

    command->mandatory("testEnum", ParamType::Enum, optionsAdd, (CommandParameterOption)1);
    command->mandatory("testEnum", ParamType::Enum, optionsList, (CommandParameterOption)1);
    command->mandatory("testString", ParamType::String);

    command->addOverload({optionsAdd, "testString"}); // dyncmd <add|remove> <testString:string>
    command->addOverload({"TestOperation2"});         // dyncmd <list>

    command->setCallback([](DynamicCommand const& command, CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
        switch (do_hash(results["testEnum"].get<std::string>().c_str()))
        {
            case do_hash("add"):
                output.success(fmt::format("Add - {}", results["testString"].get<int>()));
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

//TInstanceHook(void, "?run@Command@@QEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z",
//              Command, class CommandOrigin const& origin, class CommandOutput& output)
//{
//    logger.info("Command({})::run()", getCommandName());
//}

TInstanceHook(CommandParameterData&, "?addOptions@CommandParameterData@@QEAAAEAV1@W4CommandParameterOption@@@Z",
              CommandParameterData, CommandParameterOption option)
{
    logger.warn("name: {}, type: {}, desc: {}, option: {:x}",
                name, magic_enum::enum_name(type), desc ? desc : "", (int)option);
    return original(this, option);
}
#endif // DEBUG

