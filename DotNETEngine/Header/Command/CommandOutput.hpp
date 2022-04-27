#pragma once
#include <MC/CommandOutput.hpp>
#include "../../Header/MC/Types.hpp"

enum CommandOutputType;

namespace MC
{
ref class CommandOutputParameter;
ref class CommandPropertyBag;
ref class CommandOutputMessage;
ref class Actor;
}

namespace MC
{
public
ref class CommandOutput : ClassTemplate<CommandOutput, ::CommandOutput>
{
public:
    __ctor(CommandOutput, ::CommandOutput);
    __ctor_move(CommandOutput, ::CommandOutput);

    inline static CommandOutput ^ Create(CommandOutput ^ co);

    inline void AddMessage(System::String ^ str);
    inline void Success(System::String ^ str);
    inline void Error(System::String ^ str);
    inline void AddToResultList(System::String ^ str0, System::String ^ str1);
    inline void AddToResultList(System::String ^ str, Actor ^ ac);
    inline void Error(System::String ^ str, List<CommandOutputParameter ^> ^ coplist);
    inline void ForceOutput(System::String ^ str, List<CommandOutputParameter ^> ^ coplist);
    inline void Load(int _EnumCommandOutputType, int a0, List<CommandOutputMessage ^> ^ comlist, CommandPropertyBag ^ cpb);
    inline void SetHasPlayerText();
    inline void Success(System::String ^ str, List<CommandOutputParameter ^> ^ coplist);
    inline void Success();
    inline bool WantsData();

    property CommandPropertyBag ^ Data { CommandPropertyBag ^ get(); };
    property List<CommandOutputMessage ^> ^ Messages { List<CommandOutputMessage ^> ^ get(); };

    property int SuccessCount
    {
        int get();
    }
    property bool IsEmpty
    {
        bool get();
    }
    property int OutPutType
    {
        int get();
    }
};
} // namespace MC
