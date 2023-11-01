#include "mc/deps/core/mce/UUID.h"
#include "ll/api/utils/random.h"

using namespace ll::utils;

mce::UUID::UUID() : a(random::rand<uint64>()), b(random::rand<uint64>()) {}
