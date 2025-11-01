#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

enum class PersistenceScope : int {
    ClientProject = 0,
    ClientGlobal  = 1,
    ServerProject = 2,
    ServerGlobal  = 3,
};

}
