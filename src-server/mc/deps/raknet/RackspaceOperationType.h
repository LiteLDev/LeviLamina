#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RackspaceOperationType : int {
    ConnectAndAuthenticate = 0,
    ListServers = 1,
    ListServersWithDetails = 2,
    CreateServer = 3,
    GetServerDetails = 4,
    UpdateServerNameOrPassword = 5,
    DeleteServer = 6,
    ListServerAddresses = 7,
    ShareServerAddress = 8,
    DeleteServerAddress = 9,
    RebootServer = 10,
    RebuildServer = 11,
    ResizeServer = 12,
    ConfirmResizedServer = 13,
    RevertResizedServer = 14,
    ListFlavors = 15,
    GetFlavorDetails = 16,
    ListImages = 17,
    CreateImage = 18,
    GetImageDetails = 19,
    DeleteImage = 20,
    ListSharedIpGroups = 21,
    ListSharedIpGroupsWithDetails = 22,
    CreateSharedIpGroup = 23,
    GetSharedIpGroupDetails = 24,
    DeleteSharedIpGroup = 25,
    None = 26,
};

}
