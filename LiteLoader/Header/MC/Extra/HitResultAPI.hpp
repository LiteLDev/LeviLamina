//Extra Part For HitResult.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here

class StackResultStorageEntity;

enum class HitResultType:int {
    TILE=0,
    ENTITY,
    ENTITY_OUT_OF_RANGE,
    NO_HIT,
};

#else
// Add Member There

    //char filler[112];
    Vec3 startPos;       //0
    Vec3 rayDir;         //12
    HitResultType type;  //24
    FaceID face;         //28
    BlockPos endBpos;    //32
    Vec3 endPos;         //44
    uintptr_t actorRef; //56
    int unk64;
    int unk68;
    int unk72;
    int unk76;           //76
    bool hitLiquid;      //80
    FaceID liquidFace;   //81
    BlockPos liquidBpos; //84
    Vec3 liquidPos;      //96
    bool indirectHit;    //108
    //112

public:

    LIAPI FaceID getFacing();
    LIAPI Vec3 getPos();
    LIAPI bool isHitLiquid();
    LIAPI bool isEntity();
    LIAPI bool isTile();
	LIAPI BlockPos getBlockPos();
    LIAPI BlockPos getLiquidPos();
    LIAPI FaceID getLiquidFacing();
    //LIAPI Vec3 getLiquidHitPos();
    LIAPI HitResultType getHitResultType();

#endif
