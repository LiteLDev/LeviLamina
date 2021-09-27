#pragma once

enum class CommandPermissionLevel : char {
    Any         = 0,
    GameMasters = 1,
    Admin       = 2,
    Host        = 3,
    Owner       = 4,
    Internal    = 5,
};