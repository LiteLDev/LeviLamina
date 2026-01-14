#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/EmptyPoolElement.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/SinglePoolElement.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct TemplatePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        80,
        ::std::variant<
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::EmptyPoolElement,
            ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement>>
                                    mElement;
    ::ll::TypedStorage<1, 1, uchar> mWeight;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
