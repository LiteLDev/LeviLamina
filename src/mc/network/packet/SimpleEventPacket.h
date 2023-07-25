#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SimpleEventPacket : public ::Packet {
public:
    // SimpleEventPacket inner types declare
    // clang-format off

    // clang-format on

    // SimpleEventPacket inner types define
    enum class Subtype {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEEVENTPACKET
public:
    SimpleEventPacket& operator=(SimpleEventPacket const&) = delete;
    SimpleEventPacket(SimpleEventPacket const&)            = delete;
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
     * @symbol
     * ?getName\@SimpleEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SimpleEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SimpleEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIMPLEEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SimpleEventPacket();
#endif
    /**
     * @symbol ??0SimpleEventPacket\@\@QEAA\@XZ
     */
    MCAPI SimpleEventPacket();
    /**
     * @symbol ??0SimpleEventPacket\@\@QEAA\@AEBW4Subtype\@0\@\@Z
     */
    MCAPI SimpleEventPacket(enum class SimpleEventPacket::Subtype const&);
    /**
     * @symbol ?getSubtype\@SimpleEventPacket\@\@QEBAAEBW4Subtype\@1\@XZ
     */
    MCAPI enum class SimpleEventPacket::Subtype const& getSubtype() const;
};
