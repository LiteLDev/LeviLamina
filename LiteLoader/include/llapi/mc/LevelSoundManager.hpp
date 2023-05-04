/**
 * @file  LevelSoundManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LevelSoundManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDMANAGER
public:
    class LevelSoundManager& operator=(class LevelSoundManager const &) = delete;
    LevelSoundManager(class LevelSoundManager const &) = delete;
    LevelSoundManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSOUNDMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LevelSoundManager();
#endif
    /**
     * @symbol ??0LevelSoundManager\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@_N\@Z
     */
    MCAPI LevelSoundManager(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, bool);
    /**
     * @symbol ?broadcastSoundEvent\@LevelSoundManager\@\@QEAAXAEAVIDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4PEAVPlayer\@\@\@Z
     */
    MCAPI void broadcastSoundEvent(class IDimension &, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool, class Player *);
    /**
     * @symbol ?getSoundPlayer\@LevelSoundManager\@\@QEBA?AV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> getSoundPlayer() const;
    /**
     * @symbol ?handleSoundEvent\@LevelSoundManager\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCAPI void handleSoundEvent(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol ?handleSoundEvent\@LevelSoundManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void handleSoundEvent(std::string const &, class Vec3 const &, float, float);
    /**
     * @symbol ?handleStopAllSounds\@LevelSoundManager\@\@QEAAXXZ
     */
    MCAPI void handleStopAllSounds();
    /**
     * @symbol ?handleStopSoundEvent\@LevelSoundManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void handleStopSoundEvent(std::string const &);
    /**
     * @symbol ?playSound\@LevelSoundManager\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol ?playSound\@LevelSoundManager\@\@QEAAXW4LevelSoundEvent\@\@AEBVVec3\@\@MM\@Z
     */
    MCAPI void playSound(enum class LevelSoundEvent, class Vec3 const &, float, float);
    /**
     * @symbol ?playSoundForPlayerInDimension\@LevelSoundManager\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N4PEAVPlayer\@\@\@Z
     */
    MCAPI void playSoundForPlayerInDimension(class AutomaticID<class Dimension, int>, enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool, class Player *);
    /**
     * @symbol ?playSynchronizedSound\@LevelSoundManager\@\@QEAAXAEAVIDimension\@\@W4LevelSoundEvent\@\@AEBVVec3\@\@PEAVPlayer\@\@HAEBUActorDefinitionIdentifier\@\@_N5\@Z
     */
    MCAPI void playSynchronizedSound(class IDimension &, enum class LevelSoundEvent, class Vec3 const &, class Player *, int, struct ActorDefinitionIdentifier const &, bool, bool);
    /**
     * @symbol ?registerOnHandleLevelSoundEventCallback\@LevelSoundManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXW4LevelSoundEvent\@\@AEBVVec3\@\@HAEBUActorDefinitionIdentifier\@\@_N3\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnHandleLevelSoundEventCallback(class std::function<void (enum class LevelSoundEvent, class Vec3 const &, int, struct ActorDefinitionIdentifier const &, bool, bool)>);
    /**
     * @symbol ?setLevelEventCoordinator\@LevelSoundManager\@\@QEAAXV?$shared_ptr\@VLevelEventCoordinator\@\@\@std\@\@\@Z
     */
    MCAPI void setLevelEventCoordinator(class std::shared_ptr<class LevelEventCoordinator>);
    /**
     * @symbol ?setPacketSender\@LevelSoundManager\@\@QEAAXAEAVPacketSender\@\@\@Z
     */
    MCAPI void setPacketSender(class PacketSender &);

};
