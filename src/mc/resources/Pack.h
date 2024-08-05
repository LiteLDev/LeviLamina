#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackOrigin.h"
#include "mc/resources/PackType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Pack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    Pack& operator=(Pack const&);
    Pack(Pack const&);
    Pack();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Pack() = default;

    MCAPI Pack(
        std::unique_ptr<class PackManifest>          manifest,
        std::unique_ptr<class PackAccessStrategy>    accessStrategy,
        std::unique_ptr<class SubpackInfoCollection> subpacks,
        std::unique_ptr<class PackMetadata>          metadata
    );

    MCAPI class PackAccessStrategy* getAccessStrategy();

    MCAPI class PackManifest& getManifest();

    MCAPI class PackManifest const& getManifest() const;

    MCAPI class PackManifest* getManifestPtr();

    MCAPI class SubpackInfoCollection* getSubpackInfoStack();

    MCAPI void move(class Pack&& pack);

    MCAPI void notifyDeleted();

    MCAPI void notifyUpdated();

    MCAPI void registerPackDeletedCallback(void* ptr, std::function<void(class Pack&)> callback);

    MCAPI void registerPackUpdatedCallback(void* ptr, std::function<void(class Pack&)> callback);

    MCAPI void unregisterPackDeletedCallback(void* ptr);

    MCAPI void unregisterPackUpdatedCallback(void* ptr);

    MCAPI static std::unique_ptr<class Pack> createPack(
        class ResourceLocation const&                                       fileLocation,
        ::PackType                                                          type,
        ::PackOrigin                                                        origin,
        class IPackManifestFactory&                                         manifestFactory,
        Bedrock::NotNullNonOwnerPtr<class IContentKeyProvider const> const& keyProvider,
        class PackSourceReport*                                             report
    );

    MCAPI static std::unique_ptr<class PackMetadata> createPackMetadata(
        ::PackType                      type,
        class PackManifest&             manifest,
        class PackAccessStrategy const& accessStrategy,
        class PackReport&               report
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Core::PathBuffer<std::string> const EDUCATION_METADATA_FILE;

    // NOLINTEND
};
