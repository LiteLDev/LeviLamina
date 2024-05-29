#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftEventing {
public:
    // IMinecraftEventing inner types declare
    // clang-format off
    struct CommandParseTableEntry;
    // clang-format on

    // IMinecraftEventing inner types define
    enum class AddedFriendLocation {};

    enum class CDNDownloadEventOrigin {};

    enum class CDNDownloadResult {};

    enum class ClubsEngagementAction {};

    enum class ClubsEngagementTargetType {};

    enum class ClubsFeedScreenSource {};

    enum class DayOneExperienceState {};

    enum class DeviceAccountFailurePhase {};

    enum class EducationLessonAction {};

    enum class ElementConstructorUseType {};

    enum class ExploitType {};

    enum class ExportOutcome {};

    enum class ExportStage {};

    enum class IgnoredNotificationSource {};

    enum class IgnoredNotificationsType {};

    enum class LessonCompleteDialogEntryPoint {};

    enum class NetworkType {};

    enum class PromotionType {};

    enum class PurchaseResult {};

    enum class RealmConnectionFlow {};

    enum class RealmConnectionLambda {};

    enum class RealmConnectionResult {};

    enum class ServerType {};

    enum class ShareMode {};

    enum class SignInAccountType {};

    enum class SignInStage {};

    enum class StoreType {};

    enum class StructureBlockActionType {};

    enum class WorldClassroomCustomization {};

    struct CommandParseTableEntry {
    public:
        // prevent constructor by default
        CommandParseTableEntry& operator=(CommandParseTableEntry const&);
        CommandParseTableEntry(CommandParseTableEntry const&);
        CommandParseTableEntry();
    };

public:
    // prevent constructor by default
    IMinecraftEventing& operator=(IMinecraftEventing const&);
    IMinecraftEventing(IMinecraftEventing const&);
    IMinecraftEventing();

public:
    // NOLINTBEGIN
    // symbol: ?updatePlayerUndergroundStatus@IMinecraftEventing@@UEAAXPEAVPlayer@@_N@Z
    MCVAPI void updatePlayerUndergroundStatus(class Player* player, bool isUnderground);

    // symbol: ??1IMinecraftEventing@@UEAA@XZ
    MCVAPI ~IMinecraftEventing();

    // NOLINTEND
};
