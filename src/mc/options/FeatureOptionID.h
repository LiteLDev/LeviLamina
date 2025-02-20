#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FeatureOptionID : int {
    None                                   = 0,
    NetworkLogAllPackets                   = 1,
    UIAsyncLoadingAndAnimations            = 2,
    Allow3rdPartyServerSplitscreen         = 3,
    ExposeHiddenCommands                   = 4,
    OreUIDebugging                         = 5,
    EDUServersUI                           = 6,
    AllowVirtualKeyboardAndMouse           = 7,
    Realms                                 = 8,
    RealmsBadReceipt                       = 9,
    RealmsContent                          = 10,
    RealmsSplitScreen                      = 11,
    EnableRealmsOreUIPurchase              = 12,
    EnableLoadTimer                        = 13,
    ExternalWorldTemplatePackSources       = 14,
    UseStagingDiscoveryEnvironment         = 15,
    UseDevDiscoveryEnvironment             = 16,
    UseLocalDiscoveryEnvironment           = 17,
    PlayerRenaming                         = 18,
    PersonaBackend                         = 19,
    PersonaSkin                            = 20,
    PersonaEnabled                         = 21,
    PersonaMultiplayerServiceEnabled       = 22,
    PersonaTestCatalog                     = 23,
    PersonaCape                            = 24,
    PersonaDressingRoomDebugging           = 25,
    PersonaTestFailToLoadCharacters        = 26,
    PersonaAutoReload                      = 27,
    PersonaTrustAllPacks                   = 28,
    StorefrontTestLayouts                  = 29,
    UseDevOffersIfAvailable                = 30,
    RenderDragonRenderPath                 = 31,
    EnableCodeBuilderNotebookUX            = 32,
    LevelStorage                           = 33,
    LevelStoragePerfLog                    = 34,
    DBStoragePerformanceData               = 35,
    TrueTypeFontLoading                    = 36,
    EnableItemStackNetManager              = 37,
    EnableClientContainerSimulation        = 38,
    EnableItemTransactionLogging           = 39,
    PauseMenuOnFocusLost                   = 40,
    EnableMovementPrediction               = 41,
    EnableMovementPredictionDebugLogging   = 42,
    EnableSpatialPacketOptimizations       = 43,
    ReportRaycastingCapability             = 44,
    DefaultAuthMovement                    = 45,
    LegacyClientAuthMovement               = 46,
    ClientAuthMovement                     = 47,
    ServerAuthMovement                     = 48,
    ServerAuthBlockBreaking                = 49,
    EnableXsapiLogging                     = 50,
    EnableExtraAchievementLogging          = 51,
    LibHttpClientImplementation            = 52,
    OverrideControlTowerLibHttpClient      = 53,
    EnablePacketRateLimiting               = 54,
    EnableXalWebView                       = 55,
    SendFullLevelChunk                     = 56,
    EnableLocalProfanityFilter             = 57,
    EnableRemoteProfanityFilter            = 58,
    UseClientRemoteAnimationComponentGroup = 59,
    ForceClientSideGenerationOn            = 60,
    EnableAnnouncementModalInAutomation    = 61,
    ShowDebugToasts                        = 62,
    EnableBlockNetworkIdsAreHashes         = 63,
    DebugVRMovement                        = 64,
    AsyncServicesManager                   = 65,
    Count                                  = 66,
};
