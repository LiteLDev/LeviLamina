#include "../../Header/MC/IdentityDefinition.hpp"
namespace MC
{
}


MC::ActorUniqueID ^ MC::IdentityDefinition::EntityId::get()
{
    auto& __ret = ((class ::IdentityDefinition*)NativePtr)->getEntityId();
    return (MC::ActorUniqueID ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::ActorUniqueID((struct ::ActorUniqueID*)&__ret));
}

::System::String ^ MC::IdentityDefinition::FakePlayerName::get()
{
    auto& __ret = ((class ::IdentityDefinition*)NativePtr)->getFakePlayerName();
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

MC::IdentityDefinition::Type MC::IdentityDefinition::IdentityType::get()
{
    auto __ret = ((class ::IdentityDefinition*)NativePtr)->getIdentityType();
    return (MC::IdentityDefinition::Type)__ret;
}

bool MC::IdentityDefinition::IsEntityType::get()
{
    auto __ret = ((class ::IdentityDefinition*)NativePtr)->isEntityType();
    return __ret;
}

bool MC::IdentityDefinition::IsPlayerType::get()
{
    auto __ret = ((class ::IdentityDefinition*)NativePtr)->isPlayerType();
    return __ret;
}

bool MC::IdentityDefinition::IsValid::get()
{
    auto __ret = ((class ::IdentityDefinition*)NativePtr)->isValid();
    return __ret;
}

MC::IdentityDefinition ^ MC::IdentityDefinition::Invalid::get()
{
    return (&::IdentityDefinition::Invalid == nullptr) ? nullptr : gcnew ::MC::IdentityDefinition((class ::IdentityDefinition*)&::IdentityDefinition::Invalid);
}


#ifdef INCLUDE_MCAPI


#endif // INCLUDE_MCAPI
