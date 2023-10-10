#include "mc/deps/core/mce/UUID.h"
#include "ll/api/utils/RNG.h"

mce::UUID::UUID() : a(RNG::rand<uint64>()), b(RNG::rand<uint64>()) {}