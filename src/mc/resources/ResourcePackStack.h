#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IResourcePackRepository;
class LoadedResourceData;
class PackInstance;
class PackSourceReport;
class ResourceLocation;
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
    MCAPI void
    add(::PackInstance                                                        packInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  isDependent);

    MCAPI ::std::vector<::std::string> getPackTelemetryNamesWithVersion(::PackType type) const;

    MCAPI void getSplitStacks(::ResourcePackStack& clientStack, ::ResourcePackStack& serverStack) const;

    MCAPI bool hasPlatformLockedContent() const;

    MCAPI bool isAssetExtractionViableForAll(
        ::std::function<::std::string(::ContentIdentity const&)> getContentKey,
        ::std::string const&                                     sourceContext
    ) const;

    MCAPI void removeInvalidPacks();
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

    MCAPI static ::std::unique_ptr<::ResourcePackStack>
    deserialize(::std::istream& fileStream, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo);
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
