#pragma once
#include "../RegCommandAPI.h"
#include "../Utils/WinHelper.h"


///////////////////////////////////////////////////////
// Dynamic Command Registry
//
// [Example]
//
//   Schedule::nextTick([](){
//      Logger::Error("hello");
//   }, 20);                        // Delay this callback to next game tick (20 ticks = 1 second)
//
//   Schedule::delay([](){
//      Logger::Error("hello");
//   }, 20);                        // Delay this callback for 20 ticks (20 ticks = 1 second)
//
//   Schedule::repeat([](){
//      Logger::Error("hello");
//   }, 40);                        // Schedule this callback once per 40 ticks (20 ticks = 1 second)
//
//   auto sche = Schedule::delayRepeat([](){
//      Logger::Error("hello");
//   }, 20, 60);                    // Delay first call to callback for 20 ticks
//                                  // then schedule this callback once per 60 ticks (20 ticks = 1 second)
//
//   //......
//   sche.cancel();                 // Cancel the schedule
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

// unordered_map<commandName, commandParameters> callback
class DynamicCommand : public Command
{
public:
    struct Parameter;
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
        std::variant<AllResultType> const value;
        bool isSet;
        template <typename T>
        inline T const& get() const
        {
            checkTempateType<T>(parameter->type);
            return *std::get<T const*>(value);
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

        LIAPI std::string getEnumFirstString() const;

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
        std::string description = "";
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
        LIAPI Parameter(ParameterType type, std::string name, bool optional = false, std::string description = "");
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

    public:
        LIAPI Result getResult(DynamicCommand const* command) const;
        LIAPI CommandParameterData makeParameterData() const;
        LIAPI void setOption(CommandParameterOption option)
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
                return std::is_same_v<ParameterDataType::Int, T>;
                break;
            case ParameterType::Float:
                return std::is_same_v<ParameterDataType::Float, T>;
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
                return std::is_same_v<ParameterDataType::Enum, T> || std::is_enum_v<T>;
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

    LIAPI static bool setup(std::string const& name, std::string const& description, std::vector<Parameter>&& params, CallBackFn&& callback, CommandPermissionLevel permission = CommandPermissionLevel::Any, CommandFlag flag1 = {(CommandFlagValue)0x80}, CommandFlag flag2 = {(CommandFlagValue)0}, HMODULE = GetCurrentModule());
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
    std::string name;
    std::string description;
    CommandPermissionLevel permission;
    CommandFlag flag;
    std::vector<DynamicCommand::Parameter> parameters;
    std::vector<std::vector<CommandParameterData>> overloads;
    DynamicCommand::CallBackFn callback;
    HMODULE handler = nullptr;
    friend class DynamicCommand;

public:
    DynamicCommandInstance(std::string const& name, std::string const& description, CommandPermissionLevel permission, CommandFlag flag, std::vector<DynamicCommand::Parameter>&& parameters = {}, DynamicCommand::CallBackFn&& callback = nullptr, HMODULE handler = GetCurrentModule())
        : name(name)
        , description(description)
        , permission(permission)
        , flag(flag)
        , parameters(std::move(parameters))
        , callback(std::move(callback))
        , handler(handler)
    {
    }

public:
    virtual ~DynamicCommandInstance(){};
    LIAPI void setCallback(DynamicCommand::CallBackFn&& callback);
    LIAPI DynamicCommand::Parameter* findFirstParameterByName(std::string const& name);
    LIAPI DynamicCommand::Parameter* addParameter(DynamicCommand::Parameter&& parameter);
    LIAPI DynamicCommand::Parameter* addParameter(DynamicCommand::ParameterType type, std::string const& name, bool optional = false, std::string const& description = "");
    LIAPI bool buildOverload(std::vector<std::tuple<DynamicCommand::Parameter*, bool, std::string>> params);
    LIAPI bool buildOverload(std::vector<std::tuple<DynamicCommand::Parameter*, bool>> params);
    LIAPI bool buildOverload(std::vector<std::tuple<DynamicCommand::Parameter*, std::string>> params);
    LIAPI bool buildOveload(std::vector<DynamicCommand::Parameter*> params);
    LIAPI bool buildSingleOverload();
};
