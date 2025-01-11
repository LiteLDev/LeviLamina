#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
// clang-format on

struct ScoreboardId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64>                 mRawID;
    ::ll::TypedStorage<8, 8, ::IdentityDefinition*> mIdentityDef;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScoreboardId();

    MCAPI explicit ScoreboardId(int64 bytes);

    MCAPI ScoreboardId(::ScoreboardId const& scoreboardId);

    MCFOLD uint64 getHash() const;

    MCAPI ::IdentityDefinition const& getIdentityDef() const;

    MCAPI bool isValid() const;

    MCAPI bool operator!=(::ScoreboardId const& rhs) const;

    MCAPI ::ScoreboardId& operator++();

    MCAPI ::ScoreboardId& operator=(::ScoreboardId const& scoreboardId);

    MCAPI bool operator==(::ScoreboardId const& rhs) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScoreboardId& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(int64 bytes);

    MCFOLD void* $ctor(::ScoreboardId const& scoreboardId);
    // NOLINTEND
};
