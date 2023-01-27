/**
 * @file  NetworkSettingsPacket.hpp
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
 * @brief MC class NetworkSettingsPacket.
 *
 */
class NetworkSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSETTINGSPACKET
public:
    class NetworkSettingsPacket& operator=(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkSettingsPacket();
    /**
     * @hash   370460773
     * @vftbl  1
     * @symbol  ?getId\@NetworkSettingsPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -507130254
     * @vftbl  2
     * @symbol  ?getName\@NetworkSettingsPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1571942763
     * @vftbl  3
     * @symbol  ?write\@NetworkSettingsPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1928388683
     * @vftbl  6
     * @symbol  ?_read\@NetworkSettingsPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);

};