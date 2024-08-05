#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorSpawnRuleBase {
public:
    // prevent constructor by default
    ActorSpawnRuleBase& operator=(ActorSpawnRuleBase const&);
    ActorSpawnRuleBase(ActorSpawnRuleBase const&);
    ActorSpawnRuleBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSpawnRuleBase();

    // vIndex: 1
    virtual std::string const& getRootKey() = 0;

    // vIndex: 2
    virtual std::string const& getFileType() = 0;

    // vIndex: 3
    virtual bool processPopulationControl(std::string const&, std::string const&) = 0;

    // vIndex: 4
    virtual void
    readResourceFiles(class ResourcePackManager&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&) = 0;

    MCAPI static struct ActorSpawnConditionData
    loadSpawnCondition(class SemVersion const&, class Json::Value const&, class MobSpawnRules const&, std::string const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _getResources(
        class ResourcePackManager& resourcePackManager,
        class MobSpawnRules const& baseSpawnRules,
        std::function<
            void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>
            rulesHandler
    );

    MCAPI bool
    _readJson(std::string const&, class MobSpawnRules const&, std::unordered_map<std::string, struct ActorSpawnRuleData>&);

    MCAPI void
    _registerSpawnRules(std::function<void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>, struct ActorSpawnRuleData&);

    // NOLINTEND
};
