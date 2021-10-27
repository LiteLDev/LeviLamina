#pragma once

#include "SemVersion.h"
#include "mce.h"

enum struct PackType : char { ResourcePack,
                              BehaviorPack };

struct PackIdVersion {
    mce::UUID  uuid;
    SemVersion version;
    PackType   type;
};