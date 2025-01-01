#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ObjectiveCriteria;
class Scoreboard;
struct ScoreInfo;
struct ScoreboardId;
// clang-format on

class Objective : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, int>> mScores;
    ::ll::TypedStorage<8, 32, ::std::string const>                       mName;
    ::ll::TypedStorage<8, 32, ::std::string>                             mDisplayName;
    ::ll::TypedStorage<8, 8, ::ObjectiveCriteria const&>                 mCriteria;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Objective() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Objective(::std::string const& name, ::ObjectiveCriteria const& criteria);

    MCAPI ::ObjectiveCriteria const& getCriteria() const;

    MCAPI ::std::string const& getDisplayName() const;

    MCAPI ::std::string const& getName() const;

    MCAPI ::ScoreInfo getPlayerScore(::ScoreboardId const& id) const;

    MCAPI ::std::vector<::ScoreboardId> getPlayers() const;

    MCAPI ::std::unordered_map<::ScoreboardId, int> const& getScores() const;

    MCAPI bool hasScore(::ScoreboardId const& id) const;

    MCAPI bool hasScores() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::Objective> deserialize(::CompoundTag const& dataTag, ::Scoreboard& owner);

    MCAPI static ::std::unique_ptr<::CompoundTag> serialize(::Objective const& toSave);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::ObjectiveCriteria const& criteria);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
