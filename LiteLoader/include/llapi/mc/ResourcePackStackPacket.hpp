/**
 * @file  ResourcePackStackPacket.hpp
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
 * @brief MC class ResourcePackStackPacket.
 *
 */
class ResourcePackStackPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKSTACKPACKET
public:
    class ResourcePackStackPacket& operator=(class ResourcePackStackPacket const &) = delete;
    ResourcePackStackPacket(class ResourcePackStackPacket const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ResourcePackStackPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ResourcePackStackPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ResourcePackStackPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ResourcePackStackPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKSTACKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackStackPacket();
#endif
    /**
     * @symbol ??0ResourcePackStackPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackStackPacket();
    /**
     * @symbol ??0ResourcePackStackPacket\@\@QEAA\@V?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@0AEBVBaseGameVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI ResourcePackStackPacket(std::vector<struct PackInstanceId>, std::vector<struct PackInstanceId>, class BaseGameVersion const &, bool, class Experiments const &);

};
