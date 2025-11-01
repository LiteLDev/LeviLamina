#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class RelayPluginEnums : int {
    MessageToServerFromClient     = 0,
    AddClientRequestFromClient    = 1,
    RemoveClientRequestFromClient = 2,
    GroupMessageFromClient        = 3,
    JoinGroupRequestFromClient    = 4,
    LeaveGroupRequestFromClient   = 5,
    GetGroupListRequestFromClient = 6,
    MessageToClientFromServer     = 7,
    AddClientNotAllowed           = 8,
    AddClientTargetNotConnected   = 9,
    AddClientNameAlreadyInUse     = 10,
    AddClientSuccess              = 11,
    UserEnteredRoom               = 12,
    UserLeftRoom                  = 13,
    GroupMsgFromServer            = 14,
    GetGroupListReplyFromServer   = 15,
    JoinGroupSuccess              = 16,
    JoinGroupFailure              = 17,
};

}
