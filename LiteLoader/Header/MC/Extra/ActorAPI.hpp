#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
	class Actor;
	class Player;
	class NetworkIdentifier;
	class UserEntityIdentifierComponent;
	class Vec2;
#else
// Add new members to class
public:
	enum InitializationMethod;
	LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
	LIAPI bool isSimulatedPlayer();
	LIAPI bool isPlayer();
	LIAPI std::string getEntityTypeName();
	LIAPI bool hurtEntity(int damage);
	LIAPI Vec2* getDirction();
	LIAPI void teleport(FloatVec4 vec4);
#endif