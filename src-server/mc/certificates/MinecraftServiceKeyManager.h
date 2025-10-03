#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct MinecraftServiceKeyInfo;
namespace Bedrock::Http { struct Url; }
namespace Bedrock::Services { class DiscoveryHelper; }
// clang-format on

class MinecraftServiceKeyManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnkeed942;
    ::ll::UntypedStorage<8, 8>   mUnke159dc;
    ::ll::UntypedStorage<8, 64>  mUnk7954b5;
    ::ll::UntypedStorage<8, 32>  mUnkc46713;
    ::ll::UntypedStorage<8, 8>   mUnkd6fb1a;
    ::ll::UntypedStorage<8, 32>  mUnkfe2c47;
    ::ll::UntypedStorage<8, 24>  mUnkac8556;
    ::ll::UntypedStorage<8, 64>  mUnk65f124;
    ::ll::UntypedStorage<8, 64>  mUnkc82f81;
    ::ll::UntypedStorage<8, 64>  mUnk75be14;
    ::ll::UntypedStorage<8, 64>  mUnk9fbe61;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeyManager& operator=(MinecraftServiceKeyManager const&);
    MinecraftServiceKeyManager(MinecraftServiceKeyManager const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftServiceKeyManager() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecraftServiceKeyManager();

    MCNAPI ::Bedrock::Threading::Async<::MinecraftServiceKeyInfo> _fullFetch(bool highPriority);

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::Url> _getAuthServiceUrl();

    MCNAPI ::MinecraftServiceKeyInfo getKeyInfo() const;

    MCNAPI void init();

    MCNAPI void setDiscoveryHelper(::Bedrock::NonOwnerPointer<::Bedrock::Services::DiscoveryHelper> discoveryHelper);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
