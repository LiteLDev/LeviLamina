#include "llapi/Global.h"

#include "CompoundTag.hpp"
#include "Dimension.hpp"
#include "Vec3.hpp"

class ChangeDimensionRequest {
public:
    int mState;
    AutomaticID<Dimension, int> mFromDimensionId;
    AutomaticID<Dimension, int> mToDimensionId;
    Vec3 mPosition;
    bool mUsePortal;
    bool mRespawn;
    std::unique_ptr<CompoundTag> mAgentTag;
};
