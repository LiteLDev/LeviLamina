#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
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
    MCNAPI ::Actor* shootProjectileFromDefinition(
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
    MCNAPI static ::std::unique_ptr<::OnHitSubcomponent>
    createSubcomponent(::Json::Value& trigger, ::std::string const& name);

    MCNAPI static void initFactory();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::function<::std::unique_ptr<::OnHitSubcomponent>()>>&
    mSubcomponentMap();
    // NOLINTEND
};
