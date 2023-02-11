/**
 * @file  PlayStatusPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class PlayStatus : int {
    PlayStatusLoginSuccess,
    PlayStatusLoginFailedClient,
    PlayStatusLoginFailedServer,
    PlayStatusPlayerSpawn,
    PlayStatusLoginFailedInvalidTenant,
    PlayStatusLoginFailedVanillaEdu,
    PlayStatusLoginFailedEduVanilla,
    PlayStatusLoginFailedServerFull,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayStatusPacket.
 *
 */
class PlayStatusPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    PlayStatus status;

    inline std::string toDebugString() {
        return fmt::format("{}: status: {}",
            __super::toDebugString(), (int)status);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSTATUSPACKET
public:
    class PlayStatusPacket& operator=(class PlayStatusPacket const &) = delete;
    PlayStatusPacket(class PlayStatusPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayStatusPacket();
    /**
     * @hash   463118944
     * @vftbl  1
     * @symbol  ?getId\@PlayStatusPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -796923283
     * @vftbl  2
     * @symbol  ?getName\@PlayStatusPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -259675334
     * @vftbl  3
     * @symbol  ?write\@PlayStatusPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   1935573450
     * @vftbl  6
     * @symbol  ?_read\@PlayStatusPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -976062982
     * @symbol  ??0PlayStatusPacket\@\@QEAA\@XZ
     */
    MCAPI PlayStatusPacket();
    /**
     * @hash   -817608687
     * @symbol  ??0PlayStatusPacket\@\@QEAA\@W4PlayStatus\@\@\@Z
     */
    MCAPI PlayStatusPacket(enum class PlayStatus);

};