/**
 * @file  ShowCreditsPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShowCreditsPacket.
 *
 */
class ShowCreditsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    enum class CreditsState :int {
        START_CREDITS,
        END_CREDITS,
    };
    ActorRuntimeID runtimeId;
    CreditsState state;

    inline std::string toDebugString() {
        return fmt::format("{}: state: {}", __super::toDebugString(),
                           state == CreditsState::START_CREDITS ? "START_CREDITS" : "END_CREDITS");
    }


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOWCREDITSPACKET
public:
    class ShowCreditsPacket& operator=(class ShowCreditsPacket const &) = delete;
    ShowCreditsPacket(class ShowCreditsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ShowCreditsPacket();
    /**
     * @hash   464555961
     * @vftbl  1
     * @symbol ?getId@ShowCreditsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -280728986
     * @vftbl  2
     * @symbol ?getName@ShowCreditsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1364739969
     * @vftbl  3
     * @symbol ?write@ShowCreditsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1656235743
     * @vftbl  6
     * @symbol ?_read@ShowCreditsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1633577551
     * @symbol ??0ShowCreditsPacket@@QEAA@XZ
     */
    MCAPI ShowCreditsPacket();
    /**
     * @hash   -1116580806
     * @symbol ??0ShowCreditsPacket@@QEAA@VActorRuntimeID@@W4CreditsState@0@@Z
     */
    MCAPI ShowCreditsPacket(class ActorRuntimeID, enum ShowCreditsPacket::CreditsState);

};