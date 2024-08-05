#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureElementRegistry {
public:
    // prevent constructor by default
    JigsawStructureElementRegistry& operator=(JigsawStructureElementRegistry const&);
    JigsawStructureElementRegistry(JigsawStructureElementRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI JigsawStructureElementRegistry();

    MCAPI class StructurePoolElement const* lookupByName(std::string name) const;

    MCAPI class StructurePoolElement const&
    registerStructureElement(std::string name, std::unique_ptr<class StructurePoolElement>&& element);

    MCAPI ~JigsawStructureElementRegistry();

    // NOLINTEND
};
