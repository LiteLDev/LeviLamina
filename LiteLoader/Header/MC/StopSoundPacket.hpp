// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StopSoundPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDPACKET
public:
    class StopSoundPacket& operator=(class StopSoundPacket const&) = delete;
    StopSoundPacket(class StopSoundPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~StopSoundPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual void __unk_vfn_1();
    /*
    inline enum StreamReadResult _read(class ReadOnlyBinaryStream& a0){
        enum StreamReadResult (StopSoundPacket::*rv)(class ReadOnlyBinaryStream&);
        *((void**)&rv) = dlsym("?_read@StopSoundPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z");
        return (this->*rv)(std::forward<class ReadOnlyBinaryStream&>(a0));
    }
    inline void write(class BinaryStream& a0) const{
        void (StopSoundPacket::*rv)(class BinaryStream&) const;
        *((void**)&rv) = dlsym("?write@StopSoundPacket@@UEBAXAEAVBinaryStream@@@Z");
        return (this->*rv)(std::forward<class BinaryStream&>(a0));
    }
    inline  ~StopSoundPacket(){
         (StopSoundPacket::*rv)();
        *((void**)&rv) = dlsym("??1StopSoundPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI StopSoundPacket(std::string const&, bool);
    MCAPI StopSoundPacket();

protected:

private:

};