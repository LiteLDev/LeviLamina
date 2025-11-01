#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerToServerCommands : int {
    ProcessGetRequest = 0,
    ProcessGetResponse = 1,
    AddUploadedAndSubscribedKeys = 2,
    AddUploadedKey = 3,
    AddSubscribedKey = 4,
    RemoveUploadedKey = 5,
    RemoveSubscribedKey = 6,
    DataChanged = 7,
};
