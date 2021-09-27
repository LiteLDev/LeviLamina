#pragma once

#include <functional>
#include <optional>
#include <string>
#include <unordered_map>

#include "../dll.h"

class LevelStorage;
struct CommandFlag;

struct EducationLocalLevelSettings {
    bool enabled{};
};

struct EducationLevelSettings {
    std::string                                  code_builder_uri;
    std::unordered_map<std::string, CommandFlag> commands_flags;
    EducationLocalLevelSettings                  local_settings;

    MCAPI EducationLevelSettings();
    MCAPI EducationLevelSettings(EducationLevelSettings const&);

    MCAPI EducationLevelSettings& operator=(EducationLevelSettings const&);

    //?getCommandOverrideFunctor@EducationLevelSettings@@QEBA?AV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@XZ
    MCAPI std::function<void(CommandFlag&, std::string const&)> getCommandOverrideFunctor() const;

    MCAPI static std::optional<EducationLevelSettings> load(LevelStorage const&);
};