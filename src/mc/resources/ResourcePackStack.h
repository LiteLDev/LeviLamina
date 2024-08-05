#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/resources/PackType.h"

class ResourcePackStack {
public:
    // prevent constructor by default
    ResourcePackStack& operator=(ResourcePackStack const&);
    ResourcePackStack(ResourcePackStack const&);
    ResourcePackStack();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackStack();

    // vIndex: 1
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const& resourceLocation
    ) const;

    // vIndex: 2
    virtual bool loadAllVersionsOf(
        class ResourceLocation const&    resourceLocation,
        class ResourcePackMergeStrategy& mergeStrategy
    ) const;

    // vIndex: 3
    virtual bool loadAllVersionsOf(
        class ResourceLocation const& resourceLocation,
        std::function<bool(class PackInstance const&)> const&,
        class ResourcePackMergeStrategy& mergeStrategy
    ) const;

    MCAPI void add(class PackInstance, Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const&, bool);

    MCAPI void generateAssetSet();

    MCAPI std::vector<std::string> getPackTelemetryNamesWithVersion(::PackType) const;

    MCAPI void getSplitStacks(class ResourcePackStack& clientStack, class ResourcePackStack& serverStack) const;

    MCAPI bool hasCapabilityInStack(std::string_view capability) const;

    MCAPI bool hasPlatformLockedContent() const;

    MCAPI void iteratePacks(std::function<void(class PackInstance const&)> const& callback) const;

    MCAPI void removeDuplicates();

    MCAPI void removeIf(std::function<bool(class PackInstance const&)> const& callback);

    MCAPI void removeInvalidPacks();

    MCAPI static std::unique_ptr<class ResourcePackStack>
    deserialize(std::istream&, Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _populateDependencies(
        std::vector<class PackInstance>&,
        class PackInstance&,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const&,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::map<class Core::PathBuffer<std::string>, class Core::PathBuffer<std::string>> mUpgradePathMap;

    // NOLINTEND
};
