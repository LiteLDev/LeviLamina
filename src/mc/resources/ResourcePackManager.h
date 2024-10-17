#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoader.h"
#include "mc/deps/core/resource/ResourcePackStackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

class ResourcePackManager : public ::ResourceLoader {
public:
    // prevent constructor by default
    ResourcePackManager& operator=(ResourcePackManager const&);
    ResourcePackManager(ResourcePackManager const&);
    ResourcePackManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackManager();

    // vIndex: 1
    virtual bool load(class ResourceLocation const& resourceLocation, std::string& resourceStream) const;

    // vIndex: 2
    virtual bool load(
        class ResourceLocation const&   resourceLocation,
        std::string&                    resourceStream,
        std::vector<std::string> const& extensionList
    ) const;

    // vIndex: 3
    virtual bool load(
        class ResourceLocationPair const& resourceLocationPair,
        std::string&                      resourceStream,
        std::vector<std::string> const&   extensionList
    ) const;

    // vIndex: 4
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const& resourceLocation
    ) const;

    // vIndex: 5
    virtual bool isInStreamableLocation(class ResourceLocation const& resourceLocation) const;

    // vIndex: 6
    virtual bool isInStreamableLocation(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensionList
    ) const;

    // vIndex: 7
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const& resourceLocation) const;

    // vIndex: 8
    virtual class Core::PathBuffer<std::string>
    getPath(class ResourceLocation const& resourceLocation, std::vector<std::string> const& extensionList) const;

    // vIndex: 9
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const& resourceLocation
    ) const;

    // vIndex: 10
    virtual class Core::PathBuffer<std::string> getPathContainingResource(
        class ResourceLocation const& resourceLocation,
        std::vector<std::string>      extensionList
    ) const;

    // vIndex: 11
    virtual std::pair<int, std::string const&> getPackStackIndexOfResource(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensionList
    ) const;

    // vIndex: 12
    virtual bool hasCapability(std::string_view requiredCapability) const;

    MCAPI ResourcePackManager(
        std::function<class Core::PathBuffer<std::string>()>                getPath,
        Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const& contentTierManager,
        bool                                                                needsToInitialize
    );

    MCAPI void clearStack(::ResourcePackStackType stackType, bool composeStack);

    MCAPI int composeFullStack(
        class ResourcePackStack&       output,
        class ResourcePackStack const& globalStack,
        class ResourcePackStack const& levelStack,
        class ResourcePackStack const& addonStack
    ) const;

    MCAPI class SemVersion getFullStackMinEngineVersion() const;

    MCAPI class PackSourceReport const* getPackSourceReport() const;

    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const& group) const;

    MCAPI std::vector<class Core::PathBuffer<std::string>>
          getResourcesOfGroup(class PackInstance const& packInstance, std::string const& group) const;

    MCAPI class ResourcePackStack const& getStack(::ResourcePackStackType stackType) const;

    MCAPI void handlePendingStackChanges();

    MCAPI bool hasResource(class ResourceLocation const& resourceLocation) const;

    MCAPI bool isOnlyBaseGamePacks() const;

    MCAPI void iteratePacks(std::function<void(class PackInstance const&)> const& pred) const;

    MCAPI void registerResourcePackListener(class ResourcePackListener& listener);

    MCAPI void removeIf(std::function<bool(class PackInstance const&)> const& pred);

    MCAPI void setPackSourceReport(class PackSourceReport&& report);

    MCAPI bool
    setStack(std::unique_ptr<class ResourcePackStack> stack, ::ResourcePackStackType stackType, bool composeStack);

    MCAPI void unRegisterResourcePackListener(class ResourcePackListener& listener);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _composeFullStack();

    MCAPI void _getResourcesOfGroup(
        class PackInstance const&                         packInstance,
        std::string const&                                group,
        std::vector<class Core::PathBuffer<std::string>>& resources
    ) const;

    MCAPI void _updateLanguageSubpacks();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(
        std::function<class Core::PathBuffer<std::string>()>                getPath,
        Bedrock::NotNullNonOwnerPtr<class IContentTierManager const> const& contentTierManager,
        bool                                                                needsToInitialize
    );

    MCAPI void dtor$();

    MCAPI std::pair<int, std::string const&> getPackStackIndexOfResource$(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensionList
    ) const;

    MCAPI class Core::PathBuffer<std::string> getPath$(class ResourceLocation const& resourceLocation) const;

    MCAPI class Core::PathBuffer<std::string>
    getPath$(class ResourceLocation const& resourceLocation, std::vector<std::string> const& extensionList) const;

    MCAPI class Core::PathBuffer<std::string> getPathContainingResource$(class ResourceLocation const& resourceLocation
    ) const;

    MCAPI class Core::PathBuffer<std::string> getPathContainingResource$(
        class ResourceLocation const& resourceLocation,
        std::vector<std::string>      extensionList
    ) const;

    MCAPI bool hasCapability$(std::string_view requiredCapability) const;

    MCAPI bool isInStreamableLocation$(class ResourceLocation const& resourceLocation) const;

    MCAPI bool isInStreamableLocation$(
        class ResourceLocation const&   resourceLocation,
        std::vector<std::string> const& extensionList
    ) const;

    MCAPI bool load$(class ResourceLocation const& resourceLocation, std::string& resourceStream) const;

    MCAPI bool load$(
        class ResourceLocation const&   resourceLocation,
        std::string&                    resourceStream,
        std::vector<std::string> const& extensionList
    ) const;

    MCAPI bool load$(
        class ResourceLocationPair const& resourceLocationPair,
        std::string&                      resourceStream,
        std::vector<std::string> const&   extensionList
    ) const;

    MCAPI std::vector<class LoadedResourceData> loadAllVersionsOf$(class ResourceLocation const& resourceLocation
    ) const;

    // NOLINTEND
};
