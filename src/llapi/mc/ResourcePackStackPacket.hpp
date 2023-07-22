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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ResourcePackStackPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ResourcePackStackPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ResourcePackStackPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ResourcePackStackPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ResourcePackStackPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ResourcePackStackPacket\@\@QEAA\@XZ
     */
    MCAPI ResourcePackStackPacket();
    /**
     * @symbol  ??0ResourcePackStackPacket\@\@QEAA\@V?$vector\@UPackInstanceId\@\@V?$allocator\@UPackInstanceId\@\@\@std\@\@\@std\@\@0AEBVBaseGameVersion\@\@_NAEBVExperiments\@\@\@Z
     */
    MCAPI ResourcePackStackPacket(std::vector<struct PackInstanceId>, std::vector<struct PackInstanceId>, class BaseGameVersion const &, bool, class Experiments const &);

};