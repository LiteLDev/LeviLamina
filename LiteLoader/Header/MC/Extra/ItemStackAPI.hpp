#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
    class Tag;
    class ItemActor;
#else
// Add new members to class
    LIAPI ItemStack* create();
    LIAPI ItemStack* create(std::string type, int count);
    LIAPI ItemStack* create(Tag* tag);
    LIAPI ItemStack* clone_s();

    LIAPI std::string getName();
    LIAPI std::string getCustomName();
    LIAPI std::string getTypeName();
    LIAPI int         getAux();
    LIAPI int         getCount();

    LIAPI bool setItem(ItemStack* newItem);
    LIAPI bool setLore(std::vector<std::string> lores);
#endif

