/**
 * @file  LevelEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelEventListener.
 *
 */
class LevelEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTLISTENER
public:
    class LevelEventListener& operator=(class LevelEventListener const &) = delete;
    LevelEventListener(class LevelEventListener const &) = delete;
    LevelEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELEVENTLISTENER
    /**
     * @symbol  ?onEvent\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEBULevelNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct LevelNotificationEvent const &);
    /**
     * @symbol  ?onLevelAddedPlayer\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelAddedPlayer(class Level &, class Player &);
    /**
     * @symbol  ?onLevelBiomesRegistered\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelBiomesRegistered(class IWorldRegistriesProvider &);
    /**
     * @symbol  ?onLevelInitialized\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelInitialized(class Level &);
    /**
     * @symbol  ?onLevelRemovedActor\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedActor(class Level &, class Actor &);
    /**
     * @symbol  ?onLevelRemovedPlayer\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVPlayer\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelRemovedPlayer(class Level &, class Player &);
    /**
     * @symbol  ?onLevelSaveData\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@AEAVCompoundTag\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelSaveData(class Level &, class CompoundTag &);
    /**
     * @symbol  ?onLevelScriptTick\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelScriptTick(class Level &);
    /**
     * @symbol  ?onLevelTick\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEAVLevel\@\@\@Z
     */
    MCVAPI enum class EventResult onLevelTick(class Level &);
    /**
     * @symbol  ?onLevelWeatherChange\@LevelEventListener\@\@UEAA?AW4EventResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N1\@Z
     */
    MCVAPI enum class EventResult onLevelWeatherChange(std::string const &, bool, bool);
#endif

};