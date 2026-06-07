#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class MinEngineVersion;
class ResourcePackManager;
struct FogDefinition;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class FogDefinitionRegistry : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::FogDefinition const>> mDefaultFogDefinition;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OwnerPtr<::FogDefinition const>>>
        mFogDefinitionMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OwnerPtr<::FogDefinition const>>>
        mBackCompatFogDefinitionMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::OwnerPtr<::FogDefinition const>>>
        mMergedFogDefinitionMap;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FogDefinitionRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FogDefinitionRegistry();

    MCAPI void bindFogTypes(::cereal::ReflectionCtx& ctx);

    MCAPI void clearBackCompatFogDefinitionMap();

    MCAPI void clearDefaultFogDefinition();

    MCAPI void clearMergedFogDefinitionMap();

    MCAPI void load(
        ::cereal::ReflectionCtx&                           ctx,
        ::ResourcePackManager&                             rpm,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ::WeakRef<::FogDefinition const>
    registerBackCompatFogDefinition(::OwnerPtr<::FogDefinition const> definition);

    MCAPI ::WeakRef<::FogDefinition const> registerFogDefinition(::OwnerPtr<::FogDefinition const> definition);

    MCAPI void registerFogFromJson(
        ::cereal::ReflectionCtx&                           ctx,
        ::std::string const&                               rawJson,
        ::MinEngineVersion const&                          minEngineVersion,
        bool                                               isBaseGamePack,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ::WeakRef<::FogDefinition const> registerMergedFogDefinition(
        ::std::vector<::WeakRef<::FogDefinition const>> fogReferences,
        ::std::string const&                            biome
    );

    MCAPI void setDefaultFogDefinition(::HashedString const& name, bool useBackCompatMap);

    MCAPI void setDefaultMergedFogDefinition(::WeakRef<::FogDefinition const> const& fogRef);

    MCFOLD ::WeakRef<::FogDefinition const> tryGetDefaultFogDefinition() const;

    MCAPI ::WeakRef<::FogDefinition const> tryGetFogDefinition(::HashedString const& name) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::string> parseFogDefinitionIdentifier(::Json::Value const& root);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
