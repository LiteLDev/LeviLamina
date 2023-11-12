#include "mc/deps/core/mce/UUID.h"
#include "ll/api/base/Random.h"

mce::UUID::UUID() : a(ll::random::rand<uint64>()), b(ll::random::rand<uint64>()) {}
