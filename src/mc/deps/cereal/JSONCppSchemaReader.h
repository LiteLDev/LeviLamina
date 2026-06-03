#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONCppSchemaReaderBase.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace cereal {

class JSONCppSchemaReader : public ::cereal::JSONCppSchemaReaderBase {
public:
    // prevent constructor by default
    JSONCppSchemaReader();

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

    virtual ~JSONCppSchemaReader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit JSONCppSchemaReader(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $_allowAsBool();

    MCFOLD bool $_allowAsInt8();

    MCFOLD bool $_allowAsUInt8();

    MCFOLD bool $_allowAsInt16();

    MCFOLD bool $_allowAsUInt16();

    MCFOLD bool $_allowAsInt32();

    MCFOLD bool $_allowAsUInt32();

    MCFOLD bool $_allowAsInt64();

    MCFOLD bool $_allowAsUInt64();

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
