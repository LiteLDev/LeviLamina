#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloudUtils {

enum class UploadType : int {
    None = 0,
    Stub = 1,
    Simple = 2,
    Resumable = 3,
};

}
