#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Promise.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class MobEffect;
class Scoreboard;
class Vec2;
class Vec3;
class VecXZ;
class WeakEntityRef;
struct DynamicPropertyDefinition;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class IComponentFactory; }
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
namespace ScriptModuleMinecraft { struct ScriptPlayAnimationOptions; }
namespace ScriptModuleMinecraft { struct ScriptTeleportOptions; }
namespace ScriptModuleMinecraft { struct ScriptXYRotation; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
namespace Scripting { struct JSON; }
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
        ::ll::UntypedStorage<8, 8> mUnka5a2ad;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke38da0;
    ::ll::UntypedStorage<8, 24> mUnke17668;
    ::ll::UntypedStorage<8, 8>  mUnkb33b48;
    ::ll::UntypedStorage<8, 64> mUnk4c8566;
    ::ll::UntypedStorage<4, 4>  mUnk40822f;
    ::ll::UntypedStorage<8, 8>  mUnk2f310a;
    ::ll::UntypedStorage<8, 32> mUnkdd965d;
    ::ll::UntypedStorage<8, 32> mUnk74fab3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptActor& operator=(ScriptActor const&);
    ScriptActor(ScriptActor const&);
    ScriptActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActor();

    // vIndex: 1
    virtual void setLoading(::Actor const& actor);

    // vIndex: 2
    virtual void setUnloaded(::Actor& actor);

    // vIndex: 3
    virtual ::Scripting::Result<void> clearVelocity(::Actor& self);

    // vIndex: 4
    virtual ::Scripting::Result<void> lookAt(::Actor& self, ::Vec3 const& targetLocation);

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<::std::string> getNameTag(::Actor const& self) const;

    // vIndex: 6
    virtual ::Scripting::Result<void> setNameTag(::Actor& self, ::std::string const& nameTag);

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<bool> getSneaking(::Actor const& self) const;

    // vIndex: 8
    virtual ::Scripting::Result<void> setSneaking(::Actor& self, bool isSneaking);

    // vIndex: 9
    virtual ::Scripting::Result<void> applyImpulse(::Actor& self, ::Vec3 const& vector);

    // vIndex: 10
    virtual ::Scripting::Result<void> remove(::Actor& self);

    // vIndex: 11
    virtual bool isValid() const;

    // vIndex: 12
    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptActor(::ScriptModuleMinecraft::ScriptActor&&);

    MCNAPI ScriptActor(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI
    ScriptActor(::ScriptModuleMinecraft::ScriptActorData const& actorData, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ::Scripting::Result_deprecated<bool>
    _applyDamage(::Actor& self, float amount, ::ScriptModuleMinecraft::ScriptActorApplyDamageOptions const& options);

    MCNAPI ::Scripting::Result_deprecated<bool> _applyProjectileDamage(
        ::Actor&                                                                  self,
        float                                                                     amount,
        ::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& options
    );

    MCNAPI ::DynamicPropertyDefinition const*
    _getDynamicPropertyDefinition(::Actor& self, ::std::string const& key) const;

    MCNAPI ::MobEffect const* _getEffectHelper(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effect
    ) const;

    MCNAPI ::Scripting::Result_deprecated<bool> _teleport(
        ::Actor&                                                               self,
        ::Vec3 const&                                                          location,
        ::std::optional<::ScriptModuleMinecraft::ScriptTeleportOptions> const& options,
        bool                                                                   safeTeleport
    );

    MCNAPI ::std::optional<::Scripting::Error> _validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );

    MCNAPI ::std::optional<::Scripting::Error> _validateDynamicProperty_V010(
        ::Actor&                                                          self,
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value,
        ::std::string const&                                              functionName
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    addEffect(
        ::Actor& self,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effectType,
        int                                                                                         duration,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityEffectOptions> const&                  options
    );

    MCNAPI ::Scripting::Result<void> addEffect_V010(
        ::Actor&                                         self,
        ::ScriptModuleMinecraft::ScriptEffectType const& effectType,
        int                                              duration,
        int                                              amplifier,
        bool                                             showParticles
    );

    MCNAPI ::Scripting::Result_deprecated<bool> addTag(::Actor& self, ::std::string const& tag);

    MCNAPI ::Scripting::Result_deprecated<bool> addTag_010(::Actor& self, ::std::string const& tag);

    MCNAPI ::Scripting::Result_deprecated<bool> applyDamage(
        ::Actor&                                                                        self,
        float                                                                           amount,
        ::std::optional<::std::variant<
            ::ScriptModuleMinecraft::ScriptActorApplyDamageOptions,
            ::ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>> const& options
    );

    MCNAPI ::Scripting::Result<void> applyKnockback_V1(
        ::Actor& self,
        float    directionX,
        float    directionZ,
        float    horizontalStrength,
        float    verticalStrength
    );

    MCNAPI ::Scripting::Result<void>
    applyKnockback_V2(::Actor& self, ::VecXZ const& horizontalForce, float verticalStrength);

    MCNAPI ::Scripting::Result<void>
    clearDynamicProperties(::Actor& self, ::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result_deprecated<bool> extinguishFire(::Actor& self, bool useEffects);

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastHit>>
    getBlockFromViewDirection(
        ::Actor const&                                                             self,
        ::Scripting::WeakLifetimeScope                                             scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromViewVector_010(
        ::Actor const&                                                             self,
        ::Scripting::WeakLifetimeScope                                             scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>>
    getComponent(
        ::Scripting::WeakLifetimeScope scope,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>> const&
                             factories,
        ::std::string const& id
    );

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActorComponent>>
    getComponents(
        ::Scripting::WeakLifetimeScope scope,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>> const&
            factories
    );

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
    getDimension(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>>
    getDynamicProperty(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>>
    getDynamicPropertyIds(::Actor& self, ::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result_deprecated<int>
    getDynamicPropertyTotalByteCount(::Actor& self, ::Scripting::ContextConfig const& contextConfig);

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>>>
    getDynamicProperty_V010(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& key);

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect(
        ::Actor const& self,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effectType
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect_V010(::Actor const& self, ::ScriptModuleMinecraft::ScriptEffectType const& effectType) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffects(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::ScriptModuleMinecraft::ScriptEntityRaycastHit>>
    getEntitiesFromViewDirection(
        ::Actor const&                                                              self,
        ::Scripting::WeakLifetimeScope                                              scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromViewVector_010(
        ::Actor const&                                                              self,
        ::Scripting::WeakLifetimeScope                                              scope,
        ::std::optional<::ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getHeadLocation(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getHeadLocation_010(::Actor const& self) const;

    MCNAPI ::std::string getId() const;

    MCNAPI ::Scripting::Result_deprecated<::std::string> getId_010(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getLocation(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::std::variant<float, bool, ::std::string>>>
    getProperty(::Actor const& self, ::std::string const& identifier) const;

    MCNAPI ::Scripting::Result_deprecated<::Vec2> getRotation(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptXYRotation>
    getRotation_V010(::Actor const& self) const;

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>>
    getScoreboardIdentity();

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getTags(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
    getTarget(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getTarget_010(::Actor const& self) const;

    MCNAPI ::std::string getTypeId() const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getVelocity(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    getVelocity_010(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getViewDirection(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<::ScriptModuleMinecraft::ScriptVector>
    getViewVector_010(::Actor const& self) const;

    MCNAPI bool hasComponent(
        ::Scripting::WeakLifetimeScope scope,
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>> const&
                             factories,
        ::std::string const& name
    );

    MCNAPI ::Scripting::Result_deprecated<bool> hasTag(::Actor const& self, ::std::string const& tag) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isClimbing(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isFalling(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isInWater(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isOnGround(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isSleeping(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isSprinting(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> isSwimming(::Actor const& self) const;

    MCNAPI ::Scripting::Result_deprecated<bool> kill(::Actor& self);

    MCNAPI ::Scripting::Result<void> kill_010(::Actor& self);

    MCNAPI ::Scripting::Result_deprecated<bool>
    matches(::Actor const& self, ::ScriptModuleMinecraft::ScriptActorQueryOptions options) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptActor& operator=(::ScriptModuleMinecraft::ScriptActor&& rhs);

    MCNAPI ::Scripting::Result<void> playAnimation(
        ::Actor&                                                                    self,
        ::std::string const&                                                        animationName,
        ::std::optional<::ScriptModuleMinecraft::ScriptPlayAnimationOptions> const& options
    );

    MCNAPI ::Scripting::Result_deprecated<bool> removeDynamicProperty_V010(
        ::Actor&                          self,
        ::Scripting::ContextConfig const& contextConfig,
        ::std::string const&              key
    );

    MCNAPI ::Scripting::Result_deprecated<bool> removeEffect(
        ::Actor& self,
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptEffectType>> const& effectType
    );

    MCNAPI ::Scripting::Result_deprecated<bool> removeTag(::Actor& self, ::std::string const& tag);

    MCNAPI ::Scripting::Result<::std::variant<float, bool, ::std::string>, ::Scripting::EngineError, ::Scripting::Error>
    resetProperty(::Actor& self, ::std::string const& identifier);

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        ::Scripting::Error>
    runCommand(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& commandString);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
        ::ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(
        ::Actor&                          self,
        ::Scripting::ContextConfig const& contextConfig,
        ::Scripting::ScriptObjectFactory& factory,
        ::std::string const&              commandString
    );

    MCNAPI ::Scripting::Result_deprecated<::Scripting::JSON>
    runCommand_V010(::Actor& self, ::Scripting::ContextConfig const& contextConfig, ::std::string const& commandString);

    MCNAPI ::Scripting::Result<void> setDynamicProperties(
        ::Actor&                          self,
        ::Scripting::ContextConfig const& contextConfig,
        ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>> const& values
    );

    MCNAPI ::Scripting::Result<void> setDynamicProperty(
        ::Actor&                                                                           self,
        ::Scripting::ContextConfig const&                                                  contextConfig,
        ::std::string const&                                                               key,
        ::std::optional<::std::variant<double, float, bool, ::std::string, ::Vec3>> const& value
    );

    MCNAPI ::Scripting::Result<void> setDynamicProperty_V010(
        ::Actor&                                                    self,
        ::Scripting::ContextConfig const&                           contextConfig,
        ::std::string const&                                        key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3>& value
    );

    MCNAPI ::Scripting::Result_deprecated<bool> setOnFire(::Actor& self, int seconds, bool useEffects);

    MCNAPI ::Scripting::Result<void> setProperty(
        ::Actor&                                          self,
        ::std::string const&                              identifier,
        ::std::variant<float, bool, ::std::string> const& value
    );

    MCNAPI ::Scripting::Result<void> setRotation(::Actor& self, ::Vec2 rotation);

    MCNAPI ::Scripting::Result<void> setRotation_V010(::Actor& self, float x, float y);

    MCNAPI ::Scripting::Result<void> setTarget(::Actor& self, ::ScriptModuleMinecraft::ScriptActor& target);

    MCNAPI ::Scripting::Result<void> setVelocity_010(::Actor& self, ::ScriptModuleMinecraft::ScriptVector const& vel);

    MCNAPI ::Scripting::Result<void> teleport(
        ::Actor&                                                               self,
        ::Vec3 const&                                                          location,
        ::std::optional<::ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );

    MCNAPI ::Scripting::Result<void> teleportFacing_V010(
        ::Actor&                                  self,
        ::Vec3 const&                             location,
        ::ScriptModuleMinecraft::ScriptDimension& dimension,
        ::Vec3 const&                             facingLocation,
        bool                                      keepVelocity
    );

    MCNAPI ::Scripting::Result<void> teleport_V010(
        ::Actor&                                  self,
        ::Vec3 const&                             location,
        ::ScriptModuleMinecraft::ScriptDimension& dimension,
        float                                     xRotation,
        float                                     yRotation,
        bool                                      keepVelocity
    );

    MCNAPI ::Scripting::Result<void> triggerEvent(::Actor& self, ::std::string const& eventName);

    MCNAPI ::Scripting::Result<void> triggerEvent_V010(::Actor& self, ::std::string const& eventName);

    MCNAPI ::Scripting::Result_deprecated<bool> tryTeleport(
        ::Actor&                                                               self,
        ::Vec3 const&                                                          location,
        ::std::optional<::ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptActor> bind(
        ::std::unordered_map<::std::string, ::std::unique_ptr<::ScriptModuleMinecraft::IComponentFactory>>&
            supportedComponentFactories
    );

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getHandle(::WeakEntityRef entityRef, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI static ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getHandle(::StackRefResult<::EntityContext> entityRef, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI static ::Actor* tryGetActor(
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::ScriptActor> const& handle,
        ::Scripting::WeakLifetimeScope const&                                       context
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptActor&&);

    MCNAPI void* $ctor(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI void*
    $ctor(::ScriptModuleMinecraft::ScriptActorData const& actorData, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setLoading(::Actor const& actor);

    MCNAPI void $setUnloaded(::Actor& actor);

    MCNAPI ::Scripting::Result<void> $clearVelocity(::Actor& self);

    MCNAPI ::Scripting::Result<void> $lookAt(::Actor& self, ::Vec3 const& targetLocation);

    MCNAPI ::Scripting::Result_deprecated<::std::string> $getNameTag(::Actor const& self) const;

    MCNAPI ::Scripting::Result<void> $setNameTag(::Actor& self, ::std::string const& nameTag);

    MCNAPI ::Scripting::Result_deprecated<bool> $getSneaking(::Actor const& self) const;

    MCNAPI ::Scripting::Result<void> $setSneaking(::Actor& self, bool isSneaking);

    MCNAPI ::Scripting::Result<void> $applyImpulse(::Actor& self, ::Vec3 const& vector);

    MCNAPI ::Scripting::Result<void> $remove(::Actor& self);

    MCNAPI bool $isValid() const;

    MCNAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
