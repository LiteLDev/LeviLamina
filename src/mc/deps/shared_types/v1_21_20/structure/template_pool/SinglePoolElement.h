#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/FileReference.h"
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Projection.h"

namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool {

struct SinglePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<21>>                                mLocation;
    ::ll::TypedStorage<8, 32, ::SharedTypes::Reference<12>>                                    mProcessors;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection> mProjection;
    // NOLINTEND

public:
    // prevent constructor by default
    SinglePoolElement& operator=(SinglePoolElement const&);
    SinglePoolElement(SinglePoolElement const&);
    SinglePoolElement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&
    operator=(::SharedTypes::v1_21_20::JigsawStructureTemplatePool::SinglePoolElement&&);

    MCAPI ~SinglePoolElement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool
