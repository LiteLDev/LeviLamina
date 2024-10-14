#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySet {
public:
    // prevent constructor by default
    EntitySet& operator=(EntitySet const&);

public:
    // NOLINTBEGIN
    MCAPI EntitySet();

    MCAPI EntitySet(class EntitySet&&);

    MCAPI EntitySet(class EntitySet const&);

    MCAPI bool add(class EntityContext const& entity);

    MCAPI
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<uint64 const, class WeakEntityRef>>>>
        erase(std::_List_const_iterator<
              std::_List_val<std::_List_simple_types<std::pair<uint64 const, class WeakEntityRef>>>>);

    MCAPI class EntitySet& operator=(class EntitySet&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
