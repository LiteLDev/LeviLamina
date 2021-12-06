//Extra Part For RTree.hpp
#ifdef EXTRA_INCLUDE_PART_RTREE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct Hint {
    Hint() = delete;
    Hint(Hint const&) = delete;
    Hint(Hint const&&) = delete;
};
class Node {
public:
    Node() = delete;
    Node(Node const&) = delete;
    Node(Node const&&) = delete;
};

#endif
