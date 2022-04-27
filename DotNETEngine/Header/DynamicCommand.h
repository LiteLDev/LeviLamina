#pragma once
#include <DynamicCommandAPI.h>
#include "../Main/.NETGlobal.hpp"
#include "../Tools/PropertryHelper.h"
#include "../Header/Command/Command.hpp"
#include "../Header/Command/CommandOrigin.hpp"
#include "../Header/Command/CommandParameterData.hpp"
#include "../Header/Command/CommandOutput.hpp"
#include "../Header/MC/Player.hpp"
#include "../Header/MC/BlockPos.hpp"
#include "../Header/MC/Vec3.hpp"
#include "../Header/MC/ItemStack.hpp"
#include "../Header/MC/Block.hpp"
#include "../Header/MC/Command.hpp"
#include "../Header/MC/ActorDefinitionIdentifier.hpp"
#include "Core/STLHelper/string.hpp"
#include <MC/JsonHelpers.hpp>

struct __ParameterData : public ::DynamicCommand::ParameterData
{
public:
    using Base = ParameterData;
    inline ::DynamicCommand::ParameterType GetType()
    {
        return type;
    }
    inline void SetType(::DynamicCommand::ParameterType t)
    {
        type = t;
    }
    inline size_t GetOffset()
    {
        return offset;
    }
    inline void SetOffest(size_t o)
    {
        offset = o;
    }
    inline std::string GetName()
    {
        return name;
    }
    inline void SetName(std::string& s)
    {
        name = s;
    }
    inline std::string GetDescription()
    {
        return description;
    }
    inline void SetDescription(std::string& s)
    {
        description = s;
    }
    inline std::string GetIdentifier()
    {
        return identifier;
    }
    inline void SetIdentifier(std::string& s)
    {
        identifier = s;
    }
    inline bool GetOptional()
    {
        return option;
    }
    inline void SetOptional(bool b)
    {
        optional = b;
    }
    inline CommandParameterOption GetOption()
    {
        return option;
    }
    inline void SetOption(CommandParameterOption o)
    {
        option = o;
    }
    __ParameterData() = delete;
    __ParameterData(__ParameterData const& p)
        : ParameterData(p)
    {
    }
    __ParameterData(std::string const& name, ::DynamicCommand::ParameterType type, bool optional = false, std::string const& enumOptions = "", std::string const& identifier = "", CommandParameterOption parameterOption = (CommandParameterOption)0)
        : Base(name, type, optional, enumOptions, identifier, parameterOption)
    {
    }
    __ParameterData(std::string const& name, ::DynamicCommand::ParameterType type, std::string const& enumOptions = "", std::string const& identifier = "", CommandParameterOption parameterOption = (CommandParameterOption)0)
        : Base(name, type, enumOptions, identifier, parameterOption)
    {
    }
};

namespace LLNET::DynamicCommand
{

ref class DynamicCommandInstance;
public
ref class DynamicCommand : public MC::Command
{
public:
    //__ctor_base(DynamicCommand, ::DynamicCommand, MC::Command);
    DynamicCommand(System::IntPtr p)
        : MC::Command(p)
    {
    }
    DynamicCommand(System::IntPtr p, bool ownsNativeInstance)
        : MC::Command(p, ownsNativeInstance)
    {
    }
    DynamicCommand(::DynamicCommand* p)
        : MC::Command((::__Command*)p)
    {
    }
    DynamicCommand(::DynamicCommand* p, bool ownsNativeInstance)
        : MC::Command((::__Command*)p, ownsNativeInstance)
    {
    }
    property ::DynamicCommand* NativePtr
    {
    public:
        ::DynamicCommand* get()
        {
            return (::DynamicCommand*)(MC::Command::NativePtr);
        }

    protected:
        void set(::DynamicCommand * value)
        {
            MC::Command::NativePtr = (__Command*)value;
        }
    }

public:
    ref struct ParameterPtr;
    enum class ParameterType
    {
        Bool,             /// bool
        Int,              /// int
        Float,            /// float
        String,           /// std::string
        Actor,            /// CommandSelector<Actor>
        Player,           /// CommandSelector<Player>
        BlockPos,         /// CommandPosition
        Vec3,             /// CommandPositionFloat
        RawText,          /// CommandRawText
        Message,          /// CommandMessage
        JsonValue,        /// Json::Value
        Item,             /// CommandItem
        Block,            /// Block const*
        Effect,           /// MobEffect const*
        Enum,             /// ENUM
        SoftEnum,         /// SOFT_ENUM
        ActorType,        /// ActorDefinitionIdentifier const*
        Command,          /// std::unique_ptr<Command>
        WildcardSelector, /// WildcardCommandSelector<Actor>
    };
    ref struct Result : ClassTemplate<Result, ::DynamicCommand::Result>
    {
    public:
        __ctor_all(Result, ::DynamicCommand::Result);

        property DynamicCommand ^ Command {
            DynamicCommand ^ get();
        };
        property DynamicCommandInstance ^ Instance {
            DynamicCommandInstance ^ get();
        };
        property MC::CommandOrigin ^ Origin {
            MC::CommandOrigin ^ get();
        };
        property ParameterType Type
        {
            ParameterType get()
            {
                return ParameterType(NativePtr->type);
            }
        }
        property size_t Offset
        {
            size_t get()
            {
                return NativePtr->offset;
            }
        }
        property bool IsSet
        {
            bool get()
            {
                return NativePtr->isSet;
            }
        }


        Object ^ Get() {
            if (!NativePtr->isSet)
                return nullptr; // null
            switch (NativePtr->type)
            {
                case ::DynamicCommand::ParameterType::Bool:
                    return NativePtr->getRaw<bool>();
                case ::DynamicCommand::ParameterType::Int:
                    return NativePtr->getRaw<int>();
                case ::DynamicCommand::ParameterType::Float:
                    return NativePtr->getRaw<float>();
                case ::DynamicCommand::ParameterType::String:
                    return marshalString<Encoding::E_UTF8>(NativePtr->getRaw<std::string>());
                case ::DynamicCommand::ParameterType::Actor:
                {
                    auto arr = gcnew List<MC::Actor ^>;
                    for (auto i : NativePtr->get<std::vector<Actor*>>())
                    {
                        arr->Add(gcnew MC::Actor(i));
                    }
                    return arr;
                }
                case ::DynamicCommand::ParameterType::Player:
                {
                    auto arr = gcnew List<MC::Player ^>;
                    for (auto i : NativePtr->get<std::vector<Player*>>())
                    {
                        arr->Add(gcnew MC::Player(i));
                    }
                    return arr;
                }
                case ::DynamicCommand::ParameterType::BlockPos:
                {
                    return gcnew MC::BlockPos(NativePtr->get<BlockPos>());
                }
                case ::DynamicCommand::ParameterType::Vec3:
                {
                    return gcnew MC::Vec3(NativePtr->get<Vec3>());
                }
                case ::DynamicCommand::ParameterType::Message:
                    return marshalString<Encoding::E_UTF8>(NativePtr->getRaw<CommandMessage>().getMessage(*NativePtr->origin));
                case ::DynamicCommand::ParameterType::RawText:
                    return marshalString<Encoding::E_UTF8>(NativePtr->getRaw<std::string>());
                case ::DynamicCommand::ParameterType::JsonValue:
                    return marshalString<Encoding::E_UTF8>(JsonHelpers::serialize(NativePtr->getRaw<Json::Value>()));
                case ::DynamicCommand::ParameterType::Item:
                    return gcnew MC::ItemInstance(NativePtr->getRaw<CommandItem>().createInstance(1, 1, nullptr, true).value_or(ItemInstance::EMPTY_ITEM));
                case ::DynamicCommand::ParameterType::Block:
                    return gcnew MC::Block(const_cast<Block*>(NativePtr->getRaw<Block const*>()));
                case ::DynamicCommand::ParameterType::Effect:
                    return gcnew MC::MobEffect((MobEffect*)NativePtr->getRaw<MobEffect const*>());
                case ::DynamicCommand::ParameterType::Enum:
                    return marshalString<Encoding::E_UTF8>(NativePtr->getRaw<std::string>());
                case ::DynamicCommand::ParameterType::SoftEnum:
                    return marshalString<Encoding::E_UTF8>(NativePtr->getRaw<std::string>());
                case ::DynamicCommand::ParameterType::Command:
                    return gcnew MC::Command((::__Command*)NativePtr->getRaw<std::unique_ptr<::Command>>().get());
                case ::DynamicCommand::ParameterType::ActorType:
                    return gcnew MC::ActorDefinitionIdentifier((ActorDefinitionIdentifier*)NativePtr->getRaw<ActorDefinitionIdentifier const*>());
                default:
                    return nullptr; // null
                    break;
            }
        };

        inline static Result ^ Create(ParameterPtr ^ NativePtr, DynamicCommand ^ command, MC::CommandOrigin ^ origin, DynamicCommandInstance ^ instance);
        inline static Result ^ Create(ParameterPtr ^ NativePtr, DynamicCommand ^ command, MC::CommandOrigin ^ origin);
        inline static Result ^ Create();
        property String ^ EnumValue { String ^ get(); };
        property String ^ Name { String ^ get(); };
        ParameterType GetParameterType();
        String ^ toDebugString();
        DynamicCommandInstance ^ GetInstance();
        String ^ ToString() override;
    };

public:
    ref struct ParameterPtr : ClassTemplate<ParameterPtr, ::DynamicCommand::ParameterPtr>
    {
    public:
        __ctor_all(ParameterPtr, ::DynamicCommand::ParameterPtr);

        inline static ParameterPtr ^ Create(ParameterType type, size_t offset);
        bool IsValueSet(DynamicCommand ^ command);
        Result ^ GetResult(DynamicCommand ^ command, MC::CommandOrigin ^ origin);
        inline size_t GetOffset();
    };

public:
    ref struct ParameterData : ClassTemplate<ParameterData, ::DynamicCommand::ParameterData>
    {
    public:
        __ctor_all(ParameterData, ::DynamicCommand::ParameterData);

        inline static ParameterData ^ Create(ParameterData ^ data);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, bool optional, System::String ^ enumOptions, System::String ^ identifier, MC::CommandParameterOption parameterOption);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, bool optional, System::String ^ enumOptions, System::String ^ identifier);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, bool optional, System::String ^ enumOptions);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, bool optional);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, System::String ^ enumOptions, System::String ^ identifier, MC::CommandParameterOption parameterOption);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, System::String ^ enumOptions, System::String ^ identifier);
        inline static ParameterData ^ Create(System::String ^ name, ParameterType type, System::String ^ enumOptions);
        MC::CommandParameterData ^ MakeParameterData();
        inline void SetOptional(bool optional);
        inline bool SetEnumOptions(System::String ^ enumOptions);
    };
    /*virtual void execute(class CommandOrigin const& origin, class CommandOutput& output);*/
    inline static DynamicCommandInstance ^ CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1, MC::CommandFlag ^ flag2, IntPtr handler);
    inline static DynamicCommandInstance ^ CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1, MC::CommandFlag ^ flag2);
    inline static DynamicCommandInstance ^ CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag1);
    inline static DynamicCommandInstance ^ CreateCommand(String ^ name, String ^ description, MC::CommandPermissionLevel permission);
    inline static DynamicCommandInstance ^ CreateCommand(String ^ name, String ^ description);

    delegate void CallBackFn(DynamicCommand ^ cmd, MC::CommandOrigin ^ origin, MC::CommandOutput ^ output, Dictionary<String ^, Result ^> ^ results);

public:
    ref class CallBackFnManager
    {
    private:
        delegate void NativeCallBackFn(
            ::DynamicCommand const&,
            ::CommandOrigin const&,
            ::CommandOutput&,
            std::unordered_map<std::string, ::DynamicCommand::Result>&);

        using pNativeCallBackFn = void (*)(
            ::DynamicCommand const&,
            CommandOrigin const&,
            CommandOutput&,
            std::unordered_map<std::string, ::DynamicCommand::Result>&);

        static List<GCHandle> ^ gchList = gcnew List<GCHandle>;

    private:
        CallBackFnManager(CallBackFn ^ _callback);

        void NATIVECALLBACK NativeCallbackFunc(::DynamicCommand const& cmd,
                                         ::CommandOrigin const& origin,
                                         ::CommandOutput& output,
                                         std::unordered_map<std::string, ::DynamicCommand::Result>& results);

        CallBackFn ^ callback = nullptr;

    public:
        static pNativeCallBackFn Create(CallBackFn ^ callback);
    };

public:
    inline static DynamicCommandInstance ^ CreateCommand(
                                               String ^ name,
                                               String ^ description,
                                               Dictionary<String ^, List<String ^> ^> ^ enums,
                                               List<ParameterData ^> ^ params,
                                               List<List<String ^> ^> ^ overloads,
                                               CallBackFn ^ callback,
                                               MC::CommandPermissionLevel permission,
                                               MC::CommandFlag ^ flag1,
                                               MC::CommandFlag ^ flag2,
                                               IntPtr handler);
    inline static DynamicCommandInstance ^ Setup(DynamicCommandInstance ^ commandInstance);
    inline static bool UnregisterCommand(String ^ name);
    inline static bool UpdateAvailableCommands();
    inline DynamicCommandInstance ^ GetInstance();
    inline static DynamicCommandInstance ^ GetInstance(String ^ commandName);
};
public
ref class DynamicCommandInstance : ClassTemplate<DynamicCommandInstance, ::DynamicCommandInstance>
{
public:
    __ctor(DynamicCommandInstance, ::DynamicCommandInstance);

public:
    ref struct ParameterIndex : ClassTemplate<ParameterIndex, ::DynamicCommandInstance::ParameterIndex>
    {
    public:
        __ctor_all(ParameterIndex, ::DynamicCommandInstance::ParameterIndex);

        property DynamicCommandInstance ^ Instance {
            DynamicCommandInstance ^ get() { return gcnew DynamicCommandInstance(NativePtr->instance); } void set(DynamicCommandInstance ^ val)
            {
                NativePtr->instance = val;
            }
        } property size_t index
        {
            size_t get()
            {
                return NativePtr->index;
            }
            void set(size_t val)
            {
                NativePtr->index = val;
            }
        }
        inline static ParameterIndex ^ Create(DynamicCommandInstance ^ instance, size_t index);
        inline operator size_t();
        inline DynamicCommand::ParameterData ^ GetParameterData();
        inline bool IsValid();
    };

public:
    property size_t SommandSize
    {
        inline size_t get()
        {
            return NativePtr->commandSize;
        }
        inline void set(size_t val)
        {
            NativePtr->commandSize = val;
        }
    }
    property Dictionary<String ^, DynamicCommand::ParameterPtr ^> ^ ParameterPtrs {
        Dictionary<String ^, DynamicCommand::ParameterPtr ^> ^ get();
        void set(Dictionary<String ^, DynamicCommand::ParameterPtr ^> ^ val);
    };
    //property List<Core::Std::string^> ^ EnumNames {
    //    List<Core::Std::string ^> ^ get();
    //    void set(List<Core::Std::string ^> ^ val);
    //};
    //property List<String ^> ^ EnumValues {
    //    List<String ^> ^ get();
    //    void set(List<String ^> ^ val);
    //};
    //property Dictionary<String ^, System::Tuple<size_t, size_t> ^> ^ EnumRanges {
    //    Dictionary<String ^, System::Tuple<size_t, size_t> ^> ^ get();
    //    void set(Dictionary<String ^, System::Tuple<size_t, size_t> ^> ^ val);
    //};
    //property List<DynamicCommand::ParameterData ^> ^ ParameterDatas {
    //    List<DynamicCommand::ParameterData ^> ^ get();
    //    void set(List<DynamicCommand::ParameterData ^> ^ val);
    //};

    inline static DynamicCommandInstance ^ Create(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag, IntPtr handler);
    inline static DynamicCommandInstance ^ Create(String ^ name, String ^ description, MC::CommandPermissionLevel permission, MC::CommandFlag ^ flag);
    inline String ^ SetEnum(String ^ description, List<String ^> ^ values);
    inline String ^ GetEnumValue(int index);
    inline ParameterIndex ^ NewParameter(DynamicCommand::ParameterData ^ data);
    inline ParameterIndex ^ NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional, String ^ description, String ^ identifier, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional, String ^ description, String ^ identifier);
    inline ParameterIndex ^ NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional, String ^ description);
    inline ParameterIndex ^ NewParameter(String ^ name, DynamicCommand::ParameterType type, bool optional);
    inline ParameterIndex ^ NewParameter(String ^ name, DynamicCommand::ParameterType type);
    inline ParameterIndex ^ FindParameterIndex(String ^ param);
    inline ParameterIndex ^ Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier);
    inline ParameterIndex ^ Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ Mandatory(String ^ name, DynamicCommand::ParameterType type, String ^ description);
    inline ParameterIndex ^ Mandatory(String ^ name, DynamicCommand::ParameterType type, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ Mandatory(String ^ name, DynamicCommand::ParameterType type);
    inline ParameterIndex ^ Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description, String ^ identifier);
    inline ParameterIndex ^ Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ Optional(String ^ name, DynamicCommand::ParameterType type, String ^ description);
    inline ParameterIndex ^ Optional(String ^ name, DynamicCommand::ParameterType type, MC::CommandParameterOption parameterOption);
    inline ParameterIndex ^ Optional(String ^ name, DynamicCommand::ParameterType type);

    inline bool AddOverload(List<ParameterIndex ^> ^ params);
    inline bool AddOverload(List<String ^> ^ params);
    inline bool AddOverload(List<DynamicCommand::ParameterData ^> ^ params);
    inline bool SetAlias(String ^ alias);
    // inline List<MC::CommandParameterData^>^ buildOverload(List<ParameterIndex^>^ overload);
    inline void SetCallback(DynamicCommand::CallBackFn ^ callback);
    inline void RemoveCallback();
    inline String ^ SetSoftEnum(String ^ name, List<String ^> ^ values);
    inline bool AddSoftEnumValues(String ^ name, List<String ^> ^ values);
    inline bool RemoveSoftEnumValues(String ^ name, List<String ^> ^ values);
    inline static List<String ^> ^ GetSoftEnumValues(String ^ name);
    inline static List<String ^> ^ GetSoftEnumNames();

    inline String ^ GetCommandName();
    inline bool HasRegistered();
};
} // namespace LLNET::DynamicCommand