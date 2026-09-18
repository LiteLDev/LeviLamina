#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockChangeContext;
class BlockPos;
class BlockSource;
class ILevelBlockDestroyerProxy;
class LevelEventManager;
// clang-format on

class LevelBlockDestroyer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const> mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelBlockDestroyerProxy>> const>
        mLevelBlockDestroyerProxy;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    LevelBlockDestroyer();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI LevelBlockDestroyer(
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> levelEventManager,
        ::std::unique_ptr<::ILevelBlockDestroyerProxy>     levelBlockDestroyerProxy
    );

    MCNAPI bool destroyBlock(
        ::BlockSource&              region,
        ::BlockPos const&           pos,
        bool                        dropResources,
        ::BlockChangeContext const& changeSourceContext
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> levelEventManager,
        ::std::unique_ptr<::ILevelBlockDestroyerProxy>     levelBlockDestroyerProxy
    );
#endif
    // NOLINTEND
};
