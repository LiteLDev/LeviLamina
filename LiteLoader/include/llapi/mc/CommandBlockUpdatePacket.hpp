/**
 * @file  CommandBlockUpdatePacket.hpp
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
 * @brief MC class CommandBlockUpdatePacket.
 *
 */
class CommandBlockUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDBLOCKUPDATEPACKET
public:
    class CommandBlockUpdatePacket& operator=(class CommandBlockUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CommandBlockUpdatePacket();
    /**
     * @hash   -666325525
     * @vftbl  1
     * @symbol ?getId@CommandBlockUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1421108072
     * @vftbl  2
     * @symbol ?getName@CommandBlockUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1357424625
     * @vftbl  3
     * @symbol ?write@CommandBlockUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   321027599
     * @vftbl  6
     * @symbol ?_read@CommandBlockUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   771338079
     * @symbol ??0CommandBlockUpdatePacket@@QEAA@XZ
     */
    MCAPI CommandBlockUpdatePacket();
    /**
     * @hash   682073953
     * @symbol ??0CommandBlockUpdatePacket@@QEAA@AEBV0@@Z
     */
    MCAPI CommandBlockUpdatePacket(class CommandBlockUpdatePacket const &);

};