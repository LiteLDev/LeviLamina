#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

class VersionedActorDamageCause {
public:
    // prevent constructor by default
    VersionedActorDamageCause& operator=(VersionedActorDamageCause const&);
    VersionedActorDamageCause(VersionedActorDamageCause const&);
    VersionedActorDamageCause();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0VersionedActorDamageCause@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@UVersion@Scripting@@V?$optional@E@2@@Z
    MCAPI VersionedActorDamageCause(std::string, ::ActorDamageCause, struct Scripting::Version, std::optional<uchar>);

    // symbol: ?getCause@VersionedActorDamageCause@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getCause() const;

    // symbol: ?getDeprecatedMajorVersion@VersionedActorDamageCause@@QEBA?AV?$optional@E@std@@XZ
    MCAPI std::optional<uchar> getDeprecatedMajorVersion() const;

    // symbol:
    // ?getName@VersionedActorDamageCause@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getVersion@VersionedActorDamageCause@@QEBA?AUVersion@Scripting@@XZ
    MCAPI struct Scripting::Version getVersion() const;

    // symbol: ??1VersionedActorDamageCause@@QEAA@XZ
    MCAPI ~VersionedActorDamageCause();

    // NOLINTEND
};
