/**
 * @file  GameDataSaveTimer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class GameDataSaveTimer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEDATASAVETIMER
public:
    class GameDataSaveTimer& operator=(class GameDataSaveTimer const &) = delete;
    GameDataSaveTimer(class GameDataSaveTimer const &) = delete;
    GameDataSaveTimer() = delete;
#endif

public:
    /**
     * @symbol ??0GameDataSaveTimer\@\@QEAA\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI GameDataSaveTimer(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol ?areStorageActionsAllowed\@GameDataSaveTimer\@\@QEBA_NXZ
     */
    MCAPI bool areStorageActionsAllowed() const;
    /**
     * @symbol ?calculateNextGameDataSaveTime\@GameDataSaveTimer\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@V234\@\@Z
     */
    MCAPI class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> calculateNextGameDataSaveTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    /**
     * @symbol ?isNextGameDataSaveTimeSet\@GameDataSaveTimer\@\@QEBA_NXZ
     */
    MCAPI bool isNextGameDataSaveTimeSet() const;
    /**
     * @symbol ?isTimeForGameDataSave\@GameDataSaveTimer\@\@QEBA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool isTimeForGameDataSave(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    /**
     * @symbol ?isTimeForStorageCheck\@GameDataSaveTimer\@\@QEBA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool isTimeForStorageCheck(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const;
    /**
     * @symbol ?onAppSuspend\@GameDataSaveTimer\@\@QEAAXXZ
     */
    MCAPI void onAppSuspend();
    /**
     * @symbol ?onStartLeaveGame\@GameDataSaveTimer\@\@QEAAXXZ
     */
    MCAPI void onStartLeaveGame();
    /**
     * @symbol ?onUpdateAfterStorageDeferred\@GameDataSaveTimer\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void onUpdateAfterStorageDeferred(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?requestTimedStorageDeferment\@GameDataSaveTimer\@\@QEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<void *> requestTimedStorageDeferment();
    /**
     * @symbol ?setNextGameDataSaveTime\@GameDataSaveTimer\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setNextGameDataSaveTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?setNextStorageCheckTime\@GameDataSaveTimer\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void setNextStorageCheckTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    /**
     * @symbol ?setWasStorageSavePreviouslyDeferred\@GameDataSaveTimer\@\@QEAAX_N\@Z
     */
    MCAPI void setWasStorageSavePreviouslyDeferred(bool);
    /**
     * @symbol ?wasStorageSavePreviouslyDeferred\@GameDataSaveTimer\@\@QEBA_NXZ
     */
    MCAPI bool wasStorageSavePreviouslyDeferred() const;
    /**
     * @symbol ??1GameDataSaveTimer\@\@QEAA\@XZ
     */
    MCAPI ~GameDataSaveTimer();
    /**
     * @symbol ?calculateNextStorageCheckTime\@GameDataSaveTimer\@\@SA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@V234\@\@Z
     */
    MCAPI static class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>> calculateNextStorageCheckTime(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);

};
