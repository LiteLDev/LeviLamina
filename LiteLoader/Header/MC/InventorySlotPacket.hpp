// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InventorySlotPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYSLOTPACKET
public:
    class InventorySlotPacket& operator=(class InventorySlotPacket const&) = delete;
    InventorySlotPacket(class InventorySlotPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~InventorySlotPacket();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~InventorySlotPacket(){
         (InventorySlotPacket::*rv)();
        *((void**)&rv) = dlsym("??1InventorySlotPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    inline enum MinecraftPacketIds getId() const{
        enum MinecraftPacketIds (InventorySlotPacket::*rv)() const;
        *((void**)&rv) = dlsym("?getId@InventorySlotPacket@@UEBA?AW4MinecraftPacketIds@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI InventorySlotPacket(enum ContainerID, unsigned int, class ItemStack const&);
    MCAPI InventorySlotPacket();

protected:

private:

};