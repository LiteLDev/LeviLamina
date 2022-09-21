/**
 * @file  MC/PlayerSnapshotComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerSnapshotComponent.
 *
 */
struct PlayerSnapshotComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSNAPSHOTCOMPONENT
public:
    struct PlayerSnapshotComponent& operator=(struct PlayerSnapshotComponent const &) = delete;
    PlayerSnapshotComponent(struct PlayerSnapshotComponent const &) = delete;
    PlayerSnapshotComponent() = delete;
#endif

public:
    /**
     * @hash   505181625
     * @symbol ?hasStateFlag@PlayerSnapshotComponent@@QEBA_NW4PlayerSnapshotStateFlag@@@Z
     */
    MCAPI bool hasStateFlag(enum PlayerSnapshotStateFlag) const;
    /**
     * @hash   690468381
     * @symbol ?setStateFlag@PlayerSnapshotComponent@@QEAAXW4PlayerSnapshotStateFlag@@_N@Z
     */
    MCAPI void setStateFlag(enum PlayerSnapshotStateFlag, bool);

};