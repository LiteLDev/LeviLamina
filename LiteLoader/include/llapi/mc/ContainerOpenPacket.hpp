/**
 * @file  ContainerOpenPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerOpenPacket.
 *
 */
class ContainerOpenPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINEROPENPACKET
public:
    class ContainerOpenPacket& operator=(class ContainerOpenPacket const &) = delete;
    ContainerOpenPacket(class ContainerOpenPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ContainerOpenPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ContainerOpenPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ContainerOpenPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ContainerOpenPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINEROPENPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerOpenPacket();
#endif
    /**
     * @symbol ??0ContainerOpenPacket\@\@QEAA\@XZ
     */
    MCAPI ContainerOpenPacket();
    /**
     * @symbol ??0ContainerOpenPacket\@\@QEAA\@W4ContainerID\@\@W4ContainerType\@\@AEBVBlockPos\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI ContainerOpenPacket(enum class ContainerID, enum class ContainerType, class BlockPos const &, struct ActorUniqueID const &);

};
