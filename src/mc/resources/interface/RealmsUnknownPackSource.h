#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

class RealmsUnknownPackSource : public ::PackSource {
public:
    // prevent constructor by default
    RealmsUnknownPackSource& operator=(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource(RealmsUnknownPackSource const&);
    RealmsUnknownPackSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsUnknownPackSource() = default;

    // vIndex: 1
    virtual void forEachPackConst(std::function<void(class Pack const&)> callback) const;

    // vIndex: 2
    virtual void forEachPack(std::function<void(class Pack&)> callback);

    // vIndex: 3
    virtual ::PackOrigin getPackOrigin() const;

    // vIndex: 4
    virtual ::PackType getPackType() const;

    // vIndex: 5
    virtual class PackSourceReport load(
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider
    );

    // NOLINTEND
};
