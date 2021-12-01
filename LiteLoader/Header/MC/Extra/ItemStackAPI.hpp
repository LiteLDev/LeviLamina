#ifdef EXTRA_INCLUDE_PART_ITEMSTACK
// Add include headers & pre-declares
class Tag;
class ItemActor;

#else
// Add new members to class
public:
	LIAPI static ItemStack* create();
    LIAPI static ItemStack* create(std::string type, int count);
    LIAPI static ItemStack* create(Tag* tag);
    LIAPI ItemStack* clone_s();

	LIAPI std::string getName();
	LIAPI std::string getCustomName();
	LIAPI std::string getTypeName();
	LIAPI int getAux();
	LIAPI int getCount();

	LIAPI bool setItem(ItemStack* newItem);
	LIAPI bool setLore(std::vector<std::string> lores);
#endif
