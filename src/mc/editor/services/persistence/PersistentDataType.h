#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistentDataType : int {
    ClientProject = 0,
    ClientGlobal  = 1,
    ServerProject = 2,
};

}
