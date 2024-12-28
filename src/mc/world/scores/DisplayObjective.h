#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/Objective.h"

// auto generated inclusion list
#include "mc/world/scores/ObjectiveSortOrder.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Objective;
class Scoreboard;
struct ScoreboardId;
// clang-format on

class DisplayObjective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Objective const*>   mObjective;
    ::ll::TypedStorage<1, 1, ::ObjectiveSortOrder> mSortOrder;
    // NOLINTEND

public:
    // prevent constructor by default
    Objective const*   mObjective; // this+0x0
    ObjectiveSortOrder mSortOrder; // this+0x8
public:
    // prevent constructor by default
    DisplayObjective() = delete;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const getBelowNameStringForId(::ScoreboardId const& scoreboardId) const;

    MCAPI ::Objective const& getObjective() const;

    MCAPI ::ObjectiveSortOrder getSortOrder() const;

    MCAPI bool isDisplaying(::Objective const& targetObjective) const;

    MCAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::DisplayObjective deserialize(::CompoundTag const& dataTag, ::Scoreboard const& owner);

    MCAPI static ::std::unique_ptr<::CompoundTag> serialize(::DisplayObjective const& toSave);
    // NOLINTEND
};
