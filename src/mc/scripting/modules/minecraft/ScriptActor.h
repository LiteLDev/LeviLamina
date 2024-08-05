#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Promise.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptActorLifetimeState.h"

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
    virtual class Scripting::Result<std::string> getNameTag(class Actor const&) const;

    // vIndex: 4
    virtual class Scripting::Result<void> setNameTag(class Actor& self, std::string const&);

    // vIndex: 5
    virtual class Scripting::Result<bool> getSneaking(class Actor const& self) const;

    // vIndex: 6
    virtual class Scripting::Result<void> setSneaking(class Actor& self, bool isSneaking);

    // vIndex: 7
    virtual class Scripting::Result<void> applyImpulse(class Actor& self, class Vec3 const& vector);

    // vIndex: 8
    virtual class Scripting::Result<void> remove(class Actor&);

    // vIndex: 9
    virtual bool _isValid() const;

    // vIndex: 10
    virtual struct ScoreboardId const& _getScoreboardId(class Scoreboard const&) const;

    MCAPI ScriptActor(class ScriptModuleMinecraft::ScriptActor&&);

    MCAPI ScriptActor(class Actor const& actor, class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    addEffect(class Actor&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&, int, std::optional<struct ScriptModuleMinecraft::ScriptEntityEffectOptions> const&);

    MCAPI class Scripting::Result<void>
    addEffect_V010(class Actor&, class ScriptModuleMinecraft::ScriptEffectType const&, int, int, bool);

    MCAPI class Scripting::Result<void>
    addEffect_V130(class Actor&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&, int, std::optional<struct ScriptModuleMinecraft::ScriptEntityEffectOptions> const&);

    MCAPI class Scripting::Result<bool> addTag(class Actor& self, std::string const& tag);

    MCAPI class Scripting::Result<bool> addTag_010(class Actor& self, std::string const& tag);

    MCAPI class Scripting::Result<bool> applyDamage(
        class Actor&                                                                         self,
        float                                                                                amount,
        std::optional<std::variant<
            struct ScriptModuleMinecraft::ScriptActorApplyDamageOptions,
            struct ScriptModuleMinecraft::ScriptActorApplyDamageByProjectileOptions>> const& options
    );

    MCAPI class Scripting::Result<void> applyKnockback(class Actor& self, float, float, float, float);

    MCAPI class Scripting::Result<void> clearDynamicProperties(class Actor&, struct Scripting::ContextConfig const&);

    MCAPI class Scripting::Result<bool> extinguishFire(class Actor&, bool);

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
              std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>> const&,
              std::string const& id
          );

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension>>
    getDimension(class Actor const& self) const;

    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty(class Actor& self, struct Scripting::ContextConfig const&, std::string const& key);

    MCAPI class Scripting::Result<std::vector<std::string>>
    getDynamicPropertyIds(class Actor&, struct Scripting::ContextConfig const&);

    MCAPI class Scripting::Result<int>
    getDynamicPropertyTotalByteCount(class Actor&, struct Scripting::ContextConfig const&);

    MCAPI class Scripting::Result<std::optional<std::variant<double, float, bool, std::string, class Vec3>>>
    getDynamicProperty_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect(class Actor const&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&)
        const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMobEffectInstance>>>
    getEffect_V010(class Actor const&, class ScriptModuleMinecraft::ScriptEffectType const&) const;

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

    MCAPI class Scripting::Result<float> getFallDistance(class Actor const&) const;

    MCAPI class Scripting::Result<class Vec3> getHeadLocation(class Actor const& self) const;

    MCAPI class Scripting::Result<class Vec3> getHeadLocation_010(class Actor const& self) const;

    MCAPI std::string getId() const;

    MCAPI class Scripting::Result<std::string> getId_010(class Actor const&) const;

    MCAPI ::ScriptModuleMinecraft::ScriptActorLifetimeState getLifetimeState() const;

    MCAPI class Scripting::Result<class Vec3> getLocation(class Actor const& self) const;

    MCAPI class Scripting::Result<std::optional<std::variant<float, bool, std::string>>>
    getProperty(class Actor const&, std::string const&) const;

    MCAPI class Scripting::Result<class Vec2> getRotation(class Actor const& self) const;

    MCAPI class Scripting::Result<struct ScriptModuleMinecraft::ScriptXYRotation>
    getRotation_V010(class Actor const& self) const;

    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptScoreboardIdentity>>
          getScoreboardIdentity();

    MCAPI class Scripting::Result<std::vector<std::string>> getTags(class Actor const&) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>>
    getTarget(class Actor const& self) const;

    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActor>>
    getTarget_010(class Actor const&) const;

    MCAPI std::string getTypeId() const;

    MCAPI class Scripting::Result<class Vec3> getVelocity(class Actor const& self) const;

    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptVector> getVelocity_010(class Actor const& self
    ) const;

    MCAPI class Scripting::Result<class Vec3> getViewDirection(class Actor const& self) const;

    MCAPI class Scripting::Result<class ScriptModuleMinecraft::ScriptVector> getViewVector_010(class Actor const& self
    ) const;

    MCAPI class WeakRef<class EntityContext> getWeakEntity() const;

    MCAPI class Scripting::Result<bool> hasTag(class Actor const& self, std::string const& tag) const;

    MCAPI class Scripting::Result<bool> isClimbing(class Actor const&) const;

    MCAPI class Scripting::Result<bool> isFalling(class Actor const&) const;

    MCAPI class Scripting::Result<bool> isInWater(class Actor const&) const;

    MCAPI class Scripting::Result<bool> isOnGround(class Actor const&) const;

    MCAPI class Scripting::Result<bool> isSleeping(class Actor const&) const;

    MCAPI class Scripting::Result<bool> isSprinting(class Actor const&) const;

    MCAPI class Scripting::Result<bool> isSwimming(class Actor const&) const;

    MCAPI class Scripting::Result<bool> kill(class Actor& self);

    MCAPI class Scripting::Result<void> kill_010(class Actor& self);

    MCAPI class Scripting::Result<bool>
    matches(class Actor const&, struct ScriptModuleMinecraft::ScriptActorQueryOptions) const;

    MCAPI class ScriptModuleMinecraft::ScriptActor& operator=(class ScriptModuleMinecraft::ScriptActor&& rhs);

    MCAPI class Scripting::Result<void> playAnimation(
        class Actor&                                                                   self,
        std::string const&                                                             animationName,
        std::optional<struct ScriptModuleMinecraft::ScriptPlayAnimationOptions> const& options
    );

    MCAPI class Scripting::Result<bool>
    removeDynamicProperty_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&);

    MCAPI class Scripting::Result<bool>
    removeEffect(class Actor&, std::variant<std::string, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&);

    MCAPI class Scripting::Result<bool> removeTag(class Actor& self, std::string const& tag);

    MCAPI class Scripting::
        Result<std::variant<float, bool, std::string>, struct Scripting::EngineError, struct Scripting::Error>
        resetProperty(class Actor&, std::string const&);

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        struct Scripting::Error>
    runCommand(class Actor& self, struct Scripting::ContextConfig const&, std::string const& commandString);

    MCAPI class Scripting::Result<class Scripting::Promise<
        class Scripting::StrongTypedObjectHandle<struct ScriptModuleMinecraft::ScriptCommandResult>,
        struct ScriptModuleMinecraft::ScriptCommandError,
        void>>
    runCommandAsync(
        class Actor& self,
        struct Scripting::ContextConfig const&,
        class Scripting::ScriptObjectFactory& factory,
        std::string const&                    commandString
    );

    MCAPI class Scripting::Result<struct Scripting::JSON>
    runCommand_V010(class Actor& self, struct Scripting::ContextConfig const&, std::string const& commandString);

    MCAPI class Scripting::Result<void> setDynamicProperty(
        class Actor& self,
        struct Scripting::ContextConfig const&,
        std::string const&                                                               key,
        std::optional<std::variant<double, float, bool, std::string, class Vec3>> const& value
    );

    MCAPI class Scripting::Result<void>
    setDynamicProperty_V010(class Actor&, struct Scripting::ContextConfig const&, std::string const&, std::variant<double, float, bool, std::string, class Vec3>&);

    MCAPI void setLoaded();

    MCAPI void setLoading(class Actor const& actor);

    MCAPI class Scripting::Result<bool> setOnFire(class Actor&, int, bool);

    MCAPI class Scripting::Result<void>
    setProperty(class Actor&, std::string const&, std::variant<float, bool, std::string> const&);

    MCAPI void setRemoved();

    MCAPI class Scripting::Result<void> setRotation(class Actor& self, class Vec2 rotation);

    MCAPI class Scripting::Result<void> setRotation_V010(class Actor& self, float x, float y);

    MCAPI class Scripting::Result<void> setTarget(class Actor& self, class ScriptModuleMinecraft::ScriptActor& target);

    MCAPI class Scripting::Result<void>
    setVelocity_010(class Actor& self, class ScriptModuleMinecraft::ScriptVector const&);

    MCAPI class Scripting::Result<void> teleport(
        class Actor&                                                              self,
        class Vec3 const&                                                         location,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );

    MCAPI class Scripting::Result<void> teleportFacing_V010(
        class Actor&                                  self,
        class Vec3 const&                             location,
        class ScriptModuleMinecraft::ScriptDimension& dimension,
        class Vec3 const&,
        bool
    );

    MCAPI class Scripting::Result<void> teleport_V010(
        class Actor&                                  self,
        class Vec3 const&                             location,
        class ScriptModuleMinecraft::ScriptDimension& dimension,
        float,
        float yRotation,
        bool
    );

    MCAPI class Scripting::Result<void> triggerEvent(class Actor& self, std::string const& eventName);

    MCAPI class Scripting::Result<void> triggerEvent_V010(class Actor&, std::string const&);

    MCAPI class Actor* tryGetActor() const;

    MCAPI class Scripting::Result<bool> tryTeleport(
        class Actor&                                                              self,
        class Vec3 const&                                                         location,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const& options
    );

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptActor>
    bind(std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>&);

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

    MCAPI struct DynamicPropertyDefinition const* _getDynamicPropertyDefinition(class Actor&, std::string const&) const;

    MCAPI class MobEffect const*
    _getEffectHelper(std::variant<
                     std::string,
                     class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptEffectType>> const&)
        const;

    MCAPI class Scripting::Result<bool> _teleport(
        class Actor&                                                              self,
        class Vec3 const&                                                         location,
        std::optional<struct ScriptModuleMinecraft::ScriptTeleportOptions> const& options,
        bool
    );

    MCAPI std::optional<struct Scripting::Error>
    _validateDynamicProperty_V010(class Actor&, std::string const&, std::variant<double, float, bool, std::string, class Vec3> const*, std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
