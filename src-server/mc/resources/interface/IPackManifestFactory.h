#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class PackAccessStrategy;
class PackManifest;
class PackReport;
class ResourceLocation;
class SubpackInfoCollection;
// clang-format on

class IPackManifestFactory : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackManifestFactory() /*override*/;

    // vIndex: 1
    virtual ::std::unique_ptr<::PackManifest> create(::PackAccessStrategy&, ::ResourceLocation const&, ::PackReport&, ::SubpackInfoCollection*) = 0;
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

};
