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
    // vIndex: 23
    virtual bool _allowAsBool() /*override*/;

    // vIndex: 24
    virtual bool _allowAsInt8() /*override*/;

    // vIndex: 25
    virtual bool _allowAsUInt8() /*override*/;

    // vIndex: 26
    virtual bool _allowAsInt16() /*override*/;

    // vIndex: 27
    virtual bool _allowAsUInt16() /*override*/;

    // vIndex: 28
    virtual bool _allowAsInt32() /*override*/;

    // vIndex: 29
    virtual bool _allowAsUInt32() /*override*/;

    // vIndex: 30
    virtual bool _allowAsInt64() /*override*/;

    // vIndex: 31
    virtual bool _allowAsUInt64() /*override*/;

    // vIndex: 32
    virtual bool _allowAsFloat() /*override*/;

    // vIndex: 33
    virtual bool _allowAsDouble() /*override*/;

    // vIndex: 0
    virtual ~JSONCppSchemaReader() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JSONCppSchemaReader(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::reference_wrapper<::Json::Value const> value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_allowAsBool();

    MCNAPI bool $_allowAsInt8();

    MCNAPI bool $_allowAsUInt8();

    MCNAPI bool $_allowAsInt16();

    MCNAPI bool $_allowAsUInt16();

    MCNAPI bool $_allowAsInt32();

    MCNAPI bool $_allowAsUInt32();

    MCNAPI bool $_allowAsInt64();

    MCNAPI bool $_allowAsUInt64();

    MCNAPI bool $_allowAsFloat();

    MCNAPI bool $_allowAsDouble();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
