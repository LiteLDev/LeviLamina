#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameDataSaveTimer {

public:
    // prevent constructor by default
    GameDataSaveTimer& operator=(GameDataSaveTimer const&) = delete;
    GameDataSaveTimer(GameDataSaveTimer const&)            = delete;
    GameDataSaveTimer()                                    = delete;

public:
    /**
     * @symbol ??0GameDataSaveTimer\@\@QEAA\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI GameDataSaveTimer(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>); // NOLINT
    /**
     * @symbol ?areStorageActionsAllowed\@GameDataSaveTimer\@\@QEBA_NXZ
     */
    MCAPI bool areStorageActionsAllowed() const; // NOLINT
    /**
     * @symbol
     * ?calculateNextGameDataSaveTime\@GameDataSaveTimer\@\@QEBA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@V234\@\@Z
     */
    MCAPI class std::chrono::time_point<
        struct std::chrono::steady_clock,
        class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>
        calculateNextGameDataSaveTime(class std::chrono::time_point<
                                      struct std::chrono::steady_clock,
                                      class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>)
            const; // NOLINT
    /**
     * @symbol ?isNextGameDataSaveTimeSet\@GameDataSaveTimer\@\@QEBA_NXZ
     */
    MCAPI bool isNextGameDataSaveTimeSet() const; // NOLINT
    /**
     * @symbol
     * ?isTimeForGameDataSave\@GameDataSaveTimer\@\@QEBA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool
        isTimeForGameDataSave(class std::chrono::time_point<
                              struct std::chrono::steady_clock,
                              class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const; // NOLINT
    /**
     * @symbol
     * ?isTimeForStorageCheck\@GameDataSaveTimer\@\@QEBA_NV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI bool
        isTimeForStorageCheck(class std::chrono::time_point<
                              struct std::chrono::steady_clock,
                              class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>) const; // NOLINT
    /**
     * @symbol ?onAppSuspend\@GameDataSaveTimer\@\@QEAAXXZ
     */
    MCAPI void onAppSuspend(); // NOLINT
    /**
     * @symbol ?onStartLeaveGame\@GameDataSaveTimer\@\@QEAAXXZ
     */
    MCAPI void onStartLeaveGame(); // NOLINT
    /**
     * @symbol
     * ?onUpdateAfterStorageDeferred\@GameDataSaveTimer\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void
        onUpdateAfterStorageDeferred(class std::chrono::time_point<
                                     struct std::chrono::steady_clock,
                                     class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol ?requestTimedStorageDeferment\@GameDataSaveTimer\@\@QEAA?AV?$shared_ptr\@PEAX\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<void*> requestTimedStorageDeferment(); // NOLINT
    /**
     * @symbol
     * ?setNextGameDataSaveTime\@GameDataSaveTimer\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void
        setNextGameDataSaveTime(class std::chrono::time_point<
                                struct std::chrono::steady_clock,
                                class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol
     * ?setNextStorageCheckTime\@GameDataSaveTimer\@\@QEAAXV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@Z
     */
    MCAPI void
        setNextStorageCheckTime(class std::chrono::time_point<
                                struct std::chrono::steady_clock,
                                class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
    /**
     * @symbol ?setWasStorageSavePreviouslyDeferred\@GameDataSaveTimer\@\@QEAAX_N\@Z
     */
    MCAPI void setWasStorageSavePreviouslyDeferred(bool); // NOLINT
    /**
     * @symbol ?wasStorageSavePreviouslyDeferred\@GameDataSaveTimer\@\@QEBA_NXZ
     */
    MCAPI bool wasStorageSavePreviouslyDeferred() const; // NOLINT
    /**
     * @symbol ??1GameDataSaveTimer\@\@QEAA\@XZ
     */
    MCAPI ~GameDataSaveTimer(); // NOLINT
    /**
     * @symbol
     * ?calculateNextStorageCheckTime\@GameDataSaveTimer\@\@SA?AV?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@V234\@\@Z
     */
    MCAPI static class std::chrono::time_point<
        struct std::chrono::steady_clock,
        class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>
        calculateNextStorageCheckTime(class std::chrono::time_point<
                                      struct std::chrono::steady_clock,
                                      class std::chrono::
                                          duration<__int64, struct std::ratio<1, 1000000000>>>); // NOLINT
};
