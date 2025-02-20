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
    ::ll::UntypedStorage<1, 1>  mUnkcb5cf3;
    ::ll::UntypedStorage<8, 64> mUnke94435;
    ::ll::UntypedStorage<8, 64> mUnka6e306;
    // NOLINTEND

public:
    // prevent constructor by default
    ImportStructureMetaData& operator=(ImportStructureMetaData const&);
    ImportStructureMetaData(ImportStructureMetaData const&);
    ImportStructureMetaData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ImportStructureMetaData() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructureTemplate const* getStructure(::std::string const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
