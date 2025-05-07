#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~IPackLoadContext() = default;

    // vIndex: 1
    virtual ::MinEngineVersion const& getMinEngineVersion() const = 0;

    // vIndex: 2
    virtual ::MolangVersion getMolangVersion() const = 0;

    // vIndex: 3
    virtual bool isBaseGamePack() const = 0;

    // vIndex: 4
    virtual bool isTrustedPack() const = 0;

    // vIndex: 5
    virtual ::mce::UUID const& getPackUUID() const = 0;

    // vIndex: 6
    virtual ::Experiments const& getExperiments() const = 0;

    // vIndex: 7
    virtual ::PackType getPackType() const = 0;

    // vIndex: 8
    virtual ::PackLoadStorage& getStorage() = 0;

    // vIndex: 9
    virtual ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> const getLinkedAssetValidator() const = 0;

    // vIndex: 10
    virtual void setMinEngineVersion(::MinEngineVersion const&) = 0;
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
