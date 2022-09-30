/**
 * @file  SetPlayerGameTypePacket.hpp
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
 * @brief MC class SetPlayerGameTypePacket.
 *
 */
class SetPlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPLAYERGAMETYPEPACKET
public:
    class SetPlayerGameTypePacket& operator=(class SetPlayerGameTypePacket const &) = delete;
    SetPlayerGameTypePacket(class SetPlayerGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetPlayerGameTypePacket();
    /**
     * @hash   253150951
     * @vftbl  1
     * @symbol ?getId@SetPlayerGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -568386140
     * @vftbl  2
     * @symbol ?getName@SetPlayerGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1565629235
     * @vftbl  3
     * @symbol ?write@SetPlayerGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1756693885
     * @vftbl  6
     * @symbol ?_read@SetPlayerGameTypePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1217258365
     * @symbol ??0SetPlayerGameTypePacket@@QEAA@XZ
     */
    MCAPI SetPlayerGameTypePacket();

};