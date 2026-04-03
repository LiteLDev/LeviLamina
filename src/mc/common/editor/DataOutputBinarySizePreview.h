#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

namespace Editor {

class DataOutputBinarySizePreview : public ::IDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk69408c;
    ::ll::UntypedStorage<8, 8> mUnkc52b92;
    // NOLINTEND

public:
    // prevent constructor by default
    DataOutputBinarySizePreview& operator=(DataOutputBinarySizePreview const&);
    DataOutputBinarySizePreview(DataOutputBinarySizePreview const&);
    DataOutputBinarySizePreview();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void writeString(::std::string_view) /*override*/;

    virtual void writeLongString(::std::string_view) /*override*/;

    virtual void writeFloat(float) /*override*/;

    virtual void writeDouble(double) /*override*/;

    virtual void writeByte(char) /*override*/;

    virtual void writeShort(short) /*override*/;

    virtual void writeInt(int) /*override*/;

    virtual void writeLongLong(int64) /*override*/;

    virtual void writeBytes(void const*, uint64) /*override*/;

    virtual ~DataOutputBinarySizePreview() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
