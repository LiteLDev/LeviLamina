//Extra Part For StructurePoolElement.hpp
#ifdef EXTRA_INCLUDE_PART_STRUCTUREPOOLELEMENT
// Include Headers or Declare Types Here

#else
// Add Member There
public:
class LazyTemplate {
public:
    LazyTemplate() = delete;
    LazyTemplate(LazyTemplate const&) = delete;
    LazyTemplate(LazyTemplate const&&) = delete;
};

#endif
