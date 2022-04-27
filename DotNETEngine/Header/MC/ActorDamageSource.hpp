#pragma once
#include <MC/ActorDamageSource.hpp>
#include "Types.hpp"

namespace MC
{
ref class Actor;
}

namespace MC
{
public
ref class ActorDamageSource : ClassTemplate<ActorDamageSource, ::ActorDamageSource>
{
public:
    __ctor(ActorDamageSource, ::ActorDamageSource);

    property Actor ^ Entity { Actor ^ get(); };

    property bool IsEntitySource
    {
        bool get();
    }

#ifdef INCLUDE_MCAPI

    property bool IsChildEntitySource
    {
        bool get();
    }

    property bool IsBlockSource
    {
        bool get();
    }

    property bool IsFire
    {
        bool get();
    }

    property bool IsCreative
    {
        bool get();
    }

    property bool IsWorldBuilder
    {
        bool get();
    }

    property bool DamagingEntityIsCreative
    {
        bool get();
    }

    property bool DamagingEntityIsWorldBuilder
    {
        bool get();
    }

    property MC::ActorUniqueID ^ DamagingEntityUniqueID {
        MC::ActorUniqueID ^ get();
    }

        property MC::ActorDamageCause Cause
    {
        MC::ActorDamageCause get();
        void set(MC::ActorDamageCause);
    }

    virtual void UnkVfn8();

    virtual void UnkVfn9();

    static MC::ActorDamageCause LookupCause(::System::String ^ _0);

    static ::System::String ^ LookupCauseName(MC::ActorDamageCause _0);

#endif // INCLUDE_MCAPI
};
} // namespace MC