#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Mob;
class OnHitSubcomponent;
class Vec3;
struct ActorDefinitionIdentifier;
namespace Json { class Value; }
// clang-format on

class ProjectileFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk87b5c0;
    // NOLINTEND

public:
    // prevent constructor by default
    ProjectileFactory& operator=(ProjectileFactory const&);
    ProjectileFactory(ProjectileFactory const&);
    ProjectileFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ProjectileFactory(::Level& level);

    MCAPI ::Actor* shootProjectileFromDefinition(
        ::ActorDefinitionIdentifier const& identifier,
        ::Mob*                             owner,
        ::Vec3                             targetDir,
        int                                auxValue,
        float                              throwPower,
        bool                               useUnmodifiedDirection,
        bool                               overrideSpawnPosition,
        ::Vec3                             spawnPosition
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::OnHitSubcomponent>
    createSubcomponent(::Json::Value& trigger, ::std::string const& name);

    MCAPI static void initFactory();

    MCAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::function<::std::unique_ptr<::OnHitSubcomponent>()>>&
    mSubcomponentMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level);
    // NOLINTEND
};
