#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
class MinEngineVersion;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class IJsonDefinitionSerializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2c8ee3;
    // NOLINTEND

public:
    // prevent constructor by default
    IJsonDefinitionSerializer& operator=(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IJsonDefinitionSerializer();

    // vIndex: 2
    virtual ::std::shared_ptr<::IDefinitionInstance> serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&) = 0;

    // vIndex: 1
    virtual ::std::shared_ptr<::IDefinitionInstance> serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, ::SemVersion const&, bool const, ::JsonBetaState const) = 0;

    // vIndex: 3
    virtual bool hasGetStrictParsingVersion() = 0;

    // vIndex: 4
    virtual ::std::shared_ptr<::IDefinitionInstance> _serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, bool, bool const, ::JsonBetaState const) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
