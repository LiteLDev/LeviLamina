#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IContentKeyProvider;
class IFileAccess;
class IPackIOProvider;
class ResourceLocation;
struct StreamableAssetSource;
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class DirectoryPackWithEncryptionAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd15dc5;
    ::ll::UntypedStorage<8, 56> mUnk863770;
    ::ll::UntypedStorage<8, 32> mUnk5a317a;
    ::ll::UntypedStorage<8, 56> mUnke45de1;
    ::ll::UntypedStorage<8, 16> mUnk1b31b5;
    ::ll::UntypedStorage<8, 24> mUnkdf74db;
    ::ll::UntypedStorage<8, 24> mUnk9e54a2;
    ::ll::UntypedStorage<8, 8>  mUnk8f7696;
    ::ll::UntypedStorage<8, 8>  mUnke91deb;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackWithEncryptionAccessStrategy& operator=(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy(DirectoryPackWithEncryptionAccessStrategy const&);
    DirectoryPackWithEncryptionAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DirectoryPackWithEncryptionAccessStrategy() /*override*/ = default;

    virtual uint64 getPackSize() const /*override*/;

    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    virtual ::std::string const& getPackName() const /*override*/;

    virtual bool isWritable() const /*override*/;

    virtual bool isTrusted() const /*override*/;

    virtual bool hasAsset(::Core::Path const&, bool, bool) const /*override*/;

    virtual bool hasFolder(::Core::Path const&) const /*override*/;

    virtual bool getAsset(::Core::Path const&, ::std::string&, bool) const /*override*/;

    virtual void forEachIn(::Core::Path const&, ::std::function<void(::Core::Path const&)>, bool) const /*override*/;

    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const&) const /*override*/;

    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;

    virtual void unload() /*override*/;

    virtual ::ContentIdentity readContentIdentity() const /*override*/;

    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const&, ::std::optional<::Core::PathView>) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackWithEncryptionAccessStrategy(
        ::ResourceLocation const&                                         packLocation,
        ::ResourceLocation const&                                         encryptedContentLocation,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess,
        ::IPackIOProvider const&                                          io
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                         packLocation,
        ::ResourceLocation const&                                         encryptedContentLocation,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::IFileAccess&                                                    fileAccess,
        ::IPackIOProvider const&                                          io
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
