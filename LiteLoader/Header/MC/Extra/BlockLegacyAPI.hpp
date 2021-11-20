#ifdef EXTRA_INCLUDE_PART
// Add include headers & pre-declares
	class Block;
#else
// Add new members to class
	LIAPI Block* toBlock(unsigned short tileData);
#endif