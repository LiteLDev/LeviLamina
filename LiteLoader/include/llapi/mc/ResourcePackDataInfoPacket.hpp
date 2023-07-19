/**
 * @file  ResourcePackDataInfoPacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePackDataInfoPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ResourcePackDataInfoPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePackDataInfoPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ResourcePackDataInfoPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKDATAINFOPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackDataInfoPacket();
#endif
    /**
     * @symbol ??0ResourcePackDataInfoPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackDataInfoPacket();
    /**
     * @symbol ??0ResourcePackDataInfoPacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@IH_K0_NW4PackType\@\@\@Z
     */
    MCAPI ResourcePackDataInfoPacket(std::string const &, unsigned int, int, unsigned __int64, std::string const &, bool, enum class PackType);

};
