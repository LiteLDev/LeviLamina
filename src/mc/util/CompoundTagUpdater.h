#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class CompoundTagUpdater {
public:
    // CompoundTagUpdater inner types declare
    // clang-format off
    struct Node;
    // clang-format on

    // CompoundTagUpdater inner types define
    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk352b67;
        ::ll::UntypedStorage<8, 24> mUnkc7c806;
        ::ll::UntypedStorage<8, 24> mUnk21a04c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node(Node const&);
        Node();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Node();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke350b7;
    ::ll::UntypedStorage<8, 72> mUnk14c4aa;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundTagUpdater& operator=(CompoundTagUpdater const&);
    CompoundTagUpdater(CompoundTagUpdater const&);
    CompoundTagUpdater();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _update(::CompoundTagUpdater::Node const& node, ::CompoundTag& tag) const;

    MCAPI uint getVersion() const;
    // NOLINTEND
};
