#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/JSONCppSchemaReaderBase.h"

namespace cereal {

class JSONCppSchemaReader : public ::cereal::JSONCppSchemaReaderBase {
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
