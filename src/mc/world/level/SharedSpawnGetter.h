#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/ISharedSpawnGetter.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelData;
// clang-format on

class SharedSpawnGetter : public ::ISharedSpawnGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData const> const> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedSpawnGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SharedSpawnGetter() /*override*/ = default;

    virtual ::BlockPos const& getSharedSpawnPosition() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SharedSpawnGetter(::Bedrock::NotNullNonOwnerPtr<::LevelData const> levelData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::LevelData const> levelData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos const& $getSharedSpawnPosition() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
