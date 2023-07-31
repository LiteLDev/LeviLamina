#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class CommandRequestPacket : public ::Packet {

public:
    // prevent constructor by default
    CommandRequestPacket& operator=(CommandRequestPacket const&) = delete;
    CommandRequestPacket(CommandRequestPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@CommandRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@CommandRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@CommandRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@CommandRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDREQUESTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CommandRequestPacket();
#endif
    /**
     * @symbol ??0CommandRequestPacket\@\@QEAA\@XZ
     */
    MCAPI CommandRequestPacket();
    /**
     * @symbol ??0CommandRequestPacket\@\@QEAA\@AEAVCommandContext\@\@_N\@Z
     */
    MCAPI CommandRequestPacket(class CommandContext&, bool);
    /**
     * @symbol
     * ?createCommandContext\@CommandRequestPacket\@\@QEBA?AV?$unique_ptr\@VCommandContext\@\@U?$default_delete\@VCommandContext\@\@\@std\@\@\@std\@\@AEBVNetworkIdentifier\@\@AEBV?$NonOwnerPointer\@VILevel\@\@\@Bedrock\@\@\@Z
     */
    MCAPI std::unique_ptr<class CommandContext>
    createCommandContext(class NetworkIdentifier const&, class Bedrock::NonOwnerPointer<class ILevel> const&) const;
    /**
     * @symbol ?getInternalSource\@CommandRequestPacket\@\@QEBA_NXZ
     */
    MCAPI bool getInternalSource() const;
    // NOLINTEND
};
