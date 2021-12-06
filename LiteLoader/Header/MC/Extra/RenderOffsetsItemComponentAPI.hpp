//Extra Part For RenderOffsetsItemComponent.hpp
#ifdef EXTRA_INCLUDE_PART_RENDEROFFSETSITEMCOMPONENT
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct TRS {
    TRS() = delete;
    TRS(TRS const&) = delete;
    TRS(TRS const&&) = delete;
};
struct ItemTransforms {
    ItemTransforms() = delete;
    ItemTransforms(ItemTransforms const&) = delete;
    ItemTransforms(ItemTransforms const&&) = delete;
};

#endif
