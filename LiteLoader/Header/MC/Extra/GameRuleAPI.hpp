//Extra Part For GameRule.hpp
#ifdef EXTRA_INCLUDE_PART_GAMERULE
// Include Headers or Declare Types Here

#else
// Add Member There
public:
union Value;
class ValidationError {
public:
    ValidationError() = delete;
    ValidationError(ValidationError const&) = delete;
    ValidationError(ValidationError const&&) = delete;
};
enum Type;

#endif
