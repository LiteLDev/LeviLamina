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
    ::ll::UntypedStorage<8, 32> mUnkff0ac1;
    // NOLINTEND

public:
    // prevent constructor by default
    IJsonDefinitionSerializer& operator=(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer(IJsonDefinitionSerializer const&);
    IJsonDefinitionSerializer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IJsonDefinitionSerializer();

    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::Json::Value const& input, ::MinEngineVersion const& minEngineVersion) = 0;

    virtual ::std::shared_ptr<::IDefinitionInstance> serializeDefinitionInstance(
        ::Json::Value const&      input,
        ::MinEngineVersion const& minEngineVersion,
        ::SemVersion const&       formatVersion,
        bool const                isBaseGamePack,
        ::JsonBetaState const     canUseBeta
    ) = 0;

    virtual bool hasGetStrictParsingVersion() = 0;

    virtual ::std::shared_ptr<::IDefinitionInstance> _serializeDefinitionInstance(
        ::Json::Value const&      input,
        ::MinEngineVersion const& minEngineVersion,
        bool                      removeUnrecognizedFields,
        bool const                isBaseGamePack,
        ::JsonBetaState const     canUseBeta
    ) const = 0;
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
