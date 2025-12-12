#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UnlockedRecipesPacketPayload {
public:
    // UnlockedRecipesPacketPayload inner types define
    enum class PacketType : uint {
        Empty                    = 0,
        InitiallyUnlockedRecipes = 1,
        NewlyUnlockedRecipes     = 2,
        RemoveUnlockedRecipes    = 3,
        RemoveAllUnlockedRecipes = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5be290;
    ::ll::UntypedStorage<8, 24> mUnkd0d8e6;
    // NOLINTEND

public:
    // prevent constructor by default
    UnlockedRecipesPacketPayload& operator=(UnlockedRecipesPacketPayload const&);
    UnlockedRecipesPacketPayload(UnlockedRecipesPacketPayload const&);
    UnlockedRecipesPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UnlockedRecipesPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
