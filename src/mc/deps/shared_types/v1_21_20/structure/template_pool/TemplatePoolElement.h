#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct TemplatePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkdbf614;
    ::ll::UntypedStorage<1, 1>  mUnk6ff89c;
    ::ll::UntypedStorage<1, 1>  mUnkb9a661;
    // NOLINTEND

public:
    // prevent constructor by default
    TemplatePoolElement& operator=(TemplatePoolElement const&);
    TemplatePoolElement(TemplatePoolElement const&);
    TemplatePoolElement();
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
