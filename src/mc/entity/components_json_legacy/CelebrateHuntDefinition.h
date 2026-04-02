#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FloatRange.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class CelebrateHuntDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mBroadcast;
    ::ll::TypedStorage<4, 4, float>               mRadius;
    ::ll::TypedStorage<4, 4, int>                 mDuration;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mCelebrationTargets;
    ::ll::TypedStorage<8, 32, ::std::string>      mCelebrateSound;
    ::ll::TypedStorage<4, 8, ::FloatRange>        mSoundInterval;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::CelebrateHuntDefinition>>& root
    );
    // NOLINTEND
};
