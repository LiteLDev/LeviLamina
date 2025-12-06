#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IMapDataManagerOptions.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelData;
// clang-format on

class MapDataManagerOptions : public ::IMapDataManagerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData const> const> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    MapDataManagerOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isPremiumWorldTemplate() const /*override*/;

    // vIndex: 2
    virtual bool isLegacyLevel() const /*override*/;

    // vIndex: 3
    virtual bool hasMapsCenteredToOrigin() const /*override*/;

    // vIndex: 4
    virtual ::BlockPos const& getWorldCenter() const /*override*/;

    // vIndex: 0
    virtual ~MapDataManagerOptions() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MapDataManagerOptions(::Bedrock::NotNullNonOwnerPtr<::LevelData const> levelData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::LevelData const> levelData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isPremiumWorldTemplate() const;

    MCAPI bool $isLegacyLevel() const;

    MCAPI bool $hasMapsCenteredToOrigin() const;

    MCAPI ::BlockPos const& $getWorldCenter() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
