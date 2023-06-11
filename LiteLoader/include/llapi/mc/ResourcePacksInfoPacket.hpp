/**
 * @file  ResourcePacksInfoPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "PackInfoData.hpp"
#include "PackIdVersion.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePacksInfoPacket.
 *
 */
class ResourcePacksInfoPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    bool mTexturePackRequired;
    bool mHasScripts;
    bool mForceServerPacks;
    std::vector<struct PackInfoData> mAddOnPacks;
    std::vector<struct PackInfoData> mTexturePacks;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKSINFOPACKET
public:
    class ResourcePacksInfoPacket& operator=(class ResourcePacksInfoPacket const &) = delete;
    ResourcePacksInfoPacket(class ResourcePacksInfoPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePacksInfoPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ResourcePacksInfoPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePacksInfoPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ResourcePacksInfoPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKSINFOPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePacksInfoPacket();
#endif
    /**
     * @symbol ??0ResourcePacksInfoPacket\@\@QEAA\@_NAEAV?$vector\@UPackInfoData\@\@V?$allocator\@UPackInfoData\@\@\@std\@\@\@std\@\@10\@Z
     */
    MCAPI ResourcePacksInfoPacket(bool, std::vector<struct PackInfoData> &, std::vector<struct PackInfoData> &, bool);
    /**
     * @symbol ??0ResourcePacksInfoPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePacksInfoPacket();

};
