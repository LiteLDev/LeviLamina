#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

enum class EduRole : uchar {
    Student = 0,
    Teacher = 1,
    Demo = 2,
    Unknown = 3,
};

}
