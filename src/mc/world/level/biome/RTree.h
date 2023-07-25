#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct TargetSpace; }
// clang-format on

class RTree {
public:
    // RTree inner types declare
    // clang-format off
    struct Hint;
    class Node;
    // clang-format on

    // RTree inner types define
    struct Hint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RTREE_HINT
    public:
        Hint& operator=(Hint const&) = delete;
        Hint(Hint const&)            = delete;
        Hint()                       = delete;
#endif

    public:
    };

    class Node {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RTREE_NODE
    public:
        Node& operator=(Node const&) = delete;
        Node()                       = delete;
#endif

    public:
        /**
         * @symbol ??0Node\@RTree\@\@QEAA\@AEBV01\@\@Z
         */
        MCAPI Node(class RTree::Node const&);
        /**
         * @symbol ??4Node\@RTree\@\@QEAAAEAV01\@$$QEAV01\@\@Z
         */
        MCAPI class RTree::Node& operator=(class RTree::Node&&);
        /**
         * @symbol
         * ?search\@Node\@RTree\@\@QEBAXAEBUTargetSpace\@ClimateUtils\@\@AEAU?$pair\@PEBVNode\@RTree\@\@_J\@std\@\@\@Z
         */
        MCAPI void
        search(struct ClimateUtils::TargetSpace const&, struct std::pair<class RTree::Node const*, __int64>&) const;
        /**
         * @symbol ??1Node\@RTree\@\@QEAA\@XZ
         */
        MCAPI ~Node();
        /**
         * @symbol
         * ?branch\@Node\@RTree\@\@SA?AV?$optional\@VNode\@RTree\@\@\@std\@\@$$QEAV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@4\@\@Z
         */
        MCAPI static class std::optional<class RTree::Node> branch(std::vector<class RTree::Node>&&);
        /**
         * @symbol
         * ?bucketize\@Node\@RTree\@\@SA?AV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@std\@\@$$QEAV34\@\@Z
         */
        MCAPI static std::vector<class RTree::Node> bucketize(std::vector<class RTree::Node>&&);
        /**
         * @symbol
         * ?sort\@Node\@RTree\@\@SAXAEAV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@std\@\@H_N\@Z
         */
        MCAPI static void sort(std::vector<class RTree::Node>&, int, bool);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RTREE
public:
    RTree& operator=(RTree const&) = delete;
    RTree(RTree const&)            = delete;
    RTree()                        = delete;
#endif

public:
    /**
     * @symbol ??1RTree\@\@QEAA\@XZ
     */
    MCAPI ~RTree();
    /**
     * @symbol
     * ?create\@RTree\@\@SA?AV?$optional\@VRTree\@\@\@std\@\@AEBV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI static class std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const&);

    // private:
    /**
     * @symbol
     * ?build\@RTree\@\@CA?AV?$optional\@VNode\@RTree\@\@\@std\@\@$$QEAV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI static class std::optional<class RTree::Node> build(std::vector<class RTree::Node>&&);

private:
};
