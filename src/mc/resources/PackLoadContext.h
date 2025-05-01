#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/BedrockLoadContext.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"
#include "mc/resources/IPackLoadContext.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class LinkedAssetValidator;
class MinEngineVersion;
class PackInstance;
class PackLoadStorage;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

class PackLoadContext : public ::IPackLoadContext, public ::BedrockLoadContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf67099;
    ::ll::UntypedStorage<1, 1>  mUnk6aa892;
    ::ll::UntypedStorage<1, 1>  mUnk4164b4;
    ::ll::UntypedStorage<8, 16> mUnk36beeb;
    ::ll::UntypedStorage<8, 72> mUnk8a75c5;
    ::ll::UntypedStorage<1, 1>  mUnk30bb35;
    ::ll::UntypedStorage<8, 64> mUnk6abfbf;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadContext& operator=(PackLoadContext const&);
    PackLoadContext(PackLoadContext const&);
    PackLoadContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinEngineVersion const& getMinEngineVersion() const /*override*/;

    // vIndex: 2
    virtual ::MolangVersion getMolangVersion() const /*override*/;

    // vIndex: 3
    virtual bool isBaseGamePack() const /*override*/;

    // vIndex: 4
    virtual bool isTrustedPack() const /*override*/;

    // vIndex: 5
    virtual ::mce::UUID const& getPackUUID() const /*override*/;

    // vIndex: 6
    virtual ::Experiments const& getExperiments() const /*override*/;

    // vIndex: 7
    virtual ::PackType getPackType() const /*override*/;

    // vIndex: 8
    virtual ::PackLoadStorage& getStorage() /*override*/;

    // vIndex: 9
    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const getLinkedAssetValidator() const /*override*/;

    // vIndex: 10
    virtual void setMinEngineVersion(::MinEngineVersion const& minEngineVersion) /*override*/;

    // vIndex: 0
    virtual ~PackLoadContext() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackLoadContext(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PackInstance const&                              pack,
        ::Experiments const&                               experiments,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MinEngineVersion const& $getMinEngineVersion() const;

    MCNAPI ::MolangVersion $getMolangVersion() const;

    MCNAPI bool $isBaseGamePack() const;

    MCNAPI bool $isTrustedPack() const;

    MCNAPI ::mce::UUID const& $getPackUUID() const;

    MCNAPI ::Experiments const& $getExperiments() const;

    MCNAPI ::PackType $getPackType() const;

    MCNAPI ::PackLoadStorage& $getStorage();

    MCNAPI ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const $getLinkedAssetValidator() const;

    MCNAPI void $setMinEngineVersion(::MinEngineVersion const& minEngineVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
