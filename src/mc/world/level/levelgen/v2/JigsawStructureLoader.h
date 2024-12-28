#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructureLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk1ee9b7;
    ::ll::UntypedStorage<8, 360> mUnk156fc5;
    ::ll::UntypedStorage<8, 360> mUnk8af7fc;
    ::ll::UntypedStorage<8, 360> mUnkdfb909;
    ::ll::UntypedStorage<8, 360> mUnkc492ef;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureLoader& operator=(JigsawStructureLoader const&);
    JigsawStructureLoader(JigsawStructureLoader const&);
    JigsawStructureLoader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~JigsawStructureLoader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JigsawStructureLoader(::cereal::ReflectionCtx const& ctx);

    MCAPI void _parseJigsawDefinitionData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void _parseProcessorsData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void _parseStructureSetData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void _parseTemplatePoolsData(::std::string_view fileWithExtension, ::std::string&& fileData);

    MCAPI void loadJigsawStructureData(::ResourcePackManager& resourcePackManager);

    MCAPI ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData> takeJigsawStructureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
