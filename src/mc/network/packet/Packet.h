#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/Compressibility.h"
#include "mc/enums/SubClientId.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/NetworkPeer.h"
#include "mc/resources/PacketPriority.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

class Packet {

public:
    static const bool                   SHARE_WITH_HANDLER = false;                                     // constant
    enum class PacketPriority           mPriority          = PacketPriority::Medium;                    // this+0x8
    enum class NetworkPeer::Reliability mReliability       = NetworkPeer::Reliability::ReliableOrdered; // this+0xC
    enum class SubClientId              mClientSubId       = SubClientId::PrimaryClient;                // this+0x10
    bool                                mIsHandled         = false;                                     // this+0x11
    NetworkPeer::PacketRecvTimepoint    mReceiveTimepoint;                                              // this+0x18
    const IPacketHandlerDispatcher*     mHandler      = nullptr;                                        // this+0x20
    enum class Compressibility          mCompressible = Compressibility::Compressible;                  // this+0x28

    inline explicit Packet(
        enum class PacketPriority           priority    = PacketPriority::Medium,
        enum class NetworkPeer::Reliability reliability = NetworkPeer::Reliability::ReliableOrdered,
        enum class SubClientId              clientSubId = SubClientId::PrimaryClient,
        bool                                compress    = true
    )
    : mPriority(priority), mReliability(reliability), mClientSubId(clientSubId) {
        if (compress) {
            mCompressible = Compressibility::Compressible;
        } else {
            mCompressible = Compressibility::Incompressible;
        }
    }
public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ServerStatsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ServerStatsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const = 0;
    /**
     * @vftbl 3
     * @symbol ?write\@ServerStatsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const = 0;
    /**
     * @vftbl 4
     * @symbol ?read\@Packet\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> read(class ReadOnlyBinaryStream&);
    /**
     * @vftbl 5
     * @symbol ?disallowBatching\@Packet\@\@UEBA_NXZ
     */
    virtual bool disallowBatching() const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@Packet\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ServerStatsPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Packet();
#endif
    /**
     * @symbol
     * ?handle\@Packet\@\@QEAAXAEBVNetworkIdentifier\@\@AEAVNetEventCallback\@\@AEAV?$shared_ptr\@VPacket\@\@\@std\@\@\@Z
     */
    MCAPI void handle(class NetworkIdentifier const&, class NetEventCallback&, std::shared_ptr<class Packet>&);
    /**
     * @symbol
     * ?readNoHeader\@Packet\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@AEBW4SubClientId\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, std::error_code>
    readNoHeader(class ReadOnlyBinaryStream&, enum class SubClientId const&);
    /**
     * @symbol ?writeWithHeader\@Packet\@\@QEBAXW4SubClientId\@\@AEAVBinaryStream\@\@\@Z
     */
    MCAPI void writeWithHeader(enum class SubClientId, class BinaryStream&) const;
    // NOLINTEND
};
