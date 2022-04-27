#pragma once
#include <MC/CommandOutputParameter.hpp>
#include "../../Header/MC/Types.hpp"

class Actor;
class Player;

namespace MC
{
ref class Player;
ref class Actor;
}

namespace MC
{
public
ref class CommandOutputParameter : ClassTemplate<CommandOutputParameter, ::CommandOutputParameter>
{
public:
    __ctor_all(CommandOutputParameter, ::CommandOutputParameter);

    // enum class NoCountType {};

    inline static CommandOutputParameter ^ Create(CommandSelectorResults<::Actor> ^ cr);
    inline static CommandOutputParameter ^ Create(CommandSelectorResults<::Player> ^ cr);
    inline static CommandOutputParameter ^ Create(System::String ^ str);
    inline static CommandOutputParameter ^ Create(List<Player ^> ^ pllist);
    inline static CommandOutputParameter ^ Create(List<Actor ^> ^ aclist);
    inline static CommandOutputParameter ^ Create(List<String ^> ^ strlist);
    inline static CommandOutputParameter ^ Create(Actor ^ ac);
    inline static CommandOutputParameter ^ Create(int i);
    inline static CommandOutputParameter ^ Create(float f);
    inline static CommandOutputParameter ^ Create(char const* p);
    inline static CommandOutputParameter ^ Create(BlockPos ^ bp);
    // inline static CommandOutputParameter^ Create(NoCountType unknown);
    inline static CommandOutputParameter ^ Create(bool b);
};
} // namespace MC
