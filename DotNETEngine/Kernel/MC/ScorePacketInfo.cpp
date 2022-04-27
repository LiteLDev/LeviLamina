#include "../../Header/MC/ScorePacketInfo.hpp"

#ifdef INCLUDE_MCAPI

#include "../../Header/MC/ScoreboardId.hpp"

MC::ScorePacketInfo::ScorePacketInfo(MC::ScoreboardId ^ s, ::System::String ^ obj_name, MC::IdentityDefinition::Type type, unsigned int num, ::System::String ^ fake)
{
    OwnsNativeInstance = true;
    auto __arg0 = (struct ::ScoreboardId*)s->NativePtr;
    auto __arg1 = clix::marshalString<clix::E_UTF8>(obj_name);
    auto __arg2 = (::IdentityDefinition::Type)type;
    auto __arg4 = clix::marshalString<clix::E_UTF8>(fake);
    NativePtr = new struct ::ScorePacketInfo(__arg0, __arg1, __arg2, num, __arg4);
}

MC::ScorePacketInfo::ScorePacketInfo(MC::ScorePacketInfo ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(struct ::ScorePacketInfo*)_0->NativePtr;
    NativePtr = new struct ::ScorePacketInfo(__arg0);
}

MC::ScoreboardId ^ MC::ScorePacketInfo::Sid::get()
{
    return (&NativePtr->sid == nullptr) ? nullptr : gcnew ::MC::ScoreboardId((struct ::ScoreboardId*)&NativePtr->sid);
}

void MC::ScorePacketInfo::Sid::set(MC::ScoreboardId ^ value)
{
    if (ReferenceEquals(value, nullptr))
        throw gcnew ::System::ArgumentNullException("value", "Cannot be null because it is passed by value.");
    ((struct ::ScorePacketInfo*)NativePtr)->sid = *(struct ::ScoreboardId*)value->NativePtr;
}

::System::String ^ MC::ScorePacketInfo::ObjName::get()
{
    return clix::marshalString<clix::E_UTF8>(NativePtr->obj_name);
}

void MC::ScorePacketInfo::ObjName::set(::System::String ^ value)
{
    ((struct ::ScorePacketInfo*)NativePtr)->obj_name = clix::marshalString<clix::E_UTF8>(value);
}

unsigned int MC::ScorePacketInfo::Score::get()
{
    return NativePtr->score;
}

void MC::ScorePacketInfo::Score::set(unsigned int value)
{
    ((struct ::ScorePacketInfo*)NativePtr)->score = (::uint32_t)value;
}

MC::IdentityDefinition::Type MC::ScorePacketInfo::Type::get()
{
    return (MC::IdentityDefinition::Type)NativePtr->type;
}

void MC::ScorePacketInfo::Type::set(MC::IdentityDefinition::Type value)
{
    ((struct ::ScorePacketInfo*)NativePtr)->type = (::IdentityDefinition::Type)value;
}

unsigned long long MC::ScorePacketInfo::Pid::get()
{
    return NativePtr->pid;
}

void MC::ScorePacketInfo::Pid::set(unsigned long long value)
{
    ((struct ::ScorePacketInfo*)NativePtr)->pid = value;
}

MC::ActorUniqueID ^ MC::ScorePacketInfo::Aid::get()
{
    return (&NativePtr->aid == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)&NativePtr->aid);
}

void MC::ScorePacketInfo::Aid::set(MC::ActorUniqueID ^ value)
{
    if (ReferenceEquals(value, nullptr))
        throw gcnew ::System::ArgumentNullException("value", "Cannot be null because it is passed by value.");
    ((struct ::ScorePacketInfo*)NativePtr)->aid = *(struct ::ActorUniqueID*)value->NativePtr;
}

::System::String ^ MC::ScorePacketInfo::FakeName::get()
{
    return clix::marshalString<clix::E_UTF8>(NativePtr->fake_name);
}

void MC::ScorePacketInfo::FakeName::set(::System::String ^ value)
{
    ((struct ::ScorePacketInfo*)NativePtr)->fake_name = clix::marshalString<clix::E_UTF8>(value);
}

#endif // INCLUDE_MCAPI
