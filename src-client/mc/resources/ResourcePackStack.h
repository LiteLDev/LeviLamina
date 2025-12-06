#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class PackInstance;
class ResourceLocation;
struct ContentTierIncompatibleReason;
struct ContentTierInfo;
struct IResourcePackRepository;
struct LoadedResourceData;
struct PackIdVersion;
struct PackInstanceId;
struct PackSourceReport;
struct ResourcePackMergeStrategy;
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

public:
    // prevent constructor by default
    ResourcePackStack();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePackStack();

    // vIndex: 3
    virtual ::std::vector<::LoadedResourceData> loadAllVersionsOf(::ResourceLocation const& resourceLocation) const;

    // vIndex: 2
    virtual bool
    loadAllVersionsOf(::ResourceLocation const& resourceLocation, ::ResourcePackMergeStrategy& mergeStrategy) const;

    // vIndex: 1
    virtual bool loadAllVersionsOf(
        ::ResourceLocation const&                          resourceLocation,
        ::brstd::function_ref<bool(::PackInstance const&)> packInstanceFilter,
        ::ResourcePackMergeStrategy&                       mergeStrategy
    ) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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

    MCAPI void
    add(::PackInstance                                                        packInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  isDependent);

    MCAPI ::ContentTierIncompatibleReason canSupportPacks(::ContentTierInfo const& contentInfoTier) const;

    MCAPI ::std::vector<::std::string> getPackTelemetryNamesWithVersion(::PackType type) const;

    MCAPI ::std::vector<::PackInstance> getPacksWhereAssetExtractionNotViable(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;

    MCAPI void getSplitStacks(::ResourcePackStack& clientStack, ::ResourcePackStack& serverStack) const;

    MCAPI ::std::vector<::PackInstanceId> getStackAsIdentities() const;

    MCAPI bool hasCapabilityInStack(::std::string_view capability) const;

    MCAPI bool hasPlatformLockedContent() const;

    MCAPI bool isOnStack(::PackIdVersion const& packIdentity) const;

    MCAPI bool removeIf(::std::function<bool(::PackInstance const&)> const& callback);

    MCAPI void removeInvalidPacks();

    MCAPI void serialize(::std::ostream& fileStream) const;

    MCAPI bool supportsVibrantVisuals() const;
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

    MCAPI static ::std::unique_ptr<::ResourcePackStack> deserialize(
        ::std::vector<::PackInstanceId> const&                                ids,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        ::std::optional<::std::string>                                        levelId
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::PackInstance> const&                                  packs,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo
    );

    MCAPI void* $ctor(
        ::std::vector<::PackInstanceId> const&                                identities,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  anyVersion
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
