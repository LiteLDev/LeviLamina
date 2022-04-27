#include "../../Header/Command/CommandOutputParameter.hpp"
#include "../../Header/MC/Player.hpp"
#include "../../Header/MC/BlockPos.hpp"
namespace MC
{
inline CommandOutputParameter ^ CommandOutputParameter::Create(CommandSelectorResults<::Actor> ^ cr)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(cr));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(CommandSelectorResults<::Player> ^ cr)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(cr));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(System::String ^ str)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(marshalString<Encoding::E_UTF8>(str)));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(List<Actor ^> ^ pllist)
{
    auto len = pllist->Count;
    std::vector<::Actor const*> stdvector((size_t)len);
    for (int i = 0; i < len; i++)
        stdvector[i] = pllist[i];
    return gcnew CommandOutputParameter(::CommandOutputParameter(stdvector));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(List<Player ^> ^ pllist)
{
    auto len = pllist->Count;
    std::vector<::Player const*> stdvector((size_t)len);
    for (int i = 0; i < len; i++)
        stdvector[i] = pllist[i]->NativePtr;
    return gcnew CommandOutputParameter(::CommandOutputParameter(stdvector));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(List<String ^> ^ pllist)
{
    auto len = pllist->Count;
    std::vector<std::string> stdvector((size_t)len);
    for (int i = 0; i < len; i++)
        stdvector[i] = marshalString<Encoding::E_UTF8>(pllist[i]);
    return gcnew CommandOutputParameter(::CommandOutputParameter(stdvector));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(Actor ^ ac)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(ac->NativePtr));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(int i)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(i));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(float f)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(f));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(char const* p)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(p));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(BlockPos ^ bp)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(bp));
}

inline CommandOutputParameter ^ CommandOutputParameter::Create(bool b)
{
    return gcnew CommandOutputParameter(::CommandOutputParameter(b));
}

} // namespace MC