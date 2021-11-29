#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
#include "../Actor.hpp"
class UserEntityIdentifierComponent;
struct JumpPreventionResult;
#else
// Add new members to class
public:
	LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
#endif