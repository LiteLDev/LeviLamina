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

    // vIndex: 6
    virtual bool isTrusted() const /*override*/;

    // vIndex: 5
    virtual void setIsTrusted(bool) /*override*/;

    // vIndex: 7
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;

    // vIndex: 8
    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    // vIndex: 9
    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    // vIndex: 10
    virtual bool deleteAsset(::Core::Path const& packRelativePath) /*override*/;

    // vIndex: 11
    virtual bool writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent) /*override*/;

    // vIndex: 12
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    // vIndex: 13
    virtual void
    forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const
        /*override*/;

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    // vIndex: 17
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    // vIndex: 20
    virtual bool canRecurse() const /*override*/;

    // vIndex: 21
    virtual void unload() /*override*/;

    // vIndex: 25
    virtual ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> _loadArchive(::Core::Path const& packRelativePath
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DirectoryPackAccessStrategy(::ResourceLocation const& packLocation, bool recurse);

    MCAPI DirectoryPackAccessStrategy(
        ::std::unique_ptr<::PackAssetSet>&& assetSet,
        ::ResourceLocation const&           packLocation,
        bool                                recurse
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ResourceLocation const& packLocation, bool recurse);

    MCAPI void*
    $ctor(::std::unique_ptr<::PackAssetSet>&& assetSet, ::ResourceLocation const& packLocation, bool recurse);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uint64 $getPackSize() const;

    MCFOLD ::ResourceLocation const& $getPackLocation() const;

    MCFOLD ::std::string const& $getPackName() const;

    MCFOLD bool $isWritable() const;

    MCAPI bool $isTrusted() const;

    MCFOLD void $setIsTrusted(bool);

    MCAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCFOLD bool $hasFolder(::Core::Path const& packRelativePath) const;

    MCAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;

    MCAPI bool $deleteAsset(::Core::Path const& packRelativePath);

    MCAPI bool $writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent);

    MCAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;

    MCAPI void
    $forEachInAssetSet(::Core::Path const& packRelativePath, ::std::function<void(::Core::Path const&)> callback) const;

    MCFOLD ::PackAccessStrategyType $getStrategyType() const;

    MCAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCFOLD bool $canRecurse() const;

    MCFOLD void $unload();

    MCAPI ::std::unique_ptr<::Bedrock::Resources::Archive::Reader> $_loadArchive(::Core::Path const& packRelativePath
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
