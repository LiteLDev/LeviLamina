/**
 * @file  EventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "MinecraftEventing.hpp"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "Level.hpp"
#include "Player.hpp"

enum class EventType : int {
    ACHIEVEMENT_AWARDED,
    ENTITY_INTERACT,
    PORTAL_BUILT,
    PORTAL_USED,
    MOB_KILLED,
    CAULDRON_USED,
    PLAYER_DEATH,
    BOSS_KILLED,
    AGENT_COMMAND,
    AGENT_CREATED,
    PATTERN_REMOVED,
    SLASH_COMMAND_EXECUTED,
    FISH_BUCKETED,
    MOB_BORN,
    PET_DIED,
    CAULDRON_BLOCK_USED,
    COMPOSTER_BLOCK_USED,
    BELL_BLOCK_USED,
};

#undef BEFORE_EXTRA

/**
 * @brief MC class EventPacket.
 *
 */
class EventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    struct Data {
        EventType type;
        unsigned char usePlayerId; // whether uniqueId is set
        int int_8;//fromDimensionID in PORTAL_USED Event
        int int_12;//toDimensionID in PORTAL_USED Event
        char filler16[40 - 16];
        std::string unk40;
        std::string unk72;
        std::string unk104;
        std::string unk136;
        std::string unk168;
        std::string unk200;
        std::string unk232;
    };//size: 264
    enum class AgentResult;

    ActorUniqueID uniqueId;
    Data data;

    inline std::string toDebugString() {
        std::string name = data.usePlayerId ? Global<Level>->getPlayer(uniqueId)->getNameTag() : "Null";
        std::string debugString = fmt::format("{}: type: {}, player: {}",
            __super::toDebugString(), (int)data.type, name);
        if (data.type == EventType::PORTAL_USED) {
            debugString.append(", dimension: {}->{}", data.int_8, data.int_12);
        }
        return debugString;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTPACKET
public:
    class EventPacket& operator=(class EventPacket const &) = delete;
    EventPacket(class EventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~EventPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@EventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@EventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@EventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@EventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@XZ
     */
    MCAPI EventPacket();
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@W4AchievementIds\@MinecraftEventing\@\@_N\@Z
     */
    MCAPI EventPacket(class Player const *, enum class MinecraftEventing::AchievementIds, bool);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@V?$not_null\@PEBVMob\@\@\@gsl\@\@\@Z
     */
    MCAPI EventPacket(class Player const *, class gsl::not_null<class Mob const *>);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@V?$not_null\@PEBVActor\@\@\@gsl\@\@W4InteractionType\@MinecraftEventing\@\@\@Z
     */
    MCAPI EventPacket(class Player const *, class gsl::not_null<class Actor const *>, enum class MinecraftEventing::InteractionType);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI EventPacket(class Player const *, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@V?$AutomaticID\@VDimension\@\@H\@\@1\@Z
     */
    MCAPI EventPacket(class Player const *, class AutomaticID<class Dimension, int>, class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@PEBVActor\@\@V?$not_null\@PEBVMob\@\@\@gsl\@\@W4ActorDamageCause\@\@W4ActorType\@\@\@Z
     */
    MCAPI EventPacket(class Player const *, class Actor const *, class gsl::not_null<class Mob const *>, enum class ActorDamageCause, enum class ActorType);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@PEBVActor\@\@V?$not_null\@PEBVMob\@\@\@gsl\@\@W4ActorDamageCause\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4ActorType\@\@\@Z
     */
    MCAPI EventPacket(class Player const *, class Actor const *, class gsl::not_null<class Mob const *>, enum class ActorDamageCause, std::string, int, enum class ActorType);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@HV?$not_null\@PEBVActor\@\@\@gsl\@\@\@Z
     */
    MCAPI EventPacket(class Player const *, int, class gsl::not_null<class Actor const *>);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@HHW4ActorDamageCause\@\@_N\@Z
     */
    MCAPI EventPacket(class Player const *, int, int, enum class ActorDamageCause, bool);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@FIF\@Z
     */
    MCAPI EventPacket(class Player const *, short, unsigned int, short);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@AEBVRaid\@\@_N\@Z
     */
    MCAPI EventPacket(class Player const *, class Raid const &, bool);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH1\@Z
     */
    MCAPI EventPacket(class Player const *, std::string const &, int, int, std::string const &);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@PEBVPlayer\@\@AEBUData\@0\@\@Z
     */
    MCAPI EventPacket(class Player const *, struct EventPacket::Data const &);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@AEBVPlayer\@\@W4MovementEventType\@\@MMMMM\@Z
     */
    MCAPI EventPacket(class Player const &, enum class MovementEventType, float, float, float, float, float);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@AEBVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI EventPacket(class Player const &, std::string const &, int);
    /**
     * @symbol  ??0EventPacket\@\@QEAA\@AEBVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI EventPacket(class Player const &, std::string const &);
    /**
     * @symbol  ??4EventPacket\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class EventPacket & operator=(class EventPacket &&);

};