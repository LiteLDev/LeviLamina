#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/scripting/Version.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

class VersionedActorDamageCause {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                          mName;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause const> mCause;
    ::ll::TypedStorage<8, 40, ::Scripting::Version const>                   mVersion;
    ::ll::TypedStorage<1, 2, ::std::optional<uchar> const>                  mDeprecatedMajorVersion;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Version getVersion() const;
    // NOLINTEND
};
