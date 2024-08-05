#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPackManifestFactory {
public:
    // prevent constructor by default
    IPackManifestFactory& operator=(IPackManifestFactory const&);
    IPackManifestFactory(IPackManifestFactory const&);
    IPackManifestFactory();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPackManifestFactory();

    // vIndex: 1
    virtual std::unique_ptr<class PackManifest> create(
        class PackAccessStrategy&     accessStrategy,
        class ResourceLocation const& location,
        class PackReport&             report,
        class SubpackInfoCollection*  subpackInfoStack
    ) = 0;

    // NOLINTEND
};
