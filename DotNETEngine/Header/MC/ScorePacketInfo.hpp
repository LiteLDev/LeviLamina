#pragma once
#include <MC/ScorePacketInfo.hpp>
#include "Types.hpp"
#include "IdentityDefinition.hpp"

namespace MC
{
ref class ScoreboardId;
}

namespace MC
{
public
ref struct ScorePacketInfo : ClassTemplate<ScorePacketInfo, ::ScorePacketInfo>
{
public:
    __ctor_all(ScorePacketInfo, ::ScorePacketInfo);

#ifdef INCLUDE_MCAPI

    ScorePacketInfo(MC::ScoreboardId ^ s, ::System::String ^ obj_name, MC::IdentityDefinition::Type type, unsigned int num, ::System::String ^ fake);

    ScorePacketInfo(MC::ScorePacketInfo ^ _0);

    property MC::ScoreboardId ^ Sid {
        MC::ScoreboardId ^ get();
        void set(MC::ScoreboardId ^);
    };

    property ::System::String ^ ObjName {
        ::System::String ^ get();
        void set(::System::String ^);
    };

    property unsigned int Score
    {
        unsigned int get();
        void set(unsigned int);
    };

    property MC::IdentityDefinition::Type Type
    {
        MC::IdentityDefinition::Type get();
        void set(MC::IdentityDefinition::Type);
    };

    property unsigned long long Pid
    {
        unsigned long long get();
        void set(unsigned long long);
    };

    property MC::ActorUniqueID ^ Aid {
        MC::ActorUniqueID ^ get();
        void set(MC::ActorUniqueID ^);
    };

    property ::System::String ^ FakeName {
        ::System::String ^ get();
        void set(::System::String ^);
    };

#endif // INCLUDE_MCAPI
};
} // namespace MC
