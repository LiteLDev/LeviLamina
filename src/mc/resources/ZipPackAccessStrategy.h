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
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk18fd21;
    ::ll::UntypedStorage<8, 8>  mUnkf758b1;
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
    virtual ~ZipPackAccessStrategy() /*override*/ = default;

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

    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;

    virtual bool supportsSignatureVerification() const /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const&) const /*override*/;

    virtual void unload() /*override*/;

    virtual ::ContentIdentity readContentIdentity() const /*override*/;

    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const&, ::std::optional<::Core::PathView>) const /*override*/;

    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const&) const
        /*override*/;

    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle> _preloadSubFolders(::Core::Path const&) const
        /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
