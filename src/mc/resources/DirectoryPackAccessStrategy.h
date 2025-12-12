#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class PackAssetSet;
class ResourceLocation;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
// clang-format on

class DirectoryPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnkee374a;
    ::ll::UntypedStorage<8, 32> mUnkdd25c5;
    ::ll::UntypedStorage<8, 32> mUnkfd71f3;
    ::ll::UntypedStorage<8, 64> mUnk39ec3c;
    ::ll::UntypedStorage<1, 1>  mUnk5799dd;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackAccessStrategy& operator=(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DirectoryPackAccessStrategy() /*override*/;

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

    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    virtual void
    forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const
        /*override*/;

    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    virtual bool canRecurse() const /*override*/;

    virtual void unload() /*override*/;

    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const /*override*/;

    virtual ::std::vector<::Bedrock::Resources::PreloadedPathHandle>
    _preloadSubFolders(::Core::Path const& packRelativePath) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DirectoryPackAccessStrategy(
        ::ResourceLocation const&                           packLocation,
        bool                                                recurse,
        ::std::function<::std::string(::Core::Path const&)> reader
    );

    MCNAPI DirectoryPackAccessStrategy(
        ::std::unique_ptr<::PackAssetSet>&&                 assetSet,
        ::ResourceLocation const&                           packLocation,
        bool                                                recurse,
        ::std::function<::std::string(::Core::Path const&)> reader
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ResourceLocation const&                           packLocation,
        bool                                                recurse,
        ::std::function<::std::string(::Core::Path const&)> reader
    );

    MCNAPI void* $ctor(
        ::std::unique_ptr<::PackAssetSet>&&                 assetSet,
        ::ResourceLocation const&                           packLocation,
        bool                                                recurse,
        ::std::function<::std::string(::Core::Path const&)> reader
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

    MCNAPI void
    $forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI bool $canRecurse() const;

    MCNAPI void $unload();

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
