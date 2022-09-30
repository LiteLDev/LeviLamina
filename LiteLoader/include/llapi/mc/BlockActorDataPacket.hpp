/**
 * @file  BlockActorDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CompoundTag.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockActorDataPacket.
 *
 */
class BlockActorDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORDATAPACKET
public:
    class BlockActorDataPacket& operator=(class BlockActorDataPacket const &) = delete;
    BlockActorDataPacket(class BlockActorDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockActorDataPacket();
    /**
     * @hash   -1569808220
     * @vftbl  1
     * @symbol ?getId@BlockActorDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -929288367
     * @vftbl  2
     * @symbol ?getName@BlockActorDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   831527030
     * @vftbl  3
     * @symbol ?write@BlockActorDataPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1154378806
     * @vftbl  6
     * @symbol ?_read@BlockActorDataPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1544101366
     * @symbol ??0BlockActorDataPacket@@QEAA@XZ
     */
    MCAPI BlockActorDataPacket();
    /**
     * @hash   515022616
     * @symbol ??0BlockActorDataPacket@@QEAA@AEBVBlockPos@@VCompoundTag@@@Z
     */
    MCAPI BlockActorDataPacket(class BlockPos const &, class CompoundTag);

};