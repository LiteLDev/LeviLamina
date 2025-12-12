#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StructurePoolElement;
// clang-format on

class JigsawStructureElementRegistry {
public:
    // JigsawStructureElementRegistry inner types define
    using StructureElementLookupMap = ::std::unordered_map<::std::string, ::StructurePoolElement const*>;

    using StructureElementRegistry = ::std::vector<::std::unique_ptr<::StructurePoolElement>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::StructurePoolElement>>>           mElementRegistry;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructurePoolElement const*>> mElementLookupMap;
    // NOLINTEND

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
