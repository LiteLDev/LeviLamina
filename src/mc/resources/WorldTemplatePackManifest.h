#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackManifest.h"

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
    WorldTemplatePackManifest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplatePackManifest() /*override*/;

    virtual ::std::unique_ptr<::PackManifest> clone() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::PackManifest> $clone() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
