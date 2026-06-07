#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/ITickTimeManagerProxy.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct Tick;
// clang-format on

class TickTimeManagerProxy : public ::ITickTimeManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelData> const> mLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickTimeManagerProxy() /*override*/ = default;

    virtual bool shouldUpdateWorldTime() const /*override*/;

    virtual void setWorldTickTime(int time) /*override*/;

    virtual int getWorldTickTime() const /*override*/;

    virtual void incrementCurrentTick() /*override*/;

    virtual ::Tick getCurrentTick() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TickTimeManagerProxy(::Bedrock::NotNullNonOwnerPtr<::LevelData> levelData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::LevelData> levelData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldUpdateWorldTime() const;

    MCAPI void $setWorldTickTime(int time);

    MCAPI int $getWorldTickTime() const;

    MCAPI void $incrementCurrentTick();

    MCAPI ::Tick $getCurrentTick() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
