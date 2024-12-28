#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackAccessAssetGenerationResult.h"
#include "mc/resources/PackAccessStrategy.h"
#include "mc/resources/PackAccessStrategyType.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Core { class Path; }
// clang-format on

class TestPackAccessStrategy : public ::PackAccessStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk372c55;
    ::ll::UntypedStorage<8, 8>  mUnkab12c4;
    ::ll::UntypedStorage<1, 1>  mUnkd0c714;
    ::ll::UntypedStorage<1, 1>  mUnk634c6d;
    ::ll::UntypedStorage<8, 32> mUnk5ec215;
    ::ll::UntypedStorage<4, 4>  mUnk4b8b81;
    ::ll::UntypedStorage<8, 64> mUnk1abbed;
    // NOLINTEND

public:
    // prevent constructor by default
    TestPackAccessStrategy& operator=(TestPackAccessStrategy const&);
    TestPackAccessStrategy(TestPackAccessStrategy const&);
    TestPackAccessStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TestPackAccessStrategy() /*override*/;

    // vIndex: 1
    virtual uint64 getPackSize() const /*override*/;

    // vIndex: 3
    virtual ::std::string const& getPackName() const /*override*/;

    // vIndex: 2
    virtual ::ResourceLocation const& getPackLocation() const /*override*/;

    // vIndex: 4
    virtual bool isWritable() const /*override*/;

    // vIndex: 6
    virtual bool isTrusted() const /*override*/;

    // vIndex: 5
    virtual void setIsTrusted(bool) /*override*/;

    // vIndex: 7
    virtual bool hasAsset(::Core::Path const&, bool, bool) const /*override*/;

    // vIndex: 8
    virtual bool hasFolder(::Core::Path const&) const /*override*/;

    // vIndex: 9
    virtual bool getAsset(::Core::Path const&, ::std::string&, bool) const /*override*/;

    // vIndex: 10
    virtual bool deleteAsset(::Core::Path const&) /*override*/;

    // vIndex: 11
    virtual bool writeAsset(::Core::Path const&, ::std::string const&) /*override*/;

    // vIndex: 12
    virtual void forEachIn(::Core::Path const&, ::std::function<void(::Core::Path const&)>, bool) const /*override*/;

    // vIndex: 14
    virtual ::PackAccessStrategyType getStrategyType() const /*override*/;

    // vIndex: 17
    virtual ::std::unique_ptr<::PackAccessStrategy> createSubPack(::Core::Path const&) const /*override*/;

    // vIndex: 18
    virtual ::PackAccessAssetGenerationResult generateAssetSet() /*override*/;

    // vIndex: 21
    virtual void unload() /*override*/;
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

    MCAPI ::std::string const& $getPackName() const;

    MCAPI ::ResourceLocation const& $getPackLocation() const;

    MCAPI bool $isWritable() const;

    MCAPI bool $isTrusted() const;

    MCAPI void $setIsTrusted(bool);

    MCAPI bool $hasAsset(::Core::Path const&, bool, bool) const;

    MCAPI bool $hasFolder(::Core::Path const&) const;

    MCAPI bool $getAsset(::Core::Path const&, ::std::string&, bool) const;

    MCAPI bool $deleteAsset(::Core::Path const&);

    MCAPI bool $writeAsset(::Core::Path const&, ::std::string const&);

    MCAPI void $forEachIn(::Core::Path const&, ::std::function<void(::Core::Path const&)>, bool) const;

    MCAPI ::PackAccessStrategyType $getStrategyType() const;

    MCAPI ::std::unique_ptr<::PackAccessStrategy> $createSubPack(::Core::Path const&) const;

    MCAPI ::PackAccessAssetGenerationResult $generateAssetSet();

    MCAPI void $unload();
    // NOLINTEND
};
