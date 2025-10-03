#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

struct BlockHitDetectResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk2366b3;
    ::ll::UntypedStorage<4, 24> mUnka68dbe;
    ::ll::UntypedStorage<1, 1>  mUnk7f5fc3;
    ::ll::UntypedStorage<4, 4>  mUnk6fad3d;
    ::ll::UntypedStorage<1, 1>  mUnkc9c3e8;
    ::ll::UntypedStorage<1, 1>  mUnk649b07;
    ::ll::UntypedStorage<1, 1>  mUnk6dc6dc;
    ::ll::UntypedStorage<1, 1>  mUnkcddc10;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockHitDetectResult& operator=(BlockHitDetectResult const&);
    BlockHitDetectResult(BlockHitDetectResult const&);
    BlockHitDetectResult();
};

} // namespace CameraAimAssistSystemUtil
