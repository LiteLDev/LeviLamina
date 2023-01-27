/**
 * @file  BiomeDefinitionListPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeDefinitionListPacket.
 *
 */
class BiomeDefinitionListPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEDEFINITIONLISTPACKET
public:
    class BiomeDefinitionListPacket& operator=(class BiomeDefinitionListPacket const &) = delete;
    BiomeDefinitionListPacket(class BiomeDefinitionListPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BiomeDefinitionListPacket();
    /**
     * @hash   1314149973
     * @vftbl  1
     * @symbol  ?getId\@BiomeDefinitionListPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   6402306
     * @vftbl  2
     * @symbol  ?getName\@BiomeDefinitionListPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -833663435
     * @vftbl  3
     * @symbol  ?write\@BiomeDefinitionListPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1974177366
     * @vftbl  4
     * @symbol  ?readExtended\@BiomeDefinitionListPacket\@\@UEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
    /**
     * @hash   -2141811563
     * @vftbl  6
     * @symbol  ?_read\@BiomeDefinitionListPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1370984043
     * @symbol  ??0BiomeDefinitionListPacket\@\@QEAA\@XZ
     */
    MCAPI BiomeDefinitionListPacket();

};