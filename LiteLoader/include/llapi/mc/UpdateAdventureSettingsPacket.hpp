/**
 * @file  UpdateAdventureSettingsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateAdventureSettingsPacket.
 *
 */
class UpdateAdventureSettingsPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEADVENTURESETTINGSPACKET
public:
    class UpdateAdventureSettingsPacket& operator=(class UpdateAdventureSettingsPacket const &) = delete;
    UpdateAdventureSettingsPacket(class UpdateAdventureSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~UpdateAdventureSettingsPacket();
    /**
     * @hash   216257676
     * @vftbl  1
     * @symbol  ?getId\@UpdateAdventureSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1609527495
     * @vftbl  2
     * @symbol  ?getName\@UpdateAdventureSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   664177934
     * @vftbl  3
     * @symbol  ?write\@UpdateAdventureSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1772248558
     * @vftbl  6
     * @symbol  ?_read\@UpdateAdventureSettingsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -562878482
     * @symbol  ??0UpdateAdventureSettingsPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateAdventureSettingsPacket();
    /**
     * @hash   1846270659
     * @symbol  ??0UpdateAdventureSettingsPacket\@\@QEAA\@AEBUAdventureSettings\@\@\@Z
     */
    MCAPI UpdateAdventureSettingsPacket(struct AdventureSettings const &);

};