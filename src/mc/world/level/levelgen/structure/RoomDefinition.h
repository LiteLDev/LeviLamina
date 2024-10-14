#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RoomDefinition {
public:
    // prevent constructor by default
    RoomDefinition& operator=(RoomDefinition const&);
    RoomDefinition();

public:
    // NOLINTBEGIN
    MCAPI RoomDefinition(class RoomDefinition const&);

    MCAPI explicit RoomDefinition(int roomIndex);

    MCAPI bool findSource(int scanIndex);

    MCAPI void setConnection(uchar const& direction, std::shared_ptr<class RoomDefinition> definition);

    MCAPI ~RoomDefinition();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
