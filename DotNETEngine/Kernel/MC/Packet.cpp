#include "../../Header/MC/Packet.hpp"
namespace MC
{
} // namespace MC

#ifdef INCLUDE_MCAPI
bool MC::Packet::DisallowBatching()
{
    auto __ret = ((class ::Packet*)NativePtr)->disallowBatching();
    return __ret;
}

unsigned int MC::Packet::Unk2::get()
{
    return NativePtr->unk2;
}

void MC::Packet::Unk2::set(unsigned int value)
{
    ((class ::Packet*)NativePtr)->unk2 = value;
}

MC::PacketReliability MC::Packet::ReliableOrdered::get()
{
    return (MC::PacketReliability)NativePtr->reliableOrdered;
}

void MC::Packet::ReliableOrdered::set(MC::PacketReliability value)
{
    ((class ::Packet*)NativePtr)->reliableOrdered = (::PacketReliability)value;
}

unsigned char MC::Packet::ClientSubId::get()
{
    return NativePtr->clientSubId;
}

void MC::Packet::ClientSubId::set(unsigned char value)
{
    ((class ::Packet*)NativePtr)->clientSubId = value;
}

unsigned long long MC::Packet::Unk24::get()
{
    return NativePtr->unk24;
}

void MC::Packet::Unk24::set(unsigned long long value)
{
    ((class ::Packet*)NativePtr)->unk24 = (::uint64_t)value;
}

unsigned long long MC::Packet::Unk40::get()
{
    return NativePtr->unk40;
}

void MC::Packet::Unk40::set(unsigned long long value)
{
    ((class ::Packet*)NativePtr)->unk40 = (::uint64_t)value;
}

unsigned int MC::Packet::Incompressible::get()
{
    return NativePtr->incompressible;
}

void MC::Packet::Incompressible::set(unsigned int value)
{
    ((class ::Packet*)NativePtr)->incompressible = (::uint32_t)value;
}

MC::MinecraftPacketIds MC::Packet::Id::get()
{
    auto __ret = ((class ::Packet*)NativePtr)->getId();
    return (MC::MinecraftPacketIds)__ret;
}

::System::String ^ MC::Packet::Name::get()
{
    auto __ret = ((class ::Packet*)NativePtr)->getName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}
#endif // INCLUDE_MCAPI
