#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

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

    std::unique_ptr<class PackManifest>          mManifest;             // this+0x18
    std::unique_ptr<class PackAccessStrategy>    mAccessStrategy;       // this+0x20
    std::unique_ptr<class SubpackInfoCollection> mSubpackInfoStack;     // this+0x28
    std::unique_ptr<class PackMetadata>          mMetadata;             // this+0x30
    std::map<void*, std::function<void(Pack&)>>  mPackUpdatedCallbacks; // this+0x38
    std::map<void*, std::function<void(Pack&)>>  mPackDeletedCallbacks; // this+0x48

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
