/**
 * @file  SetDifficultyPacket.hpp
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
 * @brief MC class SetDifficultyPacket.
 *
 */
class SetDifficultyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDIFFICULTYPACKET
public:
    class SetDifficultyPacket& operator=(class SetDifficultyPacket const &) = delete;
    SetDifficultyPacket(class SetDifficultyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetDifficultyPacket();
    /**
     * @hash   -1443351463
     * @vftbl  1
     * @symbol ?getId@SetDifficultyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1435857146
     * @vftbl  2
     * @symbol ?getName@SetDifficultyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1772063263
     * @vftbl  3
     * @symbol ?write@SetDifficultyPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -39778399
     * @vftbl  6
     * @symbol ?_read@SetDifficultyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -99329999
     * @symbol ??0SetDifficultyPacket@@QEAA@XZ
     */
    MCAPI SetDifficultyPacket();
    /**
     * @hash   -2052421730
     * @symbol ??0SetDifficultyPacket@@QEAA@W4Difficulty@@@Z
     */
    MCAPI SetDifficultyPacket(enum class Difficulty);
    /**
     * @hash   -1559244618
     * @symbol ?getDifficulty@SetDifficultyPacket@@QEBA?AW4Difficulty@@XZ
     */
    MCAPI enum class Difficulty getDifficulty() const;

};