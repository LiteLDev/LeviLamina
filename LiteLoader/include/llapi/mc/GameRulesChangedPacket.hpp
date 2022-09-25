/**
 * @file  GameRulesChangedPacket.hpp
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
 * @brief MC class GameRulesChangedPacket.
 *
 */
class GameRulesChangedPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULESCHANGEDPACKET
public:
    class GameRulesChangedPacket& operator=(class GameRulesChangedPacket const &) = delete;
    GameRulesChangedPacket(class GameRulesChangedPacket const &) = delete;
    GameRulesChangedPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~GameRulesChangedPacket();
    /**
     * @hash   -238659849
     * @vftbl  1
     * @symbol ?getId@GameRulesChangedPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -725793372
     * @vftbl  2
     * @symbol ?getName@GameRulesChangedPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -459554973
     * @vftbl  3
     * @symbol ?write@GameRulesChangedPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -714822861
     * @vftbl  6
     * @symbol ?_read@GameRulesChangedPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};