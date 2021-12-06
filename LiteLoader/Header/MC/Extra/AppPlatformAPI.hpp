//Extra Part For AppPlatform.hpp
#ifdef EXTRA_INCLUDE_PART_APPPLATFORM
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct AndroidScopedStorageInfo {
    AndroidScopedStorageInfo() = delete;
    AndroidScopedStorageInfo(AndroidScopedStorageInfo const&) = delete;
    AndroidScopedStorageInfo(AndroidScopedStorageInfo const&&) = delete;
};

#endif
