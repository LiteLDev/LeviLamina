#pragma once

#include "mc/util/CompoundTagUpdater.h"

namespace CompoundTagUpdaterAnon {
struct SingleUpdate {
    unsigned int              mVersion;
    bool                      mEditsName;
    CompoundTagUpdater*       mUpdater;
    std::optional<std::regex> mNameRegex;
};

struct UpdateGroup {
    std::vector<CompoundTagUpdaterAnon::SingleUpdate> mUpdates;
};
} // namespace CompoundTagUpdaterAnon