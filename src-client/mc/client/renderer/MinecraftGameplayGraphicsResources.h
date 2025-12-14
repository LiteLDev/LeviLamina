#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FrameUpdateContext;
namespace mce { class RenderContext; }
namespace mcr { struct DeferredResourceTransactions; }
// clang-format on

class MinecraftGameplayGraphicsResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnke72104;
    ::ll::UntypedStorage<8, 8>  mUnkcaa438;
    ::ll::UntypedStorage<8, 16> mUnkfa9ef9;
    ::ll::UntypedStorage<8, 8>  mUnk1a1309;
    ::ll::UntypedStorage<8, 16> mUnke476b5;
    ::ll::UntypedStorage<8, 8>  mUnkf298c9;
    ::ll::UntypedStorage<8, 24> mUnk9d57ba;
    ::ll::UntypedStorage<8, 16> mUnk12c917;
    ::ll::UntypedStorage<8, 80> mUnkda90d3;
    ::ll::UntypedStorage<8, 16> mUnk335be5;
    ::ll::UntypedStorage<8, 72> mUnkc194f2;
    ::ll::UntypedStorage<8, 16> mUnk5230b3;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameplayGraphicsResources& operator=(MinecraftGameplayGraphicsResources const&);
    MinecraftGameplayGraphicsResources(MinecraftGameplayGraphicsResources const&);
    MinecraftGameplayGraphicsResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGameplayGraphicsResources(::mce::RenderContext& renderContext);

    MCNAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCNAPI ::mcr::DeferredResourceTransactions getDeferredResourceTransactions();

    MCNAPI ~MinecraftGameplayGraphicsResources();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderContext& renderContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
