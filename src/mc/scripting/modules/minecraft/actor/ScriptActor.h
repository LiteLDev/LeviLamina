#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorLifetimeState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class MobEffect;
class Scoreboard;
class ServerLevel;
class Vec2;
class Vec3;
class VecXZ;
struct DynamicPropertyDefinition;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptAABB; }
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptEffectType; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptMobEffectInstance; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageByProjectileOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorApplyDamageOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityEffectOptions; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptGetBlocksStandingOnOptions; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptPlayAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptTeleportOptions; }
namespace ScriptModuleMinecraft { struct ScriptXYRotation; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct JSON; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActor {
public:
    // ScriptActor inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptActor inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorUniqueID> mId;
        // NOLINTEND
    };

    using ActorPropertyVariant = ::std::variant<float, bool, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 24, ::WeakEntityRef>                mEntityRef;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                 mUniqueId;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>>>
                                                                                mAttachedComponents;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptActorLifetimeState> mLifetimeState;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>>                   mLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mTypeId;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mUniqueIdString;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActor& operator=(ScriptActor const&);
    ScriptActor(ScriptActor const&);
    ScriptActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptActor();

    virtual void setLoading(::Actor const& actor);

    virtual void setUnloaded(::Actor& actor);

    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        lookAt(::Actor& self, ::Vec3 const& targetLocation);

    virtual ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getNameTag(::Actor const& self) const;

    virtual ::Scripting::Result_deprecated<::std::string> getNameTag_010(::Actor const& self) const;

    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setNameTag(::Actor& self, ::std::string const& nameTag);

    virtual ::Scripting::Result_deprecated<void> setNameTag_010(::Actor& self, ::std::string const& nameTag);

    virtual ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getSneaking(::Actor const& self) const;

    virtual ::Scripting::Result_deprecated<bool> getSneaking_010(::Actor const& self) const;

    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setSneaking(::Actor& self, bool isSneaking);

    virtual ::Scripting::Result_deprecated<void> setSneaking_010(::Actor& self, bool isSneaking);

    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self);

    virtual bool isValid() const;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActor(::ScriptModuleMinecraft::ScriptActor&&);

    MCAPI ScriptActor(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI
    ScriptActor(::ScriptModuleMinecraft::ScriptActorData const& actorData, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    _applyDamage(::Actor& self, float amount, ::ScriptModuleMinecraft::ScriptActorApplyDamageOptions const& options);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> _applyProjectileDamage(
        ::Actor&                                                                  self,
        float                                                                     amount,
        ::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& options
    );

    MCAPI ::DynamicPropertyDefinition const*
    _getDynamicPropertyDefinition(::Actor& self, ::std::string const& key) const;

    MCAPI ::MobEffect const* _getEffectHelper(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effect
    ) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    _teleport(
        ::Actor&                                                               self,
        ::Vec3 const&                                                          location,
        ::std::optional<::ScriptModuleMinecraft::ScriptTeleportOptions> const& options,
        bool                                                                   safeTeleport
    );

    MCAPI ::std::optional<::Scripting::Error> _validateDynamicProperty_V010(
        ::Actor&                                                          self,
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value,
        ::std::string const&                                              functionName
    );

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::InvalidArgumentError>
    addEffect(
        ::Actor& self,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effectType,
        int                                                                                         duration,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityEffectOptions> const&                  options
    );

    MCAPI ::Scripting::Result_deprecated<void> addEffect_V010(
        ::Actor&                                         self,
        ::ScriptModuleMinecraft::ScriptEffectType const& effectType,
        int                                              duration,
        int                                              amplifier,
        bool                                             showParticles
    );

    MCAPI ::Scripting::
        Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        addTag(::Actor& self, ::std::string const& tag);

    MCAPI ::Scripting::Result_deprecated<bool> addTag_010(::Actor& self, ::std::string const& tag);

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::UnsupportedAPIError,
        ::Scripting::EngineError>
    applyDamage(
        ::Actor&                                                                        self,
        float                                                                           amount,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptActorApplyDamageOptions,
            ::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>> const& options
    );

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        applyImpulse(::Actor& self, ::Vec3 const& vector);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    applyKnockback_V1(
        ::Actor& self,
        float    directionX,
        float    directionZ,
        float    horizontalStrength,
        float    verticalStrength
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    applyKnockback_V2(::Actor& self, ::VecXZ const& horizontalForce, float verticalStrength);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    clearDynamicProperties(::Actor& self, ::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> clearVelocity(::Actor& self);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    extinguishFire(::Actor& self, bool useEffects);

    MCAPI ::Scripting::Result<::ScriptModuleMinecraft::ScriptAABB, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getAABB(::Actor const& self) const;

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getAllBlocksStandingOn(
        ::Actor const&                                                                    self,
        ::Scripting::WeakLifetimeScope                                                    scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptGetBlocksStandingOnOptions> const& options
    ) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastHit>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getBlockFromViewDirection(
        ::Actor const&                                                             self,
        ::Scripting::WeakLifetimeScope                                             scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromViewVector_010(
        ::Actor const&                                                             self,
        ::Scripting::WeakLifetimeScope                                             scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getBlockStandingOn(
        ::Actor const&                                                                    self,
        ::Scripting::WeakLifetimeScope                                                    scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptGetBlocksStandingOnOptions> const& options
    ) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>>
    getComponent(
        ::Scripting::WeakLifetimeScope scope,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>> const&
                             factories,
        ::std::string const& id
    );

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>>
    getComponents(
        ::Scripting::WeakLifetimeScope scope,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>> const&
            factories
    );

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::EngineError>
    getDimension(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
    getDimension_010(::Actor const& self) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getDynamicProperty(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getDynamicPropertyIds(::Actor& self, ::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result<int, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getDynamicPropertyTotalByteCount(::Actor& self, ::Scripting::ContextConfig const& contextConfig);

    MCAPI ::Scripting::Result_deprecated<::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>>
    getDynamicProperty_V010(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
    getEffect(
        ::Actor const& self,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effectType
    ) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect_V010(::Actor const& self, ::ScriptModuleMinecraft::ScriptEffectType const& effectType) const;

    MCAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getEffects(::Actor const& self) const;

    MCAPI ::Scripting::Result<
        ::std::vector<::ScriptModuleMinecraft::ScriptEntityRaycastHit>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::EngineError,
        ::Scripting::UnsupportedAPIError>
    getEntitiesFromViewDirection(
        ::Actor const&                                                              self,
        ::Scripting::WeakLifetimeScope                                              scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromViewVector_010(
        ::Actor const&                                                              self,
        ::Scripting::WeakLifetimeScope                                              scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getHeadLocation(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getHeadLocation_010(::Actor const& self) const;

    MCAPI ::std::string getId() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getId_010(::Actor const& self) const;

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getLocalizationKey(::Actor const& self) const;

    MCFOLD ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getLocation(::Actor const& self) const;

    MCFOLD ::Scripting::Result_deprecated<::Vec3> getLocation_010(::Actor const& self) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::std::variant<float, bool, ::std::string>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getProperty(::Actor const& self, ::std::string const& identifier) const;

    MCAPI ::Scripting::Result<::Vec2, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getRotation(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptXYRotation>
    getRotation_V010(::Actor const& self) const;

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>>
    getScoreboardIdentity();

    MCAPI ::Scripting::Result<::std::vector<::std::string>, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getTags(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getTags_010(::Actor const& self) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getTarget(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getTarget_010(::Actor const& self) const;

    MCFOLD ::std::string getTypeId() const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getVelocity(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    getVelocity_010(::Actor const& self) const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getViewDirection(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    getViewVector_010(::Actor const& self) const;

    MCAPI bool hasComponent(
        ::Scripting::WeakLifetimeScope scope,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>> const&
                             factories,
        ::std::string const& name
    );

    MCFOLD ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    hasTag(::Actor const& self, ::std::string const& tag) const;

    MCFOLD ::Scripting::Result_deprecated<bool> hasTag_010(::Actor const& self, ::std::string const& tag) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isClimbing(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isFalling(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isInWater(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isOnGround(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isSleeping(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isSprinting(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    isSwimming(::Actor const& self) const;

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> kill(::Actor& self);

    MCAPI ::Scripting::Result_deprecated<void> kill_010(::Actor& self);

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::UnsupportedAPIError>
    matches(::Actor const& self, ::ScriptModuleMinecraft::ScriptActorQueryOptions options) const;

    MCAPI ::ScriptModuleMinecraft::ScriptActor& operator=(::ScriptModuleMinecraft::ScriptActor&& rhs);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError> playAnimation(
        ::Actor&                                                                    self,
        ::std::string const&                                                        animationName,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayAnimationOptions> const& options
    );

    MCAPI ::Scripting::Result_deprecated<bool> removeDynamicProperty_V010(
        ::Actor&                          self,
        ::Scripting::ContextConfig const& contextConfig,
        ::std::string const&              key
    );

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::InvalidArgumentError>
    removeEffect(
        ::Actor& self,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effectType
    );

    MCFOLD ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    removeTag(::Actor& self, ::std::string const& tag);

    MCFOLD ::Scripting::Result_deprecated<bool> removeTag_010(::Actor& self, ::std::string const& tag);

    MCAPI ::Scripting::Result<
        ::std::variant<float, bool, ::std::string>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::EngineError,
        ::Scripting::Error>
    resetProperty(::Actor& self, ::std::string const& identifier);

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    runCommand(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& commandString);

    MCAPI ::Scripting::Result<
        ::Scripting::Promise<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
            ::ScriptModuleMinecraft::ScriptCommandError,
            void>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    runCommandAsync(
        ::Actor&                          self,
        ::Scripting::ContextConfig const& contextConfig,
        ::Scripting::ScriptObjectFactory& factory,
        ::std::string const&              commandString
    );

    MCAPI ::Scripting::Result_deprecated<::Scripting::JSON>
    runCommand_V010(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& commandString);

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        setDynamicProperties(
            ::Actor&                          self,
            ::Scripting::ContextConfig const& contextConfig,
            ::std::unordered_map<
                ::std::string,
                ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>> const& values
        );

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::ArgumentOutOfBoundsError>
        setDynamicProperty(
            ::Actor&                                                                           self,
            ::Scripting::ContextConfig const&                                                  contextConfig,
            ::std::string const&                                                               key,
            ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& value
        );

    MCAPI ::Scripting::Result_deprecated<void> setDynamicProperty_V010(
        ::Actor&                                                    self,
        ::Scripting::ContextConfig const&                           contextConfig,
        ::std::string const&                                        key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3>& value
    );

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setOnFire(::Actor& self, int seconds, bool useEffects);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::ArgumentOutOfBoundsError>
    setProperty(
        ::Actor&                                          self,
        ::std::string const&                              identifier,
        ::std::variant<float, bool, ::std::string> const& value
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setRotation(::Actor& self, ::Vec2 rotation);

    MCAPI ::Scripting::Result_deprecated<void> setRotation_V010(::Actor& self, float x, float y);

    MCAPI ::Scripting::Result_deprecated<void>
    setTarget_010(::Actor& self, ::ScriptModuleMinecraft::ScriptActor& target);

    MCAPI ::Scripting::Result_deprecated<void>
    setVelocity_010(::Actor& self, ::ScriptModuleMinecraft::ScriptVector const& vel);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    teleport(
        ::Actor&                                                               self,
        ::Vec3 const&                                                          location,
        ::std::optional<::ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );

    MCAPI ::Scripting::Result_deprecated<void> teleportFacing_V010(
        ::Actor&                                  self,
        ::Vec3 const&                             location,
        ::ScriptModuleMinecraft::ScriptDimension& dimension,
        ::Vec3 const&                             facingLocation,
        bool                                      keepVelocity
    );

    MCAPI ::Scripting::Result_deprecated<void> teleport_V010(
        ::Actor&                                  self,
        ::Vec3 const&                             location,
        ::ScriptModuleMinecraft::ScriptDimension& dimension,
        float                                     xRotation,
        float                                     yRotation,
        bool                                      keepVelocity
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::InvalidArgumentError>
    triggerEvent(::Actor& self, ::std::string const& eventName);

    MCAPI ::Scripting::Result_deprecated<void> triggerEvent_V010(::Actor& self, ::std::string const& eventName);

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    tryTeleport(
        ::Actor&                                                               self,
        ::Vec3 const&                                                          location,
        ::std::optional<::ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind(
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>>&
            supportedComponentFactories
    );

    MCAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getHandle(::WeakEntityRef entityRef, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI static ::Actor* tryGetActor(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& handle,
        ::Scripting::WeakLifetimeScope const&                                       context
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptActor&&);

    MCAPI void* $ctor(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& actorData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setLoading(::Actor const& actor);

    MCAPI void $setUnloaded(::Actor& actor);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $lookAt(::Actor& self, ::Vec3 const& targetLocation);

    MCAPI ::Scripting::Result<::std::string, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    $getNameTag(::Actor const& self) const;

    MCAPI ::Scripting::Result_deprecated<::std::string> $getNameTag_010(::Actor const& self) const;

    MCFOLD ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    $setNameTag(::Actor& self, ::std::string const& nameTag);

    MCFOLD ::Scripting::Result_deprecated<void> $setNameTag_010(::Actor& self, ::std::string const& nameTag);

    MCFOLD ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    $getSneaking(::Actor const& self) const;

    MCFOLD ::Scripting::Result_deprecated<bool> $getSneaking_010(::Actor const& self) const;

    MCFOLD ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    $setSneaking(::Actor& self, bool isSneaking);

    MCFOLD ::Scripting::Result_deprecated<void> $setSneaking_010(::Actor& self, bool isSneaking);

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);

    MCAPI bool $isValid() const;

    MCAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
