#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/Tag.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class CompoundTagVariant;
class IDataInput;
class IDataOutput;
class PrintStream;
// clang-format on

class CompoundTag : public ::Tag {
public:
    // CompoundTag inner types define
    using StringView = ::std::string_view;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::CompoundTagVariant, ::std::less<void>>> mTags;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompoundTag() /*override*/;

    virtual void write(::IDataOutput& dos) const /*override*/;

    virtual ::Bedrock::Result<void> load(::IDataInput& dis) /*override*/;

    virtual ::Tag::Type getId() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual void print(::std::string const& prefix_, ::PrintStream& out) const /*override*/;

    virtual ::std::unique_ptr<::Tag> copy() const /*override*/;

    virtual uint64 hash() const /*override*/;

    virtual bool equals(::Tag const& obj) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CompoundTag();

    MCAPI void append(::CompoundTag const& tag);

    MCAPI ::std::unique_ptr<::CompoundTag> clone() const;

    MCAPI void deepCopy(::CompoundTag const& other);

    MCFOLD ::Tag const* get(::std::string_view name) const;

    MCFOLD ::Tag* get(::std::string_view name);

    MCAPI ::std::vector<uchar> const& getByteArray(::std::string_view name) const;

    MCAPI ::Tag& put(::std::string name, ::Tag&& tag);

    MCAPI ::Tag* put(::std::string name, ::std::unique_ptr<::Tag> tag);

    MCAPI void putBoolean(::std::string name, bool val);

    MCAPI uchar& putByte(::std::string name, uchar value);

    MCAPI ::std::vector<uchar>& putByteArray(::std::string name, ::std::vector<uchar> mem);

    MCAPI ::CompoundTag& putCompound(::std::string name, ::CompoundTag value);

    MCAPI ::CompoundTag* putCompound(::std::string name, ::std::unique_ptr<::CompoundTag> value);

    MCAPI float& putFloat(::std::string name, float value);

    MCAPI int& putInt(::std::string name, int value);

    MCAPI int64& putInt64(::std::string name, int64 value);

    MCAPI short& putShort(::std::string name, short value);

    MCAPI ::std::string& putString(::std::string name, ::std::string value);

    MCAPI bool remove(::std::string_view name);

    MCAPI void rename(::std::string_view name, ::std::string newName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $write(::IDataOutput& dos) const;

    MCAPI ::Bedrock::Result<void> $load(::IDataInput& dis);

    MCFOLD ::Tag::Type $getId() const;

    MCAPI ::std::string $toString() const;

    MCAPI void $print(::std::string const& prefix_, ::PrintStream& out) const;

    MCAPI ::std::unique_ptr<::Tag> $copy() const;

    MCAPI uint64 $hash() const;

    MCAPI bool $equals(::Tag const& obj) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
