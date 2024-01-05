#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/SubClientId.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class ScriptCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    ScriptCommandOrigin& operator=(ScriptCommandOrigin const&);
    ScriptCommandOrigin(ScriptCommandOrigin const&);
    ScriptCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptCommandOrigin@@UEAA@XZ
    virtual ~ScriptCommandOrigin();

    // vIndex: 1, symbol:
    // ?getRequestId@ScriptCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@ScriptCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@ScriptCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@ScriptCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@ScriptCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@ScriptCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@ScriptCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@ScriptCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@ScriptCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@ScriptCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@ScriptCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@ScriptCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@ScriptCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 26, symbol:
    // ?handleCommandOutputCallback@ScriptCommandOrigin@@UEBAXH$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@@Z
    virtual void handleCommandOutputCallback(int successCount, std::string&& messages, class Json::Value&& json) const;

    // vIndex: 30, symbol: ?isValid@ScriptCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol:
    // ??0ScriptCommandOrigin@@QEAA@AEAVServerLevel@@PEAVDimension@@V?$function@$$A6AXH$$QEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVValue@Json@@@Z@std@@V?$optional@W4CommandPermissionLevel@@@4@@Z
    MCAPI ScriptCommandOrigin(
        class ServerLevel& origin,
        class Dimension*   dimension,
        std::function<void(int, std::string&&, class Json::Value&&)>,
        std::optional<::CommandPermissionLevel> permissionLevel
    );

    // NOLINTEND
};
