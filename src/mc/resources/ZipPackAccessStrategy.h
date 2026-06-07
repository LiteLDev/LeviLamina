#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IFileAccess;
class ResourceLocation;
struct StreamableAssetSource;
struct ZipPackArgs;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
namespace Core { class PathView; }
namespace Core { class UnzipFile; }
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
    // ZipPackAccessStrategy inner types declare
    // clang-format off
    class ZipFileAccess;
    // clang-format on

    // ZipPackAccessStrategy inner types define
    class ZipFileAccess {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkbcbaee;
        ::ll::UntypedStorage<8, 16> mUnk63a4ec;
        // NOLINTEND

    public:
        // prevent constructor by default
        ZipFileAccess& operator=(ZipFileAccess const&);
        ZipFileAccess(ZipFileAccess const&);
        ZipFileAccess();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::shared_ptr<::Core::UnzipFile>
        get(::ResourceLocation const& archiveLocation, ::gsl::not_null<::IFileAccess*> fileAccess);

        MCNAPI ~ZipFileAccess();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk18fd21;
    ::ll::UntypedStorage<8, 32> mUnkdf58aa;
    ::ll::UntypedStorage<8, 80> mUnkea609d;
    ::ll::UntypedStorage<8, 56> mUnkadd3fa;
    ::ll::UntypedStorage<8, 32> mUnkfb82e0;
    ::ll::UntypedStorage<8, 32> mUnk21066c;
    ::ll::UntypedStorage<1, 1>  mUnkcea598;
    ::ll::UntypedStorage<1, 1>  mUnk773214;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackAccessStrategy& operator=(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ZipPackAccessStrategy() /*override*/;

    virtual uint64 getPackSize() const /*override*/;

    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    virtual ::std::string const& getPackName() const /*override*/;

    virtual bool isWritable() const /*override*/;

    virtual bool isTrusted() const /*override*/;

    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;

    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    virtual void
    forEachIn(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback, bool) const
        /*override*/;

    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;

    virtual bool supportsSignatureVerification() const /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    virtual void unload() /*override*/;

    virtual ::ContentIdentity readContentIdentity() const /*override*/;

    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const
        /*override*/;

    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const /*override*/;

    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipPackAccessStrategy(::gsl::not_null<::std::shared_ptr<::IFileAccess>> fileAccess, ::ZipPackArgs&& args);

    MCNAPI ZipPackAccessStrategy(
        ::std::variant<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>, ::gsl::not_null<::std::shared_ptr<::IFileAccess>>>
                        fileAccess,
        ::ZipPackArgs&& args
    );

    MCNAPI bool _getAsset(
        ::gsl::not_null<::Core::UnzipFile*> zipFile,
        ::Core::Path const&                 packRelativePath,
        ::std::string&                      result
    ) const;

    MCNAPI ::std::shared_ptr<::Core::UnzipFile> initZipFile() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::IFileAccess>> fileAccess, ::ZipPackArgs&& args);

    MCNAPI void* $ctor(
        ::std::variant<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>, ::gsl::not_null<::std::shared_ptr<::IFileAccess>>>
                        fileAccess,
        ::ZipPackArgs&& args
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

    MCNAPI void
    $forEachIn(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback, bool) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;

    MCNAPI ::Bedrock::Result<::StreamableAssetSource>
    $getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const;

    MCNAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    $_loadArchive(::Core::Path const& packRelativePath) const;

    MCNAPI ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    $_preloadSubFolders(::Core::Path const& packRelativePath) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
