#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/NodeType.h"
#include "mc/enums/PathCompletionType.h"

class Path {
public:
    // Path inner types declare
    // clang-format off
    class Node;
    // clang-format on

    // Path inner types define
    class Node {
    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node(Node const&);
        Node();
    };

public:
    // prevent constructor by default
    Path& operator=(Path const&);
    Path(Path const&);

public:
    // NOLINTBEGIN
    MCAPI Path();

    MCAPI class BlockPos const& currentPos() const;

    MCAPI class Vec3 currentPos(class Actor const* actor) const;

    MCAPI bool endsInXZ(class Vec3 const& pos);

    MCAPI ::PathCompletionType getCompletionType() const;

    MCAPI class Vec3 getEndPos() const;

    MCAPI uint64 getIndex() const;

    MCAPI class BlockPos const& getLastPos() const;

    MCAPI class BlockPos const& getNodePos(uint64 index) const;

    MCAPI ::NodeType getNodeType(uint64 index) const;

    MCAPI class Vec3 getPos(class Actor const* actor, uint64 index) const;

    MCAPI uint64 getSize() const;

    MCAPI bool isDone() const;

    MCAPI bool isValid() const;

    MCAPI std::unique_ptr<class Path> makeCopy() const;

    MCAPI void next();

    MCAPI bool sameAs(class Path* path) const;

    MCAPI void setIndex(uint64 index);

    MCAPI void setSize(uint64 length);

    MCAPI ~Path();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void buildFromNodes(std::vector<class Path::Node>&& nodeArray, ::PathCompletionType completionType);

    // NOLINTEND
};
