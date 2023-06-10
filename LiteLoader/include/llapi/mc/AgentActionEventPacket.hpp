/**
 * @file  AgentActionEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class AgentActionEventPacket.
 *
 */
class AgentActionEventPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTACTIONEVENTPACKET
public:
    class AgentActionEventPacket& operator=(class AgentActionEventPacket const &) = delete;
    AgentActionEventPacket(class AgentActionEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@AgentActionEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@AgentActionEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AgentActionEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@AgentActionEventPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTACTIONEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AgentActionEventPacket();
#endif
    /**
     * @symbol ??0AgentActionEventPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4AgentActionType\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI AgentActionEventPacket(std::string const &, enum class AgentActionType, class Json::Value const &);
    /**
     * @symbol ??0AgentActionEventPacket\@\@QEAA\@XZ
     */
    MCAPI AgentActionEventPacket();

};
