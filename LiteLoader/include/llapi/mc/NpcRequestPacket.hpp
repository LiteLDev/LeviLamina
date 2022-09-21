/**
 * @file  MC/NpcRequestPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcRequestPacket.
 *
 */
class NpcRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCREQUESTPACKET
public:
    class NpcRequestPacket& operator=(class NpcRequestPacket const &) = delete;
    NpcRequestPacket(class NpcRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NpcRequestPacket();
    /**
     * @hash   -100585384
     * @vftbl  1
     * @symbol ?getId@NpcRequestPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   730218245
     * @vftbl  2
     * @symbol ?getName@NpcRequestPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -105087678
     * @vftbl  3
     * @symbol ?write@NpcRequestPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1404404030
     * @vftbl  6
     * @symbol ?_read@NpcRequestPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1128859006
     * @symbol ??0NpcRequestPacket@@QEAA@XZ
     */
    MCAPI NpcRequestPacket();
    /**
     * @hash   -1793063572
     * @symbol ?getInteractText@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getInteractText() const;
    /**
     * @hash   94285422
     * @symbol ?getNpcName@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getNpcName() const;
    /**
     * @hash   -967178370
     * @symbol ?getSceneName@NpcRequestPacket@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getSceneName() const;
    /**
     * @hash   -1346826778
     * @symbol ?getSkin@NpcRequestPacket@@QEBAHXZ
     */
    MCAPI int getSkin() const;
    /**
     * @hash   -2061365817
     * @symbol ?requestSetInteractText@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class NpcRequestPacket requestSetInteractText(class ActorRuntimeID, std::string);
    /**
     * @hash   890004919
     * @symbol ?requestSetName@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class NpcRequestPacket requestSetName(class ActorRuntimeID, std::string);
    /**
     * @hash   -1097983367
     * @symbol ?requestSetSkin@NpcRequestPacket@@SA?AV1@VActorRuntimeID@@H@Z
     */
    MCAPI static class NpcRequestPacket requestSetSkin(class ActorRuntimeID, int);

//private:
    /**
     * @hash   441016261
     * @symbol ??0NpcRequestPacket@@AEAA@VActorRuntimeID@@W4RequestType@0@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@E@Z
     */
    MCAPI NpcRequestPacket(class ActorRuntimeID, enum NpcRequestPacket::RequestType, std::string, unsigned char);

private:

};