//Extra Part For ItemRegistry.hpp
#ifdef EXTRA_INCLUDE_PART_ITEMREGISTRY
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct ItemHashAlias {
    ItemHashAlias() = delete;
    ItemHashAlias(ItemHashAlias const&) = delete;
    ItemHashAlias(ItemHashAlias const&&) = delete;
};
struct ItemAlias {
    ItemAlias() = delete;
    ItemAlias(ItemAlias const&) = delete;
    ItemAlias(ItemAlias const&&) = delete;
};

#endif
