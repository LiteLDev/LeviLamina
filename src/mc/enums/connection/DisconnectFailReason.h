#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Connection {

enum class DisconnectFailReason {
    Unknown                              = 0x0,
    CantConnectNoInternet                = 0x1,
    NoPermissions                        = 0x2,
    UnrecoverableError                   = 0x3,
    ThirdPartyBlocked                    = 0x4,
    ThirdPartyNoInternet                 = 0x5,
    ThirdPartyBadIP                      = 0x6,
    ThirdPartyNoServerOrServerLocked     = 0x7,
    VersionMismatch                      = 0x8,
    SkinIssue                            = 0x9,
    InviteSessionNotFound                = 0xA,
    EduLevelSettingsMissing              = 0xB,
    LocalServerNotFound                  = 0xC,
    LegacyDisconnect                     = 0xD,
    UserLeaveGameAttempted               = 0xE,
    PlatformLockedSkinsError             = 0xF,
    RealmsWorldUnassigned                = 0x10,
    RealmsServerCantConnect              = 0x11,
    RealmsServerHidden                   = 0x12,
    RealmsServerDisabledBeta             = 0x13,
    RealmsServerDisabled                 = 0x14,
    CrossPlatformDisallowed              = 0x15,
    CantConnect                          = 0x16,
    SessionNotFound                      = 0x17,
    ClientSettingsIncompatibleWithServer = 0x18,
    ServerFull                           = 0x19,
    InvalidPlatformSkin                  = 0x1A,
    EditionVersionMismatch               = 0x1B,
    EditionMismatch                      = 0x1C,
    LevelNewerThanExeVersion             = 0x1D,
    NoFailOccurred                       = 0x1E,
    BannedSkin                           = 0x1F,
};
};
