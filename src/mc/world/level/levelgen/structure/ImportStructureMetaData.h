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
    ::ll::TypedStorage<1, 1, bool>                                                             mIsDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, bool>>                       mNewStructuresDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureTemplate const*>> mNewStructureTemplates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImportStructureMetaData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StructureTemplate const* getStructure(::std::string const& name);
    // NOLINTEND
};
