/**
 * @file  RemoveVolumeEntityPacket.hpp
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
 * @brief MC class RemoveVolumeEntityPacket.
 *
 */
class RemoveVolumeEntityPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEVOLUMEENTITYPACKET
public:
    class RemoveVolumeEntityPacket& operator=(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket(class RemoveVolumeEntityPacket const &) = delete;
    RemoveVolumeEntityPacket() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@RemoveVolumeEntityPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@RemoveVolumeEntityPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@RemoveVolumeEntityPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@RemoveVolumeEntityPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_REMOVEVOLUMEENTITYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RemoveVolumeEntityPacket();
#endif
    /**
     * @symbol ??0RemoveVolumeEntityPacket\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI RemoveVolumeEntityPacket(class EntityContext &);

};
