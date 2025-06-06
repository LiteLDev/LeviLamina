#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IFileAccess;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class DirectoryPackWithEncryptionAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7ef9b8;
    ::ll::UntypedStorage<8, 56> mUnk863770;
    ::ll::UntypedStorage<8, 32> mUnk689ee8;
    ::ll::UntypedStorage<8, 56> mUnke45de1;
    ::ll::UntypedStorage<8, 16> mUnk1b31b5;
    ::ll::UntypedStorage<8, 24> mUnkdf74db;
    ::ll::UntypedStorage<8, 24> mUnk9e54a2;
    ::ll::UntypedStorage<8, 8>  mUnkeca0b7;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackWithEncryptionAccessStrategy& operator=(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirectoryPackWithEncryptionAccessStrategy() /*override*/;

    // vIndex: 1
    virtual uint64 getPackSize() const /*override*/;

    // vIndex: 2
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getPackName() const /*override*/;

    // vIndex: 4
    virtual bool isWritable() const /*override*/;

    // vIndex: 5
    virtual bool isTrusted() const /*override*/;

    // vIndex: 6
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;

    // vIndex: 7
    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    // vIndex: 8
    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    // vIndex: 9
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    // vIndex: 11
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    // vIndex: 14
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    // vIndex: 15
    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;

    // vIndex: 18
    virtual void unload() /*override*/;

    // vIndex: 19
    virtual ::ContentIdentity readContentIdentity() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackWithEncryptionAccessStrategy(
        ::ResourceLocation const&                                         packLocation,
        ::ResourceLocation const&                                         encryptedContentLocation,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess
    );

    MCNAPI bool _getUnencryptedAsset(::Core::Path const& packRelativePath, ::std::string& result) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                         packLocation,
        ::ResourceLocation const&                                         encryptedContentLocation,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess
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
    MCNAPI uint64 $getPackSize() const;

    MCNAPI ::ResourceLocation const& $getPackLocation() const;

    MCNAPI ::std::string const& $getPackName() const;

    MCNAPI bool $isWritable() const;

    MCNAPI bool $isTrusted() const;

    MCNAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCNAPI bool $hasFolder(::Core::Path const& packRelativePath) const;

    MCNAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;

    MCNAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
