#pragma once
#include <MC/ActorDefinitionIdentifier.hpp>
#include "Types.hpp"

namespace MC
{
ref class HashedString;
}

namespace MC
{
public
ref struct ActorDefinitionIdentifier : ClassTemplate<ActorDefinitionIdentifier, ::ActorDefinitionIdentifier>
{
public:
    __ctor_all(ActorDefinitionIdentifier, ::ActorDefinitionIdentifier);

    static ActorDefinitionIdentifier ^ Create();
    static ActorDefinitionIdentifier ^ Create(System::String ^ ns, System::String ^ identifier, System::String ^ event, System::String ^ fullname, HashedString ^ canonicalHash);

    property System::String ^ NS {System::String^ get(); void set(System::String^ ns); };
    property System::String ^ Identifier {System::String^ get(); void set(System::String^ identifier); };
    property System::String ^ Event {System::String^ get(); void set(System::String^ event); };
    property System::String ^ Fullname {System::String^ get(); void set(System::String^ fullname); };
    property HashedString ^ CanonicalHash {HashedString^ get(); void set(HashedString^ canonicalHash); };

#ifdef INCLUDE_MCAPI


    ActorDefinitionIdentifier(MC::ActorDefinitionIdentifier ^ _0);

    ActorDefinitionIdentifier(::System::String ^ _0);

    ActorDefinitionIdentifier(::System::String ^ _0, ::System::String ^ _1, ::System::String ^ _2);


    property ::System::String ^
        CanonicalName {
            ::System::String ^ get();
        };

    property ::System::String ^
        InitEvent {
            ::System::String ^ get();
            void set(::System::String ^);
        };

    property ::System::String ^
        Namespace {
            ::System::String ^ get();
        };

    property bool IsEmpty
    {
        bool get();
    };

    property bool IsVanilla
    {
        bool get();
    };

    void Clear();

    void Initialize(::System::String ^ _0, ::System::String ^ _1, ::System::String ^ _2);

    void Initialize(::System::String ^ _0);

    static bool operator==(MC::ActorDefinitionIdentifier ^ __op, MC::ActorDefinitionIdentifier ^ _0);

    virtual bool Equals(::System::Object ^ obj) override;

#endif // INCLUDE_MCAPI
};
} // namespace MC