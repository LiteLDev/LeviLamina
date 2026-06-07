#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/Version.h"
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
    // prevent constructor by default
    VersionedActorDamageCause& operator=(VersionedActorDamageCause const&);
    VersionedActorDamageCause();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VersionedActorDamageCause(::VersionedActorDamageCause&&);

    MCAPI VersionedActorDamageCause(::VersionedActorDamageCause const&);

    MCAPI VersionedActorDamageCause(
        ::std::string                           name,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::Scripting::Version                    version,
        ::std::optional<uchar>                  deprecatedMajorVersion
    );

    MCFOLD ::SharedTypes::Legacy::ActorDamageCause getCause() const;

    MCAPI ::std::optional<uchar> getDeprecatedMajorVersion() const;

    MCFOLD ::std::string const& getName() const;

    MCAPI ::Scripting::Version getVersion() const;

    MCAPI ~VersionedActorDamageCause();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::VersionedActorDamageCause&&);

    MCFOLD void* $ctor(::VersionedActorDamageCause const&);

    MCAPI void* $ctor(
        ::std::string                           name,
        ::SharedTypes::Legacy::ActorDamageCause cause,
        ::Scripting::Version                    version,
        ::std::optional<uchar>                  deprecatedMajorVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
