#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IStructureTemplateManager;
class StructurePoolElement;
// clang-format on

class JigsawStructureElementRegistry {
public:
    // JigsawStructureElementRegistry inner types define
    using StructureElementLookupMap = ::std::unordered_map<::std::string, ::std::unique_ptr<::StructurePoolElement>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructurePoolElement>>>
        mElementLookupMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructurePoolElement const* lookupByName(::std::string name) const;

    MCAPI ::StructurePoolElement const* lookupEmptyElement() const;

    MCAPI ::StructurePoolElement const&
    registerElement(::std::string name, ::std::unique_ptr<::StructurePoolElement>&& element);

    MCAPI ::StructurePoolElement const&
    registerEmptyElement(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager);
    // NOLINTEND
};
