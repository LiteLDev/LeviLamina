#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONCppSchemaReaderBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace cereal {

class StrictJSONCppSchemaReader : public ::cereal::JSONCppSchemaReaderBase {
public:
    // prevent constructor by default
    StrictJSONCppSchemaReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _allowAsBool() /*override*/;

    virtual bool _allowAsInt8() /*override*/;

    virtual bool _allowAsUInt8() /*override*/;

    virtual bool _allowAsInt16() /*override*/;

    virtual bool _allowAsUInt16() /*override*/;

    virtual bool _allowAsInt32() /*override*/;

    virtual bool _allowAsUInt32() /*override*/;

    virtual bool _allowAsInt64() /*override*/;

    virtual bool _allowAsUInt64() /*override*/;

    virtual bool _allowAsFloat() /*override*/;

    virtual bool _allowAsDouble() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StrictJSONCppSchemaReader(::std::string const& data);

    MCAPI explicit StrictJSONCppSchemaReader(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& data);

    MCAPI void* $ctor(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_allowAsBool();

    MCAPI bool $_allowAsInt8();

    MCAPI bool $_allowAsUInt8();

    MCAPI bool $_allowAsInt16();

    MCAPI bool $_allowAsUInt16();

    MCAPI bool $_allowAsInt32();

    MCAPI bool $_allowAsUInt32();

    MCAPI bool $_allowAsInt64();

    MCAPI bool $_allowAsUInt64();

    MCFOLD bool $_allowAsFloat();

    MCFOLD bool $_allowAsDouble();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
