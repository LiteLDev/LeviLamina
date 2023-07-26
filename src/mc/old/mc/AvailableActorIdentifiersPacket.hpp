/**
 * @file  AvailableActorIdentifiersPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AvailableActorIdentifiersPacket.
 *
 */
class AvailableActorIdentifiersPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVAILABLEACTORIDENTIFIERSPACKET
public:
    class AvailableActorIdentifiersPacket& operator=(class AvailableActorIdentifiersPacket const &) = delete;
    AvailableActorIdentifiersPacket(class AvailableActorIdentifiersPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AvailableActorIdentifiersPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@AvailableActorIdentifiersPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@AvailableActorIdentifiersPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@AvailableActorIdentifiersPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  4
     * @symbol  ?readExtended\@AvailableActorIdentifiersPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @vftbl  6
     * @symbol  ?_read\@AvailableActorIdentifiersPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0AvailableActorIdentifiersPacket\@\@QEAA\@XZ
     */
    MCAPI AvailableActorIdentifiersPacket();
    /**
     * @symbol  ??0AvailableActorIdentifiersPacket\@\@QEAA\@AEBV?$vector\@UActorInfo\@\@V?$allocator\@UActorInfo\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI AvailableActorIdentifiersPacket(std::vector<struct ActorInfo> const &);

};