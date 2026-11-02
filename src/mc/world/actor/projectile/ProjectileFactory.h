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
namespace SharedTypes::v1_26_50 { struct OnHitCommandsStorage; }
// clang-format on

class ProjectileFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&> mLevel;
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
    MCNAPI static void _applyEnchantmentsToProjectile(::Mob const& owner, ::Actor& projectile);

    MCNAPI static void createSubcomponentDefinitionFromLegacy(
        ::Json::Value&                                 trigger,
        ::std::string const&                           name,
        ::SharedTypes::v1_26_50::OnHitCommandsStorage& onHitCommands
    );

    MCNAPI static ::std::unique_ptr<::OnHitSubcomponent>
    createSubcomponentFromDefinition(::std::string const& name, ::entt::meta_any const& def);

    MCNAPI static void initFactory();

    MCNAPI static void shutdown();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<
        ::std::string_view,
        ::std::function<void(::Json::Value&, ::SharedTypes::v1_26_50::OnHitCommandsStorage&)>>&
    mSubcomponentDefinitionMap();

    MCNAPI static ::std::unordered_map<
        ::std::string_view,
        ::std::function<::std::unique_ptr<::OnHitSubcomponent>(::entt::meta_any const&)>>&
    mSubcomponentMap();
    // NOLINTEND
};
