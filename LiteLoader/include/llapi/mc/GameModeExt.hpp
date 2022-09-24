/**
 * @file  GameModeExt.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace GameModeExt.
 *
 */
namespace GameModeExt {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   366051792
     * @symbol ?createDefaultMessenger@GameModeExt@@YA?AV?$unique_ptr@UIGameModeMessenger@@U?$default_delete@UIGameModeMessenger@@@std@@@std@@AEAVPlayer@@@Z
     */
    MCAPI std::unique_ptr<struct IGameModeMessenger> createDefaultMessenger(class Player &);
    /**
     * @hash   -388302546
     * @symbol ?createDefaultTimer@GameModeExt@@YA?AV?$unique_ptr@UIGameModeTimer@@U?$default_delete@UIGameModeTimer@@@std@@@std@@AEBVPlayer@@@Z
     */
    MCAPI std::unique_ptr<struct IGameModeTimer> createDefaultTimer(class Player const &);

};