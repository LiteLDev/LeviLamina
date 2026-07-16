#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorLifetimeState.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Scoreboard;
class ServerLevel;
class Vec3;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptActorComponents; }
namespace ScriptModuleMinecraft { struct ScriptActorData; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
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

#ifdef LL_PLAT_S
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        lookAt(::Actor& self, ::Vec3 const& targetLocation);
#else // LL_PLAT_C
    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        lookAt(::Actor&, ::Vec3 const&);
#endif

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

    virtual ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    getNameplateDepthTested(::Actor const& self) const;

    virtual ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    setNameplateDepthTested(::Actor& self, bool isNameplateDepthTested);

    virtual ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
        remove(::Actor& self);

    virtual bool isValid() const;

    virtual ::ScoreboardId const& _getScoreboardId(::Scoreboard const& scoreboard) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptActor(::Actor const& actor, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI
    ScriptActor(::ScriptModuleMinecraft::ScriptActorData const& actorData, ::Scripting::WeakLifetimeScope const& scope);

    MCFOLD ::std::string getId() const;

    MCAPI ::std::string getTypeId() const;

    MCAPI ::ScriptModuleMinecraft::ScriptActor& operator=(::ScriptModuleMinecraft::ScriptActor&& rhs);

    MCAPI ::Actor* tryGetActor() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding
    bind(::std::shared_ptr<::ScriptModuleMinecraft::ScriptActorComponents> const& actorComponents);

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

#ifdef LL_PLAT_S
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $lookAt(::Actor& self, ::Vec3 const& targetLocation);
#endif

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

    MCAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    $getNameplateDepthTested(::Actor const& self) const;

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError>
    $setNameplateDepthTested(::Actor& self, bool isNameplateDepthTested);

#ifdef LL_PLAT_S
    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptInvalidActorError, ::Scripting::UnsupportedAPIError>
    $remove(::Actor& self);

    MCAPI bool $isValid() const;

    MCAPI ::ScoreboardId const& $_getScoreboardId(::Scoreboard const& scoreboard) const;
#endif


    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
