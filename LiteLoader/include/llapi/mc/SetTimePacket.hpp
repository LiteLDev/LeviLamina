/**
 * @file  SetTimePacket.hpp
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
 * @brief MC class SetTimePacket.
 *
 */
class SetTimePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTIMEPACKET
public:
    class SetTimePacket& operator=(class SetTimePacket const &) = delete;
    SetTimePacket(class SetTimePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetTimePacket();
    /**
     * @hash   -1921379577
     * @vftbl  1
     * @symbol  ?getId\@SetTimePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1966232140
     * @vftbl  2
     * @symbol  ?getName\@SetTimePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -180472733
     * @vftbl  3
     * @symbol  ?write\@SetTimePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   549471155
     * @vftbl  6
     * @symbol  ?_read\@SetTimePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   916852547
     * @symbol  ??0SetTimePacket\@\@QEAA\@XZ
     */
    MCAPI SetTimePacket();
    /**
     * @hash   -611174296
     * @symbol  ??0SetTimePacket\@\@QEAA\@H\@Z
     */
    MCAPI SetTimePacket(int);

};