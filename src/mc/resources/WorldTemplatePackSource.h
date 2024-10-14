#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackSource.h"

class WorldTemplatePackSource : public ::DirectoryPackSource {
public:
    // prevent constructor by default
    WorldTemplatePackSource& operator=(WorldTemplatePackSource const&);
    WorldTemplatePackSource(WorldTemplatePackSource const&);
    WorldTemplatePackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldTemplatePackSource() = default;

    // vIndex: 5
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class PackSourceReport load$(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
