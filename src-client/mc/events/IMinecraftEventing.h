#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IMinecraftEventing {
public:
    // IMinecraftEventing inner types declare
    // clang-format off
    struct CommandParseTableEntry;
    // clang-format on

    // IMinecraftEventing inner types define
    enum class AddedFriendLocation : uint {};

    enum class AuthenticationOutcome : uint {};

    enum class CDNDownloadEventOrigin : uint {};

    enum class CDNDownloadResult : uint {};

    enum class ChunkCacheResultType : uint {};

    enum class ClubsEngagementAction : uint {};

    enum class ClubsEngagementTargetType : uint {};

    enum class ClubsFeedScreenSource : uint {};

    enum class DayOneExperienceState : uint {};

    enum class DeviceAccountFailurePhase : uint {};

    enum class EducationLessonAction : uint {};

    enum class ElementConstructorUseType : uint {};

    enum class ExploitType : uint {};

    enum class ExportOutcome : uint {};

    enum class ExportStage : uint {};

    enum class FileTransmissionDirection : uint {};

    enum class FileTransmissionState : uint {};

    enum class FileTransmissionType : uint {};

    enum class IgnoredNotificationSource : uint {};

    enum class IgnoredNotificationsType : uint {};

    enum class LessonCompleteDialogEntryPoint : uint {};

    enum class MarkLevelForSyncReason : uint {};

    enum class MultiplayerSessionUpdateTrigger : uint {};

    enum class PetDeathContext : uint {};

    enum class ProfileError : uint {};

    enum class PromotionType : uint {};

    enum class PurchaseResult : uint {};

    enum class PurchaseStage : uint {};

    enum class RealmConnectionFlow : uint {};

    enum class RealmConnectionLambda : uint {};

    enum class RealmConnectionResult : uint {};

    enum class ServerType : uint {};

    enum class ShareMode : uint {};

    enum class SignInAccountType : uint {};

    enum class SignInStage : uint {};

    enum class StoreType : uint {};

    enum class StructureBlockActionType : uint {};

    enum class WorldClassroomCustomization : uint {};

    struct CommandParseTableEntry {};
};
