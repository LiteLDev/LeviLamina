#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/brstd/future.h"

// auto generated forward declare list
// clang-format off
class IMinecraftServiceKeySource;
class TaskGroup;
struct MinecraftServiceKeyInfo;
struct MinecraftServiceKeysMetadata;
namespace Bedrock::Http { struct Url; }
// clang-format on

class MinecraftServiceKeyManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // MinecraftServiceKeyManager inner types declare
    // clang-format off
    struct BlockingInitRecursiveContext;
    // clang-format on

    // MinecraftServiceKeyManager inner types define
    struct BlockingInitRecursiveContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk1d5c9f;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockingInitRecursiveContext& operator=(BlockingInitRecursiveContext const&);
        BlockingInitRecursiveContext(BlockingInitRecursiveContext const&);
        BlockingInitRecursiveContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnkeed942;
    ::ll::UntypedStorage<8, 8>   mUnkb1e41f;
    ::ll::UntypedStorage<8, 8>   mUnkd5789e;
    ::ll::UntypedStorage<8, 64>  mUnke7eb57;
    ::ll::UntypedStorage<8, 32>  mUnk89886e;
    ::ll::UntypedStorage<8, 64>  mUnkd59203;
    ::ll::UntypedStorage<8, 32>  mUnk3164ca;
    ::ll::UntypedStorage<8, 8>   mUnkd6fb1a;
    ::ll::UntypedStorage<8, 32>  mUnk60bc56;
    ::ll::UntypedStorage<1, 1>   mUnk349f6c;
    ::ll::UntypedStorage<8, 8>   mUnk227437;
    ::ll::UntypedStorage<8, 64>  mUnk65f124;
    ::ll::UntypedStorage<8, 64>  mUnkc82f81;
    ::ll::UntypedStorage<8, 64>  mUnka7fbba;
    ::ll::UntypedStorage<8, 64>  mUnkc5cc35;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeyManager& operator=(MinecraftServiceKeyManager const&);
    MinecraftServiceKeyManager(MinecraftServiceKeyManager const&);
    MinecraftServiceKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftServiceKeyManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftServiceKeyManager(
        ::std::unique_ptr<::IMinecraftServiceKeySource>                                                     keySource,
        ::std::function<int64()>                                                                            timeFn,
        ::std::function<::Bedrock::Threading::Async<::Bedrock::Http::Url>()>                                urlFn,
        ::std::function<::Bedrock::Threading::Async<
            ::std::optional<::MinecraftServiceKeysMetadata>>(::TaskGroup&, ::std::string const&, bool)>     metadataFn,
        ::std::function<::Bedrock::Threading::Async<::std::optional<
            ::std::unordered_map<::std::string, ::std::string>>>(::TaskGroup&, ::std::string const&, bool)> keysFn
    );

#ifdef LL_PLAT_S
    MCNAPI void _blockingInitRecursive(
        ::MinecraftServiceKeyInfo                                                     keyFetchResult,
        ::std::shared_ptr<::MinecraftServiceKeyManager::BlockingInitRecursiveContext> context
    );
#endif

    MCNAPI ::Bedrock::Threading::Async<::MinecraftServiceKeyInfo> _fullFetch(bool highPriority);

    MCNAPI bool _saveMetadata(::std::optional<::MinecraftServiceKeysMetadata> const& metadata);

    MCNAPI void _updateTrustedKeys();

#ifdef LL_PLAT_S
    MCNAPI ::brstd::future<bool> blockingInit();
#endif

    MCNAPI ::std::string getKeyFromKeyId(::std::string const& kid) const;

    MCNAPI ::MinecraftServiceKeyInfo getKeyInfo() const;

    MCNAPI void setHostKey(::std::string const& hostKey);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::IMinecraftServiceKeySource>                                                     keySource,
        ::std::function<int64()>                                                                            timeFn,
        ::std::function<::Bedrock::Threading::Async<::Bedrock::Http::Url>()>                                urlFn,
        ::std::function<::Bedrock::Threading::Async<
            ::std::optional<::MinecraftServiceKeysMetadata>>(::TaskGroup&, ::std::string const&, bool)>     metadataFn,
        ::std::function<::Bedrock::Threading::Async<::std::optional<
            ::std::unordered_map<::std::string, ::std::string>>>(::TaskGroup&, ::std::string const&, bool)> keysFn
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
