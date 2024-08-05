#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ProjectileFactory {
public:
    // prevent constructor by default
    ProjectileFactory& operator=(ProjectileFactory const&);
    ProjectileFactory(ProjectileFactory const&);
    ProjectileFactory();

public:
    // NOLINTBEGIN
    MCAPI explicit ProjectileFactory(class Level& level);

    MCAPI class Actor* shootProjectileFromDefinition(
        struct ActorDefinitionIdentifier const&,
        class Mob*,
        class Vec3,
        int,
        float,
        bool,
        bool,
        class Vec3
    );

    MCAPI static std::unique_ptr<class OnHitSubcomponent>
    createSubcomponent(class Json::Value& trigger, class SemVersion const& engineVersion, std::string const& name);

    MCAPI static void initFactory();

    MCAPI static void shutdown();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<std::string, std::function<std::unique_ptr<class OnHitSubcomponent>()>>
        mSubcomponentMap;

    // NOLINTEND
};
