#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class PackManifest;
class PackReport;
class ResourceLocation;
class SubpackInfoCollection;
// clang-format on

class IPackManifestFactory {
public:
    // prevent constructor by default
    IPackManifestFactory& operator=(IPackManifestFactory const&);
    IPackManifestFactory(IPackManifestFactory const&);
    IPackManifestFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackManifestFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<::PackManifest>
    create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
