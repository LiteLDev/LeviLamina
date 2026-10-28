#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnRuleData;
namespace SharedTypes::v1_21_60::Spawn { struct Contents; }
// clang-format on

class ActorSpawnRuleDataLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        168,
        ::Puv::Loader<::SharedTypes::v1_21_60::Spawn::Contents, ::SharedTypes::v1_21_60::Spawn::Contents>>
        mLoader;
    ::ll::TypedStorage<
        8,
        264,
        ::Puv::SlicedLoader<::ActorSpawnRuleData, nullptr_t, nullptr_t, nullptr_t, ::ActorSpawnRuleData>>
        mLoaderV0;
    // NOLINTEND
};
