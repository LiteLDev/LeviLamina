/**
 * @file  SetTimePacket.hpp
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
 * @brief MC class SetTimePacket.
 *
 */
class SetTimePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTIMEPACKET
public:
    class SetTimePacket& operator=(class SetTimePacket const &) = delete;
    SetTimePacket(class SetTimePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetTimePacket();
    /**
     * @hash   -1005262121
     * @vftbl  1
     * @symbol ?getId@SetTimePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1050114684
     * @vftbl  2
     * @symbol ?getName@SetTimePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   735644723
     * @vftbl  3
     * @symbol ?write@SetTimePacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1465588611
     * @vftbl  6
     * @symbol ?_read@SetTimePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1832970003
     * @symbol ??0SetTimePacket@@QEAA@XZ
     */
    MCAPI SetTimePacket();
    /**
     * @hash   304943160
     * @symbol ??0SetTimePacket@@QEAA@H@Z
     */
    MCAPI SetTimePacket(int);

};