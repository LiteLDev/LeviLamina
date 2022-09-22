/**
 * @file  SimpleEventPacket.hpp
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
 * @brief MC class SimpleEventPacket.
 *
 */
class SimpleEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
enum class Subtype;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEEVENTPACKET
public:
    class SimpleEventPacket& operator=(class SimpleEventPacket const &) = delete;
    SimpleEventPacket(class SimpleEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SimpleEventPacket();
    /**
     * @hash   1571348702
     * @vftbl  1
     * @symbol ?getId@SimpleEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   2058083211
     * @vftbl  2
     * @symbol ?getName@SimpleEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   785196124
     * @vftbl  3
     * @symbol ?write@SimpleEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2088976652
     * @vftbl  6
     * @symbol ?_read@SimpleEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1937596388
     * @symbol ??0SimpleEventPacket@@QEAA@XZ
     */
    MCAPI SimpleEventPacket();
    /**
     * @hash   728695503
     * @symbol ??0SimpleEventPacket@@QEAA@AEBW4Subtype@0@@Z
     */
    MCAPI SimpleEventPacket(enum SimpleEventPacket::Subtype const &);
    /**
     * @hash   151323023
     * @symbol ?getSubtype@SimpleEventPacket@@QEBAAEBW4Subtype@1@XZ
     */
    MCAPI enum SimpleEventPacket::Subtype const & getSubtype() const;

};