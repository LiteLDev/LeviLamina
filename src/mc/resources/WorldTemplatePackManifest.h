#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackManifest.h"
#include "mc/world/level/GameType.h"

class WorldTemplatePackManifest : public ::PackManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaf55f4;
    ::ll::UntypedStorage<1, 1> mUnk9c0858;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const&);
    WorldTemplatePackManifest(WorldTemplatePackManifest const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldTemplatePackManifest() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::PackManifest> clone() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldTemplatePackManifest();

    MCAPI ::GameType getGameType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::PackManifest> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
