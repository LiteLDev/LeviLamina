#pragma once
#include "../RegCommandAPI.h"
#include "../Utils/WinHelper.h"


///////////////////////////////////////////////////////
// Dynamic Command Registry
//
// [Example]
//   ## One Example:
//      // Direct setup of dynamic command with necessary information
//      DynamicCommand::setup(
//          "dynenum",         // command name
//          "dynamic command", // command description
//          {
//              // enums{enumName, {values...}}
//              {"TestEnum1", {"add", "remove"}},
//              {"TestEnum2", {"list"}},
//          },
//          {
//              // parameters(type, name, [optional], [enumOptions(also enumName)]
//              DynamicCommandInstance::ParameterData(DynamicCommand::ParameterType::Enum, "testEnum", "TestEnum1"),
//              DynamicCommandInstance::ParameterData(DynamicCommand::ParameterType::Enum, "testEnum", "TestEnum2"),
//              DynamicCommandInstance::ParameterData(DynamicCommand::ParameterType::Int, "testInt", true),
//          },
//          {
//              // overloads{ (type == Enum ? enumOptions : name) ...}
//              {"TestEnum1", "testInt"},
//              {"TestEnum2"},
//          },
//          // dynamic command callback
//          [](CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, DynamicCommand::Result>& results) {
//              auto& action = results["testEnum"].get<std::string>();
//              switch (do_hash(action.c_str()))
//              {
//                  case do_hash("list"):
//                      output.success(fmt::format("testEnum: {}", action));
//                  case do_hash("add"):
//                  case do_hash("remove"):
//                      if (results["testInt"].isSet)
//                          output.success(fmt::format("testInt is {}", results["testInt"].get<int>()));
//                      else
//                          output.success("testInt is not set");
//                      break;
//                  default:
//                      break;
//              }
//          },
//          CommandPermissionLevel::Any);
//
//   ## Another Example
//      using ParamType = DynamicCommand::ParameterType;
//      using Result = DynamicCommand::Result;
//      using ParameterIndex = DynamicCommandInstance::ParameterIndex;
//      // create a dynamic command
//      auto command = DynamicCommand::createCommand("dyncmd", "dynamic command", CommandPermissionLevel::GameMasters);
//
//      auto& optionsAdd = command->addEnum("TestOperation1", {"add", "remove"});
//      auto& optionsList = command->addEnum("TestOperation2", {"list"});
//
//      ParameterIndex actionAdd = command->newParameter(ParamType::Enum, "testEnum", optionsAdd, (CommandParameterOption)1);
//      ParameterIndex actionList = command->newParameter(ParamType::Enum, "testEnum", optionsList, (CommandParameterOption)1);
//      ParameterIndex stringParam = command->newParameter(ParamType::String, "testString");
//
//      command->addOverload({actionAdd, stringParam}); // dyncmd <add|remove> <testString:string>
//      command->addOverload({"TestOperation2"});       // dyncmd <list>
//
//      command->setCallback([](CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results) {
//          switch (do_hash(results["testEnum"].get<std::string>().c_str()))
//          {
//              case do_hash("add"):
//                  output.success(fmt::format("Add - {}", results["testString"].get<std::string>()));
//                  break;
//              case do_hash("remove"):
//                  output.success(fmt::format("Remove - {}", results["testString"].get<std::string>()));
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


#define AllResultType bool const*, int const*, float const*, std::string const*, CommandSelector<Actor> const*, CommandSelector<Player> const*, CommandPosition const* /*std::vector<Actor*>, std::vector<Player*>, Vec3, EnumResult, SoftEnumResult*/
class DynamicCommandInstance;
class DynamicCommand : public Command
{
public:
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
    struct ParameterPtr;
    struct Result
    {
        ParameterPtr const* parameterPtr;
        DynamicCommandInstance const* command;
        std::variant<AllResultType> const value;
        bool isSet;

        LIAPI std::string const& getEnumValue() const;
        LIAPI ParameterType getType() const;
        LIAPI std::string getName() const;

        template <typename T>
        inline T const& get() const
        {
            if (parameterPtr->type == ParameterType::Enum)
            {
                if constexpr (std::is_enum_v<T>)
                    return *(T const*)std::get<int const*>(value);
                else if constexpr (std::is_same_v<T, std::string>)
                    return getEnumValue();
                else if constexpr (std::is_integral_v<T>)
                    return *(T const*)std::get<int const*>(value);
            }
            checkTempateType<T>(parameterPtr->type);
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
        template <>
        inline std::vector<Actor*> get<std::vector<Actor*>>(CommandOrigin const& origin) const
        {
            checkTempateType<CommandSelector<Actor>>(getType());
            std::vector<Actor*> rtn;
            for (auto& result : get<CommandSelector<Actor>>().results(origin))
            {
                rtn.push_back(result);
            }
            return rtn;
        }
        template <>
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
    };

    struct ParameterPtr
    {
        ParameterType type;

    private:
        size_t offset = -1;

        friend class DynamicCommand;
        friend class DynamicCommandInstance;

    public:
        LIAPI ParameterPtr(ParameterType type, size_t offset);
        LIAPI bool isValueSet(DynamicCommand const* command) const;
        LIAPI Result getResult(DynamicCommand const* command) const;

        template <typename T>
        inline T const& getValue(DynamicCommand const* command) const
        {
            checkTempateType<T>(type);
            return dAccess<T>(command, offset);
        }
    };

    struct ParameterData
    {
    protected:
        DynamicCommand::ParameterType type;
        size_t offset = -1;
        std::string name;
        std::string description;
        bool optional = false;
        CommandParameterOption option;

    public:
        ParameterData() = delete;
        LIAPI ParameterData(DynamicCommand::ParameterType type, std::string const& name, bool optional = false, std::string const& enumOptions = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
        LIAPI ParameterData(DynamicCommand::ParameterType type, std::string const& name, std::string const& enumOptions = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
        LIAPI CommandParameterData makeParameterData() const;

        friend class DynamicCommandInstance;

        template <ParameterType type>
        static constexpr CommandParameterDataType getCommandParameterDataType()
        {
            if constexpr (type == ParameterType::Enum)
                return CommandParameterDataType::ENUM;
            else if constexpr (type == ParameterType::SoftEnum)
                return CommandParameterDataType::SOFT_ENUM;
            else
                return CommandParameterDataType::NORMAL;
        }
        template <ParameterType type, typename T>
        CommandParameterData makeParameterData() const
        {
            static const typeid_t<CommandRegistry> boolTypeid = SymCall("??$type_id@VCommandRegistry@@_N@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ", typeid_t<CommandRegistry>)();
            CommandParameterData param{
                std::is_same_v<T, bool> ? boolTypeid : CommandRegistry::getNextTypeId(),
                type == ParameterType::Enum ? &CommandRegistry::fakeParse<T> : CommandRegistry::getParseFn<T>(),
                name,
                getCommandParameterDataType<type>(),
                description == "" ? nullptr : description.data(),
                (int)offset,
                optional,
                (int)offset + (int)ParameterSize.at(type)};
            if ((int)option != -1)
                param.addOptions(option);
            return std::move(param);
        }

        inline void setOptional(bool optional)
        {
            this->optional = optional;
        }
        inline bool setEnumOptions(std::string const& enumOptions)
        {
            if (type != DynamicCommand::ParameterType::Enum && type != DynamicCommand::ParameterType::SoftEnum)
                return false;
            this->description = enumOptions;
            return true;
        }
        inline bool setParameterOption(CommandParameterOption parameterOption)
        {
            this->option = parameterOption;
        }
    };
    using CallBackFn = std::function<void(CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results)>;

private:
    // map<offset, data>
    std::string commandName;

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
                return std::is_same_v<ParameterDataType::Actor, T> || std::is_same_v<std::vector<Actor*>, T>;
                break;
            case ParameterType::Player:
                return std::is_same_v<ParameterDataType::Player, T> || std::is_same_v<std::vector<Player*>, T>;
                break;
            case ParameterType::Position:
                return std::is_same_v<ParameterDataType::Position, T> || std::is_same_v<BlockPos, T> || std::is_same_v<Vec3, T>;
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
        return false;
    }
    LIAPI static std::unique_ptr<Command> commandBuilder();

    friend class DynamicCommandInstance;

public:
    /*0*/ virtual ~DynamicCommand();
    /*1*/ virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    LIAPI static struct std::unique_ptr<class DynamicCommandInstance> createCommand(std::string const& name, std::string const& description, CommandPermissionLevel permission = CommandPermissionLevel::Any, CommandFlag flag1 = {(CommandFlagValue)0x80}, CommandFlag flag2 = {(CommandFlagValue)0}, HMODULE handler = GetCurrentModule());
    LIAPI static bool setup(std::unique_ptr<class DynamicCommandInstance> commandInstance);
    LIAPI static bool setup(
        std::string const& name,
        std::string const& description,
        std::unordered_map<std::string, std::vector<std::string>>&& enums,
        std::vector<ParameterData>&& params,
        std::vector<std::vector<std::string>>&& overloads,
        CallBackFn callback,
        CommandPermissionLevel permission = CommandPermissionLevel::Any,
        CommandFlag flag1 = {(CommandFlagValue)0x80},
        CommandFlag flag2 = {(CommandFlagValue)0},
        HMODULE handler = GetCurrentModule());

    //template <typename T>
    //inline static T const& getResultByName(std::unordered_map<std::string, Result>& results, std::string const& name)
    //{
    //    auto iter = results.find(name);
    //    return iter == results.end() ? T() : iter->second.get<T>();
    //}
};
class DynamicCommandInstance
{
public:
    using ParameterData = DynamicCommand::ParameterData;
    struct ParameterIndex
    {
        size_t index;
        ParameterIndex(size_t index)
            : index(index){};
        inline operator size_t() const
        {
            return index;
        }
    };

private:
    std::string name;
    std::string alias;
    std::unique_ptr<std::string> description;
    CommandPermissionLevel permission;
    CommandFlag flag;

    // DynamicCommand Extend Part
    std::unordered_map<std::string, DynamicCommand::ParameterPtr> parameterPtrs = {};
    size_t commandSize = sizeof(DynamicCommand);

    // Use unique_ptr to keep the address of enumName.c_str() immutable
    std::vector<std::unique_ptr<std::string>> enumNames = {};
    std::vector<std::string> enumValues = {};
    // unordered_map{ enumName, pair{ enumIndex, enumSize } }
    std::unordered_map<std::string_view, std::pair<size_t, size_t>> enumRanges = {};

    std::vector<ParameterData> parameterDatas = {};
    std::vector<std::vector<ParameterIndex>> overloads = {}; // indices of parmeter instance

    DynamicCommand::CallBackFn callback = nullptr;
    HMODULE handler = nullptr;

    friend class DynamicCommand;

    LIAPI DynamicCommandInstance(std::string const& name, std::string const& description, CommandPermissionLevel permission = CommandPermissionLevel::GameMasters, CommandFlag flag = {(CommandFlagValue)0x80}, HMODULE handler = GetCurrentModule());

public:
    virtual ~DynamicCommandInstance();

    LIAPI static std::unique_ptr<DynamicCommandInstance> create(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, HMODULE handler = GetCurrentModule());
    LIAPI std::string const& addEnum(std::string const& description, std::vector<std::string> const& values);
    LIAPI std::string const& getEnumValue(int index) const;
    LIAPI ParameterIndex newParameter(ParameterData&& data);
    LIAPI ParameterIndex newParameter(DynamicCommand::ParameterType type, std::string const& name, bool optional = false, std::string const& description = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
    LIAPI ParameterIndex newParameter(DynamicCommand::ParameterType type, std::string const& name, std::string const& description, CommandParameterOption parameterOption = (CommandParameterOption)-1);
    LIAPI ParameterIndex findParameterIndex(std::string const& param);
    LIAPI bool addOverload(std::vector<ParameterIndex>&& params);
    LIAPI bool addOverload(std::vector<std::string>&& params);
    LIAPI bool addOverload(std::vector<char const*>&& params);
    LIAPI bool addOverload(std::vector<ParameterData>&& params);
    LIAPI bool setAlias(std::string const& alias);
    LIAPI std::vector<CommandParameterData> buildOverload(std::vector<ParameterIndex> const& overload);
    LIAPI void setCallback(DynamicCommand::CallBackFn&& callback);
    template <typename T>
    inline bool addOverload(std::initializer_list<T>&& params)
    {
        return addOverload((std::vector<T>)params);
    }
};
