#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class IDataInput;
class IDataOutput;
// clang-format on

class ByteArrayTag : public ::Tag {
public:
    // ByteArrayTag inner types define
    using ArrayData = ::std::vector<uchar>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    ByteArrayTag& operator=(ByteArrayTag const&);
    ByteArrayTag(ByteArrayTag const&);
    ByteArrayTag();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual bool equals(::Tag const& rhs) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual ~ByteArrayTag() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ByteArrayTag& operator=(::ByteArrayTag&&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCFOLD bool $equals(::Tag const& rhs) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCAPI uint64 $hash() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
