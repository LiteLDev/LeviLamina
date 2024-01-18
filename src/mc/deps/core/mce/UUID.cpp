#include "mc/deps/core/mce/UUID.h"
#include "ll/api/utils/RandomUtils.h"

mce::UUID mce::UUID::random() { return {ll::random_utils::rand<uint64>(), ll::random_utils::rand<uint64>()}; }
