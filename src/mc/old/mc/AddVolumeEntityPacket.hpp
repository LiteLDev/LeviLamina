/**
 * @file  AddVolumeEntityPacket.hpp
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
 * @brief MC class AddVolumeEntityPacket.
 *
 */
class AddVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDVOLUMEENTITYPACKET
public:
    class AddVolumeEntityPacket& operator=(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket(class AddVolumeEntityPacket const &) = delete;
    AddVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AddVolumeEntityPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@AddVolumeEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@AddVolumeEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@AddVolumeEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@AddVolumeEntityPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0AddVolumeEntityPacket\@\@QEAA\@AEBVEntityContext\@\@VCompoundTag\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI AddVolumeEntityPacket(class EntityContext const &, class CompoundTag, class SemVersion const &);

};