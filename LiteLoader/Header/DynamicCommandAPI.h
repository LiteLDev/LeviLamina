#pragma once
#include "../RegCommandAPI.h"
#include "../Utils/WinHelper.h"


///////////////////////////////////////////////////////
// Dynamic Command Registry
//
// [Example]
//   ## Single Overload Command Example:
//      // Direct setup of dynamic command with necessary information
//      DynamicCommand::setup(
//          "dynenum",         // command name
//          "dynamic command", //  command description
//          {
//              // dynamic command parameter
//              DynamicCommand::Parameter(DynamicCommand::ParameterType::Enum, "testEnum", false, "TestEnum"),
//              DynamicCommand::Parameter(DynamicCommand::ParameterType::Int, "testInt", true),
//          },
//          // enum data
//          {
//              {"TestEnum", {"add", "list", "test"}}},
//          // dynamic command callback
//          [](CommandOrigin const& origin, CommandOutput& output, std::vector<Result>& results) {
//              output.success("Success");
//              // get parameter value by parameter name
//              auto& testBool = DynamicCommand::getFirstResultByName<std::string>(results, "testEnum");
//              output.success(fmt::format("testEnum is {}", testBool));
//              // get parameter value index
//              if (results[1].isSet)
//                  output.success(fmt::format("testInt is {}", results[1].get<int>()));
//              else
//                  output.success("testInt is not set");
//          },
//          CommandPermissionLevel::Any);
// 
//   ## Complex Example
//      using ParamType = DynamicCommand::ParameterType;
//      // get dynamic command instance
//      auto command = DynamicCommand::registerCommand("dyncmd", "dynamic command", CommandPermissionLevel::GameMasters);
//
//      // add enum parameter options ["add" and "remove"]
//      auto& options = command->addEnum("TestOperation1", std::vector<std::string>{"add", "remove"});
//      // add enum parameter ["list"]
//      auto& optionsList = command->addEnum("TestOperation2", std::vector<std::string>{"list"});
//
//      // make enum parameter with default options ["add" and "remove"]
//      auto enumParam = command->addParameter(ParamType::Enum, "testEnum", false, options);
//      enumParam->setOption((CommandParameterOption)1);
//      auto stringParam = command->addParameter(ParamType::String, "testString", false);
//
//      // build overload, at this time, enumParam's options are ["add" and "remove"]
//      command->buildOveload({enumParam, stringParam}); // dyncmd <add|remove> <testString:string>
//
//      // switch enum options to ["list"]
//      enumParam->setEnumOptions(optionsList);
//      command->buildOveload({enumParam}); // dyncmd <list>
//
//      command->setCallback([](CommandOrigin const& origin, CommandOutput& output, std::vector<Result>& results) {
//          switch (do_hash(results[0].get<std::string>().c_str()))
//          {
//              case do_hash("add"):
//                  output.success(fmt::format("Add - {}", results[1].get<std::string>()));
//                  break;
//              case do_hash("remove"):
//                  output.success(fmt::format("Remove - {}", results[1].get<std::string>()));
//                  break;
//              case do_hash("list"):
//                  output.success("List");
//                  break;
//              default:
//                  break;
//          }
//      });
//      // do not forget to setup the command instance
//      DynamicCommand::setup(std::move(command));
// 
/////////////////////////////////////////////////////

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
#define AllResultType bool const*, int const*, float const*, std::string const*, CommandSelector<Actor> const*, CommandSelector<Player> const*, CommandPosition const* /*std::vector<Actor*>, std::vector<Player*>, Vec3, EnumResult, SoftEnumResult*/
class DynamicCommandInstance;
class DynamicCommand : public Command
{
public:
    struct Parameter;
    enum class DynamicEnum : unsigned long long{};
    enum class ParameterType
    {
        Bool,
        Int,
        Float,
        String,
        Actor,
        Player,
        Position,
        Enum,
        SoftEnum,
    };
    struct Result
    {
        Parameter const* parameter;
        DynamicCommandInstance const* command;
        std::variant<AllResultType> const value;
        bool isSet;

        LIAPI std::string const& getEnumValue() const;
        template <typename T>
        inline T const& get() const
        {
            if (parameter->type == ParameterType::Enum)
            {
                if constexpr (std::is_enum_v<T>)
                    return *(T const*)std::get<int const*>(value);
                else if constexpr (std::is_same_v<T, std::string>)
                    return getEnumValue();
                else if constexpr (std::is_integral_v<T>)
                    return *(T const*)std::get<int const*>(value);
            }
            checkTempateType<T>(parameter->type);
            return *std::get<T const*>(value);
        }
        template <typename T>
        inline T const& value_or(T const& defaultValue)
        {
            if (isSet)
                return get<T>();
            return defaultValue;
        }
        template <typename T>
        inline T get(CommandOrigin const& origin) const = delete;
        template<>
        inline std::vector<Actor*> get<std::vector<Actor*>>(CommandOrigin const& origin) const
        {
            checkTempateType<CommandSelector<Actor>>(getType());
            std::vector<Actor*> rtn;
            for (auto& result : get<CommandSelector<Actor>>().results(origin)) {
                rtn.push_back(result);
            }
            return rtn;
        }
        template<>
        inline std::vector<Player*> get<std::vector<Player*>>(CommandOrigin const& origin) const
        {
            checkTempateType<CommandSelector<Player>>(getType());
            std::vector<Player*> rtn;
            for (auto& result : get<CommandSelector<Player>>().results(origin))
            {
                rtn.push_back(result);
            }
            return rtn;
        }
        template <>
        inline BlockPos get<BlockPos>(CommandOrigin const& origin) const
        {
            checkTempateType<CommandPosition>(getType());
            auto& pos = get<CommandPosition>();
            return pos.getBlockPos(origin, Vec3::ZERO);
        }
        template <>
        inline Vec3 get<Vec3>(CommandOrigin const& origin) const
        {
            checkTempateType<CommandPosition>(getType());
            auto& pos = get<CommandPosition>();
            return pos.getPosition(origin, Vec3::ZERO);
        }

        inline ParameterType getType() const
        {
            return parameter->type;
        }
        inline std::string getName() const
        {
            return parameter->name;
        }
    };

    struct Parameter
    {
        ParameterType type;
        std::string name;
        std::string_view description = "";
        bool optional = false;
        CommandParameterOption option = (CommandParameterOption)-1;

    private:
        bool offsetInited = false;
        size_t offset = -1;
        size_t size;

        friend size_t getDynamicCommandSize(std::vector<Parameter> const&);
        friend class DynamicCommand;
        friend class DynamicCommandInstance;

        template <typename T>
        inline CommandParameterData makeParameterData() const;

    public:
        LIAPI Parameter(ParameterType type, std::string const& name, bool optional = false, std::string const& description = "");
        template <typename T>
        inline T const& getValue(DynamicCommand const* command) const
        {
            assert(offsetInited);
            checkTempateType<T>(type);
            return dAccess<T>(command, offset);
        }
        inline bool isValueSet(DynamicCommand const* command) const
        {
            assert(offsetInited);
            return dAccess<bool>(command, offset + size);
        }
        inline bool setEnumOptions(std::string const& description)
        {
            this->description = description;
            return true;
        }
        inline void setOptional(bool optional)
        {
            this->optional = optional;
        }

        LIAPI Result getResult(DynamicCommand const* command) const;
        LIAPI CommandParameterData makeParameterData() const;
        inline void setOption(CommandParameterOption option)
        {
            this->option = option;
        }
    };
    
    using CallBackFn = std::function<void(CommandOrigin const& origin, CommandOutput& output, std::vector<Result>& results)>;
private:
    // map<offset, data>
    std::string commandName;

    static std::unique_ptr<Command> commandBuilder();
    template <typename T>
    inline static bool checkTempateType(ParameterType type)
    {
        switch (type)
        {
            case ParameterType::Bool:
                return std::is_same_v<ParameterDataType::Bool, T>;
                break;
            case ParameterType::Int:
                return std::is_integral_v<T>;
                break;
            case ParameterType::Float:
                return std::is_floating_point_v<T>;
                break;
            case ParameterType::String:
                return std::is_same_v<ParameterDataType::String, T>;
                break;
            case ParameterType::Actor:
                return std::is_same_v<ParameterDataType::Actor, T>;
                break;
            case ParameterType::Player:
                return std::is_same_v<ParameterDataType::Player, T>;
                break;
            case ParameterType::Position:
                return std::is_same_v<ParameterDataType::Position, T>;
                break;
            case ParameterType::Enum:
                return std::is_integral_v<T> || std::is_same_v<std::string, T> || std::is_enum_v<T>;
                break;
            case ParameterType::SoftEnum:
                return std::is_same_v<ParameterDataType::SoftEnum, T>;
                break;
            default:
                return false;
                break;
        }
        return true;
    }
    friend class DynamicCommandInstance;

public:
    /*0*/ virtual ~DynamicCommand();
    /*1*/ virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    LIAPI static bool setup(std::string const& name, std::string const& description, std::vector<Parameter>&& params, std::unordered_map<std::string, std::vector<std::string>>&& enumData, CallBackFn&& callback, CommandPermissionLevel permission = CommandPermissionLevel::Any, CommandFlag flag1 = {(CommandFlagValue)0x80}, CommandFlag flag2 = {(CommandFlagValue)0}, HMODULE = GetCurrentModule());
    LIAPI static bool setup(std::string const& name, std::string const& description, CallBackFn&& callback, CommandPermissionLevel permission = CommandPermissionLevel::Any, CommandFlag flag1 = {(CommandFlagValue)0x80}, CommandFlag flag2 = {(CommandFlagValue)0}, HMODULE = GetCurrentModule());
    LIAPI static bool setup(std::unique_ptr<class DynamicCommandInstance> commandInstance);

    template <typename T>
    inline static T const& getFirstResultByName(std::vector<Result>& results, std::string const& name)
    {
        for (auto& result : results)
        {
            if (name == result.getName() && checkTempateType<T>(result.getType()))
            {
                return result.get<T>();
            }
        }
        return T();
    }
    LIAPI static Result& getFirstResultByName(std::vector<Result>& results, std::string const& name);

    LIAPI static struct std::unique_ptr<class DynamicCommandInstance> registerCommand(std::string const& name, std::string const& description, CommandPermissionLevel permission = CommandPermissionLevel::Any, CommandFlag flag1 = {(CommandFlagValue)0x80}, CommandFlag flag2 = {(CommandFlagValue)0}, HMODULE = GetCurrentModule());
};


class DynamicCommandInstance
{
public:
    struct ParameterIndex
    {
        std::vector<DynamicCommand::Parameter>* params;
        size_t index;
        inline DynamicCommand::Parameter* operator->()
        {
            return &params->at(index);
        }
    };

private:
    std::string name;
    std::unique_ptr<std::string> description;
    CommandPermissionLevel permission;
    CommandFlag flag;
    std::vector<DynamicCommand::Parameter> parameters;
    std::vector<std::vector<CommandParameterData>> overloads;
    // To keep enumName.c_str() immutable
    std::vector<std::unique_ptr<std::string>> enumNames;
    std::vector<std::string> enumValues;
    std::unordered_map<std::string_view, std::pair<size_t, size_t>> enumRanges;

    DynamicCommand::CallBackFn callback;
    HMODULE handler = nullptr;
    friend class DynamicCommand;

public:
    DynamicCommandInstance(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, std::vector<DynamicCommand::Parameter>&& parameters = {}, DynamicCommand::CallBackFn&& callback = nullptr, HMODULE handler = GetCurrentModule())
        : name(name)
        , description(std::make_unique<std::string>(description))
        , permission(permission)
        , flag(flag)
        , parameters(std::move(parameters))
        , callback(std::move(callback))
        , handler(handler)
    {
    }
    LIAPI bool addEnum(std::string const& description, std::unordered_map<std::string, unsigned long long> valuses);

public:
    inline std::string const& addEnum(std::string const& description, std::vector<std::string> const& values)
    {
        enumNames.push_back(std::make_unique<std::string>(description));
        std::string const& desc = **(enumNames.end() - 1);
        enumRanges.emplace(desc, std::pair{enumValues.size(), values.size()});
        enumValues.insert(enumValues.end(), values.begin(), values.end());
        return desc;
        ;
    }
    inline std::string const& getEnumValue(int index) const
    {
        return enumValues.at(index);
    }
    virtual ~DynamicCommandInstance(){};
    LIAPI void setCallback(DynamicCommand::CallBackFn&& callback);
    LIAPI ParameterIndex findFirstParameterByName(std::string const& name);
    LIAPI ParameterIndex addParameter(DynamicCommand::Parameter&& parameter);
    LIAPI ParameterIndex addParameter(DynamicCommand::ParameterType type, std::string const& name, bool optional = false, std::string const& description = "");
    LIAPI bool buildOverload(std::vector<std::tuple<ParameterIndex, bool, std::string const&>> params);
    LIAPI bool buildOverload(std::vector<std::tuple<ParameterIndex, bool>> params);
    LIAPI bool buildOverload(std::vector<std::tuple<ParameterIndex, std::string const&>> params);
    LIAPI bool buildOveload(std::vector<ParameterIndex> params);
    LIAPI bool buildSingleOverload();
};
