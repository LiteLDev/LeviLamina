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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BookEditPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@BookEditPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BookEditPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@BookEditPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOOKEDITPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BookEditPacket();
#endif
    /**
     * @symbol ??0BookEditPacket\@\@QEAA\@XZ
     */
    MCAPI BookEditPacket();
    /**
     * @symbol ??0BookEditPacket\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI BookEditPacket(class BookEditPacket const &);
    /**
     * @symbol ?getPage\@BookEditPacket\@\@QEBA?AUPageContent\@\@XZ
     */
    MCAPI struct PageContent getPage() const;

//private:
    /**
     * @symbol ?_readPage\@BookEditPacket\@\@AEAAXAEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI void _readPage(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?_writePage\@BookEditPacket\@\@AEBAXAEAVBinaryStream\@\@\@Z
     */
    MCAPI void _writePage(class BinaryStream &) const;

private:

};
