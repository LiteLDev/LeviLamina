#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
class Mob;
class ItemActor;
class ItemStack;
class LevelChunk;

#else
// Add new members to class
public:
    LIAPI Mob* spawnMob(Vec3& ,int, std::string );
    LIAPI ItemActor* spawnItem(Vec3&, int, ItemStack*);
#endif