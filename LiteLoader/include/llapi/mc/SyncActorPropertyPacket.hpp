/**
 * @file  SyncActorPropertyPacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SyncActorPropertyPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@SyncActorPropertyPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SyncActorPropertyPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 4
     * @symbol ?read\@SyncActorPropertyPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 7
     * @symbol ?_read\@SyncActorPropertyPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SYNCACTORPROPERTYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SyncActorPropertyPacket();
#endif
    /**
     * @symbol ??0SyncActorPropertyPacket\@\@QEAA\@AEBVHashedString\@\@AEBVPropertyGroupManager\@\@\@Z
     */
    MCAPI SyncActorPropertyPacket(class HashedString const &, class PropertyGroupManager const &);
    /**
     * @symbol ??0SyncActorPropertyPacket\@\@QEAA\@XZ
     */
    MCAPI SyncActorPropertyPacket();

};
