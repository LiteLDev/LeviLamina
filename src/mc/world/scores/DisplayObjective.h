#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string const getBelowNameStringForId(::ScoreboardId const& scoreboardId) const;

    MCNAPI ::Objective const& getObjective() const;

    MCNAPI ::ObjectiveSortOrder getSortOrder() const;

#ifdef LL_PLAT_C
    MCNAPI bool isValid() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::DisplayObjective deserialize(::CompoundTag const& dataTag, ::Scoreboard const& owner);

    MCNAPI static ::std::unique_ptr<::CompoundTag> serialize(::DisplayObjective const& toSave);
    // NOLINTEND
};
