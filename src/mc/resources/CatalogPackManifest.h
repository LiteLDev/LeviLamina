#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackManifest.h"

class CatalogPackManifest : public ::PackManifest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd5395d;
    ::ll::UntypedStorage<4, 4>  mUnkebbe63;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogPackManifest& operator=(CatalogPackManifest const&);
    CatalogPackManifest(CatalogPackManifest const&);
    CatalogPackManifest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CatalogPackManifest() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::PackManifest> clone() const /*override*/;
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
};
