//Extra Part For Path.hpp
#ifdef EXTRA_INCLUDE_PART_PATH
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class Node {
public:
    Node() = delete;
    Node(Node const&) = delete;
    Node(Node const&&) = delete;
};

#endif
