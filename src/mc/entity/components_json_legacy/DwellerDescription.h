#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorComponentDescription.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct DwellerDescription : public ::ActorComponentDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mType;
    ::ll::TypedStorage<8, 32, ::std::string> mRole;
    ::ll::TypedStorage<8, 32, ::std::string> mPreferredProfession;
    ::ll::TypedStorage<4, 4, int>            mUpdateBase;
    ::ll::TypedStorage<4, 4, int>            mUpdateVariant;
    ::ll::TypedStorage<4, 4, int>            mFirstFoundingReward;
    ::ll::TypedStorage<4, 4, float>          mDwellingBoundsTolerance;
    ::ll::TypedStorage<1, 1, bool>           mCanFindPOI;
    ::ll::TypedStorage<1, 1, bool>           mCanMigrate;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* getJsonName() const /*override*/;

    virtual void deserializeData(::DeserializeDataParams deserializeDataParams) /*override*/;

    virtual ~DwellerDescription() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI char const* $getJsonName() const;

    MCAPI void $deserializeData(::DeserializeDataParams deserializeDataParams);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
