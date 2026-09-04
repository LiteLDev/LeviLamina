#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
// clang-format on

struct ImportStructureMetaData : public ::Bedrock::EnableNonOwnerReferences {
public:
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::TypedStorage<1, 1, bool>                                                             mIsDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, bool>>                       mNewStructuresDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureTemplate const*>> mNewStructureTemplates;
#endif
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructureTemplate const* getStructure(::std::string const& name);

    MCAPI bool const isSpecificStructureDirty(::std::string const& name);
    // NOLINTEND
};
