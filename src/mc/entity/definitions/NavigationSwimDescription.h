#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

struct NavigationSwimDescription : public ::NavigationDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mUsingWander;
    ::ll::TypedStorage<1, 1, bool>  mAllowRiverFollow;
    ::ll::TypedStorage<4, 4, float> mSteeringDamping;
    ::ll::TypedStorage<4, 4, float> mMinDepth;
    ::ll::TypedStorage<4, 4, float> mMaxDepth;
    ::ll::TypedStorage<4, 4, float> mTerrainAvoidDist;
    ::ll::TypedStorage<4, 4, float> mLookAheadDist;
    ::ll::TypedStorage<4, 4, float> mCenteredThres;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual ~NavigationSwimDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
