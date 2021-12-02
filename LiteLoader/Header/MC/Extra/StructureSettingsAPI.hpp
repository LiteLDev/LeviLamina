//Extra Part For StructureSettings.hpp
#ifdef EXTRA_INCLUDE_PART_STRUCTURESETTINGS
// Include Headers or Declare Types Here

enum class Mirror : unsigned char {
	None = 0,
};
enum class Rotation : unsigned char {
    None = 0,
};

#else
// Add Member There
private:
char filler[96];

public:
    inline StructureSettings() {
        SymCall("??0StructureSettings@@QEAA@XZ", StructureSettings*, StructureSettings*)(this);
    }
    inline StructureSettings(BlockPos const& size, bool ignoreEntities, bool ignoreBlocks) {
    SymCall("??0StructureSettings@@QEAA@XZ", StructureSettings*, StructureSettings*)(this);
    setIgnoreBlocks(ignoreBlocks);
    setIgnoreEntities(ignoreEntities);
    setStructureSize(size);
    };

#endif
