/**
 * @file  ChangeMobPropertyPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ChangeMobPropertyPacket.
 *
 */
class ChangeMobPropertyPacket : public Packet {

#define AFTER_EXTRA
public:
    ActorUniqueID mUid;
    string mProperty;
    bool mBool;
    string mString;
    int mInt;
    float mFloat;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHANGEMOBPROPERTYPACKET
public:
    class ChangeMobPropertyPacket& operator=(class ChangeMobPropertyPacket const &) = delete;
    ChangeMobPropertyPacket(class ChangeMobPropertyPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ChangeMobPropertyPacket();
    /**
     * @hash   -504806671
     * @vftbl  1
     * @symbol ?getId@ChangeMobPropertyPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -543187554
     * @vftbl  2
     * @symbol ?getName@ChangeMobPropertyPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -723451319
     * @vftbl  3
     * @symbol ?write@ChangeMobPropertyPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -309548775
     * @vftbl  6
     * @symbol ?_read@ChangeMobPropertyPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   762089625
     * @symbol ??0ChangeMobPropertyPacket@@QEAA@XZ
     */
    MCAPI ChangeMobPropertyPacket();

};