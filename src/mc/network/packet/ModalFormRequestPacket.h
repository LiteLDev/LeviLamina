#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ModalFormRequestPacket : public ::Packet {

public:
    // prevent constructor by default
    ModalFormRequestPacket& operator=(ModalFormRequestPacket const&) = delete;
    ModalFormRequestPacket(ModalFormRequestPacket const&)            = delete;

    unsigned int mFormId;   // this+0x30
    std::string  mFormJSON; // this+0x38
public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ModalFormRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ModalFormRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ModalFormRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ModalFormRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MODALFORMREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ModalFormRequestPacket();
#endif
    /**
     * @symbol
     * ??0ModalFormRequestPacket\@\@QEAA\@IAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ModalFormRequestPacket(unsigned int, std::string const&);
    /**
     * @symbol ??0ModalFormRequestPacket\@\@QEAA\@XZ
     */
    MCAPI ModalFormRequestPacket();
    // NOLINTEND
};
