#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/scripting/commands/ScriptCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ScriptActorCommandOrigin : public ::ScriptCommandOrigin {
public:
    // prevent constructor by default
    ScriptActorCommandOrigin& operator=(ScriptActorCommandOrigin const&);
    ScriptActorCommandOrigin(ScriptActorCommandOrigin const&);
    ScriptActorCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptActorCommandOrigin();

    // vIndex: 8
    virtual class Actor* getEntity() const;

    // vIndex: 10
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    MCAPI ScriptActorCommandOrigin(
        class Actor const&                      actor,
        std::function<void(int, std::string&&)> outputCallback,
        std::optional<::CommandPermissionLevel> permissionLevel
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        class Actor const&                      actor,
        std::function<void(int, std::string&&)> outputCallback,
        std::optional<::CommandPermissionLevel> permissionLevel
    );

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class CommandOrigin> clone$() const;

    MCAPI class Actor* getEntity$() const;

    // NOLINTEND
};
