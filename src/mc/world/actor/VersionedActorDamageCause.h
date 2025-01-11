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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka039ce;
    ::ll::UntypedStorage<4, 4>  mUnkac8430;
    ::ll::UntypedStorage<8, 40> mUnkd1aeb7;
    ::ll::UntypedStorage<1, 2>  mUnk1d165a;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionedActorDamageCause& operator=(VersionedActorDamageCause const&);
    VersionedActorDamageCause(VersionedActorDamageCause const&);
    VersionedActorDamageCause();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ActorDamageCause getCause() const;

    MCAPI ::std::optional<uchar> getDeprecatedMajorVersion() const;

    MCFOLD ::std::string const& getName() const;

    MCAPI ::Scripting::Version getVersion() const;

    MCAPI ~VersionedActorDamageCause();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
