#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class InteractPacket : public ::Packet {
public:
    // InteractPacket inner types declare
    // clang-format off

    // clang-format on

    // InteractPacket inner types define
    enum class Action {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTPACKET
public:
    InteractPacket& operator=(InteractPacket const&) = delete;
    InteractPacket(InteractPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@InteractPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@InteractPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@InteractPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@InteractPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERACTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~InteractPacket();
#endif
    /**
     * @symbol ??0InteractPacket\@\@QEAA\@W4Action\@0\@VActorRuntimeID\@\@AEBVVec3\@\@\@Z
     */
    MCAPI InteractPacket(enum class InteractPacket::Action, class ActorRuntimeID, class Vec3 const&);
    /**
     * @symbol ??0InteractPacket\@\@QEAA\@XZ
     */
    MCAPI InteractPacket();
};
