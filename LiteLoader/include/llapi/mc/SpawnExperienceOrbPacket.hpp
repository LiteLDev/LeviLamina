/**
 * @file  SpawnExperienceOrbPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnExperienceOrbPacket.
 *
 */
class SpawnExperienceOrbPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNEXPERIENCEORBPACKET
public:
    class SpawnExperienceOrbPacket& operator=(class SpawnExperienceOrbPacket const &) = delete;
    SpawnExperienceOrbPacket(class SpawnExperienceOrbPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SpawnExperienceOrbPacket();
    /**
     * @hash   -335613108
     * @vftbl  1
     * @symbol  ?getId\@SpawnExperienceOrbPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -991002119
     * @vftbl  2
     * @symbol  ?getName\@SpawnExperienceOrbPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1993512558
     * @vftbl  3
     * @symbol  ?write\@SpawnExperienceOrbPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1036822114
     * @vftbl  6
     * @symbol  ?_read\@SpawnExperienceOrbPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -482094130
     * @symbol  ??0SpawnExperienceOrbPacket\@\@QEAA\@XZ
     */
    MCAPI SpawnExperienceOrbPacket();
    /**
     * @hash   -1449929314
     * @symbol  ??0SpawnExperienceOrbPacket\@\@QEAA\@AEBVVec3\@\@H\@Z
     */
    MCAPI SpawnExperienceOrbPacket(class Vec3 const &, int);

};