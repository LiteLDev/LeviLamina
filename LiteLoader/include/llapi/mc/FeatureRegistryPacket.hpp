/**
 * @file  FeatureRegistryPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../FeatureRegistry.hpp"
#include "../../Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureRegistryPacket.
 *
 */
class FeatureRegistryPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRYPACKET
public:
    class FeatureRegistryPacket& operator=(class FeatureRegistryPacket const &) = delete;
    FeatureRegistryPacket(class FeatureRegistryPacket const &) = delete;
    FeatureRegistryPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FeatureRegistryPacket();
    /**
     * @hash   -548078157
     * @vftbl  1
     * @symbol  ?getId\@FeatureRegistryPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   724047968
     * @vftbl  2
     * @symbol  ?getName\@FeatureRegistryPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1810440615
     * @vftbl  3
     * @symbol  ?write\@FeatureRegistryPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1906987175
     * @vftbl  6
     * @symbol  ?_read\@FeatureRegistryPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -122721440
     * @symbol  ??0FeatureRegistryPacket\@\@QEAA\@AEBV?$vector\@UFeatureBinaryJsonFormat\@FeatureRegistry\@\@V?$allocator\@UFeatureBinaryJsonFormat\@FeatureRegistry\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI FeatureRegistryPacket(std::vector<struct FeatureRegistry::FeatureBinaryJsonFormat> const &);

};