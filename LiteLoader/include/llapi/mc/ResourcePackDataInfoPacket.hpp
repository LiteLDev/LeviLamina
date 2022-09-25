/**
 * @file  ResourcePackDataInfoPacket.hpp
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
 * @brief MC class ResourcePackDataInfoPacket.
 *
 */
class ResourcePackDataInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    string mPackId;
    unsigned int maxChunkSize;
    int chunkCount;
    unsigned __int64 compressedPackSize;
    string sha256;
    bool isPremium;
    int packType;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKDATAINFOPACKET
public:
    class ResourcePackDataInfoPacket& operator=(class ResourcePackDataInfoPacket const &) = delete;
    ResourcePackDataInfoPacket(class ResourcePackDataInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ResourcePackDataInfoPacket();
    /**
     * @hash   592194375
     * @vftbl  1
     * @symbol ?getId@ResourcePackDataInfoPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   979761780
     * @vftbl  2
     * @symbol ?getName@ResourcePackDataInfoPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1967499715
     * @vftbl  3
     * @symbol ?write@ResourcePackDataInfoPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1415660669
     * @vftbl  6
     * @symbol ?_read@ResourcePackDataInfoPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   972805539
     * @symbol ??0ResourcePackDataInfoPacket@@QEAA@XZ
     */
    MCAPI ResourcePackDataInfoPacket();
    /**
     * @hash   1164443464
     * @symbol ??0ResourcePackDataInfoPacket@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IH_K0_NW4PackType@@@Z
     */
    MCAPI ResourcePackDataInfoPacket(std::string const &, unsigned int, int, unsigned __int64, std::string const &, bool, enum PackType);

};