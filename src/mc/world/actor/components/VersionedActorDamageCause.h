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
    MCAPI VersionedActorDamageCause(std::string, ::ActorDamageCause, struct Scripting::Version, std::optional<uchar>);

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI std::optional<uchar> getDeprecatedMajorVersion() const;

    MCAPI std::string const& getName() const;

    MCAPI struct Scripting::Version getVersion() const;

    MCAPI ~VersionedActorDamageCause();

    // NOLINTEND
};
