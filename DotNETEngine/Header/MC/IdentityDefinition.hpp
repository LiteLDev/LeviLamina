#pragma once
#include <MC/IdentityDefinition.hpp>
#include "Types.hpp"

namespace MC
{
public
ref class IdentityDefinition : ClassTemplate<IdentityDefinition, ::IdentityDefinition>
{
public:
    __ctor(IdentityDefinition, ::IdentityDefinition);
    enum class Type : char
    {
        Invalid = 0,
        Player = 1,
        Actor = 2,
        Fake = 3
    };


    property MC::ActorUniqueID ^ EntityId {
        MC::ActorUniqueID ^ get();
    }

        property ::System::String ^
        FakePlayerName {
            ::System::String ^ get();
        }

        property MC::IdentityDefinition::Type IdentityType
    {
        MC::IdentityDefinition::Type get();
    }

    property bool IsEntityType
    {
        bool get();
    }

    property bool IsPlayerType
    {
        bool get();
    }

    property bool IsValid
    {
        bool get();
    }

    static property MC::IdentityDefinition ^ Invalid {
        MC::IdentityDefinition ^ get();
    }

#ifdef INCLUDE_MCAPI


#endif // INCLUDE_MCAPI
};
} // namespace MC