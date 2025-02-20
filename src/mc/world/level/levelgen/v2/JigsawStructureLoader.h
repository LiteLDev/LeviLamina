#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructureLoader : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk1ee9b7;
    ::ll::UntypedStorage<8, 200> mUnkeb430c;
    ::ll::UntypedStorage<8, 200> mUnk46b138;
    ::ll::UntypedStorage<8, 200> mUnka24d43;
    ::ll::UntypedStorage<8, 200> mUnkc54a45;
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
