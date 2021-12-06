//Extra Part For Mob.hpp
#ifdef EXTRA_INCLUDE_PART_MOB
// Include Headers or Declare Types Here
class UserEntityIdentifierComponent;

#else
// Add Member There
public:
struct JumpPreventionResult {
    JumpPreventionResult() = delete;
    JumpPreventionResult(JumpPreventionResult const&) = delete;
    JumpPreventionResult(JumpPreventionResult const&&) = delete;
};

public:
LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();

#endif
