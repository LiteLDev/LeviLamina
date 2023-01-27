/**
 * @file  ServerSettingsRequestPacket.hpp
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
 * @brief MC class ServerSettingsRequestPacket.
 *
 */
class ServerSettingsRequestPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERSETTINGSREQUESTPACKET
public:
    class ServerSettingsRequestPacket& operator=(class ServerSettingsRequestPacket const &) = delete;
    ServerSettingsRequestPacket(class ServerSettingsRequestPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerSettingsRequestPacket();
    /**
     * @hash   1954654989
     * @vftbl  1
     * @symbol  ?getId\@ServerSettingsRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1294108090
     * @vftbl  2
     * @symbol  ?getName\@ServerSettingsRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1358295587
     * @vftbl  3
     * @symbol  ?write\@ServerSettingsRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1065547821
     * @vftbl  6
     * @symbol  ?_read\@ServerSettingsRequestPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   60682605
     * @symbol  ??0ServerSettingsRequestPacket\@\@QEAA\@XZ
     */
    MCAPI ServerSettingsRequestPacket();

};