/**
 * @file  ChangeMobPropertyPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ChangeMobPropertyPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ChangeMobPropertyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ChangeMobPropertyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ChangeMobPropertyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ChangeMobPropertyPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ChangeMobPropertyPacket\@\@QEAA\@XZ
     */
    MCAPI ChangeMobPropertyPacket();

};