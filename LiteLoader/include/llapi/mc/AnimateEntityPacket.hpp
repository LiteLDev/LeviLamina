/**
 * @file  AnimateEntityPacket.hpp
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
 * @brief MC class AnimateEntityPacket.
 *
 */
class AnimateEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEENTITYPACKET
public:
    class AnimateEntityPacket& operator=(class AnimateEntityPacket const &) = delete;
    AnimateEntityPacket(class AnimateEntityPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~AnimateEntityPacket();
    /**
     * @hash   1767613762
     * @vftbl  1
     * @symbol ?getId@AnimateEntityPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -591421457
     * @vftbl  2
     * @symbol ?getName@AnimateEntityPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1538665032
     * @vftbl  3
     * @symbol ?write@AnimateEntityPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -279952744
     * @vftbl  6
     * @symbol ?_read@AnimateEntityPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1887695032
     * @symbol ??0AnimateEntityPacket@@QEAA@XZ
     */
    MCAPI AnimateEntityPacket();
    /**
     * @hash   -572049940
     * @symbol ??0AnimateEntityPacket@@QEAA@AEBV?$vector@VActorRuntimeID@@V?$allocator@VActorRuntimeID@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@1M1W4MolangVersion@@1@Z
     */
    MCAPI AnimateEntityPacket(std::vector<class ActorRuntimeID> const &, std::string const &, std::string const &, float, std::string const &, enum class MolangVersion, std::string const &);

};