#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IndexSet {
public:
    // prevent constructor by default
    IndexSet& operator=(IndexSet const&);

public:
    // NOLINTBEGIN
    MCAPI IndexSet();

    MCAPI IndexSet(class IndexSet&& other);

    MCAPI IndexSet(class IndexSet const& other);

    MCAPI bool contains(uint64 index) const;

    MCAPI std::vector<uint64> const& getPacked() const;

    MCAPI void insert(uint64 index);

    MCAPI bool operator==(class IndexSet const& other) const;

    MCAPI void remove(uint64 index);

    MCAPI ~IndexSet();

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
