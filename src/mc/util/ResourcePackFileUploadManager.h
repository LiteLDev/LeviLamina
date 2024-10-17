#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/util/FileUploadManager.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class ResourcePackFileUploadManager : public ::FileUploadManager {
public:
    // prevent constructor by default
    ResourcePackFileUploadManager& operator=(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager(ResourcePackFileUploadManager const&);
    ResourcePackFileUploadManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackFileUploadManager();

    // vIndex: 2
    virtual void uploadFileToRealmStorage(
        std::string const&      uploadId,
        class Core::Path const& path,
        int                     slotIndex,
        std::string const&      realmsGuid
    );

    MCAPI void uploadResourcePack(
        std::string const&            resourcePackName,
        class ResourceLocation const& resourceLocation,
        bool                          isZipped,
        bool                          isPremium,
        ::PackType                    packType
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _uploadPackToRealmStorage(std::string const& uploadId, class Core::Path const& path, int slotIndex, std::string const&);

    MCAPI void _uploadResourcePackFolder(
        std::string const&            resourcePack,
        class ResourceLocation const& resourcePackLocation,
        class Core::Path const&       resourceZipPath,
        class Json::Value const&      uploadOptions
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void uploadFileToRealmStorage$(
        std::string const&      uploadId,
        class Core::Path const& path,
        int                     slotIndex,
        std::string const&      realmsGuid
    );

    // NOLINTEND
};
