#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackSource.h"
#include "mc/resources/PackType.h"

class CompositePackSource : public ::PackSource {
public:
    std::vector<PackSource*> mPackSources;
    // prevent constructor by default
    CompositePackSource& operator=(CompositePackSource const&);
    CompositePackSource(CompositePackSource const&);
    CompositePackSource();

    void addPackSource(PackSource& source) { mPackSources.push_back(&source); }

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
};
