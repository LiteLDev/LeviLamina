#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/EncryptedFileAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IPackIOProvider;
class PackAccessStrategy;
class ResourceLocation;
struct StreamableAssetSource;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class ZippedEncryptedFilesAccessStrategy : public ::EncryptedFileAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8b98ee;
    ::ll::UntypedStorage<8, 8>  mUnk925bbe;
    ::ll::UntypedStorage<8, 8>  mUnk75a4be;
    // NOLINTEND

public:
    // prevent constructor by default
    ZippedEncryptedFilesAccessStrategy& operator=(ZippedEncryptedFilesAccessStrategy const&);
    ZippedEncryptedFilesAccessStrategy(ZippedEncryptedFilesAccessStrategy const&);
    ZippedEncryptedFilesAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;

    virtual bool supportsSignatureVerification() const /*override*/;

    virtual void unload() /*override*/;

    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const
        /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    virtual ::std::string _getContentsFile() /*override*/;

    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const /*override*/;

    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZippedEncryptedFilesAccessStrategy(
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IPackIOProvider const&                                          io,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidZippedEncryptedPack(
        ::IPackIOProvider const& io,
        ::Core::Path const&      pathToPack,
        ::ContentIdentity&       contentIdentity,
        ::Core::Path const&      subPath
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IPackIOProvider const&                                          io,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
