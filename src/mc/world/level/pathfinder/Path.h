#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
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
    MCAPI Path();

    MCAPI void buildFromNodes(::std::vector<::Path::Node>&& nodeArray, ::PathCompletionType completionType);

    MCAPI ::BlockPos const& currentPos() const;

    MCAPI ::Vec3 currentPos(::Actor const* actor) const;

    MCAPI bool endsInXZ(::Vec3 const& pos);

    MCAPI ::PathCompletionType getCompletionType() const;

    MCAPI ::Vec3 getEndPos() const;

    MCAPI uint64 getIndex() const;

    MCAPI ::BlockPos const& getLastPos() const;

    MCAPI ::BlockPos const& getNodePos(uint64 index) const;

    MCAPI ::NodeType getNodeType(uint64 index) const;

    MCAPI ::Vec3 getPos(::Actor const* actor, uint64 index) const;

    MCAPI uint64 getSize() const;

    MCAPI bool isDone() const;

    MCAPI bool isValid() const;

    MCAPI ::std::unique_ptr<::Path> makeCopy() const;

    MCAPI void next();

    MCAPI bool sameAs(::Path* path) const;

    MCAPI void setIndex(uint64 index);

    MCAPI void setSize(uint64 length);

    MCAPI ~Path();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
