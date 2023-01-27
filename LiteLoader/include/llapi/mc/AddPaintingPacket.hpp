/**
 * @file  AddPaintingPacket.hpp
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
 * @brief MC class AddPaintingPacket.
 *
 */
class AddPaintingPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDPAINTINGPACKET
public:
    class AddPaintingPacket& operator=(class AddPaintingPacket const &) = delete;
    AddPaintingPacket(class AddPaintingPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AddPaintingPacket();
    /**
     * @hash   -1624816591
     * @vftbl  1
     * @symbol  ?getId\@AddPaintingPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -165536034
     * @vftbl  2
     * @symbol  ?getName\@AddPaintingPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   878544457
     * @vftbl  3
     * @symbol  ?write\@AddPaintingPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1340585655
     * @vftbl  6
     * @symbol  ?_read\@AddPaintingPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -164126439
     * @symbol  ??0AddPaintingPacket\@\@QEAA\@XZ
     */
    MCAPI AddPaintingPacket();
    /**
     * @hash   1282892070
     * @symbol  ??0AddPaintingPacket\@\@QEAA\@AEBVPainting\@\@\@Z
     */
    MCAPI AddPaintingPacket(class Painting const &);

};