//Extra Part For BedrockLog.hpp
#ifdef EXTRA_INCLUDE_PART_BEDROCKLOG
// Include Headers or Declare Types Here

#else
// Add Member There
class LogAreaFilter {
public:
    LogAreaFilter() = delete;
    LogAreaFilter(LogAreaFilter const&) = delete;
    LogAreaFilter(LogAreaFilter const&&) = delete;
};
enum LogChannel;
enum LogRule;
enum LogCategory;
struct LogDetails {
    LogDetails() = delete;
    LogDetails(LogDetails const&) = delete;
    LogDetails(LogDetails const&&) = delete;
};

#endif
