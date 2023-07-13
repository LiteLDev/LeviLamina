/**
 * @file  AgentAnimationPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AgentAnimationPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTANIMATIONPACKET
public:
    class AgentAnimationPacket& operator=(class AgentAnimationPacket const &) = delete;
    AgentAnimationPacket(class AgentAnimationPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AgentAnimationPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@AgentAnimationPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AgentAnimationPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@AgentAnimationPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTANIMATIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AgentAnimationPacket();
#endif
    /**
     * @symbol ??0AgentAnimationPacket\@\@QEAA\@W4AgentAnimation\@\@VActorRuntimeID\@\@\@Z
     */
    MCAPI AgentAnimationPacket(enum class AgentAnimation, class ActorRuntimeID);
    /**
     * @symbol ??0AgentAnimationPacket\@\@QEAA\@XZ
     */
    MCAPI AgentAnimationPacket();

};
