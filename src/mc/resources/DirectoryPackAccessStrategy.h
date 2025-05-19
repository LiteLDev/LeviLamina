#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class PackAssetSet;
class ResourceLocation;
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
// clang-format on

class DirectoryPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke82580;
    ::ll::UntypedStorage<8, 56> mUnkd7f188;
    ::ll::UntypedStorage<8, 32> mUnk33f5ed;
    ::ll::UntypedStorage<8, 64> mUnk29f011;
    ::ll::UntypedStorage<1, 1>  mUnkeda44b;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackAccessStrategy& operator=(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy(DirectoryPackAccessStrategy const&);
    DirectoryPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirectoryPackAccessStrategy() /*override*/;

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
    virtual bool writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent) /*override*/;

    // vIndex: 10
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    // vIndex: 11
    virtual void
    forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const
        /*override*/;

    // vIndex: 12
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    // vIndex: 15
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    // vIndex: 18
    virtual bool canRecurse() const /*override*/;

    // vIndex: 19
    virtual void unload() /*override*/;

    // vIndex: 22
    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader>
    _loadArchive(::Core::Path const& packRelativePath) const /*override*/;
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

    MCNAPI bool $writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent);

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
