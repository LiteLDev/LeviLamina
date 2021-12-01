//Extra Part For BlockSource.hpp
#ifdef EXTRA_INCLUDE_PART_BLOCKSOURCE
// Include Headers or Declare Types Here
	#include "BlockInstance.hpp"

#else
// Add Member There
public:
	LIAPI BlockInstance getBlockInstance(BlockPos);
#endif
