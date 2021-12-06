//Extra Part For BiomeRegistry.hpp
#ifdef EXTRA_INCLUDE_PART_BIOMEREGISTRY
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct BiomeParent {
    BiomeParent() = delete;
    BiomeParent(BiomeParent const&) = delete;
    BiomeParent(BiomeParent const&&) = delete;
};

#endif
