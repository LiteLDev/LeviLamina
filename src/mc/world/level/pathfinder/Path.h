#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/level/pathfinder/NodeType.h"
#include "mc/world/level/pathfinder/PathCompletionType.h"

class Path {
public:
    // Path inner types declare
    // clang-format off
    class Node;
    // clang-format on

    using NodeArray = std::vector<class Node>;

    // Path inner types define
    class Node {
    public:
        BlockPos pos;
        NodeType type;

        Node(BlockPos const& pos, NodeType const& type) : pos(pos), type(type) {}
    };

public:
    NodeArray          mNodes;
    size_t             mIndex;
    PathCompletionType mCompletionType;

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
    MCAPI void buildFromNodes(NodeArray&& nodeArray, ::PathCompletionType completionType);
    // NOLINTEND
};
