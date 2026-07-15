#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentTierInfo;
class IResourcePackRepository;
class LoadedResourceData;
class PackInstance;
class PackSourceReport;
class ResourceLocation;
struct PackInstanceId;
class ResourcePackMergeStrategy;
// clang-format on

class ResourcePackStack {
public:
    // ResourcePackStack inner types define
    using PackInstanceStack = ::std::vector<::PackInstance>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstance>>        mStack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackSourceReport>> mPackSourceReport;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ResourcePackStack();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePackStack();

    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    virtual bool
    loadAllVersionsOf(::ResourceLocation const& resourceLocation, ::ResourcePackMergeStrategy& mergeStrategy) const;

    virtual bool loadAllVersionsOf(
        ::ResourceLocation const&                          resourceLocation,
        ::brstd::function_ref<bool(::PackInstance const&)> packInstanceFilter,
        ::ResourcePackMergeStrategy&                       mergeStrategy
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ResourcePackStack(
        ::std::vector<::PackInstance> const&                                  packs,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo
    );

    MCAPI ResourcePackStack(
        ::std::vector<::PackInstanceId> const&                                identities,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  anyVersion
    );

    MCAPI void _setLoadingReport(::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo);

    MCAPI void ensureSupportedSubpacks(::ContentTierInfo const& contentInfoTier);
#endif

    MCAPI ::std::vector<::std::string> getPackTelemetryNamesWithVersion(::PackType type) const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackInstance> getPacksWhereAssetExtractionNotViable(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;
#endif

    MCAPI void getSplitStacks(::ResourcePackStack& clientStack, ::ResourcePackStack& serverStack) const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackInstanceId> getStackAsIdentities() const;

    MCAPI void serialize(::std::ostream& fileStream) const;

    MCAPI bool supportsVibrantVisuals() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _populateDependencies(
        ::std::vector<::PackInstance>&                                        packStack,
        ::PackInstance&                                                       packInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  isDependent
    );

    MCAPI static ::std::unique_ptr<::ResourcePackStack> deserialize(
        ::std::istream&                                                       fileStream,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        ::std::optional<::std::string>                                        levelId
    );

#ifdef LL_PLAT_C
    MCAPI static ::std::unique_ptr<::ResourcePackStack> deserialize(
        ::std::vector<::PackInstanceId> const&                                ids,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        ::std::optional<::std::string>                                        levelId
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::vector<::PackInstance> const&                                  packs,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo
    );

    MCAPI void* $ctor(
        ::std::vector<::PackInstanceId> const&                                identities,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  anyVersion
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::LoadedResourceData> $loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    MCAPI bool
    $loadAllVersionsOf(::ResourceLocation const& resourceLocation, ::ResourcePackMergeStrategy& mergeStrategy) const;

    MCAPI bool $loadAllVersionsOf(
        ::ResourceLocation const&                          resourceLocation,
        ::brstd::function_ref<bool(::PackInstance const&)> packInstanceFilter,
        ::ResourcePackMergeStrategy&                       mergeStrategy
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
