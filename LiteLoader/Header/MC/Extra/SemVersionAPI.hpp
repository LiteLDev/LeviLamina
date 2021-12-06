//Extra Part For SemVersion.hpp
#ifdef EXTRA_INCLUDE_PART_SEMVERSION
// Include Headers or Declare Types Here

#else
// Add Member There
public:
enum MatchType;
enum ParseOption;
struct any_version_constructor {
    any_version_constructor() = delete;
    any_version_constructor(any_version_constructor const&) = delete;
    any_version_constructor(any_version_constructor const&&) = delete;
};

#endif
