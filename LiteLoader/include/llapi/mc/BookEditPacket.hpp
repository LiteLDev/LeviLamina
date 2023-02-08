/**
 * @file  BookEditPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~BookEditPacket();
    /**
     * @hash   -1169136253
     * @vftbl  1
     * @symbol  ?getId\@BookEditPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   483316784
     * @vftbl  2
     * @symbol  ?getName\@BookEditPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -2078571017
     * @vftbl  3
     * @symbol  ?write\@BookEditPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   593370887
     * @vftbl  6
     * @symbol  ?_read\@BookEditPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -327627673
     * @symbol  ??0BookEditPacket\@\@QEAA\@XZ
     */
    MCAPI BookEditPacket();
    /**
     * @hash   -714853375
     * @symbol  ??0BookEditPacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BookEditPacket(class BookEditPacket const &);
    /**
     * @hash   199991780
     * @symbol  ?getPage\@BookEditPacket\@\@QEBA?AUPageContent\@\@XZ
     */
    MCAPI struct PageContent getPage() const;

//private:
    /**
     * @hash   -268339100
     * @symbol  ?_readPage\@BookEditPacket\@\@AEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void _readPage(class ReadOnlyBinaryStream &);
    /**
     * @hash   432112714
     * @symbol  ?_writePage\@BookEditPacket\@\@AEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void _writePage(class BinaryStream &) const;

private:

};