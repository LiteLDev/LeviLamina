#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
struct StreamableAssetSource;
namespace Bedrock::Resources { class BrpakIndex; }
namespace Bedrock::Resources { struct BrpakIndexEntry; }
namespace Core { class FileHandlePool; }
namespace Core { class Path; }
namespace Core { class PathView; }
// clang-format on

class BakedPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk8333dc;
    ::ll::UntypedStorage<8, 32> mUnkb688cc;
    ::ll::UntypedStorage<8, 32> mUnk8710a2;
    ::ll::UntypedStorage<8, 16> mUnk7549d9;
    ::ll::UntypedStorage<8, 32> mUnk993a95;
    ::ll::UntypedStorage<8, 64> mUnkf4b592;
    // NOLINTEND

public:
    // prevent constructor by default
    BakedPackAccessStrategy& operator=(BakedPackAccessStrategy const&);
    BakedPackAccessStrategy(BakedPackAccessStrategy const&);
    BakedPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BakedPackAccessStrategy() /*override*/ = default;

    virtual uint64 getPackSize() const /*override*/;

    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    virtual ::std::string const& getPackName() const /*override*/;

    virtual bool isWritable() const /*override*/;

    virtual bool isTrusted() const /*override*/;

    virtual bool hasAsset(::Core::PathView const& packRelativePath, bool trustedContentOnly, bool) const /*override*/;

    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    virtual bool
    getAsset(::Core::PathView const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    virtual void
    forEachIn(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback, bool) const
        /*override*/;

    virtual void
    forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const
        /*override*/;

    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;

    virtual void unload() /*override*/;

    virtual ::Bedrock::Result<::StreamableAssetSource>
    getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BakedPackAccessStrategy(
        ::ResourceLocation const&                                  packLocation,
        ::Core::Path                                               brpakPath,
        ::std::shared_ptr<::Bedrock::Resources::BrpakIndex const>  index,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool,
        ::std::string                                              subPath
    );

    MCNAPI void _forEachEntry(
        ::brstd::function_ref<void(::std::string const&, ::Bedrock::Resources::BrpakIndexEntry const&)> callback
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string _getParentDirectory(::std::string const& path);

    MCNAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    _normalizeEntryPath(::Core::PathView const& path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                                  packLocation,
        ::Core::Path                                               brpakPath,
        ::std::shared_ptr<::Bedrock::Resources::BrpakIndex const>  index,
        ::gsl::not_null<::std::shared_ptr<::Core::FileHandlePool>> handlePool,
        ::std::string                                              subPath
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $getPackSize() const;

    MCNAPI ::ResourceLocation const& $getPackLocation() const;

    MCNAPI ::std::string const& $getPackName() const;

    MCNAPI bool $isWritable() const;

    MCNAPI bool $isTrusted() const;

    MCNAPI bool $hasAsset(::Core::PathView const& packRelativePath, bool trustedContentOnly, bool) const;

    MCNAPI bool $hasFolder(::Core::Path const& packRelativePath) const;

    MCNAPI bool
    $getAsset(::Core::PathView const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;

    MCNAPI void
    $forEachIn(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback, bool) const;

    MCNAPI void
    $forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCNAPI void $unload();

    MCNAPI ::Bedrock::Result<::StreamableAssetSource>
    $getStreamableSource(::Core::Path const& packRelativePath, ::std::optional<::Core::PathView> tempDirectory) const;


    // NOLINTEND
};
