#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftEventing {
public:
    // IMinecraftEventing inner types declare
    // clang-format off
    struct CommandParseTableEntry;
    // clang-format on

    // IMinecraftEventing inner types define
    enum class ClubsEngagementAction {};

    enum class ClubsEngagementTargetType {};

    enum class ClubsFeedScreenSource {};

    enum class DayOneExperienceState {};

    enum class DeviceAccountFailurePhase {};

    enum class EduSignInStage {};

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

    enum class SignInTrigger {};

    enum class StoreType {};

    enum class StructureBlockActionType {};

    enum class WorldClassroomCustomization {};

    struct CommandParseTableEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMINECRAFTEVENTING_COMMANDPARSETABLEENTRY
    public:
        CommandParseTableEntry& operator=(CommandParseTableEntry const&) = delete;
        CommandParseTableEntry(CommandParseTableEntry const&)            = delete;
        CommandParseTableEntry()                                         = delete;
#endif

    public:
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMINECRAFTEVENTING
public:
    IMinecraftEventing& operator=(IMinecraftEventing const&) = delete;
    IMinecraftEventing(IMinecraftEventing const&)            = delete;
    IMinecraftEventing()                                     = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMINECRAFTEVENTING
    /**
     * @symbol ?updatePlayerUndergroundStatus\@IMinecraftEventing\@\@UEAAXPEAVPlayer\@\@_N\@Z
     */
    MCVAPI void updatePlayerUndergroundStatus(class Player*, bool);
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~IMinecraftEventing();
#endif
};
