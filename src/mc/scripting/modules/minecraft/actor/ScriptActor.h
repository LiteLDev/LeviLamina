#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/script_engine/Promise.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorLifetimeState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class MobEffect;
class Scoreboard;
class Vec2;
class Vec3;
class WeakEntityRef;
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
struct DynamicPropertyDefinition;
struct ScoreboardId;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActor {
public:
    // prevent constructor by default
    ScriptActor& operator=(ScriptActor const&);
    ScriptActor(ScriptActor const&);
    ScriptActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActor();

    // vIndex: 1
    virtual void setUnloaded(class Actor& actor);

    // vIndex: 2
    virtual class Scripting::Result<void> clearVelocity(class Actor& self);

    // vIndex: 3
    virtual class Scripting::Result<std::string> getNameTag(class Actor const& self) const;

    // vIndex: 4
    virtual class Scripting::Result<void> setNameTag(class Actor& self, std::string const& nameTag);

    // vIndex: 5
    virtual class Scripting::Result<bool> getSneaking(class Actor const& self) const;

    // vIndex: 6
    virtual class Scripting::Result<void> setSneaking(class Actor& self, bool isSneaking);

    // vIndex: 7
    virtual class Scripting::Result<void> applyImpulse(class Actor& self, class Vec3 const& vector);

    // vIndex: 8
    virtual class Scripting::Result<void> remove(class Actor& self);

    // vIndex: 9
    virtual bool _isValid() const;

    // vIndex: 10
    virtual struct ScoreboardId const& _getScoreboardId(class Scoreboard const& scoreboard) const;

    MCAPI ScriptActor(class ScriptModuleMinecraft::ScriptActor&&);

    MCAPI ScriptActor(class Actor const& actor, class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    addEffect(
        class Actor& self,
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const& effectType,
        int                                                                                                 duration,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityEffectOptions> const&                       options
    );

    MCAPI class Scripting::Result<void> addEffect_V010(
        class Actor&                                         self,
        class ScriptModuleMinecraft::ScriptEffectType const& effectType,
        int                                                  duration,
        int                                                  amplifier,
        bool                                                 showParticles
    );

    MCAPI class Scripting::Result<void> addEffect_V130(
        class Actor& self,
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const& effectType,
        int                                                                                                 duration,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityEffectOptions> const&                       options
    );

    MCAPI class Scripting::Result<bool> addTag(class Actor& self, std::string const& tag);

    MCAPI class Scripting::Result<bool> addTag_010(class Actor& self, std::string const& tag);

    MCAPI class Scripting::Result<bool> applyDamage(
        class Actor&                                                                         self,
        float                                                                                amount,
        std::optional<std::variant<
            struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions,
            struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>> const& options
    );

    MCAPI class Scripting::Result<void> applyKnockback(
        class Actor& self,
        float        directionX,
        float        directionZ,
        float        horizontalStrength,
        float        verticalStrength
    );

    MCAPI class Scripting::Result<void>
    clearDynamicProperties(class Actor& self, struct Scripting::ContextConfig const& contextConfig);

    MCAPI class Scripting::Result<bool> extinguishFire(class Actor& self, bool useEffects);

    MCAPI class Scripting::Result<std::optional<class ScriptModuleMinecraft::ScriptBlockRaycastHit>>
    getBlockFromViewDirection(
        class Actor const&                                                            self,
        class Scripting::WeakLifetimeScope                                            scope,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>>
    getBlockFromViewVector_010(
        class Actor const&                                                            self,
        class Scripting::WeakLifetimeScope                                            scope,
        std::optional<struct ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorComponent>>
          getComponent(
              class Scripting::WeakLifetimeScope scope,
              std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>> const&
                                 factories,
              std::string const& id
          );

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension(class Actor const& self) const;

    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty(class Actor& self, struct Scripting::ContextConfig const& contextConfig, std::string const& key);

    MCAPI class Scripting::Result<std::vector<std::string>>
    getDynamicPropertyIds(class Actor& self, struct Scripting::ContextConfig const& contextConfig);

    MCAPI class Scripting::Result<int>
    getDynamicPropertyTotalByteCount(class Actor& self, struct Scripting::ContextConfig const& contextConfig);

    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty_V010(
        class Actor&                           self,
        struct Scripting::ContextConfig const& contextConfig,
        std::string const&                     key
    );

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect(
        class Actor const& self,
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const& effectType
    ) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect_V010(class Actor const& self, class ScriptModuleMinecraft::ScriptEffectType const& effectType) const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffects(class Actor const& self) const;

    MCAPI class Scripting::Result<std::vector<class ScriptModuleMinecraft::ScriptEntityRaycastHit>>
    getEntitiesFromViewDirection(
        class Actor const&                                                             self,
        class Scripting::WeakLifetimeScope                                             scope,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::Result<
        std::vector<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getEntitiesFromViewVector_010(
        class Actor const&                                                             self,
        class Scripting::WeakLifetimeScope                                             scope,
        std::optional<struct ScriptModuleMinecraft::ScriptEntityRaycastOptions> const& options
    ) const;

    MCAPI class Scripting::Result<float> getFallDistance(class Actor const& self) const;

    MCAPI class Scripting::Result<class Vec3> getHeadLocation(class Actor const& self) const;

    MCAPI class Scripting::Result<class Vec3> getHeadLocation_010(class Actor const& self) const;

    MCAPI std::string getId() const;

    MCAPI class Scripting::Result<std::string> getId_010(class Actor const& self) const;

    MCAPI ::ScriptModuleMinecraft::ScriptActorLifetimeState getLifetimeState() const;

    MCAPI class Scripting::Result<class Vec3> getLocation(class Actor const& self) const;

    MCAPI class Scripting::Result<std::optional<std::variant<float, bool, std::string>>>
    getProperty(class Actor const& self, std::string const& identifier) const;

    MCAPI class Scripting::Result<class Vec2> getRotation(class Actor const& self) const;

    MCAPI class Scripting::Result<struct ScriptModuleMinecraft::ScriptXYRotation>
    getRotation_V010(class Actor const& self) const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>
          getScoreboardIdentity();

    MCAPI class Scripting::Result<std::vector<std::string>> getTags(class Actor const& self) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getTarget(class Actor const& self) const;

    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getTarget_010(class Actor const& self) const;

    MCAPI std::string getTypeId() const;

    MCAPI class Scripting::Result<class Vec3> getVelocity(class Actor const& self) const;

    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptVector> getVelocity_010(class Actor const& self
    ) const;

    MCAPI class Scripting::Result<class Vec3> getViewDirection(class Actor const& self) const;

    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptVector> getViewVector_010(class Actor const& self
    ) const;

    MCAPI class WeakRef<class EntityContext> getWeakEntity() const;

    MCAPI class Scripting::Result<bool> hasTag(class Actor const& self, std::string const& tag) const;

    MCAPI class Scripting::Result<bool> isClimbing(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> isFalling(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> isInWater(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> isOnGround(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> isSleeping(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> isSprinting(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> isSwimming(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> kill(class Actor& self);

    MCAPI class Scripting::Result<void> kill_010(class Actor& self);

    MCAPI class Scripting::Result<bool>
    matches(class Actor const& self, struct ScriptModuleMinecraft::ScriptActorQueryOptions options) const;

    MCAPI class ScriptModuleMinecraft::ScriptActor& operator=(class ScriptModuleMinecraft::ScriptActor&& rhs);

    MCAPI class Scripting::Result<void> playAnimation(
        class Actor&                                                                   self,
        std::string const&                                                             animationName,
        std::optional<struct ScriptModuleMinecraft::ScriptPlayAnimationOptions> const& options
    );

    MCAPI class Scripting::Result<bool> removeDynamicProperty_V010(
        class Actor&                           self,
        struct Scripting::ContextConfig const& contextConfig,
        std::string const&                     key
    );

    MCAPI class Scripting::Result<bool> removeEffect(
        class Actor& self,
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const& effectType
    );

    MCAPI class Scripting::Result<bool> removeTag(class Actor& self, std::string const& tag);

    MCAPI class Scripting::
        Result<std::variant<float, bool, std::string>, struct Scripting::EngineError, struct Scripting::Error>
        resetProperty(class Actor& self, std::string const& identifier);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        struct Scripting::Error>
    runCommand(
        class Actor&                           self,
        struct Scripting::ContextConfig const& contextConfig,
        std::string const&                     commandString
    );

    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(
        class Actor&                           self,
        struct Scripting::ContextConfig const& contextConfig,
        class Scripting::ScriptObjectFactory&  factory,
        std::string const&                     commandString
    );

    MCAPI class Scripting::Result<struct Scripting::JSON> runCommand_V010(
        class Actor&                           self,
        struct Scripting::ContextConfig const& contextConfig,
        std::string const&                     commandString
    );

    MCAPI class Scripting::Result<void> setDynamicProperty(
        class Actor&                                                                     self,
        struct Scripting::ContextConfig const&                                           contextConfig,
        std::string const&                                                               key,
        std::optional<std::variant<double, float, bool, std::string, class Vec3>> const& value
    );

    MCAPI class Scripting::Result<void> setDynamicProperty_V010(
        class Actor&                                                self,
        struct Scripting::ContextConfig const&                      contextConfig,
        std::string const&                                          key,
        std::variant<double, float, bool, std::string, class Vec3>& value
    );

    MCAPI void setLoaded();

    MCAPI void setLoading(class Actor const& actor);

    MCAPI class Scripting::Result<bool> setOnFire(class Actor& self, int seconds, bool useEffects);

    MCAPI class Scripting::Result<void>
    setProperty(class Actor& self, std::string const& identifier, std::variant<float, bool, std::string> const& value);

    MCAPI void setRemoved();

    MCAPI class Scripting::Result<void> setRotation(class Actor& self, class Vec2 rotation);

    MCAPI class Scripting::Result<void> setRotation_V010(class Actor& self, float x, float y);

    MCAPI class Scripting::Result<void> setTarget(class Actor& self, class ScriptModuleMinecraft::ScriptActor& target);

    MCAPI class Scripting::Result<void>
    setVelocity_010(class Actor& self, class ScriptModuleMinecraft::ScriptVector const& vel);

    MCAPI class Scripting::Result<void> teleport(
        class Actor&                                                              self,
        class Vec3 const&                                                         location,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );

    MCAPI class Scripting::Result<void> teleportFacing_V010(
        class Actor&                                  self,
        class Vec3 const&                             location,
        class ScriptModuleMinecraft::ScriptDimension& dimension,
        class Vec3 const&                             facingLocation,
        bool                                          keepVelocity
    );

    MCAPI class Scripting::Result<void> teleport_V010(
        class Actor&                                  self,
        class Vec3 const&                             location,
        class ScriptModuleMinecraft::ScriptDimension& dimension,
        float                                         xRotation,
        float                                         yRotation,
        bool                                          keepVelocity
    );

    MCAPI class Scripting::Result<void> triggerEvent(class Actor& self, std::string const& eventName);

    MCAPI class Scripting::Result<void> triggerEvent_V010(class Actor& self, std::string const& eventName);

    MCAPI class Actor* tryGetActor() const;

    MCAPI class Scripting::Result<bool> tryTeleport(
        class Actor&                                                              self,
        class Vec3 const&                                                         location,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActor>
    bind(std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>&
             supportedComponentFactories);

    MCAPI static class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>
    getHandle(class Actor const& actor, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getHandle(class StackRefResult<class EntityContext> entityRef, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getHandle(class WeakEntityRef entityRef, class Scripting::WeakLifetimeScope const& scope);

    MCAPI static class Actor* tryGetActor(
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptActor> const& handle,
        class Scripting::WeakLifetimeScope const&                                            context
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<bool> _applyDamage(
        class Actor&                                                       self,
        float                                                              amount,
        struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions const& options
    );

    MCAPI class Scripting::Result<bool> _applyProjectileDamage(
        class Actor&                                                                   self,
        float                                                                          amount,
        struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions const& options
    );

    MCAPI struct DynamicPropertyDefinition const*
    _getDynamicPropertyDefinition(class Actor& self, std::string const& key) const;

    MCAPI class MobEffect const* _getEffectHelper(
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const& effect
    ) const;

    MCAPI class Scripting::Result<bool> _teleport(
        class Actor&                                                              self,
        class Vec3 const&                                                         location,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const& options,
        bool                                                                      safeTeleport
    );

    MCAPI std::optional<struct Scripting::Error> _validateDynamicProperty_V010(
        class Actor&                                                      self,
        std::string const&                                                key,
        std::variant<double, float, bool, std::string, class Vec3> const* value,
        std::string const&                                                functionName
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI struct ScoreboardId const& _getScoreboardId$(class Scoreboard const& scoreboard) const;

    MCAPI bool _isValid$() const;

    MCAPI class Scripting::Result<void> applyImpulse$(class Actor& self, class Vec3 const& vector);

    MCAPI class Scripting::Result<void> clearVelocity$(class Actor& self);

    MCAPI class Scripting::Result<std::string> getNameTag$(class Actor const& self) const;

    MCAPI class Scripting::Result<bool> getSneaking$(class Actor const& self) const;

    MCAPI class Scripting::Result<void> remove$(class Actor& self);

    MCAPI class Scripting::Result<void> setNameTag$(class Actor& self, std::string const& nameTag);

    MCAPI class Scripting::Result<void> setSneaking$(class Actor& self, bool isSneaking);

    MCAPI void setUnloaded$(class Actor& actor);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
