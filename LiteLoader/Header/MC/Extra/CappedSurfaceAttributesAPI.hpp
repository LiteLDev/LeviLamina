//Extra Part For CappedSurfaceAttributes.hpp
#ifdef EXTRA_INCLUDE_PART_CAPPEDSURFACEATTRIBUTES
// Include Headers or Declare Types Here

#else
// Add Member There
struct MaterialLayer {
    MaterialLayer() = delete;
    MaterialLayer(MaterialLayer const&) = delete;
    MaterialLayer(MaterialLayer const&&) = delete;
};

#endif
