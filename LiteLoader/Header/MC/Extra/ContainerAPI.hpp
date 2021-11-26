#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
class ItemStack;
#else
// Add new members to class
public:
LIAPI std::string getTypeName();

LIAPI bool addItem(ItemStack* item);
LIAPI bool addItemToFirstEmptySlot(ItemStack* item);
LIAPI bool removeItem(int slot, unsigned int number);
LIAPI ItemStack* getSlot(int slot);
LIAPI std::vector<const ItemStack*> getAllSlots();
LIAPI int getSize();

LIAPI bool hasContainer(Vec3& pos, int dim);
LIAPI Container* getContainer(Vec3& pos, int dim);
#endif