#include "mc/deps/core/mce/UUID.h"
#include "ll/api/base/Random.h"

mce::UUID mce::UUID::random() { return {ll::random::rand<uint64>(), ll::random::rand<uint64>()}; }
