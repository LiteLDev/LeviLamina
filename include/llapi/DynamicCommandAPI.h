/*
MIT License

Copyright (c) 2022 LiteLDev

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
*/

#pragma once

#define USE_PARSE_ENUM_STRING
// #define ENABLE_PARAMETER_TYPE_POSTFIX

#include <type_traits>
#include <variant>

#include <magic_enum.hpp>

#include "llapi/mc/Command.hpp"
#include "llapi/mc/CommandOrigin.hpp"
#include "llapi/mc/CommandOutput.hpp"
#include "llapi/mc/CommandParameterData.hpp"
#include "llapi/mc/CommandPosition.hpp"
#include "llapi/mc/CommandRegistry.hpp"
#include "llapi/mc/CommandSelector.hpp"

#include "llapi/utils/WinHelper.h"

struct DCCallback;
struct DCArgs;
typedef union DCValue_ DCValue;

class Actor;
class CommandMessage;
class CommandOutput;
class CommandRegistry;
class DynamicCommandInstance;
class Player;


#define AllResultType                                                                                                  \
    bool const*, int const*, float const*, std::string const*, CommandSelector<Actor> const*,                          \
        CommandSelector<Player> const*, CommandPosition const*, CommandPositionFloat const*, CommandRawText const*,    \
        CommandMessage const*, Json::Value const*, CommandItem const*, CommandBlockName const*,                        \
        MobEffect const* const*, ActorDefinitionIdentifier const* const*, std::unique_ptr<Command> const*

/**
 * @brief The dynamic command
 *
 * @par 示例程序：
 * @code
 * DynamicCommand::setup(
 *   "example_command", // The command
 *   "Example description", // The description
 *   {}, // The enumeration
 *   {}, // The parameters
 *   {{},}, // The overloads
 *   [](
 *     DynamicCommand const& command,
 *     CommandOrigin const& origin,
 *     CommandOutput& output,
 *     std::unordered_map<std::string, DynamicCommand::Result>& results
 *   ) {
 *     output.success(
 *       "Example success"
 *     );
 *   } // The callback function
 * );
 * @endcode
 *
 * @code
 * using ParamType = DynamicCommand::ParameterType;
 * using Param = DynamicCommand::ParameterData;
 * DynamicCommand::setup(
 *   "example_command", // The command
 *   "Example description", // The description
 *   {
 *     {"enum_1", {"add", "remove"}},
 *     {"enum_2", {"list"}},
 *   }, // The enumeration
 *   {
 *     Param("testEnum", ParamType::Enum, false, "enum_1"),
 *     Param("testEnum", ParamType::Enum, false, "enum_2"),
 *     Param("testInt", ParamType::Int, true),
 *   }, // The parameters
 *   {
 *     // overloads{ (type == Enum ? enumOptions : name) ...}
 *     {"enum_1", "testInt"}, // example_command <add|remove> [testInt]
 *     {"enum_2"}, // example_command <list>
 *   }, // The overloads
 *   [](
 *     DynamicCommand const& command,
 *     CommandOrigin const& origin,
 *     CommandOutput& output,
 *     std::unordered_map<std::string, DynamicCommand::Result>& results
 *   ) {
 *     auto& action = results["testEnum"].get<std::string>();
 *     switch (do_hash(action.c_str()))
 *     {
 *       case do_hash("add"):
 *         if (results["testInt"].isSet)
 *           output.success(fmt::format("add {}", results["testInt"].getRaw<int>()));
 *         else
 *           output.success("add nothing");
 *         break;
 *       case do_hash("remove"):
 *         if (results["testInt"].isSet)
 *           output.success(fmt::format("remove {}", results["testInt"].getRaw<int>()));
 *         else
 *           output.success("remove nothing");
 *         break;
 *       case do_hash("list"):
 *         output.success("list");
 *         break;
 *       default:
 *         break;
 *     }
 *   }, // The callback function
 *   CommandPermissionLevel::GameMasters // The permission level
 * );
 * @endcode
 *
 */
class DynamicCommand : public Command {
    template <typename _Ty, class... _Types>
    static constexpr bool is_one_of_v =
        std::_Meta_find_unique_index<std::variant<_Types...>, std::add_pointer_t<std::add_const_t<_Ty>>>::value <
        sizeof...(_Types);
    template <typename _Ty>
    static constexpr bool is_supported_result_type_v = is_one_of_v<_Ty, AllResultType>;
    template <typename _Ty, typename Type>
    using enable_if_supported_t = std::enable_if_t<is_supported_result_type_v<_Ty>, Type>;

public:
    /**
     * @brief The parameter type
     *
     */
    enum class ParameterType {
        /**
         * @brief The boolean type ( `bool` )
         */
        Bool,

        /**
         * @brief The integer type ( `int` )
         *
         */
        Int,

        /**
         * @brief The floating point type ( `float` )
         *
         */
        Float,

        /**
         * @brief The string type ( 'std::string' )
         *
         */
        String,

        /**
         * @brief The entity selector type ( `CommandSelector<Actor>` )
         *
         */
        Actor,

        /**
         * @brief The player selector type ( `CommandSelector<Player>` )
         *
         */
        Player,

        /**
         * @brief The integer position type ( `CommandPosition` )
         *
         */
        BlockPos,

        /**
         * @brief The floating point position type ( `CommandPositionFloat` )
         *
         */
        Vec3,

        RawText,   // CommandRawText
        Message,   // CommandMessage
        JsonValue, // Json::Value

        /**
         * @brief The item type ( `CommandItem` )
         *
         */
        Item,

        /**
         * @brief The block type ( `CommandBlockName` )
         *
         */
        Block,

        /**
         * @brief The mob effect type ( `Const* MobEffect` )
         *
         */
        Effect, // MobEffect const*

        /**
         * @brief The enumeration type
         *
         */
        Enum,

        SoftEnum,         // SOFT_ENUM
        ActorType,        // ActorDefinitionIdentifier const*
        Command,          // std::unique_ptr<Command>
        WildcardSelector, // WildcardCommandSelector<Actor>

#ifdef ENABLE_PARAMETER_TYPE_POSTFIX
        Postfix, // int?
#endif           // ENABLE_PARAMETER_TYPE_POSTFIX
    };
    struct ParameterPtr;

    /**
     * @brief The command parameter capture result
     *
     */
    struct Result {
        ParameterType const type;
        size_t const        offset;
        bool const          isSet;

        DynamicCommand const*         command;
        DynamicCommandInstance const* instance;
        CommandOrigin const*          origin;

        LIAPI Result(
            ParameterPtr const*           ptr,
            DynamicCommand const*         command,
            CommandOrigin const*          origin,
            DynamicCommandInstance const* instance = nullptr
        );
        LIAPI Result();
        LIAPI std::string const& getEnumValue() const;

        /**
         * @brief Get the parameter type.
         *
         * @return The parameter type
         */
        LIAPI ParameterType getType() const;

        LIAPI std::string getName() const;
        LIAPI std::string                   toDebugString() const;
        LIAPI DynamicCommandInstance const* getInstance() const;

        template <typename T>
        inline enable_if_supported_t<T, T const&> getRaw() const {
#ifdef USE_PARSE_ENUM_STRING
            if (type == ParameterType::Enum) {
                auto& val = dAccess<std::pair<std::string, int>>(command, offset);
                if constexpr (std::is_same_v<std::remove_cv_t<T>, int> || std::is_enum_v<T>) {
                    return static_cast<T const&>(val.second);
                } else if constexpr (std::is_same_v<std::remove_cv_t<T>, std::string>) {
                    return static_cast<T const&>(val.first);
                }
            }
#else
            if constexpr (std::is_same_v<std::remove_cv_t<T>, std::string>) {
                if (type == ParameterType::Enum)
                    return getEnumValue();
            }
#endif // USE_PARSE_ENUM_STRING
            if (checkTempateType<T>(type))
                return dAccess<T>(command, offset);
            throw std::runtime_error(fmt::format(
                "Raw type not match, parameter Type: {}, data type: {}", magic_enum::enum_name(type), typeid(T).name()
            ));
        }

        template <typename T>
        inline enable_if_supported_t<T, T const&> value_or(T const& defaultValue) {
            if (isSet)
                return getRaw<T>();
            return defaultValue;
        }

        /**
         * @brief Get the value of the parameter
         *
         * @tparam T Get with this type
         * @return The value with type `T`
         */
        template <typename T>
        inline std::conditional_t<
            std::is_lvalue_reference_v<T>,
            std::add_lvalue_reference_t<std::add_const_t<std::remove_reference_t<T>>>,
            T>
        get() const {
            static_assert(
                is_supported_result_type_v<T> ||
                    (std::is_lvalue_reference_v<T> && is_supported_result_type_v<std::remove_reference_t<T>>),
                "Unsupported Result Type in " __FUNCTION__
            );
            if constexpr (std::is_lvalue_reference_v<T>)
                return getRaw<std::remove_reference_t<T>>();
            else
                return getRaw<T>();
        }

        template <>
        inline std::vector<Actor*> get<std::vector<Actor*>>() const {
            if (type == ParameterType::Player) {
                auto                players = get<std::vector<Player*>>();
                std::vector<Actor*> actors(players.size());
                std::transform(players.begin(), players.end(), actors.begin(), [](Player* player) {
                    return static_cast<Actor*>(player);
                });
                return actors;
            }
            std::vector<Actor*> rtn;
            for (auto& result : getRaw<CommandSelector<Actor>>().results(*origin)) {
                rtn.push_back(result);
            }
            return rtn;
        }
        template <>
        inline std::vector<Player*> get<std::vector<Player*>>() const {
            std::vector<Player*> rtn;
            for (auto& result : getRaw<CommandSelector<Player>>().results(*origin)) {
                rtn.push_back(result);
            }
            return rtn;
        }
        template <>
        inline BlockPos get<BlockPos>() const {
            auto& pos = getRaw<CommandPosition>();
            return pos.getBlockPos(0, *origin, Vec3::ZERO);
        }
        template <>
        inline Vec3 get<Vec3>() const {
            auto& pos = getRaw<CommandPositionFloat>();
            return pos.getPosition(0, *origin, Vec3::ZERO);
        }
    };

    struct ParameterPtr {
        ParameterType type;

    private:
        size_t offset = -1;

        friend struct Result;

    public:
        LIAPI        ParameterPtr(ParameterType type, size_t offset);
        LIAPI bool   isValueSet(DynamicCommand const* command) const;
        LIAPI Result getResult(DynamicCommand const* command, CommandOrigin const* origin) const;

        inline size_t getOffset() const { return offset; }
    };

    /**
     * @brief The parameter
     *
     */
    struct ParameterData {
    protected:
        DynamicCommand::ParameterType type;
        size_t                        offset = -1;
        std::string                   name;
        std::string                   description;
        std::string                   identifier;
        bool                          optional = false;
        CommandParameterOption        option;

    public:
        ParameterData() = delete;
        LIAPI ParameterData(ParameterData const&);

        /**
         * @brief Construct a parameter.
         *
         * @param name The parameter name
         * @param type The parameter type
         * @param optional True if the parameter is optional; otherwise false.
         * @param enumOptions The enumeration option corresponding to the parameter
         * @return The parameter
         */
        LIAPI ParameterData(
            std::string const&            name,
            DynamicCommand::ParameterType type,
            bool                          optional        = false,
            std::string const&            enumOptions     = "",
            std::string const&            identifier      = "",
            CommandParameterOption        parameterOption = (CommandParameterOption)0
        );

        LIAPI ParameterData(
            std::string const&            name,
            DynamicCommand::ParameterType type,
            std::string const&            enumOptions     = "",
            std::string const&            identifier      = "",
            CommandParameterOption        parameterOption = (CommandParameterOption)0
        );
        LIAPI CommandParameterData makeParameterData() const;

        friend class DynamicCommandInstance;
        friend class DynamicCommand;

        template <ParameterType type>
        inline static constexpr CommandParameterDataType getCommandParameterDataType() {
            if constexpr (type == ParameterType::Enum)
                return CommandParameterDataType::ENUM;
            else if constexpr (type == ParameterType::SoftEnum)
                return CommandParameterDataType::SOFT_ENUM;
            // else if constexpr (type == ParameterType::Postfix)
            //     return CommandParameterDataType::POSIFIX;
            else
                return CommandParameterDataType::NORMAL;
        }
        template <ParameterType type, typename T>
        CommandParameterData makeParameterData() const {
            CommandParameterData param{
                type == ParameterType::Enum ? typeid_t<CommandRegistry>::count++ : type_id<CommandRegistry, T>(),
                type == ParameterType::Enum ? &CommandRegistry::fakeParse<T> : CommandRegistry::getParseFn<T>(),
                name,
                getCommandParameterDataType<type>(),
                description == "" ? nullptr : description.data(),
                (int)offset,
                optional,
                (int)offset + std::max(8, (int)sizeof(T))};
            param.addOptions(option);
            return param;
        }

        inline void setOptional(bool optional) { this->optional = optional; }
        inline bool setEnumOptions(std::string const& enumOptions) {
            if (type != DynamicCommand::ParameterType::Enum && type != DynamicCommand::ParameterType::SoftEnum)
                return false;
            this->description = enumOptions;
            return true;
        }
        inline bool setParameterOption(CommandParameterOption parameterOption) { this->option = parameterOption; }

        inline ParameterData(
            std::string const&     name,
            ParameterType          type,
            const char*            enumOptions     = "",
            std::string const&     identifer       = "",
            CommandParameterOption parameterOption = (CommandParameterOption)0
        )
        : ParameterData(name, type, (std::string const&)enumOptions, identifer, parameterOption){};
    };

    using CallBackFn = std::function<void(
        DynamicCommand const&                    cmd,
        CommandOrigin const&                     origin,
        CommandOutput&                           output,
        std::unordered_map<std::string, Result>& results
    )>;
    using BuilderFn  = std::unique_ptr<Command> (*)();

private:
    template <typename _Ty>
    inline static enable_if_supported_t<_Ty, bool> checkTempateType(ParameterType type) {
        switch (type) {
        case ParameterType::Bool:
            return std::is_same_v<bool, std::remove_cv_t<_Ty>>;
        case ParameterType::Int:
            return std::is_same_v<int, std::remove_cv_t<_Ty>>;
        case ParameterType::Float:
            return std::is_same_v<float, std::remove_cv_t<_Ty>>;
        case ParameterType::String:
            return std::is_same_v<std::string, std::remove_cv_t<_Ty>>;
        case ParameterType::Actor:
            return std::is_same_v<CommandSelector<Actor>, std::remove_cv_t<_Ty>>;
        case ParameterType::Player:
            return std::is_same_v<CommandSelector<Player>, std::remove_cv_t<_Ty>>;
        case ParameterType::BlockPos:
        case ParameterType::Vec3:
            return std::is_same_v<CommandPosition, std::remove_cv_t<_Ty>> ||
                   std::is_same_v<CommandPositionFloat, std::remove_cv_t<_Ty>>;
        case ParameterType::RawText:
            return std::is_same_v<CommandRawText, std::remove_cv_t<_Ty>> ||
                   std::is_same_v<std::string, std::remove_cv_t<_Ty>>;
        case ParameterType::Message:
            return std::is_same_v<CommandMessage, std::remove_cv_t<_Ty>>;
        case ParameterType::JsonValue:
            return std::is_same_v<Json::Value, std::remove_cv_t<_Ty>>;
        case ParameterType::Item:
            return std::is_same_v<CommandItem, std::remove_cv_t<_Ty>>;
        case ParameterType::Block:
            return std::is_same_v<CommandBlockName, std::remove_cv_t<_Ty>>;
        case ParameterType::Effect:
            return std::is_same_v<MobEffect const*, std::remove_cv_t<_Ty>>;
        // case ParameterType::Position:
        //     return std::is_same_v<ParameterDataType::Position, std::remove_cv_t<_Ty>> || std::is_same_v<BlockPos,
        //     std::remove_cv_t<_Ty>> || std::is_same_v<Vec3, std::remove_cv_t<_Ty>>;
        case ParameterType::Enum:
            return std::is_same_v<int, std::remove_cv_t<_Ty>> || std::is_same_v<std::string, std::remove_cv_t<_Ty>> ||
                   std::is_enum_v<_Ty>;
        case ParameterType::SoftEnum:
            return std::is_same_v<std::string, std::remove_cv_t<_Ty>>;
        case ParameterType::ActorType:
            return std::is_same_v<ActorDefinitionIdentifier const*, std::remove_cv_t<_Ty>>;
        case ParameterType::Command:
            return std::is_same_v<std::unique_ptr<Command>, std::remove_cv_t<_Ty>>;
        default:
            return false;
            break;
        }
        return false;
    }

    LIAPI static char builderCallbackHanler(DCCallback* cb, DCArgs* args, DCValue* result, void* userdata);
    LIAPI static std::unique_ptr<Command>* commandBuilder(std::unique_ptr<Command>* rtn, const std::string& name);
    LIAPI static DynamicCommandInstance*   _setup(std::unique_ptr<class DynamicCommandInstance> commandInstance);

public:
    static bool onServerCommandsRegister(CommandRegistry& registry);

    friend class DynamicCommandInstance;

public:
    /*0*/ virtual ~DynamicCommand();
    /*1*/ virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    LIAPI static std::unique_ptr<class DynamicCommandInstance> createCommand(
        std::string const&     name,
        std::string const&     description,
        CommandPermissionLevel permission = CommandPermissionLevel::GameMasters,
        CommandFlag            flag1      = {(CommandFlagValue)0x80},
        CommandFlag            flag2      = {(CommandFlagValue)0},
        HMODULE                handle     = GetCurrentModule()
    );
    LIAPI static std::unique_ptr<class DynamicCommandInstance> createCommand(
        std::string const&                                          name,
        std::string const&                                          description,
        std::unordered_map<std::string, std::vector<std::string>>&& enums,
        std::vector<ParameterData>&&                                params,
        std::vector<std::vector<std::string>>&&                     overloads,
        CallBackFn                                                  callback,
        CommandPermissionLevel                                      permission = CommandPermissionLevel::GameMasters,
        CommandFlag                                                 flag1      = {(CommandFlagValue)0x80},
        CommandFlag                                                 flag2      = {(CommandFlagValue)0},
        HMODULE                                                     handle     = GetCurrentModule()
    );

    LIAPI static DynamicCommandInstance const* setup(std::unique_ptr<class DynamicCommandInstance> commandInstance);

    /**
     * @brief Setup a command.
     *
     * @param name The command name (lowercase letters and `_` )
     * @param description The command description
     * @param enums The command enumerations
     * @param params The command parameters
     * @param overloads The command overloads
     * @param callback The callback function
     * @param permission The permission required for command execution
     * @return The command instance
     *
     * @note The command name only consists of lowercase letters and `_` .
     */
    inline static DynamicCommandInstance const* setup(
        std::string const&                                          name,
        std::string const&                                          description,
        std::unordered_map<std::string, std::vector<std::string>>&& enums,
        std::vector<ParameterData>&&                                params,
        std::vector<std::vector<std::string>>&&                     overloads,
        CallBackFn                                                  callback,
        CommandPermissionLevel                                      permission = CommandPermissionLevel::GameMasters,
        CommandFlag                                                 flag1      = {(CommandFlagValue)0x80},
        CommandFlag                                                 flag2      = {(CommandFlagValue)0},
        HMODULE                                                     handle     = GetCurrentModule()
    ) {
        return setup(createCommand(
            name,
            description,
            std::move(enums),
            std::move(params),
            std::move(overloads),
            std::move(callback),
            permission,
            flag1,
            flag2,
            handle
        ));
    };

    // Experiment
    LIAPI static bool unregisterCommand(std::string const& name);

    LIAPI static bool updateAvailableCommands();

    LIAPI DynamicCommandInstance const* getInstance() const;

    LIAPI static DynamicCommandInstance const* getInstance(std::string const& commandName);
};

/**
 * @brief The dynamic command instance
 *
 */
class DynamicCommandInstance {
public:
    struct ParameterIndex {
        DynamicCommandInstance* instance;
        size_t                  index;
        ParameterIndex(DynamicCommandInstance* instance, size_t index) : instance(instance), index(index){};
        inline                                operator size_t() const { return index; }
        inline DynamicCommand::ParameterData& operator->() { return instance->parameterDatas.at(index); }
        inline bool                           isValid() const {
            size_t size = instance->parameterDatas.size();
            return index >= 0 && index < size;
        }
    };

private:
    std::string                  name;
    std::string                  alias;
    std::unique_ptr<std::string> description;
    CommandPermissionLevel       permission;
    CommandFlag                  flag;
    DynamicCommand::BuilderFn    builder = nullptr;

public:
    // Parameter Pointers to DynamicCommand Extra Part
    size_t                                                        commandSize   = sizeof(DynamicCommand);
    std::unordered_map<std::string, DynamicCommand::ParameterPtr> parameterPtrs = {};

    // Use unique_ptr to keep the address of enumName.c_str() immutable
    std::vector<std::unique_ptr<std::string>> enumNames  = {};
    std::vector<std::string>                  enumValues = {};
    // unordered_map{ enumName, pair{ enumIndex, enumSize } }
    std::unordered_map<std::string_view, std::pair<size_t, size_t>> enumRanges = {};

    //// unordered_map{ enumName, pair{ enumIndex, enumConstraint } }
    // std::unordered_map<std::string_view, std::pair<size_t, SemanticConstraint>> enumConstraints = {};

    // SoftEnum
    mutable std::unordered_map<std::string, std::vector<std::string>> softEnums;

    std::vector<DynamicCommand::ParameterData> parameterDatas = {};

private:
    std::vector<std::vector<ParameterIndex>> overloads = {}; // indices of parameter instance

    mutable DynamicCommand::CallBackFn callback = nullptr;
    HMODULE                            handle   = nullptr;

    friend class DynamicCommand;

    LIAPI DynamicCommandInstance(
        std::string const&     name,
        std::string const&     description,
        CommandPermissionLevel permission = CommandPermissionLevel::GameMasters,
        CommandFlag            flag       = {(CommandFlagValue)0x80},
        HMODULE                handle     = GetCurrentModule()
    );

    LIAPI bool setBuilder(DynamicCommand::BuilderFn builder);
    LIAPI DynamicCommand::BuilderFn initCommandBuilder();
    LIAPI std::vector<CommandParameterData> buildOverload(std::vector<ParameterIndex> const& overload);

public:
    virtual ~DynamicCommandInstance();

    LIAPI static std::unique_ptr<DynamicCommandInstance> create(
        std::string const&     name,
        std::string const&     description,
        CommandPermissionLevel permission,
        CommandFlag            flag,
        HMODULE                handle = GetCurrentModule()
    );
    LIAPI std::string const& setEnum(std::string const& description, std::vector<std::string> const& values);
    LIAPI std::string const& getEnumValue(int index) const;
    LIAPI ParameterIndex     newParameter(DynamicCommand::ParameterData&& data);
    LIAPI ParameterIndex     newParameter(
            std::string const&            name,
            DynamicCommand::ParameterType type,
            bool                          optional        = false,
            std::string const&            description     = "",
            std::string const&            identifier      = "",
            CommandParameterOption        parameterOption = (CommandParameterOption)0
        );
    LIAPI ParameterIndex findParameterIndex(std::string const& param);
    LIAPI ParameterIndex mandatory(
        std::string const&            name,
        DynamicCommand::ParameterType type,
        std::string const&            description,
        std::string const&            identifier,
        CommandParameterOption        parameterOption = (CommandParameterOption)0
    );
    LIAPI ParameterIndex mandatory(
        std::string const&            name,
        DynamicCommand::ParameterType type,
        std::string const&            description,
        CommandParameterOption        parameterOption = (CommandParameterOption)0
    );
    LIAPI ParameterIndex mandatory(
        std::string const&            name,
        DynamicCommand::ParameterType type,
        CommandParameterOption        parameterOption = CommandParameterOption::None
    );
    LIAPI ParameterIndex optional(
        std::string const&            name,
        DynamicCommand::ParameterType type,
        std::string const&            description,
        std::string const&            identifier,
        CommandParameterOption        parameterOption = (CommandParameterOption)0
    );
    LIAPI ParameterIndex optional(
        std::string const&            name,
        DynamicCommand::ParameterType type,
        std::string const&            description,
        CommandParameterOption        parameterOption = (CommandParameterOption)0
    );
    LIAPI ParameterIndex optional(
        std::string const&            name,
        DynamicCommand::ParameterType type,
        CommandParameterOption        parameterOption = CommandParameterOption::None
    );

    // LIAPI bool addOverload();
    LIAPI bool addOverload(std::vector<ParameterIndex>&& params);
    LIAPI bool addOverload(std::vector<std::string>&& params);
    LIAPI bool addOverload(std::vector<char const*>&& params);
    LIAPI bool addOverload(std::vector<DynamicCommand::ParameterData>&& params);
    LIAPI bool setAlias(std::string const& alias);
    LIAPI void setCallback(DynamicCommand::CallBackFn&& callback) const;
    LIAPI void removeCallback() const;
    // LIAPI static bool updateSoftEnum(std::string const& name = "") const;
    LIAPI std::string setSoftEnum(std::string const& name, std::vector<std::string> const& values) const;
    LIAPI bool        addSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const;
    LIAPI bool        removeSoftEnumValues(std::string const& name, std::vector<std::string> const& values) const;
    LIAPI static std::vector<std::string> getSoftEnumValues(std::string const& name);
    LIAPI static std::vector<std::string> getSoftEnumNames();

    template <typename T>
    inline std::enable_if_t<fmt::v9::detail::is_string<T>::value, ParameterIndex> toIndex(T const& arg) {
        return findParameterIndex(arg);
    }
    template <typename T>
    inline std::enable_if_t<!fmt::v9::detail::is_string<T>::value, ParameterIndex> toIndex(T const& arg) = delete;
    template <>
    inline ParameterIndex toIndex(ParameterIndex const& arg) {
        return arg;
    }
    template <>
    inline ParameterIndex toIndex(DynamicCommand::ParameterData const& arg) {
        return newParameter(DynamicCommand::ParameterData(arg));
    }
    template <typename... Args>
    inline bool addOverload(Args const&... args) {
        return addOverload(std::vector<ParameterIndex>{toIndex(args)...});
    }

    template <typename T>
    inline bool addOverload(std::initializer_list<T>&& params) {
        return addOverload((std::vector<T>)params);
    }
    LIAPI std::string const& getCommandName() const;
    inline ParameterIndex    newParameter(
           std::string const&            name,
           DynamicCommand::ParameterType type,
           const char*                   description,
           std::string const&            identifier,
           CommandParameterOption        parameterOption = (CommandParameterOption)0
       ) {
        return newParameter(name, type, false, (std::string const&)description, identifier, parameterOption);
    };
    inline bool hasRegistered() const { return DynamicCommand::getInstance(getCommandName()) != nullptr; };
    inline void onExecute(DynamicCommand const& command, CommandOrigin const& origin, CommandOutput& output) const {

    };
};
