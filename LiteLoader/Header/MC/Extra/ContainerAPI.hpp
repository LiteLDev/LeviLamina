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

    LIAPI bool hasContainer(FloatVec4 pos);
    LIAPI Container* getContainer(FloatVec4 pos);
#endif