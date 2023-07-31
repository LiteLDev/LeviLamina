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

    public:
        // prevent constructor by default
        Hint& operator=(Hint const&) = delete;
        Hint(Hint const&)            = delete;
        Hint()                       = delete;
    };

    class Node {

    public:
        // prevent constructor by default
        Node& operator=(Node const&) = delete;
        Node()                       = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0Node\@RTree\@\@QEAA\@AEBV01\@\@Z
         */
        MCAPI Node(class RTree::Node const&);
        /**
         * @symbol
         * ?branch\@Node\@RTree\@\@SA?AV?$optional\@VNode\@RTree\@\@\@std\@\@$$QEAV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@4\@\@Z
         */
        MCAPI static std::optional<class RTree::Node> branch(std::vector<class RTree::Node>&&);
        /**
         * @symbol
         * ?bucketize\@Node\@RTree\@\@SA?AV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@std\@\@$$QEAV34\@\@Z
         */
        MCAPI static std::vector<class RTree::Node> bucketize(std::vector<class RTree::Node>&&);
        /**
         * @symbol ??4Node\@RTree\@\@QEAAAEAV01\@$$QEAV01\@\@Z
         */
        MCAPI class RTree::Node& operator=(class RTree::Node&&);
        /**
         * @symbol
         * ?search\@Node\@RTree\@\@QEBAXAEBUTargetSpace\@ClimateUtils\@\@AEAU?$pair\@PEBVNode\@RTree\@\@_J\@std\@\@\@Z
         */
        MCAPI void search(struct ClimateUtils::TargetSpace const&, std::pair<class RTree::Node const*, int64_t>&) const;
        /**
         * @symbol
         * ?sort\@Node\@RTree\@\@SAXAEAV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@std\@\@H_N\@Z
         */
        MCAPI static void sort(std::vector<class RTree::Node>&, int, bool);
        /**
         * @symbol ??1Node\@RTree\@\@QEAA\@XZ
         */
        MCAPI ~Node();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTree& operator=(RTree const&) = delete;
    RTree(RTree const&)            = delete;
    RTree()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?create\@RTree\@\@SA?AV?$optional\@VRTree\@\@\@std\@\@AEBV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI static std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const&);
    /**
     * @symbol ??1RTree\@\@QEAA\@XZ
     */
    MCAPI ~RTree();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?build\@RTree\@\@CA?AV?$optional\@VNode\@RTree\@\@\@std\@\@$$QEAV?$vector\@VNode\@RTree\@\@V?$allocator\@VNode\@RTree\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI static std::optional<class RTree::Node> build(std::vector<class RTree::Node>&&);
    // NOLINTEND
};
