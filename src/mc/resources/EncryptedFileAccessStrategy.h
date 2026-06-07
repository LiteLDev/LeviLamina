#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/DirectoryPackAccessStrategy.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class PackAccessStrategy;
class ResourceLocation;
struct StreamableAssetSource;
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class InputFileStream; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class EncryptedFileAccessStrategy : public ::DirectoryPackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcc53ff;
    ::ll::UntypedStorage<8, 24> mUnk265e3d;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedFileAccessStrategy& operator=(EncryptedFileAccessStrategy const&);
    EncryptedFileAccessStrategy(EncryptedFileAccessStrategy const&);
    EncryptedFileAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;

    virtual bool isTrusted() const /*override*/;

    virtual bool isWritable() const /*override*/;

    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;

    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    virtual bool isAssetExtractionViable() const /*override*/;

    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const&, ::std::optional<::Core::PathView>) const /*override*/;

    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    virtual ::ContentIdentity readContentIdentity() const /*override*/;

    virtual ::std::string _getContentsFile();

    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const;

    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EncryptedFileAccessStrategy(
        ::ResourceLocation const&                                          resourceLocation,
        ::ContentIdentity const&                                           contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&  keyProvider,
        bool                                                               canRecurse,
        ::std::optional<::std::unordered_map<::Core::Path, ::std::string>> assetSet
    );

    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> _getKeyProvider() const;

    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::PathView packRelativeArchiveFile, ::std::string const& key) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    _getContentIdentityFromEncryptedStream(::Core::InputFileStream& stream, ::ContentIdentity& contentIdentity);

    MCNAPI static bool
    _getContentIdentityFromEncryptedStream(::std::string& stream, ::ContentIdentity& contentIdentity);

    MCNAPI static void
    _transformStream(::std::string& stream, ::std::string const& key, ::ContentIdentity const& offset, uint64);

#ifdef LL_PLAT_C
    MCNAPI static bool contentFileExists(::Core::Path const& pathToPack);
#endif

    MCNAPI static bool isValidEncryptedPack(::Core::Path const& pathToPack, ::ContentIdentity& contentIdentity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                          resourceLocation,
        ::ContentIdentity const&                                           contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&  keyProvider,
        bool                                                               canRecurse,
        ::std::optional<::std::unordered_map<::Core::Path, ::std::string>> assetSet
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI bool $isTrusted() const;

    MCNAPI bool $isWritable() const;

    MCNAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCNAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI bool $isAssetExtractionViable() const;

    MCNAPI ::Bedrock::Result<::StreamableAssetSource>
    $getStreamableSource(::Core::Path const&, ::std::optional<::Core::PathView>) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI ::std::string $_getContentsFile();

    MCNAPI ::std::string $_getEncryptedAssetStream(::Core::Path const& packRelativePath) const;

    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    $_loadArchive(::Core::Path const& packRelativePath) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
