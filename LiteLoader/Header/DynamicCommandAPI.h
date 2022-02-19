#pragma once
#include "Global.h"
class Actor;
#include "MC/Command.hpp"
#include "MC/CommandSelector.hpp"
#include "MC/CommandPosition.hpp"
#include "MC/CommandParameterData.hpp"
#include "Utils/WinHelper.h"

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
//              // parameters(type, name, [optional], [enumOptions(also enumName)], [identifier])
//              // identifier: used to identify unique parameter data, if idnetifier is not set,
//              //   it is set to be the same as enumOptions or name (identifier = enumOptions.empty() ? name:enumOptions)
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

struct DCCallback;
struct DCArgs;
typedef union DCValue_ DCValue;
class DynamicCommandInstance;
class CommandMessage;
class CommandOutput;
class CommandRegistry;
class Player;


#define AllResultType bool const*, int const*, float const*, std::string const*, CommandSelector<Actor> const*, CommandSelector<Player> const*, CommandPosition const*, CommandPositionFloat const*, CommandMessage const*, CommandRawText const*, Json::Value const*, std::unique_ptr<Command> const*, CommandItem const*, Block const* const*, MobEffect const* const*

class DynamicCommand : public Command
{
    template <typename _Ty, class... _Types>
    static constexpr bool is_one_of_v = std::_Meta_find_unique_index<std::variant<_Types...>, std::add_pointer_t<std::add_const_t<_Ty>>>::value < sizeof...(_Types);
    template <typename _Ty>
    static constexpr bool is_supported_result_type_v = is_one_of_v<_Ty, AllResultType>;
    template <typename _Ty, typename Type>
    using enable_if_supported_t = std::enable_if_t<is_supported_result_type_v<_Ty>, Type>;

public:
    enum class ParameterType
    {
        Bool,      //bool
        Int,       //int
        Float,     //float
        String,    //std::string
        Actor,     //CommandSelector<Actor>
        Player,    //CommandSelector<Player>
        BlockPos,  //CommandPosition
        Vec3,      //CommandPositionFloat
        Message,   //CommandMessage
        RawText,   //CommandRawText
        JsonValue, //Json::Value
        Command,   //std::unique_ptr<Command>
        Item,      //CommandItem
        Block,     //Block const*
        Effect,    //MobEffect const*
        Enum,      //ENUM
        SoftEnum,  //SOFT_ENUM
    };
    struct ParameterPtr;

    struct Result
    {
        ParameterType const type;
        size_t const offset;
        bool const isSet;

        DynamicCommand const* command;
        DynamicCommandInstance const* instance;
        CommandOrigin const* origin;
        LIAPI Result(ParameterPtr const* ptr, DynamicCommand const* command, CommandOrigin const* origin, DynamicCommandInstance const* instance = nullptr);
        LIAPI Result();
        LIAPI std::string const& getEnumValue() const;
        LIAPI ParameterType getType() const;
        LIAPI std::string getName() const;
        LIAPI std::string toDebugString() const;
        LIAPI DynamicCommandInstance const* getInstance() const;

        template <typename T>
        inline enable_if_supported_t<T, T const&> getRaw() const
        {
            if (checkTempateType<T>(type))
                return dAccess<T>(command, offset);
            return T();
        }

        template <typename T>
        inline enable_if_supported_t<T, T const&> value_or(T const& defaultValue)
        {
            if (isSet)
                return getRaw<T>();
            return defaultValue;
        }

        template <typename T>
        inline std::conditional_t<std::is_lvalue_reference_v<T>, std::add_lvalue_reference_t<std::add_const_t<std::remove_reference_t<T>>>, T>
            get() const
        {
            static_assert(is_supported_result_type_v<T> || (std::is_lvalue_reference_v<T> && is_supported_result_type_v<std::remove_reference_t<T>>),
                          "Unsupported Result Type");
            if constexpr (std::is_lvalue_reference_v<T>)
                return getRaw<std::remove_reference_t<T>>();
            else
                return getRaw<T>();
        }

        template <>
        inline std::vector<Actor*> get<std::vector<Actor*>>() const
        {
            if (type == ParameterType::Player)
                return *(std::vector<Actor*>*)&get<std::vector<Player*>>();
            std::vector<Actor*> rtn;
            for (auto& result : getRaw<CommandSelector<Actor>>().results(*origin))
            {
                rtn.push_back(result);
            }
            return rtn;
        }
        template <>
        inline std::vector<Player*> get<std::vector<Player*>>() const
        {
            std::vector<Player*> rtn;
            for (auto& result : getRaw<CommandSelector<Player>>().results(*origin))
            {
                rtn.push_back(result);
            }
            return rtn;
        }
        template <>
        inline BlockPos get<BlockPos>() const
        {
            auto& pos = getRaw<CommandPosition>();
            return pos.getBlockPos(*origin, Vec3::ZERO);
        }
        template <>
        inline Vec3 get<Vec3>() const
        {
            auto& pos = getRaw<CommandPositionFloat>();
            return pos.getPosition(*origin, Vec3::ZERO);
        }
    };

    struct ParameterPtr
    {
        ParameterType type;

    private:
        size_t offset = -1;

        friend struct Result;

    public:
        LIAPI ParameterPtr(ParameterType type, size_t offset);
        LIAPI bool isValueSet(DynamicCommand const* command) const;
        LIAPI Result getResult(DynamicCommand const* command, CommandOrigin const* origin) const;

        template <typename T>
        inline T const& getValue(DynamicCommand const* command) const
        {
            checkTempateType<T>(type);
            return *(T*)getValuePrt(command);
        }
        inline size_t getOffset() const
        {
            return offset;
        }
    };

    struct ParameterData
    {
    protected:
        DynamicCommand::ParameterType type;
        size_t offset = -1;
        std::string name;
        std::string description;
        std::string identifier;
        bool optional = false;
        CommandParameterOption option;

    public:
        ParameterData() = delete;
        LIAPI ParameterData(DynamicCommand::ParameterType type, std::string const& name, bool optional = false, std::string const& enumOptions = "", std::string const& identifier = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
        LIAPI ParameterData(DynamicCommand::ParameterType type, std::string const& name, std::string const& enumOptions = "", std::string const& identifier = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
        LIAPI CommandParameterData makeParameterData() const;

        friend class DynamicCommandInstance;

        template <ParameterType type>
        inline static constexpr CommandParameterDataType getCommandParameterDataType()
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
            CommandParameterData param{
                type == ParameterType::Enum ? typeid_t<CommandRegistry>::count++ : type_id<CommandRegistry, T>(),
                type == ParameterType::Enum ? &CommandRegistry::fakeParse<T> : CommandRegistry::getParseFn<T>(),
                name,
                getCommandParameterDataType<type>(),
                description == "" ? nullptr : description.data(),
                (int)offset,
                optional,
                (int)offset + (int)ParameterSizeMap.at(type)};
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

        inline ParameterData(DynamicCommand::ParameterType type, std::string const& name, const char* enumOptions = "", std::string const& identifer = "", CommandParameterOption parameterOption = (CommandParameterOption)-1)
            : ParameterData(type, name, (std::string const&)enumOptions, identifer, parameterOption){};
    };

    using CallBackFn = std::function<void(CommandOrigin const& origin, CommandOutput& output, std::unordered_map<std::string, Result>& results)>;
    using BuilderFn = std::unique_ptr<Command> (*)();

private:
    template <typename _Ty>
    inline static enable_if_supported_t<_Ty, bool> checkTempateType(ParameterType type)
    {
        switch (type)
        {
            case ParameterType::Bool:
                return std::is_same_v<ParameterDataType::Bool, std::remove_cv_t<_Ty>>;
            case ParameterType::Int:
                return std::is_same_v<ParameterDataType::Int, std::remove_cv_t<_Ty>>;
            case ParameterType::Float:
                return std::is_same_v<ParameterDataType::Float, std::remove_cv_t<_Ty>>;
            case ParameterType::String:
                return std::is_same_v<ParameterDataType::String, std::remove_cv_t<_Ty>>;
            case ParameterType::Actor:
                return std::is_same_v<ParameterDataType::Actor, std::remove_cv_t<_Ty>>;
            case ParameterType::Player:
                return std::is_same_v<ParameterDataType::Player, std::remove_cv_t<_Ty>>;
            case ParameterType::BlockPos:
            case ParameterType::Vec3:
                return std::is_same_v<ParameterDataType::BlockPos, std::remove_cv_t<_Ty>> || std::is_same_v<ParameterDataType::Vec3, std::remove_cv_t<_Ty>>;
            case ParameterType::Message:
                return std::is_same_v<ParameterDataType::Message, std::remove_cv_t<_Ty>>;
            case ParameterType::RawText:
                return std::is_same_v<ParameterDataType::RawText, std::remove_cv_t<_Ty>> || std::is_same_v<std::string, std::remove_cv_t<_Ty>>;
            case ParameterType::JsonValue:
                return std::is_same_v<ParameterDataType::JsonValue, std::remove_cv_t<_Ty>>;
            case ParameterType::Command:
                return std::is_same_v<ParameterDataType::Command, std::remove_cv_t<_Ty>>;
            case ParameterType::Item:
                return std::is_same_v<ParameterDataType::Item, std::remove_cv_t<_Ty>>;
            case ParameterType::Block:
                return std::is_same_v<ParameterDataType::Block, std::remove_cv_t<_Ty>>;
            case ParameterType::Effect:
                return std::is_same_v<ParameterDataType::Effect, std::remove_cv_t<_Ty>>;
            //case ParameterType::Position:
            //    return std::is_same_v<ParameterDataType::Position, std::remove_cv_t<_Ty>> || std::is_same_v<BlockPos, std::remove_cv_t<_Ty>> || std::is_same_v<Vec3, std::remove_cv_t<_Ty>>;
            case ParameterType::Enum:
                return std::is_integral_v<_Ty> || std::is_same_v<std::string, std::remove_cv_t<_Ty>> || std::is_enum_v<_Ty>;
            case ParameterType::SoftEnum:
                return std::is_same_v<ParameterDataType::SoftEnum, std::remove_cv_t<_Ty>>;
            default:
                return false;
                break;
        }
        return false;
    }
    //LIAPI static std::unique_ptr<Command> commandBuilder();

    LIAPI static char builderCallbackHanler(DCCallback* cb, DCArgs* args, DCValue* result, void* userdata);
    LIAPI static std::unique_ptr<Command>* commandBuilder2(std::unique_ptr<Command>* rtn, std::string name);

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

    LIAPI static bool updateAvailableCommands();

    LIAPI DynamicCommandInstance const* getInstance() const;
};

class DynamicCommandInstance
{
public:
    struct ParameterIndex
    {
        DynamicCommandInstance* instance;
        size_t index;
        ParameterIndex(DynamicCommandInstance* instance, size_t index)
            : instance(instance)
            , index(index){};
        inline operator size_t() const
        {
            return index;
        }
        inline DynamicCommand::ParameterData& operator->()
        {
            return instance->parameterDatas.at(index);
        }
        inline bool isValid() const
        {
            size_t size = instance->parameterDatas.size();
            return index > 0 && index < size;
        }
    };

private:
    std::string name;
    std::string alias;
    std::unique_ptr<std::string> description;
    CommandPermissionLevel permission;
    CommandFlag flag;
    DynamicCommand::BuilderFn builder = nullptr;


    // Parameter Pointers to DynamicCommand Extra Part
    std::unordered_map<std::string, DynamicCommand::ParameterPtr> parameterPtrs = {};
    size_t commandSize = sizeof(DynamicCommand);

    // Use unique_ptr to keep the address of enumName.c_str() immutable
    std::vector<std::unique_ptr<std::string>> enumNames = {};
    std::vector<std::string> enumValues = {};
    // unordered_map{ enumName, pair{ enumIndex, enumSize } }
    std::unordered_map<std::string_view, std::pair<size_t, size_t>> enumRanges = {};

    std::vector<DynamicCommand::ParameterData> parameterDatas = {};
    std::vector<std::vector<ParameterIndex>> overloads = {}; // indices of parameter instance

    DynamicCommand::CallBackFn callback = nullptr;
    HMODULE handler = nullptr;

    friend class DynamicCommand;

    LIAPI DynamicCommandInstance(std::string const& name, std::string const& description, CommandPermissionLevel permission = CommandPermissionLevel::GameMasters, CommandFlag flag = {(CommandFlagValue)0x80}, HMODULE handler = GetCurrentModule());

    LIAPI bool setBuilder(DynamicCommand::BuilderFn builder);
    LIAPI DynamicCommand::BuilderFn initCommandBuilder();

public:
    virtual ~DynamicCommandInstance();

    LIAPI static std::unique_ptr<DynamicCommandInstance> create(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, HMODULE handler = GetCurrentModule());
    LIAPI std::string const& addEnum(std::string const& description, std::vector<std::string> const& values);
    LIAPI std::string const& getEnumValue(int index) const;
    LIAPI ParameterIndex newParameter(DynamicCommand::ParameterData&& data);
    LIAPI ParameterIndex newParameter(DynamicCommand::ParameterType type, std::string const& name, std::string const& description, std::string const& identifier = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
    LIAPI ParameterIndex newParameter(DynamicCommand::ParameterType type, std::string const& name, bool optional = false, std::string const& description = "", std::string const& identifier = "", CommandParameterOption parameterOption = (CommandParameterOption)-1);
    LIAPI ParameterIndex findParameterIndex(std::string const& param);
    LIAPI bool addOverload(std::vector<ParameterIndex>&& params);
    LIAPI bool addOverload(std::vector<std::string>&& params);
    LIAPI bool addOverload(std::vector<char const*>&& params);
    LIAPI bool addOverload(std::vector<DynamicCommand::ParameterData>&& params);
    LIAPI bool setAlias(std::string const& alias);
    LIAPI std::vector<CommandParameterData> buildOverload(std::vector<ParameterIndex> const& overload);
    LIAPI void setCallback(DynamicCommand::CallBackFn&& callback);

    template <typename T>
    inline bool addOverload(std::initializer_list<T>&& params)
    {
        return addOverload((std::vector<T>)params);
    }
    inline std::string const& getCommandName()
    {
        return name;
    }
    inline ParameterIndex newParameter(DynamicCommand::ParameterType type, std::string const& name, const char* description, std::string const& identifier, CommandParameterOption parameterOption = (CommandParameterOption)-1)
    {
        return newParameter(type, name, (std::string const&)description, identifier, parameterOption);
    };
};
