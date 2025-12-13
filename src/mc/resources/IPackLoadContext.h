#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
class Experiments;
class LinkedAssetValidator;
class MinEngineVersion;
class PackLoadStorage;
namespace mce { class UUID; }
// clang-format on

class IPackLoadContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackLoadContext() = default;

    virtual ::MinEngineVersion const& getMinEngineVersion() const = 0;

    virtual ::MolangVersion getMolangVersion() const = 0;

    virtual bool isBaseGamePack() const = 0;

    virtual bool isTrustedPack() const = 0;

    virtual ::mce::UUID const& getPackUUID() const = 0;

    virtual ::Experiments const& getExperiments() const = 0;

    virtual ::PackType getPackType() const = 0;

    virtual ::PackLoadStorage& getStorage() = 0;

    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const getLinkedAssetValidator() const = 0;

    virtual void setMinEngineVersion(::MinEngineVersion const&) = 0;

    virtual ::BedrockLoadContext toBedrockLoadContext() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
