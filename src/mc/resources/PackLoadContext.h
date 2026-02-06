#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/UUID.h"
#include "mc/resources/IPackLoadContext.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/resources/PackLoadStorage.h"
#include "mc/world/level/storage/Experiments.h"

// auto generated forward declare list
// clang-format off
class LinkedAssetValidator;
class PackInstance;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PackLoadContext : public ::IPackLoadContext, public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>  mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool const>           mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, bool const>           mIsTrustedPack;
    ::ll::TypedStorage<8, 16, ::mce::UUID const>   mPackId;
    ::ll::TypedStorage<8, 72, ::Experiments const> mExperiments;
    ::ll::TypedStorage<1, 1, ::PackType const>     mPackType;
    ::ll::TypedStorage<8, 64, ::PackLoadStorage>   mStorage;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinEngineVersion const& getMinEngineVersion() const /*override*/;

    virtual ::MolangVersion getMolangVersion() const /*override*/;

    virtual bool isBaseGamePack() const /*override*/;

    virtual bool isTrustedPack() const /*override*/;

    virtual ::mce::UUID const& getPackUUID() const /*override*/;

    virtual ::Experiments const& getExperiments() const /*override*/;

    virtual ::PackType getPackType() const /*override*/;

    virtual ::PackLoadStorage& getStorage() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const getLinkedAssetValidator() const /*override*/;

    virtual void setMinEngineVersion(::MinEngineVersion const& minEngineVersion) /*override*/;

    virtual ::BedrockLoadContext toBedrockLoadContext() const /*override*/;

    virtual ~PackLoadContext() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackLoadContext(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinEngineVersion const& $getMinEngineVersion() const;

    MCFOLD ::MolangVersion $getMolangVersion() const;

    MCFOLD bool $isBaseGamePack() const;

    MCFOLD bool $isTrustedPack() const;

    MCFOLD ::mce::UUID const& $getPackUUID() const;

    MCFOLD ::Experiments const& $getExperiments() const;

    MCFOLD ::PackType $getPackType() const;

    MCFOLD ::PackLoadStorage& $getStorage();

    MCFOLD ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const $getLinkedAssetValidator() const;

    MCAPI void $setMinEngineVersion(::MinEngineVersion const& minEngineVersion);

    MCAPI ::BedrockLoadContext $toBedrockLoadContext() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
