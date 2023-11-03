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
    // symbol: ?getCause@VersionedActorDamageCause@@QEBA?AW4ActorDamageCause@@XZ
    MCAPI ::ActorDamageCause getCause() const;

    // symbol:
    // ?getName@VersionedActorDamageCause@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getVersion@VersionedActorDamageCause@@QEBA?AUVersion@Scripting@@XZ
    MCAPI struct Scripting::Version getVersion() const;

    // symbol: ??1VersionedActorDamageCause@@QEAA@XZ
    MCAPI ~VersionedActorDamageCause();

    // NOLINTEND
};
