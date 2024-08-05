#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/scripting/commands/ScriptCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

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

    MCAPI
    ScriptActorCommandOrigin(class Actor const&, std::function<void(int, std::string&&)>, std::optional<::CommandPermissionLevel>);

    // NOLINTEND
};
