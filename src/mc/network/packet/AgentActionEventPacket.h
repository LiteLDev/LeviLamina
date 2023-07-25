#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AgentActionEventPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTACTIONEVENTPACKET
public:
    AgentActionEventPacket& operator=(AgentActionEventPacket const&) = delete;
    AgentActionEventPacket(AgentActionEventPacket const&)            = delete;
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
     * @symbol
     * ?getName\@AgentActionEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@AgentActionEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@AgentActionEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTACTIONEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AgentActionEventPacket();
#endif
    /**
     * @symbol
     * ??0AgentActionEventPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4AgentActionType\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI AgentActionEventPacket(std::string const&, enum class AgentActionType, class Json::Value const&);
    /**
     * @symbol ??0AgentActionEventPacket\@\@QEAA\@XZ
     */
    MCAPI AgentActionEventPacket();
};
