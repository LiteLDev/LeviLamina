#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
	class Actor;
	class Player;
	class NetworkIdentifier;
	class UserEntityIdentifierComponent;
	class Vec2;
    class BlockInstance;
    enum class FaceID : char;
#else
// Add new members to class
public:
	enum InitializationMethod;
	LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
	LIAPI bool isSimulatedPlayer();
	LIAPI bool isPlayer();
	LIAPI std::string getTypeName();
	LIAPI bool hurtEntity(int damage);
	LIAPI Vec2* getDirction();
	LIAPI void teleport(Vec3 pos,int dimid);
    LIAPI Vec3 getCameraPos();
    LIAPI BlockInstance getBlockFromViewVector(bool includeLiquid = false, bool solidOnly = false, float maxDistance = 5.25f, bool ignoreBorderBlocks = true, bool fullOnly = false);
    LIAPI BlockInstance getBlockFromViewVector(FaceID& face ,bool includeLiquid = false, bool solidOnly = false, float maxDistance = 5.25f, bool ignoreBorderBlocks = true, bool fullOnly = false);
    LIAPI Actor* getActorFromViewVector(float maxDistance);
#endif