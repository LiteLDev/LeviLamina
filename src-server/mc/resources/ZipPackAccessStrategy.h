#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class IFileAccess;
class ResourceLocation;
struct ZipPackArgs;
namespace Core { class Path; }
// clang-format on

class ZipPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk18fd21;
    ::ll::UntypedStorage<8, 8>  mUnk7ca90a;
    ::ll::UntypedStorage<8, 80> mUnkea609d;
    ::ll::UntypedStorage<8, 56> mUnkadd3fa;
    ::ll::UntypedStorage<8, 32> mUnka8ffe5;
    ::ll::UntypedStorage<8, 32> mUnk5887d5;
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
    // vIndex: 0
    virtual ~ZipPackAccessStrategy() /*override*/;

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

    // vIndex: 12
    virtual ::Core::PathBuffer<::std::string> const& getSubPath() const /*override*/;

    // vIndex: 13
    virtual bool supportsSignatureVerification() const /*override*/;

    // vIndex: 14
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const& subPath) const /*override*/;

    // vIndex: 18
    virtual void unload() /*override*/;

    // vIndex: 19
    virtual ::ContentIdentity readContentIdentity() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipPackAccessStrategy(
        ::std::variant<::Bedrock::NotNullNonOwnerPtr<::IFileAccess>, ::gsl::not_null<::std::shared_ptr<::IFileAccess>>>
                        fileAccess,
        ::ZipPackArgs&& args
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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

    MCNAPI void $forEachIn(
        ::Core::Path const&                        packRelativePath,
        ::std::function<void(::Core::Path const&)> callback,
        bool                                       recurseAnyways
    ) const;

    MCNAPI ::PackAccessStrategyType $getStrategyType() const;

    MCNAPI ::Core::PathBuffer<::std::string> const& $getSubPath() const;

    MCNAPI bool $supportsSignatureVerification() const;

    MCNAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const& subPath) const;

    MCNAPI void $unload();

    MCNAPI ::ContentIdentity $readContentIdentity() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
