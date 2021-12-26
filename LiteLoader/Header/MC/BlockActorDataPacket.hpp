// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockActorDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORDATAPACKET
public:
    class BlockActorDataPacket& operator=(class BlockActorDataPacket const&) = delete;
    BlockActorDataPacket(class BlockActorDataPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~BlockActorDataPacket();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline enum MinecraftPacketIds getId() const{
        enum MinecraftPacketIds (BlockActorDataPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@BlockActorDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI BlockActorDataPacket(class BlockPos const&, class CompoundTag);
    MCAPI BlockActorDataPacket();

protected:

private:

};