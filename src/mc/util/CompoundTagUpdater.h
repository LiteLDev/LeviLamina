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
        // symbol: ??1Node@CompoundTagUpdater@@QEAA@XZ
        MCAPI ~Node();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CompoundTagUpdater& operator=(CompoundTagUpdater const&);
    CompoundTagUpdater(CompoundTagUpdater const&);
    CompoundTagUpdater();

public:
    // NOLINTBEGIN
    // symbol: ?getVersion@CompoundTagUpdater@@QEBAIXZ
    MCAPI uint getVersion() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_update@CompoundTagUpdater@@AEBA_NAEBUNode@1@AEAVCompoundTag@@@Z
    MCAPI bool _update(struct CompoundTagUpdater::Node const&, class CompoundTag&) const;

    // NOLINTEND
};
