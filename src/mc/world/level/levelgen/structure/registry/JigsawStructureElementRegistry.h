#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
// clang-format on

class JigsawStructureElementRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk786263;
    ::ll::UntypedStorage<8, 64> mUnk475c95;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureElementRegistry& operator=(JigsawStructureElementRegistry const&);
    JigsawStructureElementRegistry(JigsawStructureElementRegistry const&);
    JigsawStructureElementRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::StructurePoolElement const* lookupByName(::std::string name) const;

    MCAPI ::StructurePoolElement const&
    registerStructureElement(::std::string name, ::std::unique_ptr<::StructurePoolElement>&& element);

    MCAPI ~JigsawStructureElementRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
