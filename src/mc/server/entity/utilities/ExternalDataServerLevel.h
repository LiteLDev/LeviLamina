#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/entity/utilities/ExternalDataInterface.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ILevel;
class Vec3;
struct AdventureSettings;
// clang-format on

struct ExternalDataServerLevel : public ::ExternalDataInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke4525e;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataServerLevel& operator=(ExternalDataServerLevel const&);
    ExternalDataServerLevel(ExternalDataServerLevel const&);
    ExternalDataServerLevel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExternalDataServerLevel() /*override*/ = default;

    // vIndex: 1
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;

    // vIndex: 2
    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;

    // vIndex: 3
    virtual ::ClientPlayMode getPlayMode() const /*override*/;

    // vIndex: 6
    virtual float getSmoothRotationSpeed() const /*override*/;

    // vIndex: 4
    virtual ::InputMode getInputMode() const /*override*/;

    // vIndex: 5
    virtual ::GameType getDefaultGameType() const /*override*/;

    // vIndex: 7
    virtual ::Vec3 getWorldSpaceVRRealityGazeDir() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ExternalDataServerLevel(::Bedrock::NotNullNonOwnerPtr<::ILevel const> level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ILevel const> level);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCAPI ::ClientPlayMode $getPlayMode() const;

    MCAPI float $getSmoothRotationSpeed() const;

    MCAPI ::InputMode $getInputMode() const;

    MCAPI ::GameType $getDefaultGameType() const;

    MCAPI ::Vec3 $getWorldSpaceVRRealityGazeDir() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
