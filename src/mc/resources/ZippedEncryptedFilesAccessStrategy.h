#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/EncryptedFileAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class PackAccessStrategy;
class ResourceLocation;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
// clang-format on

class ZippedEncryptedFilesAccessStrategy : public ::EncryptedFileAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4c959c;
    ::ll::UntypedStorage<8, 8>  mUnkbe582d;
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

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    virtual ::std::string _getContentsFile() /*override*/;

    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const /*override*/;

    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const /*override*/;

    virtual ~ZippedEncryptedFilesAccessStrategy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZippedEncryptedFilesAccessStrategy(
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                         archiveLocation,
        ::ContentIdentity const&                                          contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Core::Path const&                                               subPath,
        ::std::unique_ptr<::PackAccessStrategy>                           zipSubPack
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ResourceLocation const& $getPackLocation() const;

    MCNAPI bool $hasFolder(::Core::Path const& packRelativePath) const;

    MCNAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI ::std::string $_getContentsFile();

    MCNAPI ::std::string $_getEncryptedAssetStream(::Core::Path const& packRelativePath) const;

    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    $_preloadSubFolders(::Core::Path const& packRelativePath) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
