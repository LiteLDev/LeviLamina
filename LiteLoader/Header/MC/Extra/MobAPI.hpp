#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
#include "../Actor.hpp"
class UserEntityIdentifierComponent;
#else
// Add new members to class
public:
struct JumpPreventionResult;
LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
#endif