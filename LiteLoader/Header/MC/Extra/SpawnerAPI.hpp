#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
	class Mob;
	class ItemActor;
	class ItemStack;
#else
// Add new members to class
public:
	LIAPI Mob* spawnMob(const FloatVec4& pos, std::string name);
	LIAPI ItemActor* spawnItem(const FloatVec4& pos, ItemStack* item);
#endif