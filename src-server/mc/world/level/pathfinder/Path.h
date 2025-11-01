#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class Path {
public:
    // Path inner types declare
    // clang-format off
    class Node;
    // clang-format on

    // Path inner types define
    class Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> pos;
        ::ll::TypedStorage<4, 4, ::NodeType>  type;
        // NOLINTEND
    };

    using NodeArray = ::std::vector<::Path::Node>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Path::Node>> mNodes;
    ::ll::TypedStorage<8, 8, uint64>                       mIndex;
    ::ll::TypedStorage<1, 1, ::PathCompletionType>         mCompletionType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockPos const& currentPos() const;

    MCNAPI ::Vec3 currentPos(::Actor const* actor) const;

    MCNAPI bool endsInXZ(::Vec3 const& pos);

    MCNAPI ::Vec3 getPos(::Actor const* actor, uint64 index) const;
    // NOLINTEND
};
