#include "mc/deps/core/mce/UUID.h"
#include "liteloader/api/utils/RNG.h"

mce::UUID::UUID() : a(RNG::rand<uint64_t>()), b(RNG::rand<uint64_t>()) {}