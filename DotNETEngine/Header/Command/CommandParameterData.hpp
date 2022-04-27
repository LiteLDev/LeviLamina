#pragma once
#include <MC/CommandParameterData.hpp>
#include "../../Header/MC/Types.hpp"

namespace MC
{

public
enum class CommandParameterDataType
{
    NORMAL,
    ENUM,
    SOFT_ENUM,
    POSIFIX,
};
public
enum class SemanticConstraint : unsigned char
{
    NoneConstraint = 0,
    RequiresCheatsEnabled = 1,
    RequiresElevatedPermissions = 2,
    RequiresHostPermissions = 4,
    VALUE_MASK = 8,
};
public
enum class CommandParameterOption : unsigned char
{
    None = 0,
    EnumAutocompleteExpansion = 1,
    HasSemanticConstraint = 2, // be used in block or item name enum
    EnumAsChainedCommand = 4,  // be used in NewExecuteCommand
};

public
ref class CommandParameterData : ClassTemplate<CommandParameterData, ::CommandParameterData>
{
public:
    __ctor_all(CommandParameterData, ::CommandParameterData);

    value struct ParseFn
    {
        using _ParseFn = bool (::CommandRegistry::*)(
            void*, ::CommandRegistry::ParseToken const&, ::CommandOrigin const&, int, std::string&,
            std::vector<std::string>&) const;
        _ParseFn* p;
    };

    property typeid_t<CommandParameterData ^> ^ Tid {
        typeid_t<CommandParameterData ^> ^ get() {
            return gcnew typeid_t<CommandParameterData ^>(NativePtr->tid.value);
        };
        void set(typeid_t<CommandParameterData ^> ^ arg)
        {
            NativePtr->tid.value = arg->value;
        }
    };
    property ParseFn Parser
    {
        ParseFn get()
        {
            return ParseFn{&NativePtr->parser};
        }
        void set(ParseFn fn)
        {
            NativePtr->parser = *fn.p;
        }
    }
    property String ^ Name {
        String ^ get() { return marshalString<Encoding::E_UTF8>(NativePtr->name); } void set(String ^ val)
        {
            NativePtr->name = marshalString<Encoding::E_UTF8>(val);
        }
    };
    property System::IntPtr Desc
    {
        System::IntPtr get()
        {
            return System::IntPtr((void*)NativePtr->desc);
        }
        void set(System::IntPtr p)
        {
            NativePtr->desc = (char const*)(void*)p;
        }
    }
    property int Unk56
    {
        int get()
        {
            return NativePtr->unk56;
        }
        void set(int val)
        {
            NativePtr->unk56 = val;
        }
    }
    property CommandParameterDataType Type
    {
        CommandParameterDataType get()
        {
            return CommandParameterDataType(NativePtr->type);
        }
        void set(CommandParameterDataType t)
        {
            NativePtr->type = ::CommandParameterDataType(t);
        }
    }
    property int Offset
    {
        int get()
        {
            return NativePtr->offset;
        }
        void set(int val)
        {
            NativePtr->offset = val;
        }
    }
    property int Flag_offset
    {
        int get()
        {
            return NativePtr->flag_offset;
        }
        void set(int val)
        {
            NativePtr->flag_offset = val;
        }
    }
    property bool Mand
    {
        bool get()
        {
            return NativePtr->mand;
        }
        void set(bool val)
        {
            NativePtr->mand = val;
        }
    }
    property unsigned char Options
    {
        unsigned char get()
        {
            return NativePtr->options;
        }
        void set(unsigned char val)
        {
            NativePtr->options = val;
        }
    }
    inline static CommandParameterData ^ Create() {
        return gcnew CommandParameterData(::CommandParameterData());
    } inline static CommandParameterData
        ^ Create(typeid_t<CommandRegistry ^> tid, ParseFn parser, System::String ^ describe, CommandParameterDataType type, System::String ^ enumName, int offset, bool optional, int flag_offset) {
              return gcnew CommandParameterData(::CommandParameterData(
                  ::typeid_t<::CommandRegistry>(tid.value),
                  *parser.p,
                  marshalString<Encoding::E_UTF8>(describe),
                  ::CommandParameterDataType(type),
                  marshalString<Encoding::E_UTF8>(enumName).c_str(),
                  offset,
                  optional,
                  flag_offset));
          }
};
} // namespace MC