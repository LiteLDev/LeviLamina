﻿// #define COMMAND_REGISTRY_EXTRA
#include "ll/api/command/DynamicCommandAPI.h"
#include "dyncall/dyncall_callback.h"
#include "ll/api/LLAPI.h"
#include "ll/api/LoggerAPI.h"
#include "ll/api/ScheduleAPI.h"
#include "ll/api/i18n/I18nAPI.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/utils/SRWLock.h"
#include "ll/core/Config.h"
#include "ll/core/Levilamina.h"
#include "mc/network/packet/AvailableCommandsPacket.h"
#include "mc/server/LoopbackPacketSender.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/CommandSoftEnumRegistry.h"
#include "mc/server/commands/CommandUtils.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/block/actor/BaseCommandBlock.h"


using ll::logger;

#define ForEachParameterType(func)                                                                                     \
    func(Bool);                                                                                                        \
    func(Int);                                                                                                         \
    func(Float);                                                                                                       \
    func(String);                                                                                                      \
    func(Actor);                                                                                                       \
    func(Player);                                                                                                      \
    func(BlockPos);                                                                                                    \
    func(Vec3);                                                                                                        \
    func(RawText);                                                                                                     \
    func(Message);                                                                                                     \
    func(JsonValue);                                                                                                   \
    func(Item);                                                                                                        \
    func(Block);                                                                                                       \
    func(Effect);                                                                                                      \
    func(Enum);                                                                                                        \
    func(SoftEnum);                                                                                                    \
    func(ActorType);                                                                                                   \
    func(Command);                                                                                                     \
    func(WildcardSelector);

#define CatchDynamicCommandError(func, handle)                                                                         \
    catch (const seh_exception& e) {                                                                                   \
        OutputError("Uncaught SEH Exception Detected!", e.code(), TextEncoding::toUTF8(e.what()), func, handle);       \
    }                                                                                                                  \
    catch (const std::exception& e) {                                                                                  \
        OutputError("Uncaught C++ Exception Detected!", errno, TextEncoding::toUTF8(e.what()), func, handle);          \
    }                                                                                                                  \
    catch (...) {                                                                                                      \
        OutputError("Uncaught Exception Detected!", -1, "", func, handle);                                             \
    }

// global variable and function
namespace {
bool                                                                     serverCommandsRegistered = false;
std::unordered_map<std::string, std::unique_ptr<DynamicCommandInstance>> dynamicCommandInstances;
std::vector<std::unique_ptr<DynamicCommandInstance>>                     delaySetupCommandInstances;
SRWLock                                                                  delaySetupLock;


using Result         = DynamicCommand::Result;
using ParameterType  = DynamicCommand::ParameterType;
using ParameterPtr   = DynamicCommand::ParameterPtr;
using ParameterData  = DynamicCommand::ParameterData;
using ParameterIndex = DynamicCommandInstance::ParameterIndex;

namespace ParameterDataType {
typedef bool                                Bool;
typedef int                                 Int;
typedef float                               Float;
typedef std::string                         String;
typedef WildcardCommandSelector<Actor>      WildcardSelector;
typedef CommandSelector<Actor>              Actor;
typedef CommandSelector<Player>             Player;
typedef CommandPosition                     BlockPos;
typedef CommandPositionFloat                Vec3;
typedef CommandRawText                      RawText;
typedef CommandMessage                      Message;
typedef Json::Value                         JsonValue;
typedef CommandItem                         Item;
typedef CommandBlockName                    Block;
typedef std::vector<BlockStateCommandParam> BlockState;
typedef MobEffect const*                    Effect;
typedef std::pair<std::string, int>         Enum;
typedef std::string                         SoftEnum;
typedef ActorDefinitionIdentifier const*    ActorType;
typedef std::unique_ptr<Command>            Command;
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
typedef int Postfix;
#endif // ENABLE_PARAMETER_TYPE_POSTFIX
} // namespace ParameterDataType

auto const ParameterSizeMap = std::unordered_map<ParameterType, size_t>{
    {ParameterType::Bool,       std::max((size_t)8, sizeof(ParameterDataType::Bool))      },
    {ParameterType::Int,        std::max((size_t)8, sizeof(ParameterDataType::Int))       },
    {ParameterType::Float,      std::max((size_t)8, sizeof(ParameterDataType::Float))     },
    {ParameterType::Actor,      std::max((size_t)8, sizeof(ParameterDataType::Actor))     },
    {ParameterType::Player,     std::max((size_t)8, sizeof(ParameterDataType::Player))    },
    {ParameterType::String,     std::max((size_t)8, sizeof(ParameterDataType::String))    },
    {ParameterType::BlockPos,   std::max((size_t)8, sizeof(ParameterDataType::BlockPos))  },
    {ParameterType::Vec3,       std::max((size_t)8, sizeof(ParameterDataType::Vec3))      },
    {ParameterType::RawText,    std::max((size_t)8, sizeof(ParameterDataType::RawText))   },
    {ParameterType::Message,    std::max((size_t)8, sizeof(ParameterDataType::Message))   },
    {ParameterType::JsonValue,  std::max((size_t)8, sizeof(ParameterDataType::JsonValue)) },
    {ParameterType::Item,       std::max((size_t)8, sizeof(ParameterDataType::Item))      },
    {ParameterType::Block,      std::max((size_t)8, sizeof(ParameterDataType::Block))     },
    {ParameterType::BlockState, std::max((size_t)8, sizeof(ParameterDataType::BlockState))},
    {ParameterType::Effect,     std::max((size_t)8, sizeof(ParameterDataType::Effect))    },
    {ParameterType::Enum,       std::max((size_t)8, sizeof(ParameterDataType::Enum))      },
    {ParameterType::SoftEnum,   std::max((size_t)8, sizeof(ParameterDataType::SoftEnum))  },
    {ParameterType::ActorType,  std::max((size_t)8, sizeof(ParameterDataType::ActorType)) },
    {ParameterType::Command,    std::max((size_t)8, sizeof(ParameterDataType::Command))   },
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
    {ParameterType::Postfix,    std::max((size_t)8, sizeof(ParameterDataType::Postfix))   },
#endif  // ENABLE_PARAMETER_TYPE_POSTFIX
};

inline void OutputError(std::string errorMsg, int errorCode, std::string errorWhat, std::string func, HMODULE handle) {
    logger.error(errorMsg);
    logger.error("Error: Code [{}] {}", errorCode, errorWhat);
    logger.error("In Function ({})", func);
    if (auto plugin = ll::getPlugin(handle)) logger.error("In Plugin <{}>", plugin->name);
}

} // namespace

#pragma region Command init and destroy

template <typename T>
inline void destruct(void* command, size_t offset) {
    ll::memory::dAccess<T>(command, offset).~T();
}

template <typename T>
inline void initValue(void* command, size_t offset) {
    ll::memory::dAccess<T>(command, offset) = T();
}

template <>
inline void initValue<std::string>(void* command, size_t offset) {
    ll::memory::dAccess<std::string>(command, offset).basic_string::basic_string();
}

template <>
inline void initValue<CommandItem>(void* command, size_t offset) {
    ll::memory::dAccess<CommandItem>(command, offset).CommandItem::CommandItem();
}

template <>
inline void initValue<CommandMessage>(void* command, size_t offset) {
    ll::memory::dAccess<CommandMessage>(command, offset).CommandMessage::CommandMessage();
}

template <>
inline void initValue<CommandSelector<Actor>>(void* command, size_t offset) {
    ll::memory::dAccess<CommandSelector<Actor>>(command, offset).CommandSelector<Actor>::CommandSelector();
}

template <>
inline void initValue<CommandSelector<Player>>(void* command, size_t offset) {
    ll::memory::dAccess<CommandSelector<Player>>(command, offset).CommandSelector<Player>::CommandSelector();
}

template <>
inline void initValue<WildcardCommandSelector<Actor>>(void* command, size_t offset) {
    ll::memory::dAccess<WildcardCommandSelector<Actor>>(command, offset)
        .WildcardCommandSelector<Actor>::WildcardCommandSelector();
}

#pragma endregion

#pragma region ParameterPtr

inline DynamicCommand::ParameterPtr::ParameterPtr(ParameterType type, size_t offset) : type(type), offset(offset) {}

inline bool DynamicCommand::ParameterPtr::isValueSet(DynamicCommand const* command) const {
    return ll::memory::dAccess<bool>(command, offset + ParameterSizeMap.at(type));
}

Result ParameterPtr::getResult(DynamicCommand const* command, CommandOrigin const* origin) const {
    return {this, command, origin};
}

#pragma endregion

#pragma region ParameterData

DynamicCommand::ParameterData::ParameterData(ParameterData const& right)
: ParameterData(right.name, right.type, right.optional, right.description, right.identifier, right.option) {
    offset = right.offset;
};

inline DynamicCommand::ParameterData::ParameterData(
    std::string const&     name,
    ParameterType          type,
    bool                   optional,
    std::string const&     enumOptions,
    std::string const&     identifier,
    CommandParameterOption parameterOption
)
: name(name),
  type(type),
  optional(optional),
  description(enumOptions),
  option(parameterOption) {
    if (identifier.empty()) this->identifier = description.empty() ? name : description;
    else this->identifier = identifier;
    if (type != DynamicCommand::ParameterType::Enum && type != DynamicCommand::ParameterType::SoftEnum) {
        if (!description.empty()) description = "";
    } else {
        if (description.empty())
            throw std::runtime_error("Enum or SoftEnum parameter need a description to confirm which enum to use");
    }
}

inline DynamicCommand::ParameterData::ParameterData(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    std::string const&            enumOptions,
    std::string const&            identifier,
    CommandParameterOption        parameterOption
)
: ParameterData(name, type, false, enumOptions, identifier, parameterOption) {}

inline CommandParameterData DynamicCommand::ParameterData::makeParameterData() const {
    switch (type) {
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
    case ParameterType::BlockState:
        return makeParameterData<ParameterType::BlockState, ParameterDataType::BlockState>();
    case ParameterType::Effect:
        return makeParameterData<ParameterType::Effect, ParameterDataType::Effect>();
        // case ParameterType::Position:
        //     return makeParameterData<ParameterType::Position, ParameterDataType::Position>();
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

inline DynamicCommand::Result::Result(
    ParameterPtr const*           ptr,
    DynamicCommand const*         command,
    CommandOrigin const*          origin,
    DynamicCommandInstance const* instance
)
: type(ptr->type),
  offset(ptr->offset),
  command(command),
  origin(origin),
  instance(instance ? instance : command->getInstance()),
  isSet(ptr->isValueSet(command)) {}

inline DynamicCommand::Result::Result()
: type((ParameterType)-1),
  offset(-1),
  command(nullptr),
  origin(nullptr),
  instance(nullptr),
  isSet(false) {}

inline std::string const& DynamicCommand::Result::getEnumValue() const {
    if (getType() == ParameterType::Enum) {
        return getRaw<std::string>();
    } else if (getType() == ParameterType::SoftEnum) {
        return getRaw<std::string>();
    }
    static std::string const EMPTY_STRING = "";
    return EMPTY_STRING;
}

inline ParameterType DynamicCommand::Result::getType() const { return type; }

inline std::string DynamicCommand::Result::getName() const {
    for (auto& [name, ptr] : instance->parameterPtrs) {
        if (ptr.getOffset() == offset) return name;
    }
    return "";
}

std::string DynamicCommand::Result::toDebugString() const {
    std::string name     = getName();
    std::string typeName = fmt::format("{}({})", magic_enum::enum_name(type), (int)type);
    switch (type) {
    case ParameterType::Bool:
        return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<bool>());
    case ParameterType::Int:
        return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet, getRaw<int>());
    case ParameterType::Float:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<float>()
        );
    case ParameterType::Actor:
        // return fmt::format("name: {:15s}, type: {:15s}, isSet: {:5}, value: {}", name, typeName, isSet,
        // getRaw<CommandSelector<Actor>>().getName());
    case ParameterType::Player: {
        std::vector<Actor*> actors = get<std::vector<Actor*>>();
        std::ostringstream  oss;
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
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<std::string>()
        );
    case ParameterType::BlockPos:
        // TODO use CompoundTag::toSNBT, not toString
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<CommandPosition>().serialize().toString()
        );
    case ParameterType::Vec3:
        // TODO use CompoundTag::toSNBT, not toString
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<CommandPositionFloat>().serialize().toString()
        );
    case ParameterType::RawText:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<CommandRawText>().getText()
        );
    case ParameterType::Message:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<CommandMessage>().getMessage(*origin)
        );
    case ParameterType::JsonValue:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<Json::Value>().toStyledString().substr(0, getRaw<Json::Value>().toStyledString().size() - 1)
        );
    case ParameterType::Item: {
        auto output = CommandOutput(CommandOutputType::None);
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<CommandItem>().createInstance(1, 1, output, true).value_or(ItemInstance::EMPTY_ITEM).toString()
        );
    }
    case ParameterType::Block:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            isSet ? getRaw<CommandBlockName>().getDescriptionId() : "nullptr"
        );
    case ParameterType::BlockState:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            isSet ? "state" : "nullptr"
        );
    case ParameterType::Effect:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            isSet ? getRaw<MobEffect const*>()->getResourceName() : "nullptr"
        );
    case ParameterType::Enum:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            fmt::format("{}({})", getRaw<std::string>(), getRaw<int>())
        );
    case ParameterType::SoftEnum:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            getRaw<std::string>()
        );
    case ParameterType::ActorType:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            isSet ? getRaw<ActorDefinitionIdentifier const*>()->getCanonicalName() : "Null"
        );
    case ParameterType::Command:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            isSet ? getRaw<std::unique_ptr<Command>>()->getCommandName() : "Null"
        );
#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
    case ParameterType::Postfix:
        return fmt::format(
            "name: {:15s}, type: {:15s}, isSet: {:5}, value: {}",
            name,
            typeName,
            isSet,
            get<std::string>()
        );
#endif // ENABLE_PARAMETER_TYPE_POSTFIX
    default:
        logger.error("Unknown Parameter Type {}, name: {}", typeName, name);
        return "";
    }
}

inline DynamicCommandInstance const* DynamicCommand::Result::getInstance() const {
    std::string commandName = command->getCommandName();
    auto        iter        = dynamicCommandInstances.find(commandName);
    if (iter == dynamicCommandInstances.end()) return nullptr;
    return iter->second.get();
}

#pragma endregion

#pragma region DynamicCommand

inline char
DynamicCommand::builderCallbackHanler(DCCallback* /*cb*/, DCArgs* args, DCValue* /*result*/, void* userdata) {
    DynamicCommandInstance& command = *(DynamicCommandInstance*)userdata;
    auto                    arg1    = (std::unique_ptr<Command>*)dcbArgPointer(args);
    DynamicCommand::commandBuilder(arg1, command.getCommandName());
    return 'p';
}

std::unique_ptr<Command>* DynamicCommand::commandBuilder(std::unique_ptr<Command>* rtn, std::string name) {
#define CaseInitBreak(type)                                                                                            \
    case ParameterType::type:                                                                                          \
        initValue<ParameterDataType::type>(command, offset);                                                           \
        break;

    assert(dynamicCommandInstances.count(name) == 1);
    if (dynamicCommandInstances.count(name) == 0) {
        logger.error("Error in allocate dynamic command");
        return rtn;
    }
    auto& commandInstance = *dynamicCommandInstances.at(name);
    auto  command         = new char[commandInstance.commandSize]{0};
    (*(DynamicCommand*)command).DynamicCommand::DynamicCommand();
    for (auto& [str, param] : commandInstance.parameterPtrs) {
        size_t offset                                                                = param.getOffset();
        ll::memory::dAccess<bool>(command, offset + ParameterSizeMap.at(param.type)) = false; // XXXX_isSet;
        switch (param.type) {
            ForEachParameterType(CaseInitBreak);
        default:
            break;
        }
    }
    rtn->reset(std::move((Command*)command));
    return rtn;
}

DynamicCommandInstance* DynamicCommand::_setup(std::unique_ptr<class DynamicCommandInstance> commandInstance) {
    std::string name = commandInstance->getCommandName();
    logger.info("Setting up command \"{}\"", name);

    // Check if there is another command with the same name
    auto signature = ll::Global<CommandRegistry>->findCommand(name);
    if (signature) { throw std::runtime_error("There is already a command named " + signature->name); }

    try {
        if (!commandInstance) throw std::runtime_error("Command instance is null");
        if (!commandInstance->callback_) throw std::runtime_error("Can't setup command without callback");
        if (commandInstance->overloads.empty()) throw std::runtime_error("Can't setup command without overloads");

        for (auto& param : commandInstance->parameterDatas) {
            if (param.type == ParameterType::Enum) {
                // clone BDS's enum
                if (commandInstance->enumRanges.count(param.description) == 0) {
                    auto namesInBds = ll::Global<CommandRegistry>->getEnumNames();
                    auto iter       = std::find(namesInBds.begin(), namesInBds.end(), param.description);
                    if (iter == namesInBds.end())
                        throw std::runtime_error(
                            "Enum " + std::string(param.description) + "not found in command and BDS"
                        );
                    commandInstance->setEnum(*iter, ll::Global<CommandRegistry>->getEnumValues(*iter));
                }
            } else if (param.type == ParameterType::SoftEnum) {
                // add empty Soft Enum if not found in command and BDS
                if (commandInstance->softEnums.count(param.description) == 0) {
                    auto namesInBds = ll::Global<CommandRegistry>->getSoftEnumNames();
                    auto iter       = std::find(namesInBds.begin(), namesInBds.end(), param.description);
                    if (iter == namesInBds.end()) commandInstance->setSoftEnum(param.description, {});
                }
            }
        }

        // fix enum name with prefix '_...' if Enum name is exists in BDS
        auto namesInBds = ll::Global<CommandRegistry>->getEnumNames();
        std::unordered_map<std::string_view, std::pair<size_t, size_t>> convertedEnumRanges;
        for (auto& [desc, range] : commandInstance->enumRanges) {
            std::string fixedName = desc.data();
            while (std::find(namesInBds.begin(), namesInBds.end(), fixedName) != namesInBds.end()) {
                fixedName.append("_");
            }
            std::string_view fixedView = desc;
            if (fixedName != desc) {
                for (auto& namePtr : commandInstance->enumNames) {
                    if (*namePtr == desc) {
                        namePtr->swap(fixedName);
                        fixedView = *namePtr;
                        for (auto& data : commandInstance->parameterDatas) {
                            if (data.description == fixedName) { data.description = *namePtr; }
                        }
                        break;
                    }
                }
            }
            std::vector<std::pair<std::string, uint64_t>> values;
            size_t                                        index = range.first;
            for (auto iter = commandInstance->enumValues.begin() + range.first;
                 iter != commandInstance->enumValues.begin() + range.first + range.second;
                 ++iter) {
                values.emplace_back(*iter, index);
                ++index;
            }
            ll::Global<CommandRegistry>->_addEnumValuesInternal(fixedView.data(), values, Bedrock::typeid_t<CommandRegistry>::_getCounter().fetch_add(1), &CommandRegistry::parseEnumStringAndInt).mValue;
        }
        commandInstance->enumRanges.swap(convertedEnumRanges);

        // add Soft Enum to BDS
        for (auto& [desc, values] : commandInstance->softEnums) {
            ll::Global<CommandRegistry>->addSoftEnum(desc, values);
        }

        ll::Global<CommandRegistry>->registerCommand(
            commandInstance->name_,
            commandInstance->description_->c_str(),
            commandInstance->permission_,
            commandInstance->flag_,
            commandInstance->flag_
        );
        if (!commandInstance->alias_.empty())
            ll::Global<CommandRegistry>->registerAlias(commandInstance->name_, commandInstance->alias_);
        auto builder = commandInstance->initCommandBuilder();
        for (auto& overload : commandInstance->overloads) {
            ll::Global<CommandRegistry>->registerOverload(
                commandInstance->name_,
                builder,
                commandInstance->buildOverload(overload)
            );
        }
        // commandInstance->overloads.clear();
        auto res = dynamicCommandInstances.emplace(commandInstance->name_, std::move(commandInstance));
        return res.first->second.get();
    }
    CatchDynamicCommandError("DynamicCommand::_setup - " + name, commandInstance->handle_);
    return nullptr;
}

bool DynamicCommand::onServerCommandsRegister(CommandRegistry& /*registry*/) {
    serverCommandsRegistered = true;
    SRWLockHolder locker(delaySetupLock);
    for (auto& command : delaySetupCommandInstances) {
        std::string name   = command->getCommandName();
        auto        handle = command->handle_;
        try {
            if (!ll::getPlugin(handle) && handle != GetCurrentModule())
                throw std::runtime_error("Plugin that registered command \"" + name + "\" not found");
            auto res = DynamicCommand::_setup(std::move(command));
            if (!res) throw std::runtime_error("Command \"" + name + "\" setup failed");
        }
        CatchDynamicCommandError("DynamicCommand::_setup - " + name, handle);
    };
    delaySetupCommandInstances.clear();
    return true;
}

DynamicCommand::~DynamicCommand() {
#define CaseDestructBreak(type)                                                                                        \
    case ParameterType::type:                                                                                          \
        destruct<ParameterDataType::type>(this, offset);                                                               \
        break;

    std::string commandName = getCommandName();
    auto        iter        = dynamicCommandInstances.find(commandName);
    if (iter == dynamicCommandInstances.end()) {
        logger.error("Error in DynamicCommand::~DynamicCommand(), command \"{}\" not found", commandName);
        return;
    }
    auto& commandIns = *iter->second;
    for (auto& [name, parameter] : commandIns.parameterPtrs) {
        auto offset = parameter.getOffset();
        switch (parameter.type) {
            ForEachParameterType(CaseDestructBreak);
        default:
            break;
        }
    }
}

void DynamicCommand::execute(CommandOrigin const& origin, CommandOutput& output) const {
    auto iter = dynamicCommandInstances.find(getCommandName());
    if (iter == dynamicCommandInstances.end()) { return output.error("Dynamic Command Not Found"); }
    auto& commandIns = *iter->second;
    if (!commandIns.callback_) { return output.error(fmt::format("Command {} has been removed.", getCommandName())); }
    try {
        std::unordered_map<std::string, Result> results;

        for (auto& [name, param] : commandIns.parameterPtrs) { results.emplace(name, param.getResult(this, &origin)); }
        commandIns.callback_(*this, origin, output, results);
    }
    CatchDynamicCommandError("DynamicCommand::execute", commandIns.handle_);
}

std::unique_ptr<class DynamicCommandInstance> DynamicCommand::createCommand(
    std::string const&     name,
    std::string const&     description,
    CommandPermissionLevel permission,
    CommandFlag            flag1,
    CommandFlag            flag2,
    HMODULE                handle
) {
    return DynamicCommandInstance::create(name, description, permission, flag1 |= flag2, handle);
}


DynamicCommandInstance const* DynamicCommand::setup(std::unique_ptr<class DynamicCommandInstance> commandInstance) {
    auto ptr = commandInstance.get();
    if (!ptr) throw std::runtime_error("DynamicCommand::setup - commandInstance is null");
    if (!serverCommandsRegistered) {
        SRWLockHolder locker(delaySetupLock);
        auto&         uptr = delaySetupCommandInstances.emplace_back(std::move(commandInstance));
        return uptr.get();
    }
    Schedule::nextTick([instance{commandInstance.release()}]() {
        if (!_setup(std::unique_ptr<class DynamicCommandInstance>(instance)))
            logger.warn("Registering command \"{}\" failed", instance->getCommandName());
        updateAvailableCommands();
    });
    return ptr;
}

std::unique_ptr<class DynamicCommandInstance> DynamicCommand::createCommand(
    std::string const&                                          name,
    std::string const&                                          description,
    std::unordered_map<std::string, std::vector<std::string>>&& enums,
    std::vector<ParameterData>&&                                params,
    std::vector<std::vector<std::string>>&&                     overloads,
    CallBackFn                                                  callback,
    CommandPermissionLevel                                      permission,
    CommandFlag                                                 flag1,
    CommandFlag                                                 flag2,
    HMODULE                                                     handle
) {
    auto command = createCommand(name, description, permission, flag1, flag2, handle);
    if (!command) return std::unique_ptr<class DynamicCommandInstance>();
    for (auto& [desc, values] : enums) { command->setEnum(desc, std::move(values)); }
    for (auto& param : params) { command->newParameter(std::move(param)); }
    if (overloads.size() > 0) {
        for (auto& overload : overloads) { command->addOverload(std::move(overload)); }
    } else {
        command->addOverload();
    }
    command->setCallback(std::move(callback));
    return std::move(command);
}

bool DynamicCommand::unregisterCommand(std::string const& name) {
    if (ll::Global<CommandRegistry>->unregisterCommand(name)) {
        dynamicCommandInstances.erase(name);
        updateAvailableCommands();
        return true;
    }
    return false;
}

inline bool DynamicCommand::updateAvailableCommands() {

    if (!ll::Global<CommandRegistry> || !ll::Global<Level>) return false;
    auto packet = ll::Global<CommandRegistry>->serializeAvailableCommands();
    auto sender = (LoopbackPacketSender*)ll::Global<Level>->getPacketSender();
    if (!sender) return false;
    sender->sendBroadcast(packet);
    return true;
}

inline DynamicCommandInstance const* DynamicCommand::getInstance() const { return getInstance(getCommandName()); }

DynamicCommandInstance const* DynamicCommand::getInstance(std::string const& commandName) {
    auto iter = dynamicCommandInstances.find(commandName);
    if (iter == dynamicCommandInstances.end()) return nullptr;
    else return iter->second.get();
}

#pragma endregion

#pragma region DynamicCommandInstance

inline DynamicCommandInstance::DynamicCommandInstance(
    std::string const&     name,
    std::string const&     description,
    CommandPermissionLevel permission,
    CommandFlag            flag,
    HMODULE                handle
)
: name_(name),
  description_(std::make_unique<std::string>(description)),
  permission_(permission),
  flag_(flag),
  handle_(handle){};

inline DynamicCommandInstance::~DynamicCommandInstance() {
    if (this->builder_) dcbFreeCallback((DCCallback*)this->builder_);
    this->builder_ = nullptr;
}

inline std::unique_ptr<DynamicCommandInstance> DynamicCommandInstance::create(
    std::string const&     name,
    std::string const&     description,
    CommandPermissionLevel permission,
    CommandFlag            flag,
    HMODULE                handle
) {
    if (ll::globalRuntimeConfig.serverStatus != ll::ServerStatus::Running) {
        for (auto& cmd : delaySetupCommandInstances) {
            if (cmd->name_ == name) {
                logger.error("Command \"{}\" already exists", name);
                return {};
            }
        }
    } else if (ll::Global<CommandRegistry>->findCommand(name)) {
        logger.error("Command \"{}\" already exists", name);
        return {};
    }
    return std::unique_ptr<DynamicCommandInstance>(
        new DynamicCommandInstance(name, description, permission, flag, handle)
    );
}

inline bool DynamicCommandInstance::addOverload(std::vector<DynamicCommand::ParameterData>&& params) {
    std::vector<ParameterIndex> indices;
    for (auto& param : params) { indices.push_back(newParameter(std::forward<ParameterData>(param))); }
    return addOverload(std::move(indices));
}

inline std::string const&
DynamicCommandInstance::setEnum(std::string const& description, std::vector<std::string> const& values) {
    auto& desc = enumNames.emplace_back(std::make_unique<std::string>(description));
    enumRanges.emplace(*desc, std::pair{enumValues.size(), values.size()});
    enumValues.insert(enumValues.end(), values.begin(), values.end());
    return *desc;
}

inline std::string const& DynamicCommandInstance::getEnumValue(int index) const {
    if (index < 0 || index >= enumValues.size()) throw std::runtime_error("Enum index out of range");
    return enumValues.at(index);
}

ParameterIndex DynamicCommandInstance::newParameter(DynamicCommand::ParameterData&& data) {
    auto   iter   = parameterPtrs.find(data.name);
    size_t offset = -1;
    if (iter == parameterPtrs.end()) {
        offset = commandSize;
        parameterPtrs.emplace(data.name, DynamicCommand::ParameterPtr(data.type, offset));
        commandSize += ParameterSizeMap.at(data.type) + 8;
    } else {
        offset = iter->second.getOffset();
        if (iter->second.type != data.type)
            throw std::runtime_error(fmt::format(
                "dynamic command \"{}\" register failed, Different type parameters "
                "with the same name {} are not allowed",
                name_,
                data.name
            ));
    }
    std::string const& identifier = data.identifier;
    if (parameterDatas.end()
        != std::find_if(parameterDatas.begin(), parameterDatas.end(), [&](DynamicCommand::ParameterData const& data) {
               return data.identifier == identifier;
           }))
        throw std::runtime_error("parameter identifier already exists");
    data.offset = offset;
    parameterDatas.emplace_back(std::move(data));
    return {this, parameterDatas.size() - 1};
}

inline ParameterIndex DynamicCommandInstance::newParameter(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    bool                          optional,
    std::string const&            description,
    std::string const&            identifier,
    CommandParameterOption        parameterOption
) {
    return newParameter(ParameterData(name, type, optional, description, identifier, parameterOption));
}

inline ParameterIndex DynamicCommandInstance::findParameterIndex(std::string const& indentifier) {
    size_t index = 0;
    for (auto& paramData : parameterDatas) {
        if (paramData.identifier == indentifier || paramData.description == indentifier
            || paramData.name == indentifier)
            break;
        ++index;
    }
    if (index == parameterDatas.size()) index = -1;
    return {this, index};
}

inline ParameterIndex DynamicCommandInstance::mandatory(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    std::string const&            description,
    std::string const&            identifier,
    CommandParameterOption        parameterOption
) {
    return newParameter(ParameterData(name, type, false, description, identifier, parameterOption));
}

inline ParameterIndex DynamicCommandInstance::mandatory(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    std::string const&            description,
    CommandParameterOption        parameterOption
) {
    return mandatory(name, type, description, "", parameterOption);
};

inline ParameterIndex DynamicCommandInstance::mandatory(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    CommandParameterOption        parameterOption
) {
    return mandatory(name, type, "", "", parameterOption);
};

inline ParameterIndex DynamicCommandInstance::optional(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    std::string const&            description,
    std::string const&            identifier,
    CommandParameterOption        parameterOption
) {
    return newParameter(ParameterData(name, type, true, description, identifier, parameterOption));
}

inline ParameterIndex DynamicCommandInstance::optional(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    std::string const&            description,
    CommandParameterOption        parameterOption
) {
    return optional(name, type, description, "", parameterOption);
}

inline ParameterIndex DynamicCommandInstance::optional(
    std::string const&            name,
    DynamicCommand::ParameterType type,
    CommandParameterOption        parameterOption
) {
    return optional(name, type, "", "", parameterOption);
}

bool DynamicCommandInstance::addOverload(std::vector<ParameterIndex>&& params) {
    for (auto& index : params) {
        if (index >= parameterDatas.size())
            throw std::runtime_error(
                "parameter index " + std::to_string(index) + " out of range 0 ~ "
                + std::to_string(parameterDatas.size())
            );
    }
    overloads.emplace_back(params);
    return true;
}

inline bool DynamicCommandInstance::addOverload(std::vector<char const*>&& params) {
    std::vector<ParameterIndex> paramIndices;
    for (auto& param : params) {
        auto index = findParameterIndex(param);
        if (!index.isValid()) { throw std::runtime_error("Parameter " + std::string(param) + "not found"); }
        paramIndices.push_back(index);
    }
    return addOverload(std::move(paramIndices));
}

inline bool DynamicCommandInstance::addOverload(std::vector<std::string>&& params) {
    std::vector<ParameterIndex> paramIndices;
    for (auto& param : params) { paramIndices.push_back(findParameterIndex(param)); }
    return addOverload(std::move(paramIndices));
}

inline bool DynamicCommandInstance::setAlias(std::string const& alias) {
    this->alias_ = alias;
    return true;
}

inline std::vector<CommandParameterData>
DynamicCommandInstance::buildOverload(std::vector<ParameterIndex> const& overload) {
    std::vector<CommandParameterData> datas;
    for (auto& index : overload) {
        auto& param = parameterDatas.at(index);
        datas.emplace_back(param.makeParameterData());
    }
    return datas;
}

std::string DynamicCommandInstance::setSoftEnum(std::string const& name, std::vector<std::string> const& values) const {
    if (!hasRegistered()) {
        softEnums.emplace(name, values);
    } else {
        if (!ll::Global<CommandRegistry>) return "";
        auto names = ll::Global<CommandRegistry>->getSoftEnumNames();
        if (std::find(names.begin(), names.end(), name) == names.end()) {
            ll::Global<CommandRegistry>->addSoftEnum(name, values);
            return name;
        }
        CommandSoftEnumRegistry(ll::Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Replace, name, values);
    }
    return name;
}

bool DynamicCommandInstance::addSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const {
    if (!hasRegistered()) {
        auto iter = softEnums.find(name);
        if (iter != softEnums.end()) {
            iter->second.insert(iter->second.end(), values.begin(), values.end());
        } else {
            setSoftEnum(name, values);
        }
    } else {
        if (!ll::Global<CommandRegistry>) return false;
        auto names = ll::Global<CommandRegistry>->getSoftEnumNames();
        if (std::find(names.begin(), names.end(), name) == names.end()) {
            ll::Global<CommandRegistry>->addSoftEnum(name, values);
            return true;
        }
        CommandSoftEnumRegistry(ll::Global<CommandRegistry>).updateSoftEnum(SoftEnumUpdateType::Add, name, values);
    }
    return true;
};

bool DynamicCommandInstance::removeSoftEnumValues(std::string const& name, std::vector<std::string> const& values)
    const {
    if (!hasRegistered()) {
        auto iter = softEnums.find(name);
        if (iter != softEnums.end()) {
            std::erase_if(iter->second, [values](std::string const& val) {
                return std::find(values.begin(), values.end(), val) != values.end();
            });
            return true;
        }
        return false;
    } else {
        if (ll::Global<CommandRegistry>)
            CommandSoftEnumRegistry(ll::Global<CommandRegistry>)
                .updateSoftEnum(SoftEnumUpdateType::Remove, name, values);
    }
    return true;
}

inline std::vector<std::string> DynamicCommandInstance::getSoftEnumValues(std::string const& name) {
    return ll::Global<CommandRegistry>->getSoftEnumValues(name);
}

inline std::vector<std::string> DynamicCommandInstance::getSoftEnumNames() {
    return ll::Global<CommandRegistry>->getSoftEnumNames();
}

inline void DynamicCommandInstance::setCallback(DynamicCommand::CallBackFn&& callback) const {
    this->callback_ = callback;
}

inline void DynamicCommandInstance::removeCallback() const { callback_ = nullptr; }

inline std::string const& DynamicCommandInstance::getCommandName() const { return name_; }

inline bool DynamicCommandInstance::setBuilder(DynamicCommand::BuilderFn builder) {
    if (this->builder_ == nullptr) this->builder_ = builder;
    else return false;
    return true;
}

inline DynamicCommand::BuilderFn DynamicCommandInstance::initCommandBuilder() {
    auto builder = (DynamicCommand::BuilderFn)dcbNewCallback("ifsdl)p", &DynamicCommand::builderCallbackHanler, this);
    if (this->setBuilder(builder)) return builder;
    dcbFreeCallback((DCCallback*)builder);
    return nullptr;
}

#pragma endregion


LL_AUTO_TYPED_INSTANCE_HOOK(
    BaseCommandBlockService,
    HookPriority::Normal,
    BaseCommandBlock,
    &BaseCommandBlock::compile,
    void,
    class CommandOrigin const& commandOrigin,
    class Level&               level
) {
    if (ll::globalRuntimeConfig.tickThreadId != std::this_thread::get_id()) {
        SRWLockSharedHolder locker(delaySetupLock);
        return origin(commandOrigin, level);
    }
    return origin(commandOrigin, level);
}
