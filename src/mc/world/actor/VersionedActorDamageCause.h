#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDamageCause.h"

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
    MCAPI VersionedActorDamageCause(
        std::string               name,
        ::ActorDamageCause        cause,
        struct Scripting::Version version,
        std::optional<uchar>      deprecatedMajorVersion
    );

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI std::optional<uchar> getDeprecatedMajorVersion() const;

    MCAPI std::string const& getName() const;

    MCAPI struct Scripting::Version getVersion() const;

    MCAPI ~VersionedActorDamageCause();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
