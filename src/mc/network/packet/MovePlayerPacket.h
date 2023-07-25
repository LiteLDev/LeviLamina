#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/network/packet/Packet.h"

class MovePlayerPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEPLAYERPACKET
public:
    MovePlayerPacket& operator=(MovePlayerPacket const&) = delete;
    MovePlayerPacket(MovePlayerPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MovePlayerPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MovePlayerPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MovePlayerPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 6
     * @symbol ?isValid\@MovePlayerPacket\@\@UEBA_NXZ
     */
    virtual bool isValid() const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MovePlayerPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEPLAYERPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MovePlayerPacket();
#endif
    /**
     * @symbol ??0MovePlayerPacket\@\@QEAA\@AEBVPlayer\@\@W4PositionMode\@PlayerPositionModeComponent\@\@HH\@Z
     */
    MCAPI MovePlayerPacket(class Player const&, enum class PlayerPositionModeComponent::PositionMode, int, int);
    /**
     * @symbol ??0MovePlayerPacket\@\@QEAA\@XZ
     */
    MCAPI MovePlayerPacket();
    /**
     * @symbol ??0MovePlayerPacket\@\@QEAA\@AEBVPlayer\@\@AEBVVec3\@\@\@Z
     */
    MCAPI MovePlayerPacket(class Player const&, class Vec3 const&);
};
