#include "mc/platform/UUID.h"
#include "ll/api/utils/RandomUtils.h"

#include <algorithm>

mce::UUID mce::UUID::random() { return {ll::random_utils::rand<uint64>(), ll::random_utils::rand<uint64>()}; }

bool mce::UUID::canParse(std::string_view in) {
    if (in.size() == 32) {
        bool ieLegal = std::ranges::all_of(in, [](char c) { return isxdigit(c); });
        if (!ieLegal) {
            return false;
        }
        return true;
    } else if (in.size() == 36) {
        for (size_t i = 0; i < 36; ++i) {
            if (i == 8 || i == 13 || i == 18 || i == 23) {
                if (in[i] != '-') return false;
            } else if (!isxdigit(in[i])) {
                return false;
            }
        }
        return true;
    }

    return false;
}
