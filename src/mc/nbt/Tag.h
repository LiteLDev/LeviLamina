#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class Tag {
public:
    // Tag inner types define
    enum class Type : uchar {
        End         = 0,
        Byte        = 1,
        Short       = 2,
        Int         = 3,
        Int64       = 4,
        Float       = 5,
        Double      = 6,
        ByteArray   = 7,
        String      = 8,
        List        = 9,
        Compound    = 10,
        IntArray    = 11,
        NumTagTypes = 12,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Tag();

    virtual void deleteChildren();

    virtual void write(::IDataOutput&) const = 0;

    virtual ::Bedrock::Result<void> load(::IDataInput&) = 0;

    virtual ::std::string toString() const = 0;

    virtual ::Tag::Type getId() const = 0;

    virtual bool equals(::Tag const& rhs) const;

    virtual void print(::PrintStream& out) const;

    virtual void print(::std::string const& prefix, ::PrintStream& out) const;

    virtual ::std::unique_ptr<::Tag> copy() const = 0;

    virtual uint64 hash() const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getTagName(::Tag::Type type);

    MCAPI static ::Bedrock::Result<::std::unique_ptr<::Tag>> newTag(::Tag::Type type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NullString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $deleteChildren();

    MCFOLD bool $equals(::Tag const& rhs) const;

    MCAPI void $print(::PrintStream& out) const;

    MCAPI void $print(::std::string const& prefix, ::PrintStream& out) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
