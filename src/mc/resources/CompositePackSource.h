#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackSource.h"

class CompositePackSource : public ::PackSource {
public:
    // prevent constructor by default
    CompositePackSource& operator=(CompositePackSource const&);
    CompositePackSource(CompositePackSource const&);
    CompositePackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CompositePackSource() = default;

    // vIndex: 1
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 5
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    MCAPI explicit CompositePackSource(std::vector<class PackSource*>&& packSources);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::vector<class PackSource*>&& packSources);

    MCAPI void forEachPack$(std::function<void(class Pack&)> callback);

    MCAPI void forEachPackConst$(std::function<void(class Pack const&)> callback) const;

    MCAPI class PackSourceReport load$(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
