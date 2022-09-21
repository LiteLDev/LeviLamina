/**
 * @file  MC/BookEditPacket.hpp
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
 * @brief MC class BookEditPacket.
 *
 */
class BookEditPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOKEDITPACKET
public:
    class BookEditPacket& operator=(class BookEditPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BookEditPacket();
    /**
     * @hash   -258492653
     * @vftbl  1
     * @symbol ?getId@BookEditPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1393960384
     * @vftbl  2
     * @symbol ?getName@BookEditPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1167927417
     * @vftbl  3
     * @symbol ?write@BookEditPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1504014487
     * @vftbl  6
     * @symbol ?_read@BookEditPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   583015927
     * @symbol ??0BookEditPacket@@QEAA@XZ
     */
    MCAPI BookEditPacket();
    /**
     * @hash   -967127407
     * @symbol ??0BookEditPacket@@QEAA@AEBV0@@Z
     */
    MCAPI BookEditPacket(class BookEditPacket const &);
    /**
     * @hash   1110635380
     * @symbol ?getPage@BookEditPacket@@QEBA?AUPageContent@@XZ
     */
    MCAPI struct PageContent getPage() const;

//private:
    /**
     * @hash   642304500
     * @symbol ?_readPage@BookEditPacket@@AEAAXAEAVReadOnlyBinaryStream@@@Z
     */
    MCAPI void _readPage(class ReadOnlyBinaryStream &);
    /**
     * @hash   1342756314
     * @symbol ?_writePage@BookEditPacket@@AEBAXAEAVBinaryStream@@@Z
     */
    MCAPI void _writePage(class BinaryStream &) const;

private:

};