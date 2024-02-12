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
    // symbol: ??0EducationLevelSettings@@QEAA@XZ
    MCAPI EducationLevelSettings();

    // symbol: ??0EducationLevelSettings@@QEAA@AEBU0@@Z
    MCAPI EducationLevelSettings(struct EducationLevelSettings const&);

    // symbol:
    // ?getCommandOverrideFunctor@EducationLevelSettings@@QEBA?AV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@XZ
    MCAPI std::function<void(struct CommandFlag&, std::string const&)> getCommandOverrideFunctor() const;

    // symbol: ??4EducationLevelSettings@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct EducationLevelSettings& operator=(struct EducationLevelSettings const&);

    // symbol: ??1EducationLevelSettings@@QEAA@XZ
    MCAPI ~EducationLevelSettings();

    // symbol:
    // ?DEFAULT_BORDER_PATH@EducationLevelSettings@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const DEFAULT_BORDER_PATH;

    // NOLINTEND
};
