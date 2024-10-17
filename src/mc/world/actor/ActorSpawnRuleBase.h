#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorSpawnRuleBase {
public:
    std::unordered_map<std::string, int> mSpawnDelayStartMap; // this+0x8

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorSpawnRuleBase();

    // vIndex: 1
    virtual std::string const& getRootKey() = 0;

    // vIndex: 2
    virtual std::string const& getFileType() = 0;

    // vIndex: 3
    virtual bool processPopulationControl(std::string const& id, std::string const& populationControl) = 0;

    // vIndex: 4
    virtual void readResourceFiles(
        class ResourcePackManager&                                  resourcePackManager,
        class MobSpawnRules const&                                  baseSpawnRules,
        std::unordered_map<std::string, struct ActorSpawnRuleData>& dataMap
    ) = 0;

    MCAPI static struct ActorSpawnConditionData loadSpawnCondition(
        class SemVersion const&    version,
        class Json::Value const&   condition,
        class MobSpawnRules const& baseSpawnRules,
        std::string const&         identifier
    );

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

    MCAPI bool _readJson(
        std::string const&                                          input,
        class MobSpawnRules const&                                  baseSpawnRules,
        std::unordered_map<std::string, struct ActorSpawnRuleData>& dataMap
    );

    MCAPI void _registerSpawnRules(
        std::function<
            void(std::string const&, int, class BiomeFilterGroup&, class MobSpawnRules&, class SemVersion const&)>
                                   rulesHandler,
        struct ActorSpawnRuleData& spawnRuleData
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
