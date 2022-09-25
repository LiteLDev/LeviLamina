/**
 * @file  ClientCacheMissResponsePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientCacheMissResponsePacket.
 *
 */
class ClientCacheMissResponsePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTCACHEMISSRESPONSEPACKET
public:
    class ClientCacheMissResponsePacket& operator=(class ClientCacheMissResponsePacket const &) = delete;
    ClientCacheMissResponsePacket(class ClientCacheMissResponsePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ClientCacheMissResponsePacket();
    /**
     * @hash   -280572142
     * @vftbl  1
     * @symbol ?getId@ClientCacheMissResponsePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1076709823
     * @vftbl  2
     * @symbol ?getName@ClientCacheMissResponsePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -940346328
     * @vftbl  3
     * @symbol ?write@ClientCacheMissResponsePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1547815672
     * @vftbl  6
     * @symbol ?_read@ClientCacheMissResponsePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -544081688
     * @symbol ??0ClientCacheMissResponsePacket@@QEAA@XZ
     */
    MCAPI ClientCacheMissResponsePacket();

};