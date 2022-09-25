/**
 * @file  AgentActionEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AgentActionEventPacket();
    /**
     * @hash   469091399
     * @vftbl  1
     * @symbol ?getId@AgentActionEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   1362539252
     * @vftbl  2
     * @symbol ?getName@AgentActionEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1715819389
     * @vftbl  3
     * @symbol ?write@AgentActionEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1078159309
     * @vftbl  6
     * @symbol ?_read@AgentActionEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1838128915
     * @symbol ??0AgentActionEventPacket@@QEAA@XZ
     */
    MCAPI AgentActionEventPacket();
    /**
     * @hash   -857983226
     * @symbol ??0AgentActionEventPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AgentActionType@@AEBVValue@Json@@@Z
     */
    MCAPI AgentActionEventPacket(std::string const &, enum AgentActionType, class Json::Value const &);

};