#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Json {

enum class CommentPlacement : int {
    CommentBefore            = 0,
    CommentAfterOnSameLine   = 1,
    CommentAfter             = 2,
    NumberOfCommentPlacement = 3,
};

}
