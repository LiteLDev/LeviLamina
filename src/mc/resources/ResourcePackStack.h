#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ContentTierInfo;
class I18n;
class IResourcePackRepository;
class PackInstance;
class PackReport;
class PackSourceReport;
struct PackIdVersion;
struct PackInstanceId;
struct UnextractablePacks;
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
    virtual ~ResourcePackStack();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ResourcePackStack(
        ::std::vector<::PackInstance> const&                                  packs,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo
    );
#endif

    MCAPI ResourcePackStack(
        ::std::vector<::PackInstanceId> const&                                identities,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  anyVersion
    );

#ifdef LL_PLAT_C
    MCAPI void _setLoadingReport(::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo);
#endif

    MCAPI void
    add(::PackInstance                                                        packInstance,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository const> const& repo,
        bool                                                                  isDependent);

#ifdef LL_PLAT_C
    MCAPI void ensureSupportedSubpacks(::ContentTierInfo const& contentInfoTier);
#endif

    MCAPI ::std::vector<::std::string> getPackTelemetryNamesWithVersion(::I18n& loc, ::PackType type) const;

    MCAPI ::UnextractablePacks
    getPacksWhereAssetExtractionNotViable(::std::function<::std::string(::ContentIdentity const&)> getContentKey) const;

    MCAPI void getSplitStacks(::ResourcePackStack& clientStack, ::ResourcePackStack& serverStack) const;

#ifdef LL_PLAT_C
    MCAPI ::std::vector<::PackInstanceId> getStackAsIdentities() const;

    MCAPI bool isOnStack(::PackIdVersion const& packIdentity) const;

    MCAPI void mergePackReports(::std::unordered_map<::PackInstanceId, ::PackReport>& packReports);

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
        bool                                                                  isDependent,
        ::std::optional<::std::string> const&                                 levelId
    );

    MCAPI static ::std::unique_ptr<::ResourcePackStack> deserialize(
        ::std::string_view                                                    fileData,
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
#endif

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
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
