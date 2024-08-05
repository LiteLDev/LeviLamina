#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorTypeNamespaceRules.h"

struct ActorMapping {
public:
    // prevent constructor by default
    ActorMapping& operator=(ActorMapping const&);
    ActorMapping(ActorMapping const&);
    ActorMapping();

public:
    // NOLINTBEGIN
    MCAPI ActorMapping(std::string const&, std::string const&);

    MCAPI ActorMapping(std::string const& space, std::string const& primary, std::string const& alt);

    MCAPI std::string getMappingName(::ActorTypeNamespaceRules) const;

    MCAPI ~ActorMapping();

    // NOLINTEND
};
