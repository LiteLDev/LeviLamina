#pragma once

#include <string>

class GameVersion {
public:
    unsigned    Major{}, Minor{}, Patch{}, Revision{}, Beta{};
    std::string cache;
};

static_assert(offsetof(GameVersion, cache) == 24);