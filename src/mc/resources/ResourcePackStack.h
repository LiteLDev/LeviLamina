#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackInstance.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

class ResourcePackStack {
public:
    std::vector<class PackInstance>         mStack;            // this+0x8
    std::unique_ptr<class PackSourceReport> mPackSourceReport; // this+0x20

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
        class ResourceLocation const&                         resourceLocation,
        std::function<bool(class PackInstance const&)> const& packInstanceFilter,
        class ResourcePackMergeStrategy&                      mergeStrategy
    ) const;

    MCAPI void
    add(class PackInstance                                                      packInstance,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const& repo,
        bool                                                                    isDependent);

    MCAPI void generateAssetSet();

    MCAPI std::vector<std::string> getPackTelemetryNamesWithVersion(::PackType type) const;

    MCAPI void getSplitStacks(class ResourcePackStack& clientStack, class ResourcePackStack& serverStack) const;

    MCAPI bool hasCapabilityInStack(std::string_view capability) const;

    MCAPI bool hasPlatformLockedContent() const;

    MCAPI void iteratePacks(std::function<void(class PackInstance const&)> const& callback) const;

    MCAPI void removeDuplicates();

    MCAPI void removeIf(std::function<bool(class PackInstance const&)> const& callback);

    MCAPI void removeInvalidPacks();

    MCAPI static std::unique_ptr<class ResourcePackStack>
    deserialize(std::istream& fileStream, Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const& repo);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _populateDependencies(
        std::vector<class PackInstance>&                                        packStack,
        class PackInstance&                                                     packInstance,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository const> const& repo,
        bool                                                                    isDependent
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI std::vector<class LoadedResourceData> loadAllVersionsOf$(class ResourceLocation const& resourceLocation
    ) const;

    MCAPI bool loadAllVersionsOf$(
        class ResourceLocation const&    resourceLocation,
        class ResourcePackMergeStrategy& mergeStrategy
    ) const;

    MCAPI bool loadAllVersionsOf$(
        class ResourceLocation const&                         resourceLocation,
        std::function<bool(class PackInstance const&)> const& packInstanceFilter,
        class ResourcePackMergeStrategy&                      mergeStrategy
    ) const;

    MCAPI static std::map<class Core::PathBuffer<std::string>, class Core::PathBuffer<std::string>>& mUpgradePathMap();

    // NOLINTEND
};
