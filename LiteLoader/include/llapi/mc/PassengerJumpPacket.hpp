/**
 * @file  PassengerJumpPacket.hpp
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
 * @brief MC class PassengerJumpPacket.
 *
 */
class PassengerJumpPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERJUMPPACKET
public:
    class PassengerJumpPacket& operator=(class PassengerJumpPacket const &) = delete;
    PassengerJumpPacket(class PassengerJumpPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~PassengerJumpPacket();
    /**
     * @hash   -2062713426
     * @vftbl  1
     * @symbol ?getId@PassengerJumpPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   851902187
     * @vftbl  2
     * @symbol ?getName@PassengerJumpPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2001234644
     * @vftbl  3
     * @symbol ?write@PassengerJumpPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2068554052
     * @vftbl  6
     * @symbol ?_read@PassengerJumpPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1702579332
     * @symbol ??0PassengerJumpPacket@@QEAA@XZ
     */
    MCAPI PassengerJumpPacket();

};