#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
	class UserEntityIdentifierComponent;
	class Actor;
#else
// Add new members to class
public:
	LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
#endif