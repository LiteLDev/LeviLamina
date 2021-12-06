//Extra Part For TextObjectParser.hpp
#ifdef EXTRA_INCLUDE_PART_TEXTOBJECTPARSER
// Include Headers or Declare Types Here

#else
// Add Member There
public:
struct ErrorLocalization {
    ErrorLocalization() = delete;
    ErrorLocalization(ErrorLocalization const&) = delete;
    ErrorLocalization(ErrorLocalization const&&) = delete;
};
struct ServerData {
    ServerData() = delete;
    ServerData(ServerData const&) = delete;
    ServerData(ServerData const&&) = delete;
};

#endif
