//Extra Part For StructureTemplate.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here
class Tag;
class StructureTemplateData;
enum class Mirror : unsigned char;
enum class Rotation : unsigned char;

#else
// Add Member There
char filler[216]; // IDA StructureTemplate::StructureTemplate

public:
    LIAPI static StructureTemplate fromTag(std::string name, Tag* tag);
    LIAPI static StructureTemplate fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreEntities=false, bool ignoreBlocks=false);
    LIAPI Tag toTag();
    LIAPI bool toWorld(int dimid, BlockPos p1, Mirror mirror, Rotation rotation);
    LIAPI StructureTemplateData& getData();

#endif
