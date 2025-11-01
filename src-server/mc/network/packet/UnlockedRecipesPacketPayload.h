#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UnlockedRecipesPacketPayload {
public:
    // UnlockedRecipesPacketPayload inner types define
    enum class PacketType : uint {
        Empty = 0,
        InitiallyUnlockedRecipes = 1,
        NewlyUnlockedRecipes = 2,
        RemoveUnlockedRecipes = 3,
        RemoveAllUnlockedRecipes = 4,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::UnlockedRecipesPacketPayload::PacketType> mPacketType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mUnlockedRecipes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UnlockedRecipesPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
