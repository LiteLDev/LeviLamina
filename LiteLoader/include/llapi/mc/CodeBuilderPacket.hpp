/**
 * @file  CodeBuilderPacket.hpp
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
 * @brief MC class CodeBuilderPacket.
 *
 */
class CodeBuilderPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERPACKET
public:
    class CodeBuilderPacket& operator=(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket(class CodeBuilderPacket const &) = delete;
    CodeBuilderPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CodeBuilderPacket();
    /**
     * @hash   -1350349384
     * @vftbl  1
     * @symbol ?getId@CodeBuilderPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -541657163
     * @vftbl  2
     * @symbol ?getName@CodeBuilderPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   643551970
     * @vftbl  3
     * @symbol ?write@CodeBuilderPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1182174734
     * @vftbl  6
     * @symbol ?_read@CodeBuilderPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};