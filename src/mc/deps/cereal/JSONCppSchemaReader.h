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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual bool _allowAsBool() /*override*/;

    // vIndex: 25
    virtual bool _allowAsInt8() /*override*/;

    // vIndex: 26
    virtual bool _allowAsUInt8() /*override*/;

    // vIndex: 27
    virtual bool _allowAsInt16() /*override*/;

    // vIndex: 28
    virtual bool _allowAsUInt16() /*override*/;

    // vIndex: 29
    virtual bool _allowAsInt32() /*override*/;

    // vIndex: 30
    virtual bool _allowAsUInt32() /*override*/;

    // vIndex: 31
    virtual bool _allowAsInt64() /*override*/;

    // vIndex: 32
    virtual bool _allowAsUInt64() /*override*/;

    // vIndex: 33
    virtual bool _allowAsFloat() /*override*/;

    // vIndex: 34
    virtual bool _allowAsDouble() /*override*/;

    // vIndex: 0
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
