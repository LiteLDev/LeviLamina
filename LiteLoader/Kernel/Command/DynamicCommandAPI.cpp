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
#include <MC/Minecraft.hpp>
#include <MC/LoopbackPacketSender.hpp>
#include <third-party/dyncall/dyncall_callback.h>
#include <MC/CommandUtils.hpp>
#include <MC/CommandSoftEnumRegistry.hpp>

extern Logger logger;

#define ForEachParameterType(func) \
    func(Bool);                    \
    func(Int);                     \
    func(Float);                   \
    func(String);                  \
    func(Actor);                   \
    func(Player);                  \
    func(BlockPos);                \
    func(Vec3);                    \
    func(RawText);                 \
    func(Message);                 \
    func(JsonValue);               \
    func(Item);                    \
    func(Block);                   \
    func(Effect);                  \
    func(Enum);                    \
    func(SoftEnum);                \
    func(ActorType);               \
    func(Command);                 \
    func(WildcardSelector);

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

namespace ParameterDataType
{
typedef bool Bool;
typedef int Int;
typedef float Float;
typedef std::string String;
typedef WildcardCommandSelector<Actor> WildcardSelector;
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
#ifdef USE_PARSE_ENUM_STRING
typedef std::pair<std::string, int> Enum;
#else
typedef int Enum;
#endif // USE_PARSE_ENUM_STRING
typedef std::string SoftEnum;
typedef ActorDefinitionIdentifier const* ActorType;
typedef std::unique_ptr<Command> Command;
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
typedef int Postfix;
#endif // ENABLE_PARAMETER_TYPE_POSTFIX
} // namespace ParameterDataType
auto const ParameterSizeMap = std::unordered_map<ParameterType, size_t>{
    {ParameterType::Bool, std::max((size_t)8, sizeof(ParameterDataType::Bool))},
    {ParameterType::Int, std::max((size_t)8, sizeof(ParameterDataType::Int))},
    {ParameterType::Float, std::max((size_t)8, sizeof(ParameterDataType::Float))},
    {ParameterType::Actor, std::max((size_t)8, sizeof(ParameterDataType::Actor))},
    {ParameterType::Player, std::max((size_t)8, sizeof(ParameterDataType::Player))},
    {ParameterType::String, std::max((size_t)8, sizeof(ParameterDataType::String))},
    {ParameterType::BlockPos, std::max((size_t)8, sizeof(ParameterDataType::BlockPos))},
    {ParameterType::Vec3, std::max((size_t)8, sizeof(ParameterDataType::Vec3))},
    {ParameterType::RawText, std::max((size_t)8, sizeof(ParameterDataType::RawText))},
    {ParameterType::Message, std::max((size_t)8, sizeof(ParameterDataType::Message))},
    {ParameterType::JsonValue, std::max((size_t)8, sizeof(ParameterDataType::JsonValue))},
    {ParameterType::Item, std::max((size_t)8, sizeof(ParameterDataType::Item))},
    {ParameterType::Block, std::max((size_t)8, sizeof(ParameterDataType::Block))},
    {ParameterType::Effect, std::max((size_t)8, sizeof(ParameterDataType::Effect))},
    {ParameterType::Enum, std::max((size_t)8, sizeof(ParameterDataType::Enum))},
    {ParameterType::SoftEnum, std::max((size_t)8, sizeof(ParameterDataType::SoftEnum))},
    {ParameterType::ActorType, std::max((size_t)8, sizeof(ParameterDataType::ActorType))},
    {ParameterType::Command, std::max((size_t)8, sizeof(ParameterDataType::Command))},
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
    {ParameterType::Postfix, std::max((size_t)8, sizeof(ParameterDataType::Postfix))},
#endif // ENABLE_PARAMETER_TYPE_POSTFIX
};

inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string func, HMODULE handler)
{
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Function ({})", func);
    if (auto plugin = LL::getPlugin(handler))
        logger.error("In Plugin <{}>", plugin->name);
}

inline std::vector<std::string> getEnumNamesFromBDS()
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getEnumNames();
}
inline std::vector<std::string> getSoftEnumNamesFromBDS()
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getSoftEnumNames();
}
inline std::vector<std::string> getEnumValuesFromBDS(std::string const& name)
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getEnumValues(name);
}
inline std::vector<std::string> getSoftEnumValuesFromBDS(std::string const& name)
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    return packet.getSoftEnumValues(name);
}

} // namespace

#pragma region Command init and destroy

template <typename T>
inline void destruct(void* command, size_t offset)
{
    dAccess<T>(command, offset).~T();
}

template <typename T>
inline void initValue(void* command, size_t offset)
{
    dAccess<T>(command, offset) = T();
}
template <>
inline void initValue<std::string>(void* command, size_t offset)
{
    dAccess<std::string>(command, offset).basic_string::basic_string();
}
template <>
inline void initValue<CommandItem>(void* command, size_t offset)
{
    dAccess<CommandItem>(command, offset).CommandItem::CommandItem();
}
template <>
inline void initValue<CommandMessage>(void* command, size_t offset)
{
    dAccess<CommandMessage>(command, offset).CommandMessage::CommandMessage();
}
template <>
inline void initValue<CommandSelector<Actor>>(void* command, size_t offset)
{
    dAccess<CommandSelector<Actor>>(command, offset).CommandSelector<Actor>::CommandSelector<Actor>();
}
template <>
inline void initValue<CommandSelector<Player>>(void* command, size_t offset)
{
    dAccess<CommandSelector<Player>>(command, offset).CommandSelector<Player>::CommandSelector<Player>();
}
template <>
inline void initValue<WildcardCommandSelector<Actor>>(void* command, size_t offset)
{
    dAccess<WildcardCommandSelector<Actor>>(command, offset).WildcardCommandSelector<Actor>::WildcardCommandSelector<Actor>();
}

#pragma endregionto

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

DynamicCommand::ParameterData::ParameterData(ParameterData const& right)
    : ParameterData(right.name, right.type, right.optional, right.description, right.identifier, right.option)
{
    offset = right.offset;
};

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
            return makeParameterData<ParameterType::Bool, ParameterDataType::Bool>();
        case ParameterType::Int:
            return makeParameterData<ParameterType::Int, ParameterDataType::Int>();
        case ParameterType::Float:
            return makeParameterData<ParameterType::Float, ParameterDataType::Float>();
        case ParameterType::String:
            return makeParameterData<ParameterType::String, ParameterDataType::String>();
        case ParameterType::Actor:
            return makeParameterData<ParameterType::Actor, ParameterDataType::Actor>();
        case ParameterType::Player:
            return makeParameterData<ParameterType::Player, ParameterDataType::Player>();
        case ParameterType::BlockPos:
            return makeParameterData<ParameterType::BlockPos, ParameterDataType::BlockPos>();
        case ParameterType::Vec3:
            return makeParameterData<ParameterType::Vec3, ParameterDataType::Vec3>();
        case ParameterType::RawText:
            return makeParameterData<ParameterType::RawText, ParameterDataType::RawText>();
        case ParameterType::Message:
            return makeParameterData<ParameterType::Message, ParameterDataType::Message>();
        case ParameterType::JsonValue:
            return makeParameterData<ParameterType::JsonValue, ParameterDataType::JsonValue>();
        case ParameterType::Item:
            return makeParameterData<ParameterType::Item, ParameterDataType::Item>();
        case ParameterType::Block:
            return makeParameterData<ParameterType::Block, ParameterDataType::Block>();
        case ParameterType::Effect:
            return makeParameterData<ParameterType::Effect, ParameterDataType::Effect>();
            //case ParameterType::Position:
            //    return makeParameterData<ParameterType::Position, ParameterDataType::Position>();
        case ParameterType::Enum:
            return makeParameterData<ParameterType::Enum, ParameterDataType::Enum>();
        case ParameterType::SoftEnum:
            return makeParameterData<ParameterType::SoftEnum, ParameterDataType::SoftEnum>();
        case ParameterType::ActorType:
            return makeParameterData<ParameterType::ActorType, ParameterDataType::ActorType>();
        case ParameterType::Command:
            return makeParameterData<ParameterType::Command, ParameterDataType::Command>();
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
        case ParameterType::Postfix:
            return makeParameterData<ParameterType::Postfix, ParameterDataType::Postfix>();
#endif // ENABLE_PARAMETER_TYPE_POSTFIX
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
        return getRaw<std::string>();
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
            for (auto& actor : actors)
            {
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
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, fmt::format("{}({})", getRaw<std::string>(), getRaw<int>()));
        case ParameterType::SoftEnum:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<std::string>());
        case ParameterType::ActorType:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, isSet ? getRaw<ActorDefinitionIdentifier const*>()->getCanonicalName() : "Null");
        case ParameterType::Command:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, isSet ? getRaw<std::unique_ptr<Command>>()->getCommandName() : "Null");
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
        case ParameterType::Postfix:
            return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, get<std::string>());
#endif // ENABLE_PARAMETER_TYPE_POSTFIX
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

#define CaseInitBreak(type)                                  \
    case ParameterType::type:                                \
        initValue<ParameterDataType::type>(command, offset); \
        break;
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
            ForEachParameterType(CaseInitBreak);
            default:
                break;
        }
        //        switch (param.type)
        //        {
        //            case ParameterType::Bool:
        //                dAccess<bool>(command, offset) = bool();
        //                break;
        //            case ParameterType::Int:
        //                dAccess<int>(command, offset) = int();
        //                break;
        //            case ParameterType::Float:
        //                dAccess<float>(command, offset) = float();
        //                break;
        //            case ParameterType::Actor:
        //                dAccess<CommandSelector<Actor>>(command, offset).CommandSelector<Actor>::CommandSelector();
        //                break;
        //            case ParameterType::Player:
        //                dAccess<CommandSelector<Player>>(command, offset).CommandSelector<Player>::CommandSelector();
        //                break;
        //            case ParameterType::String:
        //                dAccess<std::string>(command, offset).basic_string::basic_string();
        //                break;
        //            case ParameterType::BlockPos:
        //                dAccess<CommandPosition>(command, offset).CommandPosition::CommandPosition();
        //                break;
        //            case ParameterType::Vec3:
        //                dAccess<CommandPositionFloat>(command, offset).CommandPositionFloat::CommandPositionFloat();
        //                break;
        //            case ParameterType::RawText:
        //                dAccess<CommandRawText>(command, offset).CommandRawText::CommandRawText();
        //                break;
        //            case ParameterType::Message:
        //                dAccess<CommandMessage>(command, offset).CommandMessage::CommandMessage();
        //                break;
        //            case ParameterType::JsonValue:
        //                dAccess<Json::Value>(command, offset).Json::Value::Value();
        //                break;
        //            case ParameterType::Item:
        //                dAccess<CommandItem>(command, offset).CommandItem::CommandItem();
        //                break;
        //            case ParameterType::Block:
        //                dAccess<Block const*>(command, offset) = nullptr;
        //                break;
        //            case ParameterType::Effect:
        //                dAccess<MobEffect const*>(command, offset) = nullptr;
        //                break;
        //                //case ParameterType::Position:
        //                //    dAccess<CommandPosition>(command, offset).CommandPosition::CommandPosition();
        //                break;
        //            case ParameterType::Enum:
        //#ifdef USE_PARSE_ENUM_STRING
        //                dAccess<std::string>(command, offset).basic_string::basic_string();
        //#else
        //                dAccess<int>(command, offset) = -1;
        //#endif // USE_PARSE_ENUM_STRING
        //
        //                break;
        //            case ParameterType::SoftEnum:
        //                dAccess<std::string>(command, offset).basic_string::basic_string();
        //                break;
        //            case ParameterType::ActorType:
        //                dAccess<ActorDefinitionIdentifier const*>(command, offset) = nullptr;
        //                break;
        //            case ParameterType::Command:
        //                dAccess<std::unique_ptr<Command>>(command, offset).std::unique_ptr<Command>::unique_ptr();
        //                break;
        //#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
        //            case ParameterType::Postfix:
        //                dAccess<int>(command, offset) = 0;
        //#endif // ENABLE_PARAMETER_TYPE_POSTFIX
        //                break;
        //            default:
        //                logger.error("Unknown Parameter Type {}", (int)param.type);
        //                break;
        //        }
    }
    rtn->swap(std::unique_ptr<Command>((Command*)command));
    return rtn;
}

#define CaseDestructBreak(type)                          \
    case ParameterType::type:                            \
        destruct<ParameterDataType::type>(this, offset); \
        break;
DynamicCommand::~DynamicCommand()
{
    auto& commandName = getCommandName();
    auto iter = dynamicCommandInstances.find(commandName);
    if (iter == dynamicCommandInstances.end()) 
    {
        logger.error("Error in DynamicCommand::~DynamicCommand(), command \"{}\" not found", commandName);
        return;
    }
    auto& commandIns = *iter->second;
    for (auto& [name, parameter] : commandIns.parameterPtrs)
    {
        auto offset = parameter.getOffset();
        switch (parameter.type)
        {
            ForEachParameterType(CaseDestructBreak);
            default:
                break;
        }
        //        switch (parameter.type)
        //        {
        //            case ParameterType::Bool:
        //                destruct<ParameterDataType::Bool>(this, offset);
        //                break;
        //            case ParameterType::Int:
        //                destruct<ParameterDataType::Int>(this, offset);
        //                break;
        //            case ParameterType::Float:
        //                destruct<ParameterDataType::Float>(this, offset);
        //                break;
        //            case ParameterType::Actor:
        //                destruct<ParameterDataType::Actor>(this, offset);
        //                break;
        //            case ParameterType::Player:
        //                destruct<ParameterDataType::Player>(this, offset);
        //                break;
        //            case ParameterType::String:
        //                destruct<ParameterDataType::String>(this, offset);
        //                break;
        //            case ParameterType::BlockPos:
        //                destruct<ParameterDataType::BlockPos>(this, offset);
        //                break;
        //            case ParameterType::Vec3:
        //                destruct<ParameterDataType::Vec3>(this, offset);
        //                break;
        //            case ParameterType::RawText:
        //                destruct<ParameterDataType::RawText>(this, offset);
        //                break;
        //            case ParameterType::Message:
        //                destruct<ParameterDataType::Message>(this, offset);
        //                break;
        //            case ParameterType::JsonValue:
        //                destruct<ParameterDataType::JsonValue>(this, offset);
        //                break;
        //            case ParameterType::Item:
        //                destruct<ParameterDataType::Item>(this, offset);
        //                break;
        //            case ParameterType::Block:
        //                destruct<ParameterDataType::Block>(this, offset);
        //                break;
        //            case ParameterType::Effect:
        //                destruct<ParameterDataType::Effect>(this, offset);
        //                break;
        //            //case ParameterType::Position:
        //            //    destruct<ParameterDataType::Position>(this, offset);
        //            //    break;
        //            case ParameterType::Enum:
        //                destruct<ParameterDataType::Enum>(this, offset);
        //                break;
        //            case ParameterType::SoftEnum:
        //                destruct<ParameterDataType::SoftEnum>(this, offset);
        //                break;
        //            case ParameterType::ActorType:
        //                destruct<ParameterDataType::ActorType>(this, offset);
        //                break;
        //            case ParameterType::Command:
        //                destruct<ParameterDataType::Command>(this, offset);
        //                break;
        //#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
        //            case ParameterType::Postfix:
        //                destruct<ParameterDataType::Postfix>(this, offset);
        //                break;
        //#endif // ENABLE_PARAMETER_TYPE_POSTFIX
        //            default:
        //                logger.error("Unknown Parameter Type {}", (int)parameter.type);
        //                break;
        //        }
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
    //commandInstance->updateSoftEnum();
    auto namesInBds = getEnumNamesFromBDS();
    std::unordered_map<std::string_view, std::pair<size_t, size_t>> convertedEnumRanges;
    for (auto& [name, range] : commandInstance->enumRanges)
    {
        std::string fixedName = name.data();
        while (std::find(namesInBds.begin(), namesInBds.end(), fixedName) != namesInBds.end())
        {
            fixedName.append("_");
        }
        std::string_view fixedView = name;
        if (fixedName != name)
        {
            for (auto& namePtr : commandInstance->enumNames)
            {
                if (*namePtr == name)
                {
                    namePtr->swap(fixedName);
                    fixedView = *namePtr;
                    for (auto& data : commandInstance->parameterDatas)
                    {
                        if (data.description == fixedName)
                        {
                            data.description = *namePtr;
                        }
                    }
                    break;
                }
            }
        }
        std::vector<std::pair<std::string, uint64_t>> values;
        size_t index = range.first;
        for (auto& iter = commandInstance->enumValues.begin() + range.first; iter != commandInstance->enumValues.begin() + range.first + range.second; ++iter)
        {
            values.emplace_back(*iter, index);
            index++;
        }
#ifdef USE_PARSE_ENUM_STRING
        Global<CommandRegistry>->_addEnumValuesInternal(fixedView.data(), values, typeid_t<CommandRegistry>::count++, &CommandRegistry::parseEnumStringAndInt).val;
#else
        Global<CommandRegistry>->_addEnumValuesInternal(fixedView.data(), values, typeid_t<CommandRegistry>::count++, &CommandRegistry::parseEnum<int>).val;
#endif // USE_PARSE_ENUM_STRING
    }
    commandInstance->enumRanges.swap(convertedEnumRanges);

    Global<CommandRegistry>->registerCommand(commandInstance->name, commandInstance->description->c_str(), commandInstance->permission, commandInstance->flag, commandInstance->flag);
    if (!commandInstance->alias.empty())
        Global<CommandRegistry>->registerAlias(commandInstance->name, commandInstance->alias);
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
        command->setEnum(name, std::move(values));
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
        auto index = findParameterIndex(param);
        if (!index.isValid())
        {
            throw std::runtime_error("Parameter " + std::string(param) + "not found");
        }
        paramIndices.push_back(index);
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

inline std::string const& DynamicCommandInstance::setEnum(std::string const& description, std::vector<std::string> const& values)
{
    auto& desc = enumNames.emplace_back(std::make_unique<std::string>(description));
    enumRanges.emplace(*desc, std::pair{enumValues.size(), values.size()});
    enumValues.insert(enumValues.end(), values.begin(), values.end());
    return *desc;
}

inline std::string const& DynamicCommandInstance::getEnumValue(int index) const
{
    if (index < 0 || index >= enumValues.size())
        throw std::runtime_error("Enum index out of range");
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
    if (data.type == ParameterType::Enum)
    {
        auto namesInBds = getEnumNamesFromBDS();
        if (enumRanges.count(data.description) == 0)
        {
            auto iter = std::find(namesInBds.begin(), namesInBds.end(), data.description);
            if (iter == namesInBds.end())
                throw("Enum " + std::string(data.description) + "not found in command and BDS");
#ifndef USE_PARSE_ENUM_STRING
            setEnum(*iter, getEnumValuesFromBDS(*iter));
#endif // USE_PARSE_ENUM_STRING
        }
    }
    else if (data.type == ParameterType::SoftEnum)
    {
        auto namesInBds = getSoftEnumNames();
        auto iter = std::find(namesInBds.begin(), namesInBds.end(), data.description);
        if (iter == namesInBds.end())
            setSoftEnum(data.description, {});
    }
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
        if (paramData.identifier == indentifier || paramData.description == indentifier || paramData.name == indentifier)
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
inline ParameterIndex DynamicCommandInstance::mandatory(std::string const& name, DynamicCommand::ParameterType type, CommandParameterOption parameterOption)
{
    return mandatory(name, type, "", "", parameterOption);
};

inline ParameterIndex DynamicCommandInstance::optional(std::string const& name, DynamicCommand::ParameterType type, std::string const& description, std::string const& identifier, CommandParameterOption parameterOption)
{
    return newParameter(ParameterData(name, type, true, description, identifier, parameterOption));
}

inline ParameterIndex DynamicCommandInstance::optional(std::string const& name, DynamicCommand::ParameterType type, std::string const& description, CommandParameterOption parameterOption)
{
    return optional(name, type, description, "", parameterOption);
}

inline ParameterIndex DynamicCommandInstance::optional(std::string const& name, DynamicCommand::ParameterType type, CommandParameterOption parameterOption)
{
    return optional(name, type, "", "", parameterOption);
}

//inline bool DynamicCommandInstance::addOverload()
//{
//    overloads.emplace_back(std::vector<ParameterIndex>{});
//    return true;
//}

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

//bool DynamicCommandInstance::updateSoftEnum(std::string const& name) const
//{
//    if (!hasRegistered())
//    {
//        for (auto& [key, values] : softEnumValues)
//        {
//            Global<CommandRegistry>->addSoftEnum(key, values);
//        }
//        return true;
//    }
//    if (!name.empty())
//    {
//        auto iter = softEnumValues.find(name);
//        if (iter != softEnumValues.end())
//            CommandSoftEnumRegistry(Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Set, iter->first, iter->second);
//        else
//            return false;
//        return true;
//    }
//    else
//    {
//        for (auto& [key, values] : softEnumValues)
//        {
//            CommandSoftEnumRegistry(Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Set, key, values);
//        }
//    }
//}
std::string DynamicCommandInstance::setSoftEnum(std::string const& name, std::vector<std::string> const& values) const
{
    auto names = getSoftEnumNamesFromBDS();
    if (std::find(names.begin(), names.end(), name) == names.end())
    {
        Global<CommandRegistry>->addSoftEnum(name, values);
        return name;
    }
    CommandSoftEnumRegistry(Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Set, name, values);
    return name;
}
bool DynamicCommandInstance::addSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const
{
    auto names = getSoftEnumNamesFromBDS();
    if (std::find(names.begin(), names.end(), name) == names.end())
    {
        Global<CommandRegistry>->addSoftEnum(name, values);
        return true;
    }
    CommandSoftEnumRegistry(Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Add, name, values);
    return true;
};
bool DynamicCommandInstance::removeSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const
{
    CommandSoftEnumRegistry(Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Remove, name, values);
    return true;
}
inline std::vector<std::string> DynamicCommandInstance::getSoftEnumValues(std::string const& name) const
{
    return getSoftEnumValuesFromBDS(name);
}
inline std::vector<std::string> DynamicCommandInstance::getSoftEnumNames() const
{
    return getSoftEnumNamesFromBDS();
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

#if LITELOADER_VERSION_STATUS == LL::Version::Beta
#define successf(...) success(fmt::format(__VA_ARGS__))
#define errorf(...) error(fmt::format(__VA_ARGS__))
#ifdef TEST_DYNAMIC_COMMAND
// Notice!!!
// Enabling this code may cause some command arguments to be parsed abnormally

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
#include <MC/Minecraft.hpp>

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
    //return;
    // Direct setup of dynamic command with necessary information
    DynamicCommand::setup(
        "dynenum",         // command name
        "dynamic command", // command description
        {
            // enums{enumName, {values...}}
            {"TestEnum1", {"add", "remove"}},
            {"TestEnum2", {"list"}},
            {"Block", {"aaaa"}},
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
            logger.warn(results["testEnum"].toDebugString());
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
#include <ScheduleAPI.h>
inline void testEnums()
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto enumNames = packet.getEnumNames();
    std::ostringstream oss;
    for (auto& name : enumNames)
    {
        oss << std::endl
            << fmt::format("enum {}{}", name, '{');
        auto enumValues = packet.getEnumValues(name);
        for (auto& value : enumValues)
        {
            oss << std::endl
                << fmt::format("\t{},", value);
        }
        oss << std::endl
            << fmt::format("{};", '}');
    }
    auto softEnumNames = packet.getSoftEnumNames();
    for (auto& name : softEnumNames)
    {
        oss << std::endl
            << fmt::format("enum {}{}/* SoftEnum */", name, '{');
        auto enumValues = packet.getSoftEnumValues(name);
        for (auto& value : enumValues)
        {
            oss << std::endl
                << fmt::format("\t{},", value);
        }
        oss << std::endl
            << fmt::format("{};", '}');
    }
    WriteAllFile("BDSEnum.hpp", oss.str(), false);
}
#include <MC/EnchantUtils.hpp>
#include <MC/I18n.hpp>
TClasslessInstanceHook2("TestDynamicCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ")
{
    original(this);
    Global<Level> = Global<Minecraft>->getLevel();
    testEnums();
    I18n::chooseLanguage(*I18n::getLanguage("zh_CN"));
    for (auto i = 0; i < 0x25; ++i)
    {
        logger.warn("{}", EnchantUtils::getEnchantNameAndLevel((Enchant::Type)i, 0));
    }
    testRegCommand("dynenum");
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto sender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
    if (sender)
        sender->sendBroadcast(packet);

    using ParamType = DynamicCommand::ParameterType;
    using ParameterIndex = DynamicCommandInstance::ParameterIndex;
    // create a dynamic command
    auto command = DynamicCommand::createCommand("dyncmd", "dynamic command", CommandPermissionLevel::GameMasters);

    auto& optionsAdd = command->setEnum("TestOperation1", {"add", "remove"});
    auto& optionsList = command->setEnum("TestOperation2", {"list"});

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

//TInstanceHook(void, "?run@Command@@QEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z",
//              Command, class CommandOrigin const& origin, class CommandOutput& output)
//{
//    logger.info("Command({})::run()", getCommandName());
//}

TClasslessInstanceHook(bool, "?hasCommandsEnabled@LevelData@@QEBA_NXZ")
{
    return true;
}

TInstanceHook(CommandParameterData&, "?addOptions@CommandParameterData@@QEAAAEAV1@W4CommandParameterOption@@@Z",
              CommandParameterData, CommandParameterOption option)
{
    logger.warn("name: {}, type: {}, desc: {}, option: {:x}",
                name, magic_enum::enum_name(type), desc ? desc : "", (int)option);
    return original(this, option);
}
#endif // TEST_DYNAMIC_COMMAND

using Param = DynamicCommand::ParameterData;
using ParamType = DynamicCommand::ParameterType;

// enum command
void onEnumExecute(DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
                   std::unordered_map<std::string, Result>& results)
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto enumNames = packet.getEnumNames();
    auto softEnumNames = packet.getSoftEnumNames();
    cmd.getInstance()->setSoftEnum("EnumNameList", enumNames);
    cmd.getInstance()->addSoftEnumValues("EnumNameList", softEnumNames);
    if (results["name"].isSet)
    {
        auto& enumName = results["name"].getRaw<std::string>();
        bool found = false;
        if (std::find(enumNames.begin(), enumNames.end(), enumName) != enumNames.end())
        {
            found = true;
            output.successf("§eEnum §l{}§r§e Values:", enumName);
            for (auto& val : getEnumValuesFromBDS(enumName))
            {
                output.success(val);
                //output.addToResultList("enums", val);
            }
            //output.success("Enums: %1$s", {CommandOutputParameter("enums")});
        }
        if (std::find(softEnumNames.begin(), softEnumNames.end(), enumName) != softEnumNames.end())
        {
            found = true;
            output.successf("§eSoft Enum §l{}§r§e Values:", enumName);
            for (auto& val : getSoftEnumValuesFromBDS(enumName))
            {
                output.success(val);
            }
        }
        if (!found)
            output.errorf("Enum or Soft Enum \"{}\" not found", enumName);
    }
    else
    {
        output.success("§eEnum Names:");
        for (auto& val : getEnumNamesFromBDS())
        {
            output.success(val);
        }
        output.success("§eSoft Enum Names:");
        for (auto& val : getSoftEnumNamesFromBDS())
        {
            output.success(val);
        }
    }
}

void setupEnumCommand()
{
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    auto command = DynamicCommand::createCommand("enum", "get command enum names or values", CommandPermissionLevel::Any);

    auto name = command->mandatory("name", ParamType::SoftEnum,
                                   command->setSoftEnum("EnumNameList", {}));
    command->addOverload(name);
    command->addOverload();
    command->setCallback(onEnumExecute);
    command->setSoftEnum("EnumNameList", packet.getEnumNames());
    command->addSoftEnumValues("EnumNameList", packet.getSoftEnumNames());
    DynamicCommand::setup(std::move(command));
}

// echo command
void setupEchoCommand()
{
    auto command = DynamicCommand::createCommand("echo", "show message", CommandPermissionLevel::Any);
    command->addOverload(command->mandatory("text", ParamType::RawText));
    command->setCallback(
        [](DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
           std::unordered_map<std::string, Result>& results) {
            auto& text = results["text"].getRaw<std::string>();
            output.success(text);
        });
    DynamicCommand::setup(std::move(command));
}

#ifdef ENABLE_COMMAND_UNREGISTER
// "remove command" command
void setupRemoveCommand()
{
    auto command = DynamicCommand::createCommand("unregister", "unregister command", CommandPermissionLevel::Any);
    command->setAlias("remove");
    auto name = command->mandatory("name", ParamType::SoftEnum,
                                   command->setSoftEnum("CommandNames", {}));
    command->addOverload(name);
    command->setCallback(
        [](DynamicCommand const& cmd, CommandOrigin const& origin, CommandOutput& output,
           std::unordered_map<std::string, Result>& results) {
            auto& name = results["name"].getRaw<std::string>();
            auto fullName = Global<CommandRegistry>->getCommandFullName(name);
            if (fullName == cmd.getCommandName()) {
                output.success("Request unregister itself");
                Schedule::delay([fullName]() {
                    auto res = Global<CommandRegistry>->unregisterCommand(fullName);
                    if (res)
                    {
                        dynamicCommandInstances.erase(fullName);
                        logger.info("unregister command " + fullName);
                        ((DynamicCommandInstance*)0)->setSoftEnum("CommandNames", getEnumValuesFromBDS("CommandName"));
                    }
                    else
                        logger.error("error in unregister command " + fullName);
                    },20);
                return;
            }
            auto res = Global<CommandRegistry>->unregisterCommand(fullName);
            if (res) {
                dynamicCommandInstances.erase(fullName);
                output.success("unregister command " + fullName);
                cmd.getInstance()->setSoftEnum("CommandNames", getEnumValuesFromBDS("CommandName"));
            }
            else
                output.error("error in unregister command " + fullName);
        });
    DynamicCommand::setup(std::move(command));
    command->setSoftEnum("CommandNames", getEnumValuesFromBDS("CommandName"));
}
#endif // ENABLE_COMMAND_UNREGISTER


TClasslessInstanceHook2("SetupBetaCommand_startServerThread", void, "?startServerThread@ServerInstance@@QEAAXXZ")
{
    original(this);
    Global<Level> = Global<Minecraft>->getLevel();
    setupEnumCommand();
#ifdef ENABLE_COMMAND_UNREGISTER
    Global<CommandRegistry>->test();
    Global<CommandRegistry>->unregisterCommand("enum");
    Global<CommandRegistry>->test();
    auto packet = Global<CommandRegistry>->serializeAvailableCommands();
    setupEnumCommand();
    auto packet2 = Global<CommandRegistry>->serializeAvailableCommands();
    setupRemoveCommand();
#endif // ENABLE_COMMAND_UNREGISTER
    setupEchoCommand();
}
#endif // LITELOADER_VERSION_STATUS == LL::Version::Beta
