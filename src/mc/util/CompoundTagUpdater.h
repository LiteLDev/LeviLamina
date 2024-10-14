#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdater {
public:
    // CompoundTagUpdater inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // CompoundTagUpdater inner types define
    struct Node {
    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node(Node const&);
        Node();

    public:
        // NOLINTBEGIN
        MCAPI ~Node();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CompoundTagUpdater& operator=(CompoundTagUpdater const&);
    CompoundTagUpdater(CompoundTagUpdater const&);
    CompoundTagUpdater();

public:
    // NOLINTBEGIN
    MCAPI uint getVersion() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _update(struct CompoundTagUpdater::Node const& node, class CompoundTag& tag) const;

    // NOLINTEND
};
