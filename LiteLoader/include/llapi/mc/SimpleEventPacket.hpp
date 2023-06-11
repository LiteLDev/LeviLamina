/**
 * @file  SimpleEventPacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SimpleEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@SimpleEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SimpleEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@SimpleEventPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SimpleEventPacket();
#endif
    /**
     * @symbol ??0SimpleEventPacket\@\@QEAA\@AEBW4Subtype\@0\@\@Z
     */
    MCAPI SimpleEventPacket(enum class SimpleEventPacket::Subtype const &);
    /**
     * @symbol ??0SimpleEventPacket\@\@QEAA\@XZ
     */
    MCAPI SimpleEventPacket();
    /**
     * @symbol ?getSubtype\@SimpleEventPacket\@\@QEBAAEBW4Subtype\@1\@XZ
     */
    MCAPI enum class SimpleEventPacket::Subtype const & getSubtype() const;

};
