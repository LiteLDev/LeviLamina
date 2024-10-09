#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

class PackSource {
public:
    // prevent constructor by default
    PackSource& operator=(PackSource const&);
    PackSource(PackSource const&);
    PackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackSource();

    // vIndex: 1
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const = 0;

    // vIndex: 2
    virtual void forEachPack(std::function<void(class Pack&)> callback) = 0;

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4
    virtual ::PackType getPackType() const;

    // vIndex: 5
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    ) = 0;

    MCAPI class Pack* fetchPack(struct PackIdVersion const& packId);

    MCAPI void resolveUpgradeDependencies(
        class Pack&                                                         pack,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
