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
class ResourcePackStack;
namespace Core { class Path; }
// clang-format on

class ResourcePackManager : public ::ResourceLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb96c8d;
    ::ll::UntypedStorage<8, 8>  mUnk4f9819;
    ::ll::UntypedStorage<8, 8>  mUnk809618;
    ::ll::UntypedStorage<8, 8>  mUnkd638dd;
    ::ll::UntypedStorage<8, 8>  mUnk7a20a8;
    ::ll::UntypedStorage<8, 8>  mUnk296ec8;
    ::ll::UntypedStorage<8, 8>  mUnk9cce53;
    ::ll::UntypedStorage<8, 8>  mUnk69ba5b;
    ::ll::UntypedStorage<8, 32> mUnk67648f;
    ::ll::UntypedStorage<1, 1>  mUnk84ade0;
    ::ll::UntypedStorage<1, 1>  mUnkacc084;
    ::ll::UntypedStorage<1, 1>  mUnk384e00;
    ::ll::UntypedStorage<8, 8>  mUnk661f94;
    ::ll::UntypedStorage<8, 24> mUnk77052a;
    ::ll::UntypedStorage<8, 24> mUnk3bf93e;
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
        ::gsl::span<::std::string const> extensions
    ) const /*override*/;

    // vIndex: 11
    virtual ::std::pair<int, ::std::string_view> getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const /*override*/;

    // vIndex: 12
    virtual bool hasCapability(::std::string_view requiredCapability) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackManager(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
    );

    MCNAPI void _calculateMinEngineVersionFromFullStack();

    MCNAPI void _composeFullStack();

    MCNAPI void _getResourcesOfGroup(
        ::PackInstance const&        packInstance,
        ::std::string const&         group,
        ::std::vector<::Core::Path>& resources
    ) const;

    MCNAPI void _updateLanguageSubpacks();

    MCNAPI int composeFullStack(
        ::ResourcePackStack&       output,
        ::ResourcePackStack const& globalStack,
        ::ResourcePackStack const& levelStack,
        ::ResourcePackStack const& addonStack
    ) const;

    MCNAPI ::ResourceGroup getResourcesOfGroup(::std::string const& group) const;

    MCNAPI ::ResourceGroup getResourcesOfGroup(::PackInstance const& packInstance, ::std::string const& group) const;

    MCNAPI ::ResourcePackStack const& getStack(::ResourcePackStackType stackType) const;

    MCNAPI void iteratePacks(::std::function<void(::PackInstance const&)> const& pred) const;

    MCNAPI void removeIf(::std::function<bool(::PackInstance const&)> const& pred);

    MCNAPI void setPackSourceReport(::PackSourceReport&& report);

    MCNAPI bool
    setStack(::std::unique_ptr<::ResourcePackStack> stack, ::ResourcePackStackType stackType, bool composeStack);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::function<::Core::PathBuffer<::std::string>()>              getPath,
        ::Bedrock::NotNullNonOwnerPtr<::IContentTierManager const> const& contentTierManager,
        bool                                                              needsToInitialize
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(::ResourceLocation const& resourceLocation, ::std::string& resourceStream) const;

    MCNAPI bool $load(
        ::ResourceLocation const&        resourceLocation,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI bool $load(
        ::ResourceLocationPair const&    resourceLocationPair,
        ::std::string&                   resourceStream,
        ::gsl::span<::std::string const> extensionList
    ) const;

    MCNAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    MCNAPI bool $isInStreamableLocation(::ResourceLocation const& resourceLocation) const;

    MCNAPI bool $isInStreamableLocation(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPath(::ResourceLocation const& resourceLocation) const;

    MCNAPI ::Core::PathBuffer<::std::string>
    $getPath(::ResourceLocation const& resourceLocation, ::gsl::span<::std::string const> extensionList) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(::ResourceLocation const& resourceLocation
    ) const;

    MCNAPI ::Core::PathBuffer<::std::string> $getPathContainingResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI ::std::pair<int, ::std::string_view> $getPackStackIndexOfResource(
        ::ResourceLocation const&        resourceLocation,
        ::gsl::span<::std::string const> extensions
    ) const;

    MCNAPI bool $hasCapability(::std::string_view requiredCapability) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
