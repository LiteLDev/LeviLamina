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
        Hint& operator=(Hint const&);
        Hint(Hint const&);
        Hint();
    };

    class Node {
    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node();

    public:
        // NOLINTBEGIN
        // symbol: ??0Node@RTree@@QEAA@AEBV01@@Z
        MCAPI Node(class RTree::Node const&);

        // symbol: ??4Node@RTree@@QEAAAEAV01@$$QEAV01@@Z
        MCAPI class RTree::Node& operator=(class RTree::Node&&);

        // symbol: ?search@Node@RTree@@QEBAXAEBUTargetSpace@ClimateUtils@@AEAU?$pair@PEBVNode@RTree@@_J@std@@@Z
        MCAPI void
        search(struct ClimateUtils::TargetSpace const& target, std::pair<class RTree::Node const*, int64>&) const;

        // symbol: ??1Node@RTree@@QEAA@XZ
        MCAPI ~Node();

        // symbol:
        // ?branch@Node@RTree@@SA?AV?$optional@VNode@RTree@@@std@@$$QEAV?$vector@VNode@RTree@@V?$allocator@VNode@RTree@@@std@@@4@@Z
        MCAPI static std::optional<class RTree::Node> branch(std::vector<class RTree::Node>&& children);

        // symbol: ?bucketize@Node@RTree@@SA?AV?$vector@VNode@RTree@@V?$allocator@VNode@RTree@@@std@@@std@@$$QEAV34@@Z
        MCAPI static std::vector<class RTree::Node> bucketize(std::vector<class RTree::Node>&& nodes);

        // symbol: ?sort@Node@RTree@@SAXAEAV?$vector@VNode@RTree@@V?$allocator@VNode@RTree@@@std@@@std@@H_N@Z
        MCAPI static void sort(std::vector<class RTree::Node>& children, int dimension, bool);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTree& operator=(RTree const&);
    RTree(RTree const&);
    RTree();

public:
    // NOLINTBEGIN
    // symbol: ??1RTree@@QEAA@XZ
    MCAPI ~RTree();

    // symbol:
    // ?create@RTree@@SA?AV?$optional@VRTree@@@std@@AEBV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@3@@Z
    MCAPI static std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const& biomes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?build@RTree@@CA?AV?$optional@VNode@RTree@@@std@@$$QEAV?$vector@VNode@RTree@@V?$allocator@VNode@RTree@@@std@@@3@@Z
    MCAPI static std::optional<class RTree::Node> build(std::vector<class RTree::Node>&& children);

    // NOLINTEND
};
