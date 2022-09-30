/**
 * @file  SyncActorPropertyPacket.hpp
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
 * @brief MC class SyncActorPropertyPacket.
 *
 */
class SyncActorPropertyPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCACTORPROPERTYPACKET
public:
    class SyncActorPropertyPacket& operator=(class SyncActorPropertyPacket const &) = delete;
    SyncActorPropertyPacket(class SyncActorPropertyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SyncActorPropertyPacket();
    /**
     * @hash   878674519
     * @vftbl  1
     * @symbol ?getId@SyncActorPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1504681220
     * @vftbl  2
     * @symbol ?getName@SyncActorPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1176989277
     * @vftbl  3
     * @symbol ?write@SyncActorPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1702178456
     * @vftbl  4
     * @symbol ?readExtended@SyncActorPropertyPacket@@UEAA?AUExtendedStreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   731491939
     * @vftbl  6
     * @symbol ?_read@SyncActorPropertyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1413008861
     * @symbol ??0SyncActorPropertyPacket@@QEAA@XZ
     */
    MCAPI SyncActorPropertyPacket();
    /**
     * @hash   -1297451352
     * @symbol ??0SyncActorPropertyPacket@@QEAA@AEBVActor@@@Z
     */
    MCAPI SyncActorPropertyPacket(class Actor const &);

};