#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/IStructureTemplateManager.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureTemplate;
class StructurePoolElement;
class StructureTemplate;
namespace Editor { class ServiceProviderCollection; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

namespace Editor::Services {

class EditorStructureManager : public ::IStructureTemplateManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkc32dd8;
    ::ll::UntypedStorage<8, 80>  mUnk95a7de;
    ::ll::UntypedStorage<8, 8>   mUnka9f656;
    ::ll::UntypedStorage<8, 64>  mUnka91f3a;
    ::ll::UntypedStorage<8, 280> mUnk1c5bc9;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorStructureManager& operator=(EditorStructureManager const&);
    EditorStructureManager(EditorStructureManager const&);
    EditorStructureManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorStructureManager() /*override*/;

    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement) /*override*/;

    virtual ::StructureTemplate& getOrCreate(::std::string const& structureName) /*override*/;

    virtual ::StructureTemplate* getStructure(::std::string const& structureName) const /*override*/;

    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const&) /*override*/;

    virtual bool readStructure(::StructureTemplate&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EditorStructureManager(::Editor::ServiceProviderCollection& providers);

    MCNAPI bool containsStructure(::std::string const& structureName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    $getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement);

    MCNAPI ::StructureTemplate& $getOrCreate(::std::string const& structureName);

    MCNAPI ::StructureTemplate* $getStructure(::std::string const& structureName) const;

    MCNAPI ::LegacyStructureTemplate& $getOrCreateLegacy(::std::string const&);

    MCNAPI bool $readStructure(::StructureTemplate&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
