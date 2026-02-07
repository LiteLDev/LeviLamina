#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackSource.h"

// auto generated forward declare list
// clang-format off
class IPackManifestFactory;
// clang-format on

class IContentCatalogPackSource : public ::PackSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void refreshCatalogItems(::IPackManifestFactory&) = 0;

    virtual void setEnabled(bool) = 0;

    virtual ~IContentCatalogPackSource() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
