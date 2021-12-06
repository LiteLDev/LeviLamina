//Extra Part For VolumeEntityManager.hpp
#ifdef EXTRA_INCLUDE_PART_VOLUMEENTITYMANAGER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct VolumeEntityDefinition {
    VolumeEntityDefinition() = delete;
    VolumeEntityDefinition(VolumeEntityDefinition const&) = delete;
    VolumeEntityDefinition(VolumeEntityDefinition const&&) = delete;
};

#endif
