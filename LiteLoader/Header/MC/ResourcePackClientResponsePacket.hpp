// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ResourcePackClientResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKCLIENTRESPONSEPACKET
public:
    class ResourcePackClientResponsePacket& operator=(class ResourcePackClientResponsePacket const&) = delete;
    ResourcePackClientResponsePacket(class ResourcePackClientResponsePacket const&) = delete;
#endif

public:
    /*0*/ virtual ~ResourcePackClientResponsePacket();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline enum MinecraftPacketIds getId() const{
        enum MinecraftPacketIds (ResourcePackClientResponsePacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@ResourcePackClientResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI ResourcePackClientResponsePacket();
    MCAPI class std::set<std::string, struct std::less<std::string >, class std::allocator<std::string > > const& getDownloadingPacks() const;
    MCAPI bool isResponse(enum ResourcePackResponse) const;

protected:

private:

};