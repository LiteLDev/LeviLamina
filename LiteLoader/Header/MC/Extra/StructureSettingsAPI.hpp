//Extra Part For StructureSettings.hpp
#ifdef EXTRA_INCLUDE_PART_STRUCTURESETTINGS
// Include Headers or Declare Types Here

enum Mirror : unsigned char {
    None_15=0,
    X,
    Z,
    XZ,
};
enum Rotation : unsigned char {
    None_14=0,
    Rotate90,
    Rotate180,
    Rotate270,
    Total,
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
