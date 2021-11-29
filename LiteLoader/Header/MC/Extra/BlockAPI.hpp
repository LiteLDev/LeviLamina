#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
class Tag;
#else
// Add new members to class
public:
	LIAPI static Block* create(string str, unsigned short tileData);
	LIAPI static Block* create(Tag* nbt);

	LIAPI string getNameString();
	LIAPI int getId();
	LIAPI unsigned short getTileData();
#endif