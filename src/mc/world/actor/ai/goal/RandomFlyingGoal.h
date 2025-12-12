#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

class RandomFlyingGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanLandOnTrees;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool _setWantedPosition() /*override*/;

    virtual ~RandomFlyingGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::Vec3> _getTreePos() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $_setWantedPosition();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
