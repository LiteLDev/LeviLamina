#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class EmotePacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMOTEPACKET
public:
    EmotePacket& operator=(EmotePacket const&) = delete;
    EmotePacket(EmotePacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@EmotePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@EmotePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@EmotePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@EmotePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EMOTEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EmotePacket();
#endif
    /**
     * @symbol ??0EmotePacket\@\@QEAA\@XZ
     */
    MCAPI EmotePacket();
    /**
     * @symbol ?isServerSide\@EmotePacket\@\@QEBA_NXZ
     */
    MCAPI bool isServerSide() const;
    /**
     * @symbol ?setEmoteChatMute\@EmotePacket\@\@QEAAXXZ
     */
    MCAPI void setEmoteChatMute();
    /**
     * @symbol ?setServerSide\@EmotePacket\@\@QEAAXXZ
     */
    MCAPI void setServerSide();
};
