#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/Pack.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/ResourceSignature.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/resources/PackCategory.h"
#include "mc/resources/PackOrigin.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack : public ::Bedrock::EnableNonOwnerReferences {
public:
    bool                                             mHidden;                // this+0x18
    bool                                             mError;                 // this+0x19
    Bedrock::NotNullNonOwnerPtr<class Pack>          mPack;                  // this+0x20
    std::unique_ptr<class PackAccessStrategy>        mSubpackAccessStrategy; // this+0x30
    class PackReport                                 mPackReport;            // this+0x38
    std::vector<std::unique_ptr<class Pack>>         mSubPacks;              // this+0x1E8
    std::vector<std::unique_ptr<class ResourcePack>> mSubResourcePacks;      // this+0x200
    Core::PathBuffer<std::string>                    mIconPath;              // this+0x218
    double                                           mLoadTime;              // this+0x238
    bool                                             mIsBaseGamePack;        // this+0x240
    bool                                             mIsSlicePack;           // this+0x241
    ResourceSignature                                mResourceSignature;     // this+0x248

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

    MCAPI std::string const& getSubpackFolderName(int) const;

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
