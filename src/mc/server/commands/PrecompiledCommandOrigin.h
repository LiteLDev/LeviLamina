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

class PrecompiledCommandOrigin : public ::CommandOrigin {
public:
    // prevent constructor by default
    PrecompiledCommandOrigin& operator=(PrecompiledCommandOrigin const&);
    PrecompiledCommandOrigin(PrecompiledCommandOrigin const&);
    PrecompiledCommandOrigin();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PrecompiledCommandOrigin@@UEAA@XZ
    virtual ~PrecompiledCommandOrigin() = default;

    // vIndex: 1, symbol:
    // ?getRequestId@PrecompiledCommandOrigin@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string const& getRequestId() const;

    // vIndex: 2, symbol:
    // ?getName@PrecompiledCommandOrigin@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?getBlockPosition@PrecompiledCommandOrigin@@UEBA?AVBlockPos@@XZ
    virtual class BlockPos getBlockPosition() const;

    // vIndex: 4, symbol: ?getWorldPosition@PrecompiledCommandOrigin@@UEBA?AVVec3@@XZ
    virtual class Vec3 getWorldPosition() const;

    // vIndex: 5, symbol: ?getRotation@PrecompiledCommandOrigin@@UEBA?AV?$optional@VVec2@@@std@@XZ
    virtual std::optional<class Vec2> getRotation() const;

    // vIndex: 6, symbol: ?getLevel@PrecompiledCommandOrigin@@UEBAPEAVLevel@@XZ
    virtual class Level* getLevel() const;

    // vIndex: 7, symbol: ?getDimension@PrecompiledCommandOrigin@@UEBAPEAVDimension@@XZ
    virtual class Dimension* getDimension() const;

    // vIndex: 8, symbol: ?getEntity@PrecompiledCommandOrigin@@UEBAPEAVActor@@XZ
    virtual class Actor* getEntity() const;

    // vIndex: 9, symbol: ?getPermissionsLevel@PrecompiledCommandOrigin@@UEBA?AW4CommandPermissionLevel@@XZ
    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    // vIndex: 10, symbol:
    // ?clone@PrecompiledCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
    virtual std::unique_ptr<class CommandOrigin> clone() const;

    // vIndex: 13, symbol: ?hasChatPerms@PrecompiledCommandOrigin@@UEBA_NXZ
    virtual bool hasChatPerms() const;

    // vIndex: 14, symbol: ?hasTellPerms@PrecompiledCommandOrigin@@UEBA_NXZ
    virtual bool hasTellPerms() const;

    // vIndex: 15, symbol: ?canUseAbility@PrecompiledCommandOrigin@@UEBA_NW4AbilitiesIndex@@@Z
    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    // vIndex: 16, symbol: ?isWorldBuilder@PrecompiledCommandOrigin@@UEBA_NXZ
    virtual bool isWorldBuilder() const;

    // vIndex: 17, symbol: ?canUseCommandsWithoutCheatsEnabled@PrecompiledCommandOrigin@@UEBA_NXZ
    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    // vIndex: 18, symbol: ?isSelectorExpansionAllowed@PrecompiledCommandOrigin@@UEBA_NXZ
    virtual bool isSelectorExpansionAllowed() const;

    // vIndex: 23, symbol: ?getOriginType@PrecompiledCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
    virtual ::CommandOriginType getOriginType() const;

    // vIndex: 29, symbol: ?serialize@PrecompiledCommandOrigin@@UEBA?AVCompoundTag@@XZ
    virtual class CompoundTag serialize() const;

    // vIndex: 30, symbol: ?isValid@PrecompiledCommandOrigin@@UEBA_NXZ
    virtual bool isValid() const;

    // NOLINTEND
};
