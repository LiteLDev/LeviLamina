#pragma once
#include <MC/Packet.hpp>
#include "Types.hpp"
namespace MC
{
enum class PacketReliability
{
    Relible,
    RelibleOrdered
};
public
ref class Packet : ClassTemplate<Packet, ::Packet>
{
public:
    __ctor(Packet, ::Packet);

#ifdef INCLUDE_MCAPI

    property unsigned int Unk2
    {
        unsigned int get();
        void set(unsigned int);
    }

    property MC::PacketReliability ReliableOrdered
    {
        MC::PacketReliability get();
        void set(MC::PacketReliability);
    }

    property unsigned char ClientSubId
    {
        unsigned char get();
        void set(unsigned char);
    }

    property unsigned long long Unk24
    {
        unsigned long long get();
        void set(unsigned long long);
    }

    property unsigned long long Unk40
    {
        unsigned long long get();
        void set(unsigned long long);
    }

    property unsigned int Incompressible
    {
        unsigned int get();
        void set(unsigned int);
    }

    property MC::MinecraftPacketIds Id
    {
        MC::MinecraftPacketIds get();
    }

    property ::System::String ^ Name {
        ::System::String ^ get();
    };

    virtual bool DisallowBatching();

#endif // INCLUDE_MCAPI
};
} // namespace MC
