/**
 * @file  InteractPacket.hpp
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
 * @brief MC class InteractPacket.
 *
 */
class InteractPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTPACKET
public:
    class InteractPacket& operator=(class InteractPacket const &) = delete;
    InteractPacket(class InteractPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~InteractPacket();
    /**
     * @hash   759411120
     * @vftbl  1
     * @symbol ?getId@InteractPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -2047459235
     * @vftbl  2
     * @symbol ?getName@InteractPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1316790026
     * @vftbl  3
     * @symbol ?write@InteractPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   898834714
     * @vftbl  6
     * @symbol ?_read@InteractPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1178918582
     * @symbol ??0InteractPacket@@QEAA@XZ
     */
    MCAPI InteractPacket();
    /**
     * @hash   -155800659
     * @symbol ??0InteractPacket@@QEAA@W4Action@0@VActorRuntimeID@@AEBVVec3@@@Z
     */
    MCAPI InteractPacket(enum class InteractPacket::Action, class ActorRuntimeID, class Vec3 const &);

};