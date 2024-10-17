#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/AgentCapabilities.h"
#include "mc/world/level/EducationLocalLevelSettings.h"
#include "mc/world/level/ExternalLinkSettings.h"

struct EducationLevelSettings {
public:
    std::string                           mCodeBuilderDefaultUri;
    std::string                           mCodeBuilderTitle;
    bool                                  mCanResizeCodeBuilder;
    bool                                  mDisableLegacyTitleBar;
    std::string                           mPostProcessFilter;
    std::string                           mScreenshotBorderResourcePath;
    std::unordered_map<std::string, uint> mHiddenCommands;
    EducationLocalLevelSettings           mLocalSettings;
    std::optional<AgentCapabilities>      mAgentCapabilities;
    std::optional<ExternalLinkSettings>   mExternalLinkSettings;


    // NOLINTBEGIN
    MCAPI EducationLevelSettings();

    MCAPI EducationLevelSettings(struct EducationLevelSettings const&);

    MCAPI std::function<void(struct CommandFlag&, std::string const&)> getCommandOverrideFunctor() const;

    MCAPI struct EducationLevelSettings& operator=(struct EducationLevelSettings const&);

    MCAPI ~EducationLevelSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(struct EducationLevelSettings const&);

    MCAPI void dtor$();

    MCAPI static std::string const& DEFAULT_BORDER_PATH();

    // NOLINTEND
};
