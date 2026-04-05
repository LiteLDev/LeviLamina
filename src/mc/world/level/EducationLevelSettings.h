#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/level/AgentCapabilities.h"
#include "mc/world/level/EducationLocalLevelSettings.h"
#include "mc/world/level/ExternalLinkSettings.h"

// auto generated forward declare list
// clang-format off
class LevelLooseFileStorage;
struct CommandFlag;
// clang-format on

struct EducationLevelSettings {
public:
    // EducationLevelSettings inner types define
    using CommandOverrideFunctor =
        ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>;

    using HiddenCommands = ::std::string;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                             codeBuilderDefaultUri;
    ::ll::TypedStorage<8, 32, ::std::string>                             codeBuilderTitle;
    ::ll::TypedStorage<1, 1, bool>                                       canResizeCodeBuilder;
    ::ll::TypedStorage<1, 1, bool>                                       disableLegacyTitleBar;
    ::ll::TypedStorage<8, 32, ::std::string>                             postProcessFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                             screenshotBorderResourcePath;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, uint>> hiddenCommands;
    ::ll::TypedStorage<8, 40, ::EducationLocalLevelSettings>             localSettings;
    ::ll::TypedStorage<1, 3, ::std::optional<::AgentCapabilities>>       agentCapabilities;
    ::ll::TypedStorage<8, 72, ::std::optional<::ExternalLinkSettings>>   externalLinkSettings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EducationLevelSettings();

    MCAPI EducationLevelSettings(::EducationLevelSettings const&);

    MCAPI ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>
    getCommandOverrideFunctor() const;

    MCAPI ::EducationLevelSettings& operator=(::EducationLevelSettings const&);

    MCAPI ~EducationLevelSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::optional<::EducationLevelSettings> load(::LevelLooseFileStorage const& storage);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_BORDER_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::EducationLevelSettings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
