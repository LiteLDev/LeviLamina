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
namespace Json { class Value; }
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
    // vIndex: 0, symbol: ??1ScriptActorCommandOrigin@@UEAA@XZ
    virtual ~ScriptActorCommandOrigin();

    // vIndex: 8, symbol: ?getEntity@ScriptActorCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 10, symbol:
    // ?clone@ScriptActorCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // symbol:
    // ??0ScriptActorCommandOrigin@@QEAA@AEBVActor@@V?$function@$$A6AXH$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@@Z@std@@V?$optional@W4CommandPermissionLevel@@@3@@Z
    MCAPI
    ScriptActorCommandOrigin(class Actor const&, std::function<void(int, std::string&&, class Json::Value&&)>, std::optional<::CommandPermissionLevel>);

    // NOLINTEND
};
