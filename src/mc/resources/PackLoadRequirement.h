#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class BaseGamePackLoadRequirement;
class BetaFeaturesLoadRequirement;
class ExperimentLoadRequirement;
class IPackLoadContext;
class LegacyCreatorFeaturesLoadRequirement;
class SemVersion;
// clang-format on

class PackLoadRequirement {
public:
    // PackLoadRequirement inner types declare
    // clang-format off
    struct Visitor;
    // clang-format on

    // PackLoadRequirement inner types define
    struct Visitor {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkf641e4;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadRequirement& operator=(PackLoadRequirement const&);
    PackLoadRequirement(PackLoadRequirement const&);
    PackLoadRequirement();
};
