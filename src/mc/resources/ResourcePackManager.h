#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLoader.h"
#include "mc/deps/core/resource/ResourcePackStackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentTierManager;
class LoadedResourceData;
class PackInstance;
class PackSourceReport;
class ResourceGroup;
class ResourceLocation;
class ResourceLocationPair;
class ResourcePackListener;
class ResourcePackStack;
namespace Core { class Path; }
// clang-format on

class ResourcePackManager : public ::ResourceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkb96c8d;
    ::ll::UntypedStorage<8, 8>   mUnk4f9819;
    ::ll::UntypedStorage<8, 8>   mUnk809618;
    ::ll::UntypedStorage<8, 8>   mUnkd638dd;
    ::ll::UntypedStorage<8, 8>   mUnk7a20a8;
    ::ll::UntypedStorage<8, 8>   mUnk296ec8;
    ::ll::UntypedStorage<8, 8>   mUnk9cce53;
    ::ll::UntypedStorage<8, 8>   mUnk69ba5b;
    ::ll::UntypedStorage<8, 32>  mUnk67648f;
    ::ll::UntypedStorage<1, 1>   mUnk84ade0;
    ::ll::UntypedStorage<1, 1>   mUnkacc084;
    ::ll::UntypedStorage<1, 1>   mUnk384e00;
    ::ll::UntypedStorage<8, 8>   mUnk661f94;
    ::ll::UntypedStorage<8, 24>  mUnk77052a;
    ::ll::UntypedStorage<8, 112> mUnk3bf93e;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackManager& operator=(ResourcePackManager const&);
    ResourcePackManager(ResourcePackManager const&);
    ResourcePackManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackManager() /*override*/;

    // vIndex: 3
    virtual bool load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const /*override*/;

    // vIndex: 2
    virtual bool load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    // vIndex: 1
    virtual bool load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    // vIndex: 4
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const
        /*override*/;

    // vIndex: 6
    virtual bool isInStreamableLocation(::ResourceLocation const& resourceLocation) const /*override*/;

    // vIndex: 5
    virtual bool isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const /*override*/;

    // vIndex: 8
    virtual ::Core::PathBuffer<::std::string> getPath(::ResourceLocation const& resourceLocation) const /*override*/;

    // vIndex: 7
    virtual ::Core::PathBuffer<::std::string>
    getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const
        /*override*/;

    // vIndex: 10
    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(::ResourceLocation const& resourceLocation
    ) const /*override*/;

    // vIndex: 9
    virtual ::Core::PathBuffer<::std::string> getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    // vIndex: 11
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const /*override*/;

    // vIndex: 12
    virtual bool hasCapability(::std::string_view requiredCapability) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePackManager(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
    );

    MCAPI void _calculateMinEngineVersionFromFullStack();

    MCAPI void _composeFullStack();

    MCAPI void _getResourcesOfGroup(
        ::PackInstance const&        packInstance,
        ::std::string const&         group,
        ::std::vector<::Core::Path>& resources
    ) const;

    MCAPI bool _shouldRebuildStack() const;

    MCAPI void _updateLanguageSubpacks();

    MCAPI void clearStack(::ResourcePackStackType stackType, bool composeStack);

    MCAPI int composeFullStack(
        ::ResourcePackStack&       output,
        ::ResourcePackStack const& globalStack,
        ::ResourcePackStack const& levelStack,
        ::ResourcePackStack const& addonStack
    ) const;

    MCAPI ::PackSourceReport const* getPackSourceReport() const;

    MCAPI ::ResourceGroup getResourcesOfGroup(::std::string const& group) const;

    MCAPI ::ResourceGroup getResourcesOfGroup(::PackInstance const& packInstance, ::std::string const& group) const;

    MCAPI ::ResourcePackStack const& getStack(::ResourcePackStackType stackType) const;

    MCAPI void handlePendingStackChanges();

    MCAPI bool isAssetExtractionViableForFullStack() const;

    MCAPI bool isOnlyBaseGamePacks() const;

    MCAPI void iteratePacks(::std::function<void(::PackInstance const&)> const& pred) const;

    MCAPI bool loadText(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCAPI void registerResourcePackListener(::ResourcePackListener& listener);

    MCAPI void removeIf(::std::function<bool(::PackInstance const&)> const& pred);

    MCAPI void setPackSourceReport(::PackSourceReport&& report);

    MCAPI bool
    setStack(::std::unique_ptr<::ResourcePackStack> stack, ::ResourcePackStackType stackType, bool composeStack);

    MCAPI void unRegisterResourcePackListener(::ResourcePackListener& listener);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCAPI bool $load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    MCAPI bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    MCAPI bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;

    MCAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(::ResourceLocation const& resourceLocation
    ) const;

    MCAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCAPI bool $hasCapability(::std::string_view requiredCapability) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
