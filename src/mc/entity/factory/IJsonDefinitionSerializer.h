#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    virtual ~IJsonDefinitionSerializer() = default;

    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&) = 0;

    virtual ::std::shared_ptr<::IDefinitionInstance>
    serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, ::SemVersion const&, bool const) = 0;

    virtual ::std::shared_ptr<::IDefinitionInstance>
    _serializeDefinitionInstance(::Json::Value const&, ::MinEngineVersion const&, bool, bool const) const = 0;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
