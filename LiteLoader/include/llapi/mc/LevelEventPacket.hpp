/**
 * @file  LevelEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelEventPacket.
 *
 */
class LevelEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTPACKET
public:
    class LevelEventPacket& operator=(class LevelEventPacket const &) = delete;
    LevelEventPacket(class LevelEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@LevelEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@LevelEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@LevelEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@LevelEventPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelEventPacket();
#endif
    /**
     * @symbol ??0LevelEventPacket\@\@QEAA\@W4LevelEvent\@\@MMMH\@Z
     */
    MCAPI LevelEventPacket(enum class LevelEvent, float, float, float, int);
    /**
     * @symbol ??0LevelEventPacket\@\@QEAA\@XZ
     */
    MCAPI LevelEventPacket();
    /**
     * @symbol ??0LevelEventPacket\@\@QEAA\@W4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI LevelEventPacket(enum class LevelEvent, class Vec3 const &, int);

};
