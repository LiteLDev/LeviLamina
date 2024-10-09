#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ResourcePack& operator=(ResourcePack const&);
    ResourcePack(ResourcePack const&);
    ResourcePack();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePack();

    MCAPI explicit ResourcePack(class Pack& pack);

    MCAPI bool areKnownFilesValid();

    MCAPI void forEachIn(
        class Core::Path const&                      filePath,
        std::function<void(class Core::Path const&)> callback,
        int                                          subpackIndex,
        bool                                         recurseAnyways
    ) const;

    MCAPI void generateAssetSet();

    MCAPI std::string const& getFolderName() const;

    MCAPI double getLoadTime() const;

    MCAPI class PackManifest& getManifest();

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI class mce::UUID const& getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI bool getResource(class Core::Path const& resourceName, std::string& resourceStream, int subpackIndex) const;

    MCAPI class ResourceLocation const& getResourceLocation() const;

    MCAPI int getSubpackCount() const;

    MCAPI std::string const& getSubpackFolderName(int subpackIndex) const;

    MCAPI int getSubpackIndex(std::string const& name) const;

    MCAPI class SubpackInfoCollection const& getSubpackInfoStack() const;

    MCAPI class SemVersion const& getVersion() const;

    MCAPI bool hasResource(class Core::Path const& resourceName, int subpackIndex) const;

    MCAPI bool isBaseGamePack() const;

    MCAPI bool isSlicePack() const;

    MCAPI bool isZipped() const;

    MCAPI void setAsSlicePack();

    MCAPI void setError();

    MCAPI void setLoadTime(double loadTime);

    MCAPI void setLocale(std::string const& code);

    MCAPI void unregisterDeleteCallback(void* owner);

    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_BUG_ICON_PATH;

    MCAPI static class Core::PathBuffer<std::string> const RESOURCE_PACK_ICON_PATH;

    MCAPI static class Core::PathBuffer<std::string> const TEXTURES_LIST_PATH;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _createSubpack(struct SubpackInfo const& subpackInfo);

    MCAPI void _createSubpacks();

    MCAPI void _generateIconPath();

    // NOLINTEND
};
