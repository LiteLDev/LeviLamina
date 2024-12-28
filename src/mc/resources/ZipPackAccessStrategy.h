#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfb17b1;
    ::ll::UntypedStorage<8, 8>  mUnk7ca90a;
    ::ll::UntypedStorage<8, 80> mUnkea609d;
    ::ll::UntypedStorage<8, 56> mUnkdc1533;
    ::ll::UntypedStorage<8, 32> mUnk98d4c7;
    ::ll::UntypedStorage<8, 32> mUnk5e5266;
    ::ll::UntypedStorage<1, 1>  mUnkcf449b;
    ::ll::UntypedStorage<1, 1>  mUnkd40bd8;
    ::ll::UntypedStorage<8, 24> mUnk1bb513;
    ::ll::UntypedStorage<8, 24> mUnka5d1c8;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipPackAccessStrategy& operator=(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy(ZipPackAccessStrategy const&);
    ZipPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ZipPackAccessStrategy() /*override*/;

    // vIndex: 1
    virtual uint64 getPackSize() const /*override*/;

    // vIndex: 2
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getPackName() const /*override*/;

    // vIndex: 5
    virtual void setIsTrusted(bool newValue) /*override*/;

    // vIndex: 4
    virtual bool isWritable() const /*override*/;

    // vIndex: 6
    virtual bool isTrusted() const /*override*/;

    // vIndex: 7
    virtual bool hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const
        /*override*/;

    // vIndex: 8
    virtual bool hasFolder(::Core::Path const& packRelativePath) const /*override*/;

    // vIndex: 9
    virtual bool getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const
        /*override*/;

    // vIndex: 11
    virtual bool writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent) /*override*/;

    // vIndex: 10
    virtual bool deleteAsset(::Core::Path const& packRelativePath) /*override*/;

    // vIndex: 12
    virtual void forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const /*override*/;

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    // vIndex: 15
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;

    // vIndex: 16
    virtual bool supportsSignatureVerification() const /*override*/;

    // vIndex: 21
    virtual void unload() /*override*/;

    // vIndex: 23
    virtual ::ContentIdentity readContentIdentity() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _tryReadFromPendingQueue(::Core::Path const& packRelativePath, ::std::string& result) const;

    MCAPI bool initZipFile() const;

    MCAPI void shutdown();
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

    MCAPI ::ResourceLocation const& $getPackLocation() const;

    MCAPI ::std::string const& $getPackName() const;

    MCAPI void $setIsTrusted(bool newValue);

    MCAPI bool $isWritable() const;

    MCAPI bool $isTrusted() const;

    MCAPI bool $hasAsset(::Core::Path const& packRelativePath, bool trustedContentOnly, bool caseSensative) const;

    MCAPI bool $hasFolder(::Core::Path const& packRelativePath) const;

    MCAPI bool $getAsset(::Core::Path const& packRelativePath, ::std::string& result, bool trustedContentOnly) const;

    MCAPI bool $writeAsset(::Core::Path const& packRelativePath, ::std::string const& fileContent);

    MCAPI bool $deleteAsset(::Core::Path const& packRelativePath);

    MCAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;

    MCAPI ::PackAccessStrategyType $getStrategyType() const;

    MCAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCAPI bool $supportsSignatureVerification() const;

    MCAPI void $unload();

    MCAPI ::ContentIdentity $readContentIdentity() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
