#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureTemplate;
class StructurePoolElement;
class StructureTemplate;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

class IStructureTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStructureTemplateManager() /*override*/;

    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    getOrCreateJigsawStructureMetadata(::StructurePoolElement const&) = 0;

    virtual ::StructureTemplate& getOrCreate(::std::string const&) = 0;

    virtual ::StructureTemplate* getStructure(::std::string const&) const = 0;

    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const&) = 0;

    virtual bool readStructure(::StructureTemplate&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
