#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameModeExt {
// NOLINTBEGIN
/**
 * @symbol
 * ?createDefaultMessenger\@GameModeExt\@\@YA?AV?$unique_ptr\@UIGameModeMessenger\@\@U?$default_delete\@UIGameModeMessenger\@\@\@std\@\@\@std\@\@AEAVPlayer\@\@\@Z
 */
MCAPI std::unique_ptr<struct IGameModeMessenger> createDefaultMessenger(class Player&);
/**
 * @symbol
 * ?createDefaultTimer\@GameModeExt\@\@YA?AV?$unique_ptr\@UIGameModeTimer\@\@U?$default_delete\@UIGameModeTimer\@\@\@std\@\@\@std\@\@AEBVPlayer\@\@\@Z
 */
MCAPI std::unique_ptr<struct IGameModeTimer> createDefaultTimer(class Player const&);
// NOLINTEND

}; // namespace GameModeExt
