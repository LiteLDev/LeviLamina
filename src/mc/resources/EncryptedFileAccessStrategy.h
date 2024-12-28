#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/DirectoryPackAccessStrategy.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class PackAccessStrategy;
class ResourceLocation;
namespace Core { class Path; }
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
    // vIndex: 18
    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;

    // vIndex: 6
    virtual bool isTrusted() const /*override*/;

    // vIndex: 4
    virtual bool isWritable() const /*override*/;

    // vIndex: 7
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;

    // vIndex: 9
    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    // vIndex: 10
    virtual bool deleteAsset(::Core::Path const& packRelativePath) /*override*/;

    // vIndex: 11
    virtual bool writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent) /*override*/;

    // vIndex: 17
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    // vIndex: 24
    virtual bool isAssetExtractionViable() const /*override*/;

    // vIndex: 23
    virtual ::ContentIdentity readContentIdentity() const /*override*/;

    // vIndex: 26
    virtual ::std::string _getContentsFile();

    // vIndex: 27
    virtual ::std::string _getEncryptedAssetStream(::Core::Path const& packRelativePath) const;

    // vIndex: 0
    virtual ~EncryptedFileAccessStrategy() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EncryptedFileAccessStrategy(
        ::ResourceLocation const&                                          resourceLocation,
        ::ContentIdentity const&                                           contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&  keyProvider,
        bool                                                               canRecurse,
        ::std::optional<::std::unordered_map<::Core::Path, ::std::string>> assetSet
    );

    MCAPI ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> _getKeyProvider() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _getContentIdentityFromEncryptedStream(::std::string& stream, ::ContentIdentity& contentIdentity);

    MCAPI static void _transformStream(::std::string& stream, ::std::string const& key, uint64 offset);

    MCAPI static bool isValidEncryptedPack(::Core::Path const& pathToPack, ::ContentIdentity& contentIdentity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ResourceLocation const&                                          resourceLocation,
        ::ContentIdentity const&                                           contentIdentity,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const&  keyProvider,
        bool                                                               canRecurse,
        ::std::optional<::std::unordered_map<::Core::Path, ::std::string>> assetSet
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
    MCAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCAPI bool $isTrusted() const;

    MCAPI bool $isWritable() const;

    MCAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;

    MCAPI bool $deleteAsset(::Core::Path const& packRelativePath);

    MCAPI bool $writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent);

    MCAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCAPI bool $isAssetExtractionViable() const;

    MCAPI ::ContentIdentity $readContentIdentity() const;

    MCAPI ::std::string $_getContentsFile();

    MCAPI ::std::string $_getEncryptedAssetStream(::Core::Path const& packRelativePath) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
