/**
 * @file  SetDisplayObjectivePacket.hpp
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
 * @brief MC class SetDisplayObjectivePacket.
 *
 */
class SetDisplayObjectivePacket : public Packet {

#define AFTER_EXTRA
// Add Member There
    char filler[136];

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDISPLAYOBJECTIVEPACKET
public:
    class SetDisplayObjectivePacket& operator=(class SetDisplayObjectivePacket const &) = delete;
    SetDisplayObjectivePacket(class SetDisplayObjectivePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetDisplayObjectivePacket();
    /**
     * @hash   1331122541
     * @vftbl  1
     * @symbol  ?getId\@SetDisplayObjectivePacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -927486950
     * @vftbl  2
     * @symbol  ?getName\@SetDisplayObjectivePacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -369285587
     * @vftbl  3
     * @symbol  ?write\@SetDisplayObjectivePacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1956433261
     * @vftbl  6
     * @symbol  ?_read\@SetDisplayObjectivePacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1217782291
     * @symbol  ??0SetDisplayObjectivePacket\@\@QEAA\@XZ
     */
    MCAPI SetDisplayObjectivePacket();
    /**
     * @hash   -1752430607
     * @symbol  ??0SetDisplayObjectivePacket\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@000W4ObjectiveSortOrder\@\@\@Z
     */
    MCAPI SetDisplayObjectivePacket(std::string const &, std::string const &, std::string const &, std::string const &, enum class ObjectiveSortOrder);

};