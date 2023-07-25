#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class MoveActorAbsolutePacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORABSOLUTEPACKET
public:
    MoveActorAbsolutePacket& operator=(MoveActorAbsolutePacket const&) = delete;
    MoveActorAbsolutePacket(MoveActorAbsolutePacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@MoveActorAbsolutePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@MoveActorAbsolutePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@MoveActorAbsolutePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@MoveActorAbsolutePacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEACTORABSOLUTEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MoveActorAbsolutePacket();
#endif
    /**
     * @symbol ??0MoveActorAbsolutePacket\@\@QEAA\@AEBVMoveActorAbsoluteData\@\@\@Z
     */
    MCAPI MoveActorAbsolutePacket(class MoveActorAbsoluteData const&);
    /**
     * @symbol ??0MoveActorAbsolutePacket\@\@QEAA\@XZ
     */
    MCAPI MoveActorAbsolutePacket();
};
