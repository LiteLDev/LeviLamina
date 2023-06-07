/**
 * @file  LevelStorageManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class LevelStorageManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSTORAGEMANAGER
public:
    class LevelStorageManager& operator=(class LevelStorageManager const &) = delete;
    LevelStorageManager(class LevelStorageManager const &) = delete;
    LevelStorageManager() = delete;
#endif

public:
    /**
     * @symbol ??0LevelStorageManager\@\@QEAA\@V?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI LevelStorageManager(std::unique_ptr<class LevelStorage>);
    /**
     * @symbol ?getLevelStorage\@LevelStorageManager\@\@QEAAPEAVLevelStorage\@\@XZ
     */
    MCAPI class LevelStorage * getLevelStorage();
    /**
     * @symbol ?getLevelStorage\@LevelStorageManager\@\@QEBAPEBVLevelStorage\@\@XZ
     */
    MCAPI class LevelStorage const * getLevelStorage() const;
    /**
     * @symbol ?getSavedDataStorage\@LevelStorageManager\@\@QEAAAEAVSavedDataStorage\@\@XZ
     */
    MCAPI class SavedDataStorage & getSavedDataStorage();
    /**
     * @symbol ?registerOnSaveGameDataCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnSaveGameDataCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?registerOnSaveLevelDataCallback\@LevelStorageManager\@\@QEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVLevelStorage\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Bedrock::PubSub::Subscription registerOnSaveLevelDataCallback(class std::function<void (class LevelStorage &)>);
    /**
     * @symbol ?saveGameData\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void saveGameData();
    /**
     * @symbol ?saveLevelData\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void saveLevelData();
    /**
     * @symbol ?shutdown\@LevelStorageManager\@\@QEAAXXZ
     */
    MCAPI void shutdown();
    /**
     * @symbol ??1LevelStorageManager\@\@QEAA\@XZ
     */
    MCAPI ~LevelStorageManager();

};
